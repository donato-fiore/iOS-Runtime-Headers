typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct AudioStreamBasicDescription {
    CGFloat field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
} AudioStreamBasicDescription;

typedef struct AudioBuffer {
    unsigned int mNumberChannels;
    unsigned int mDataByteSize;
    void mData;
} AudioBuffer;

typedef struct AudioBufferList {
    unsigned int mNumberBuffers;
    AudioBuffer mBuffers;
} AudioBufferList;

