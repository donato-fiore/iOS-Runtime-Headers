typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct IONotificationPort {
} // Error Processing Struct Fields

typedef struct CPMSPPMPowerLevelScalar {
    char field0;
    unsigned int field1;
} CPMSPPMPowerLevelScalar;

typedef struct CPMSPPMPowerBudget {
    unsigned char field0;
    unsigned char field1;
    CPMSPPMPowerLevelScalar field2;
} CPMSPPMPowerBudget;

typedef struct CPMSPPMControlStateSnapshot {
    NSUInteger field0;
    float field1;
    int field2;
    float field3;
    float field4;
    float field5;
    float field6;
    float field7;
    CPMSPPMPowerBudget field8;
    CPMSPPMPowerBudget field9;
    unsigned int field10;
    unsigned char field11;
    int field12;
    unsigned int field13;
    unsigned char field14;
    unsigned int field15;
    BOOL field16;
    unsigned int field17;
    float field18;
    NSUInteger field19;
    NSUInteger field20;
    NSUInteger field21;
    NSUInteger field22;
    float field23;
    int field24;
} CPMSPPMControlStateSnapshot;

