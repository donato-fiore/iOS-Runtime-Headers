typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct AudioStreamBasicDescription {
    CGFloat mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
} AudioStreamBasicDescription;

typedef struct OpaqueAudioConverter {
} // Error Processing Struct Fields

typedef struct AudioBuffer {
    unsigned int mNumberChannels;
    unsigned int mDataByteSize;
    void mData;
} AudioBuffer;

typedef struct AudioBufferList {
    unsigned int mNumberBuffers;
    AudioBuffer mBuffers;
} AudioBufferList;

typedef struct OpaqueExtAudioFile {
} // Error Processing Struct Fields

typedef struct BTSessionImpl {
} // Error Processing Struct Fields

typedef struct BTLocalDeviceImpl {
} // Error Processing Struct Fields

typedef struct BTDeviceImpl {
} // Error Processing Struct Fields

typedef struct __IOHIDUserDevice {
} // Error Processing Struct Fields

typedef struct OpaqueFFTSetup {
} // Error Processing Struct Fields

typedef struct SmartSiriVolume {
} // Error Processing Struct Fields

typedef struct __compressed_pair<SmartSiriVolume *, std::default_delete<SmartSiriVolume>> {
    SmartSiriVolume __value_;
} __compressed_pair<SmartSiriVolume *, std::default_delete<SmartSiriVolume>>;

typedef struct unique_ptr<SmartSiriVolume, std::default_delete<SmartSiriVolume>> {
    __compressed_pair<SmartSiriVolume *, std::default_delete<SmartSiriVolume>> __ptr_;
} unique_ptr<SmartSiriVolume, std::default_delete<SmartSiriVolume>>;

typedef struct __compressed_pair<float *, std::allocator<float>> {
    float __value_;
} __compressed_pair<float *, std::allocator<float>>;

typedef struct vector<float, std::allocator<float>> {
    float __begin_;
    float __end_;
    __compressed_pair<float *, std::allocator<float>> __end_cap_;
} vector<float, std::allocator<float>>;

typedef struct __compressed_pair<corespeech::CSAudioCircularBufferImpl<unsigned char> *, std::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned char>>> {
    void __value_;
} __compressed_pair<corespeech::CSAudioCircularBufferImpl<unsigned char> *, std::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned char>>>;

typedef struct unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned char>, std::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned char>>> {
    __compressed_pair<corespeech::CSAudioCircularBufferImpl<unsigned char> *, std::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned char>>> __ptr_;
} unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned char>, std::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned char>>>;

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

typedef struct BTAccessoryManagerImpl {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct AFTimeRange {
    CGFloat field0;
    CGFloat field1;
} AFTimeRange;

typedef struct ? {
    unsigned short field0;
    unsigned short field1;
} ?;

