typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __CFRuntimeBase {
    NSUInteger field0;
    uint8_t field1;
    NSUInteger field2;
} __CFRuntimeBase;

typedef struct __IOAccelDevice {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int field0;
} os_unfair_lock_s;

typedef struct IOAcceldirtyRingRO {
} // Error Processing Struct Fields

typedef struct IOAcceldirtyRingRW {
} // Error Processing Struct Fields

typedef struct IOAccelDirtyResourceCommand {
} // Error Processing Struct Fields

typedef struct _s_shmemlog_ {
} // Error Processing Struct Fields

typedef struct shmemlog_list {
    _s_shmemlog_ field0;
} shmemlog_list;

typedef struct __IOAccelShared {
    __CFRuntimeBase field0;
    __IOAccelDevice field1;
    unsigned int field2;
    id field3;
    unk field4;
    NSUInteger field5;
    os_unfair_lock_s field6;
    IOAcceldirtyRingRO field7;
    IOAcceldirtyRingRW field8;
    IOAccelDirtyResourceCommand field9;
    unsigned int field10;
    os_unfair_lock_s field11;
    shmemlog_list field12;
    NSUInteger field13;
} __IOAccelShared;

typedef struct IOAccelKernelCommandSignalOrWaitEventArgs {
    unsigned int field0;
    unsigned short field1;
    unsigned short field2;
    NSUInteger field3;
} IOAccelKernelCommandSignalOrWaitEventArgs;

