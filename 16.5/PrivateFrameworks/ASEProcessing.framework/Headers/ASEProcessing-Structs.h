typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
} ?;

typedef struct MSRHcuHeader_t {
    unsigned int field0;
    unsigned int field1;
} MSRHcuHeader_t;

typedef struct MSRHcuEntryHeader_t {
    unsigned int field0;
    unsigned int field1;
} MSRHcuEntryHeader_t;

typedef struct hwConfigurationUnits_t {
    MSRHcuHeader_t field0;
    MSRHcuEntryHeader_t field1;
    ? field2;
    MSRHcuEntryHeader_t field3;
    ? field4;
    MSRHcuEntryHeader_t field5;
    ? field6;
    MSRHcuEntryHeader_t field7;
    ? field8;
    MSRHcuEntryHeader_t field9;
    ? field10;
} hwConfigurationUnits_t;

