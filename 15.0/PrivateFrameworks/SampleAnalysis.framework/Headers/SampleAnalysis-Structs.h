typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL field0;
} ?;

typedef struct mach_timebase_info {
    unsigned int numer;
    unsigned int denom;
} mach_timebase_info;

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

typedef struct _CSArchitecture {
    int cpu_type;
    int cpu_subtype;
} _CSArchitecture;

typedef struct ktrace_session {
} // Error Processing Struct Fields

typedef struct _CSTypeRef {
    NSUInteger _opaque_1;
    NSUInteger _opaque_2;
} _CSTypeRef;

typedef struct thread_snapshot_v2 {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    NSUInteger field5;
    NSUInteger field6;
    NSUInteger field7;
    NSUInteger field8;
    NSUInteger field9;
    NSUInteger field10;
    unsigned int field11;
    unsigned int field12;
    short field13;
    short field14;
    unsigned char field15;
    unsigned char field16;
    unsigned char field17;
    unsigned char field18;
} thread_snapshot_v2;

typedef struct thread_snapshot_v4 {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    NSUInteger field5;
    NSUInteger field6;
    NSUInteger field7;
    NSUInteger field8;
    NSUInteger field9;
    NSUInteger field10;
    unsigned int field11;
    unsigned int field12;
    short field13;
    short field14;
    unsigned char field15;
    unsigned char field16;
    unsigned char field17;
    unsigned char field18;
    NSUInteger field19;
    NSUInteger field20;
    NSUInteger field21;
} thread_snapshot_v4;

typedef struct instrs_cycles_snapshot {
    NSUInteger field0;
    NSUInteger field1;
} instrs_cycles_snapshot;

typedef struct thread_delta_snapshot_v2 {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    unsigned int field4;
    unsigned int field5;
    short field6;
    short field7;
    unsigned char field8;
    unsigned char field9;
    unsigned char field10;
    unsigned char field11;
} thread_delta_snapshot_v2;

typedef struct thread_delta_snapshot_v3 {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    unsigned int field4;
    unsigned int field5;
    short field6;
    short field7;
    unsigned char field8;
    unsigned char field9;
    unsigned char field10;
    unsigned char field11;
    NSUInteger field12;
    NSUInteger field13;
} thread_delta_snapshot_v3;

typedef struct thread_snapshot {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    NSUInteger field3;
    NSUInteger field4;
    NSUInteger field5;
    NSUInteger field6;
    NSUInteger field7;
    int field8;
    int field9;
    int field10;
    int field11;
    char field12;
    char field13;
    char field14;
    char field15;
    char field16;
    char field17;
    NSUInteger field18;
    NSUInteger field19;
    NSUInteger field20;
    NSUInteger field21;
    NSUInteger field22;
    NSUInteger field23;
    NSUInteger field24;
    NSUInteger field25;
    NSUInteger field26;
    NSUInteger field27;
    NSUInteger field28;
    NSUInteger field29;
    NSUInteger field30;
    NSUInteger field31;
    NSUInteger field32;
    NSUInteger field33;
    char field34;
} thread_snapshot;

typedef struct stackshot_thread_waitinfo {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    unsigned char field3;
} stackshot_thread_waitinfo;

typedef struct stackshot_thread_turnstileinfo {
    NSUInteger field0;
    NSUInteger field1;
    unsigned char field2;
    unsigned char field3;
    NSUInteger field4;
} stackshot_thread_turnstileinfo;

typedef struct micro_snapshot {
    unsigned int field0;
    unsigned int field1;
    NSUInteger field2;
    NSUInteger field3;
    unsigned char field4;
    unsigned short field5;
} micro_snapshot;

typedef struct task_snapshot {
    unsigned int field0;
    int field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    unsigned char field5;
    NSUInteger field6;
    unsigned int field7;
    int field8;
    int field9;
    int field10;
    int field11;
    int field12;
    unsigned int field13;
    NSUInteger field14;
    NSUInteger field15;
    char field16;
    unsigned int field17;
    unsigned int field18;
    unsigned int field19;
    NSUInteger field20;
    NSUInteger field21;
    NSUInteger field22;
    NSUInteger field23;
    NSUInteger field24;
    NSUInteger field25;
    NSUInteger field26;
    NSUInteger field27;
    NSUInteger field28;
    NSUInteger field29;
    NSUInteger field30;
    NSUInteger field31;
    NSUInteger field32;
    NSUInteger field33;
    unsigned int field34;
} task_snapshot;

typedef struct dyld_uuid_info_64 {
    NSUInteger field0;
    unsigned char field1;
} dyld_uuid_info_64;

typedef struct task_snapshot_v2 {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    NSUInteger field5;
    NSUInteger field6;
    unsigned int field7;
    unsigned int field8;
    unsigned int field9;
    unsigned int field10;
    unsigned int field11;
    unsigned int field12;
    unsigned int field13;
    int field14;
    char field15;
} task_snapshot_v2;

typedef struct task_delta_snapshot_v2 {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    NSUInteger field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
    unsigned int field9;
    unsigned int field10;
    unsigned int field11;
    unsigned int field12;
} task_delta_snapshot_v2;

