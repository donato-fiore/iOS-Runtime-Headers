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

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct ? {
    id __prevOp;
    id NSOperation;
    id __nextOp;
    id NSOperation;
    id __nextPriOp;
    id NSOperation;
    NSInteger __queue;
    id NSOperationQueue;
    unk __dependencies;
    void NSMutableArray;
    void __down_dependencies;
    CGFloat NSHashTable;
    char * __unfinished_deps;
    id __completion;
    id __obsInfo;
    unk __implicitObsInfo;
    _opaque_pthread_mutex_t __thread_prio;
    _opaque_pthread_cond_t __nameBuffer;
    os_unfair_lock_s _voucher;
    BOOL NSObject<OS_voucher>;
    uint8_t __schedule;
    unsigned char __wait_mutex;
    char __wait_cond;
    uint8_t __lock;
    BOOL _shouldRemoveDependenciesAfterFinish;
    uint8_t __state;
    BOOL __prio;
    uint8_t __cached_isReady;
    unsigned char __isCancelled;
    uint8_t __propertyQoS;
    unsigned char __isExecutingObserverCount;
    uint8_t __isFinishedObserverCount;
    unsigned char __isReadyObserverCount;
    uint8_t __isCancelledObserverCount;
    unsigned char field34;
    uint8_t field35;
    unsigned char field36;
} ?;

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct opaqueCMSampleBuffer {
} // Error Processing Struct Fields

typedef struct OpaqueAudioConverter {
} // Error Processing Struct Fields

typedef struct OpaqueAudioComponentInstance {
} // Error Processing Struct Fields

typedef struct SMPTETime {
    short mSubframes;
    short mSubframeDivisor;
    unsigned int mCounter;
    unsigned int mType;
    unsigned int mFlags;
    short mHours;
    short mMinutes;
    short mSeconds;
    short mFrames;
} SMPTETime;

typedef struct AudioTimeStamp {
    CGFloat mSampleTime;
    NSUInteger mHostTime;
    CGFloat mRateScalar;
    NSUInteger mWordClockTime;
    SMPTETime mSMPTETime;
    unsigned int mFlags;
    unsigned int mReserved;
} AudioTimeStamp;

typedef struct TTSRequestFeatureFlags {
    unsigned char field0;
} TTSRequestFeatureFlags;

typedef struct Offset<siri::speech::schema_fb::TTSRequestFeatureFlags> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TTSRequestFeatureFlags>;

typedef struct TextToSpeechVoice {
    unsigned char field0;
} TextToSpeechVoice;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechVoice> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechVoice>;

typedef struct TextToSpeechResource {
    unsigned char field0;
} TextToSpeechResource;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechResource> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechResource>;

typedef struct TextToSpeechMeta {
    unsigned char field0;
} TextToSpeechMeta;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechMeta> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechMeta>;

typedef struct TextToSpeechRequestMeta {
    unsigned char field0;
} TextToSpeechRequestMeta;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechRequestMeta> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechRequestMeta>;

typedef struct TextToSpeechRequestContext {
    unsigned char field0;
} TextToSpeechRequestContext;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechRequestContext> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechRequestContext>;

typedef struct TextToSpeechRequestExperiment {
    unsigned char field0;
} TextToSpeechRequestExperiment;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechRequestExperiment> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechRequestExperiment>;

typedef struct TextToSpeechRequest {
    unsigned char field0;
} TextToSpeechRequest;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechRequest>;

typedef struct ContextInfoEntry {
    unsigned char field0;
} ContextInfoEntry;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechRequest_::ContextInfoEntry> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechRequest_::ContextInfoEntry>;

typedef struct AudioDescription {
    unsigned char field0;
} AudioDescription;

typedef struct Offset<siri::speech::schema_fb::AudioDescription> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::AudioDescription>;

typedef struct WordTimingInfo {
    unsigned char field0;
} WordTimingInfo;

typedef struct Offset<siri::speech::schema_fb::WordTimingInfo> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::WordTimingInfo>;

typedef struct TextToSpeechResponse {
    unsigned char field0;
} TextToSpeechResponse;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechResponse>;

typedef struct StartTextToSpeechStreamingRequest {
    unsigned char field0;
} StartTextToSpeechStreamingRequest;

typedef struct Offset<siri::speech::schema_fb::StartTextToSpeechStreamingRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::StartTextToSpeechStreamingRequest>;

typedef struct Offset<siri::speech::schema_fb::StartTextToSpeechStreamingRequest_::ContextInfoEntry> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::StartTextToSpeechStreamingRequest_::ContextInfoEntry>;

typedef struct BeginTextToSpeechStreamingResponse {
    unsigned char field0;
} BeginTextToSpeechStreamingResponse;

typedef struct Offset<siri::speech::schema_fb::BeginTextToSpeechStreamingResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::BeginTextToSpeechStreamingResponse>;

typedef struct PartialTextToSpeechStreamingResponse {
    unsigned char field0;
} PartialTextToSpeechStreamingResponse;

typedef struct Offset<siri::speech::schema_fb::PartialTextToSpeechStreamingResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::PartialTextToSpeechStreamingResponse>;

typedef struct FinalTextToSpeechStreamingResponse {
    unsigned char field0;
} FinalTextToSpeechStreamingResponse;

typedef struct Offset<siri::speech::schema_fb::FinalTextToSpeechStreamingResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::FinalTextToSpeechStreamingResponse>;

typedef struct TextToSpeechRouterStreamingStreamingRequest {
    unsigned char field0;
} TextToSpeechRouterStreamingStreamingRequest;

typedef struct Offset<siri::speech::qss_fb::TextToSpeechRouterStreamingStreamingRequest> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::TextToSpeechRouterStreamingStreamingRequest>;

typedef struct TextToSpeechRouterStreamingStreamingResponse {
    unsigned char field0;
} TextToSpeechRouterStreamingStreamingResponse;

typedef struct Offset<siri::speech::qss_fb::TextToSpeechRouterStreamingStreamingResponse> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::TextToSpeechRouterStreamingStreamingResponse>;

typedef struct OpaqueCMTimebase {
} // Error Processing Struct Fields

typedef struct OpaqueAudioQueue {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_mutexattr_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutexattr_t;

