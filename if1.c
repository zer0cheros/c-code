#include <stdio.h>

int main() {
    char name[100];
    int age;

    printf("Skriv ditt namn:");
    scanf("%s", name);
    printf("Hur gammal ar du?");
    scanf("%d", &age);
    if (age >= 18)
    {
    printf("Hej %s! Du ar myndig.", name);
    }
    else
    {
    printf("Hej %s! Du ar inte myndig.", name);
    }
    return 0;
}