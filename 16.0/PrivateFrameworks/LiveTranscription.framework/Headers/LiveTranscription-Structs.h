typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct OpaqueAudioQueue {
} // Error Processing Struct Fields

typedef struct AudioStreamPacketDescription {
    NSInteger field0;
    unsigned int field1;
    unsigned int field2;
} AudioStreamPacketDescription;

typedef struct AudioQueueBuffer {
    unsigned int field0;
    void field1;
    unsigned int field2;
    void field3;
    unsigned int field4;
    AudioStreamPacketDescription field5;
    unsigned int field6;
} AudioQueueBuffer;

typedef struct SMPTETime {
    short field0;
    short field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    short field5;
    short field6;
    short field7;
    short field8;
} SMPTETime;

typedef struct AudioTimeStamp {
    CGFloat field0;
    NSUInteger field1;
    CGFloat field2;
    NSUInteger field3;
    SMPTETime field4;
    unsigned int field5;
    unsigned int field6;
} AudioTimeStamp;

