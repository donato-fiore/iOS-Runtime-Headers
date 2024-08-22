typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct kcdata_item {
} // Error Processing Struct Fields

typedef struct kcdata_iter {
    kcdata_item field0;
    void field1;
} kcdata_iter;

typedef struct ? {
    id daFlow;
} ?;

typedef struct exit_reason_snapshot {
    unsigned int field0;
    NSUInteger field1;
    NSUInteger field2;
} exit_reason_snapshot;

typedef struct __sbuf {
    char * field0;
    int field1;
} __sbuf;

typedef struct __sFILEX {
} // Error Processing Struct Fields

typedef struct __sFILE {
    char * field0;
    int field1;
    int field2;
    short field3;
    short field4;
    __sbuf field5;
    int field6;
    void field7;
    unk field8;
    unk field9;
    unk field10;
    unk field11;
    __sbuf field12;
    __sFILEX field13;
    int field14;
    unsigned char field15;
    unsigned char field16;
    __sbuf field17;
    int field18;
    NSInteger field19;
} __sFILE;

typedef struct dyld_uuid_info_64 {
    NSUInteger field0;
    unsigned char field1;
} dyld_uuid_info_64;

typedef struct memorystatus_kernel_stats {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
    unsigned int field9;
    NSUInteger field10;
    NSUInteger field11;
    NSUInteger field12;
    NSUInteger field13;
    NSUInteger field14;
    NSUInteger field15;
    char field16;
} memorystatus_kernel_stats;

typedef struct timeval64 {
    NSInteger field0;
    NSInteger field1;
} timeval64;

typedef struct jetsam_snapshot_entry {
    int field0;
    char field1;
    int field2;
    unsigned int field3;
    unsigned int field4;
    int field5;
    unsigned char field6;
    NSUInteger field7;
    NSUInteger field8;
    NSUInteger field9;
    NSUInteger field10;
    NSUInteger field11;
    NSUInteger field12;
    NSUInteger field13;
    NSUInteger field14;
    NSUInteger field15;
    NSUInteger field16;
    NSUInteger field17;
    NSUInteger field18;
    NSUInteger field19;
    NSUInteger field20;
    NSUInteger field21;
    NSUInteger field22;
    NSUInteger field23;
    NSUInteger field24;
    NSUInteger field25;
    timeval64 field26;
    NSUInteger field27;
    NSUInteger field28;
} jetsam_snapshot_entry;

typedef struct jetsam_snapshot {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    memorystatus_kernel_stats field3;
    NSUInteger field4;
    jetsam_snapshot_entry field5;
} jetsam_snapshot;

