typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct opaqueMTAudioProcessingTap {
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
    unsigned int field0;
    unsigned int field1;
    void field2;
} AudioBuffer;

typedef struct AudioBufferList {
    unsigned int field0;
    AudioBuffer field1;
} AudioBufferList;

typedef struct OpaqueAudioQueue {
} // Error Processing Struct Fields

typedef struct AudioStreamPacketDescription {
} // Error Processing Struct Fields

typedef struct AudioQueueBuffer {
    unsigned int field0;
    void field1;
    unsigned int field2;
    void field3;
    unsigned int field4;
    AudioStreamPacketDescription field5;
    unsigned int field6;
} AudioQueueBuffer;

typedef struct MPCAudioSpectrumAnalyzerBand {
    float field0;
    float field1;
} MPCAudioSpectrumAnalyzerBand;

typedef struct MPCAudioFrequencyBand {
    float field0;
    float field1;
} MPCAudioFrequencyBand;

typedef struct _MPCAudioFrequencyBandInternal {
    MPCAudioFrequencyBand field0;
    float field1;
    float field2;
    float field3;
    NSUInteger field4;
} _MPCAudioFrequencyBandInternal;

typedef struct DSPSplitComplex {
    float realp;
    float imagp;
} DSPSplitComplex;

typedef struct OpaqueFFTSetup {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct ? {
    BOOL mediaType;
    BOOL excludeFromShuffle;
} ?;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct _MSVSignedRange {
    NSInteger location;
    NSInteger length;
} _MSVSignedRange;

typedef struct OpaqueCMTimebase {
} // Error Processing Struct Fields

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct _MPCLoggingConsumerChartState {
    NSInteger command;
    NSInteger session;
    NSInteger container;
    NSInteger item;
    NSInteger asset;
} _MPCLoggingConsumerChartState;

typedef struct _MPCLoggingConsumerChartStatus {
    BOOL userExpectsAudio;
    NSInteger timeControlStatus;
} _MPCLoggingConsumerChartStatus;

typedef struct MPCModelStorePlaybackItemsRequestAccumulatorResult {
    BOOL didFinishEntireRequest;
    BOOL didFinishBatch;
    BOOL hasCollectionItemsWithPlaybackAuthorizationToken;
} MPCModelStorePlaybackItemsRequestAccumulatorResult;

typedef struct _MPCModelStorePlaybackItemEligibility {
    BOOL field0;
    NSInteger field1;
} _MPCModelStorePlaybackItemEligibility;

typedef struct _MRSystemAppPlaybackQueue {
} // Error Processing Struct Fields

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct __GSEvent {
} // Error Processing Struct Fields

typedef struct UIEdgeInsets {
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
} UIEdgeInsets;

typedef struct NSDirectionalEdgeInsets {
    CGFloat top;
    CGFloat leading;
    CGFloat bottom;
    CGFloat trailing;
} NSDirectionalEdgeInsets;

