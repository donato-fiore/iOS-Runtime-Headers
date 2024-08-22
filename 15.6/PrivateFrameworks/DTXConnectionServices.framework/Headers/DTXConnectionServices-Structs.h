typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct ? {
    id userDispatchQueue;
    id NSObject<OS_dispatch_queue>;
    id dispatchTarget;
    unk <DTXAllowedRPC>;
    id messageHandler;
    unk dispatchValidator;
} ?;

typedef struct DTXMachMessage {
    ? field0;
    char field1;
    char field2;
} DTXMachMessage;

typedef struct __DTXChannelGuarded_private {
    ? _fields;
} __DTXChannelGuarded_private;

typedef struct DTXSharedMemory {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    uint8_t field7;
    int field8;
    uint8_t field9;
    int field10;
    uint8_t field11;
    unsigned int field12;
    uint8_t field13;
    int field14;
    uint8_t field15;
    int field16;
    uint8_t field17;
    int field18;
    uint8_t field19;
    int field20;
    unsigned int field21;
    unsigned int field22;
    unsigned int field23;
    char field24;
} DTXSharedMemory;

typedef struct DTXMessageRoutingInfo {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    BOOL field3;
    BOOL field4;
} DTXMessageRoutingInfo;

typedef struct DTXMessageHeader {
    unsigned int field0;
    unsigned int field1;
    unsigned short field2;
    unsigned short field3;
    unsigned int field4;
    DTXMessageRoutingInfo field5;
} DTXMessageHeader;

