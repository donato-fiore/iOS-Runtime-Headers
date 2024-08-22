typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct AVAudio3DPoint {
    float field0;
    float field1;
    float field2;
} AVAudio3DPoint;

typedef struct OpaqueAudioComponentInstance {
} // Error Processing Struct Fields

typedef struct AVVCRecordingEngine {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<AVVCRecordingEngine> {
    AVVCRecordingEngine field0;
    __shared_weak_count field1;
} shared_ptr<AVVCRecordingEngine>;

typedef struct ControllerImpl {
} // Error Processing Struct Fields

typedef struct shared_ptr<ControllerImpl> {
} // Error Processing Struct Fields

typedef struct OpaqueAudioComponent {
} // Error Processing Struct Fields

typedef struct AudioComponentDescription {
    unsigned int componentType;
    unsigned int componentSubType;
    unsigned int componentManufacturer;
    unsigned int componentFlags;
    unsigned int componentFlagsMask;
} AudioComponentDescription;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct mutex {
    _opaque_pthread_mutex_t field0;
} mutex;

typedef struct AVAudioUnitComponentManagerImpl {
    unk field0;
    id field1;
    id field2;
    id field3;
    mutex field4;
} AVAudioUnitComponentManagerImpl;

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

typedef struct Averager {
} // Error Processing Struct Fields

typedef struct Impl {
    void field0;
    Averager field1;
} Impl;

typedef struct OpaqueAudioFileID {
} // Error Processing Struct Fields

typedef struct OpaqueAudioQueue {
} // Error Processing Struct Fields

typedef struct AudioQueueLevelMeterState {
} // Error Processing Struct Fields

typedef struct AudioRecorderImpl {
} // Error Processing Struct Fields

typedef struct AudioChannelDescription {
    unsigned int field0;
    unsigned int field1;
    float field2;
} AudioChannelDescription;

typedef struct AudioChannelLayout {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    AudioChannelDescription field3;
} AudioChannelLayout;

typedef struct AURenderEventHeader {
    uint8_t field0;
    CGFloat field1;
    void field2;
    NSInteger field3;
    unsigned char field4;
    unsigned char field5;
} AURenderEventHeader;

typedef struct AUParameterEvent {
    uint8_t field0;
    CGFloat field1;
    void field2;
    NSInteger field3;
    unsigned char field4;
    unsigned char field5;
    unsigned int field6;
    NSUInteger field7;
    float field8;
} AUParameterEvent;

typedef struct AUMIDIEvent {
    uint8_t field0;
    CGFloat field1;
    void field2;
    NSInteger field3;
    unsigned char field4;
    unsigned char field5;
    unsigned short field6;
    unsigned char field7;
    unsigned char field8;
} AUMIDIEvent;

typedef struct MIDIEventPacket {
    NSUInteger field0;
    unsigned int field1;
    unsigned int field2;
} MIDIEventPacket;

typedef struct MIDIEventList {
    int field0;
    unsigned int field1;
    MIDIEventPacket field2;
} MIDIEventList;

typedef struct AUMIDIEventList {
    uint8_t field0;
    CGFloat field1;
    void field2;
    NSInteger field3;
    unsigned char field4;
    unsigned char field5;
    unsigned char field6;
    MIDIEventList field7;
} AUMIDIEventList;

typedef struct ? {
    unsigned int field0;
} ?;

typedef struct type {
    unsigned char field0;
} type;

typedef struct __value_func<NSXPCConnection *(NSUUID *)> {
    type field0;
    void field1;
} __value_func<NSXPCConnection *(NSUUID *)>;

typedef struct function<NSXPCConnection *(NSUUID *)> {
    __value_func<NSXPCConnection *(NSUUID *)> field0;
} function<NSXPCConnection *(NSUUID *)>;

typedef struct CountAndSema {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<caulk::pooled_semaphore_mutex::CountAndSema, std::__cxx_atomic_base_impl<caulk::pooled_semaphore_mutex::CountAndSema>> {
    uint8_t __a_value;
    CountAndSema field1;
} __cxx_atomic_impl<caulk::pooled_semaphore_mutex::CountAndSema, std::__cxx_atomic_base_impl<caulk::pooled_semaphore_mutex::CountAndSema>>;

typedef struct atomic<caulk::pooled_semaphore_mutex::CountAndSema> {
    __cxx_atomic_impl<caulk::pooled_semaphore_mutex::CountAndSema, std::__cxx_atomic_base_impl<caulk::pooled_semaphore_mutex::CountAndSema>> __a_;
} atomic<caulk::pooled_semaphore_mutex::CountAndSema>;

typedef struct pooled_semaphore_mutex {
    atomic<caulk::pooled_semaphore_mutex::CountAndSema> mCountAndSema;
} pooled_semaphore_mutex;

typedef struct Node {
} // Error Processing Struct Fields

typedef struct NodeStack {
    Node mHead;
} NodeStack;

typedef struct TThreadSafeList<RenderObserver> {
    NodeStack mActiveList;
    NodeStack mPendingList;
    NodeStack mFreeList;
} TThreadSafeList<RenderObserver>;

typedef struct RenderObserverList {
    TThreadSafeList<RenderObserver> mObservers;
    BOOL mTouched;
} RenderObserverList;

typedef struct AUv2GetParameterSynchronizer {
    atomic<AUv2GetParameterSynchronizer::SeqNumPair> mSeqNums;
    semaphore mSyncGetParamSema;
} AUv2GetParameterSynchronizer;

typedef struct AURenderEventAllocator {
} // Error Processing Struct Fields

typedef struct AUScheduledParameterRefresher2 {
} // Error Processing Struct Fields

typedef struct AURenderEventNode {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<AURenderEventNode *, std::__cxx_atomic_base_impl<AURenderEventNode *>> {
    uint8_t __a_value;
    AURenderEventNode field1;
} __cxx_atomic_impl<AURenderEventNode *, std::__cxx_atomic_base_impl<AURenderEventNode *>>;

typedef struct atomic<AURenderEventNode *> {
    __cxx_atomic_impl<AURenderEventNode *, std::__cxx_atomic_base_impl<AURenderEventNode *>> __a_;
} atomic<AURenderEventNode *>;

typedef struct lf_mpsc_queue<AURenderEventNode, caulk::concurrent::intrusive_single_link_member<AURenderEventNode, &AURenderEventNode::next>> {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> {
    uint8_t __a_value;
    BOOL field1;
} __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>;

typedef struct atomic<bool> {
    __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> __a_;
} atomic<bool>;

typedef struct Snapshot {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<PreviousRenderTime::Snapshot, std::__cxx_atomic_base_impl<PreviousRenderTime::Snapshot>> {
    uint8_t __a_value;
    Snapshot field1;
} __cxx_atomic_impl<PreviousRenderTime::Snapshot, std::__cxx_atomic_base_impl<PreviousRenderTime::Snapshot>>;

typedef struct atomic<PreviousRenderTime::Snapshot> {
    __cxx_atomic_impl<PreviousRenderTime::Snapshot, std::__cxx_atomic_base_impl<PreviousRenderTime::Snapshot>> __a_;
} atomic<PreviousRenderTime::Snapshot>;

typedef struct PreviousRenderTime {
    CGFloat mSampleRate;
    atomic<PreviousRenderTime::Snapshot> mLastRender;
} PreviousRenderTime;

typedef struct AUEventSchedule {
    AUv2GetParameterSynchronizer mAUv2GetParameterSynchronizer;
    AURenderEventAllocator mAllocator;
    AUScheduledParameterRefresher2 mScheduledParameterRefresher;
    lf_mpsc_queue<AURenderEventNode, caulk::concurrent::intrusive_single_link_member<AURenderEventNode, &AURenderEventNode::next>> mAddedEventQueue;
    atomic<bool> mHavePendingSetParameter;
    uint8_t mScheduleHead;
    CGFloat mOwningAU;
    void mRenderBlock;
    void mPreviousRenderTime;
    id field9;
    unk field10;
    PreviousRenderTime field11;
} AUEventSchedule;

typedef struct SeqNumPair {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<AUv2GetParameterSynchronizer::SeqNumPair, std::__cxx_atomic_base_impl<AUv2GetParameterSynchronizer::SeqNumPair>> {
    uint8_t __a_value;
    SeqNumPair field1;
} __cxx_atomic_impl<AUv2GetParameterSynchronizer::SeqNumPair, std::__cxx_atomic_base_impl<AUv2GetParameterSynchronizer::SeqNumPair>>;

typedef struct atomic<AUv2GetParameterSynchronizer::SeqNumPair> {
    __cxx_atomic_impl<AUv2GetParameterSynchronizer::SeqNumPair, std::__cxx_atomic_base_impl<AUv2GetParameterSynchronizer::SeqNumPair>> __a_;
} atomic<AUv2GetParameterSynchronizer::SeqNumPair>;

typedef struct semaphore {
    unsigned int mMachSem;
    BOOL mOwned;
} semaphore;

typedef struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> {
    uint8_t __a_value;
    int field1;
} __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>>;

typedef struct atomic<int> {
    __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> __a_;
} atomic<int>;

typedef struct RenderContextChangeGenerator {
    void mLastWorkgroup;
    id mObserver;
    unk field2;
} RenderContextChangeGenerator;

typedef struct optional<RenderContextChangeGenerator> {
    unk ;
    char __null_state_;
    RenderContextChangeGenerator __val_;
    BOOL __engaged_;
} optional<RenderContextChangeGenerator>;

typedef struct RealtimeState {
    pooled_semaphore_mutex mMultipleRenderMutex;
    pooled_semaphore_mutex mResetVsRenderMutex;
    RenderObserverList renderObserverList;
    AUEventSchedule eventSchedule;
    AUv2GetParameterSynchronizer auv2GetParameterSynchronizer;
    optional<RenderContextChangeGenerator> contextChangeGenerator;
    int renderBlockType;
    int cachedMIDIProtocol;
} RealtimeState;

typedef struct AVAudioConverterPrimeInfo {
    unsigned int field0;
    unsigned int field1;
} AVAudioConverterPrimeInfo;

typedef struct AudioBuffer {
    unsigned int field0;
    unsigned int field1;
    void field2;
} AudioBuffer;

typedef struct AudioBufferList {
    unsigned int field0;
    AudioBuffer field1;
} AudioBufferList;

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

typedef struct CAStreamBasicDescription {
    CGFloat field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
} CAStreamBasicDescription;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct AUPreset {
    int field0;
    __CFString field1;
} AUPreset;

typedef struct OpaqueAUGraph {
} // Error Processing Struct Fields

typedef struct OpaqueMusicPlayer {
} // Error Processing Struct Fields

typedef struct OpaqueMusicSequence {
} // Error Processing Struct Fields

typedef struct MIDIPlayerImpl {
    OpaqueAUGraph field0;
    OpaqueMusicPlayer field1;
    OpaqueMusicSequence field2;
    CGFloat field3;
    id field4;
    unk field5;
    id field6;
} MIDIPlayerImpl;

typedef struct AVAudioNodeImplBase {
} // Error Processing Struct Fields

typedef struct AVAudioUnitEQFilterParametersImpl {
    unk field0;
    AVAudioNodeImplBase field1;
} AVAudioUnitEQFilterParametersImpl;

typedef struct opaqueCMFormatDescription {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct MyAudioQueueBuffer {
} // Error Processing Struct Fields

typedef struct AVAudio3DVectorOrientation {
    AVAudio3DPoint field0;
    AVAudio3DPoint field1;
} AVAudio3DVectorOrientation;

typedef struct AVAudio3DAngularOrientation {
    float field0;
    float field1;
    float field2;
} AVAudio3DAngularOrientation;

typedef struct recursive_mutex {
    _opaque_pthread_mutex_t __m_;
} recursive_mutex;

typedef struct MIDINoteMessage {
    unsigned char channel;
    unsigned char note;
    unsigned char velocity;
    unsigned char releaseVelocity;
    float duration;
} MIDINoteMessage;

typedef struct MIDIChannelMessage {
    unsigned char status;
    unsigned char data1;
    unsigned char data2;
    unsigned char reserved;
} MIDIChannelMessage;

typedef struct MIDIRawData {
    unsigned int field0;
    unsigned char field1;
} MIDIRawData;

typedef struct MIDIMetaEvent {
    unsigned char field0;
    unsigned char field1;
    unsigned char field2;
    unsigned char field3;
    unsigned int field4;
    unsigned char field5;
} MIDIMetaEvent;

typedef struct MusicEventUserData {
    unsigned int field0;
    unsigned char field1;
} MusicEventUserData;

typedef struct NoteParamsControlValue {
    unsigned int field0;
    float field1;
} NoteParamsControlValue;

typedef struct MusicDeviceNoteParams {
    unsigned int field0;
    float field1;
    float field2;
    NoteParamsControlValue field3;
} MusicDeviceNoteParams;

typedef struct ExtendedNoteOnEvent {
    unsigned int field0;
    unsigned int field1;
    float field2;
    MusicDeviceNoteParams field3;
} ExtendedNoteOnEvent;

typedef struct ParameterEvent {
    unsigned int parameterID;
    unsigned int scope;
    unsigned int element;
    float value;
} ParameterEvent;

typedef struct AUPresetEvent {
    unsigned int scope;
    unsigned int element;
    void preset;
} AUPresetEvent;

typedef struct OpaqueExtAudioFile {
} // Error Processing Struct Fields

typedef struct AVAudioMixingImpl {
} // Error Processing Struct Fields

typedef struct _AVBeatRange {
    CGFloat field0;
    CGFloat field1;
} _AVBeatRange;

typedef struct OpaqueMusicTrack {
} // Error Processing Struct Fields

typedef struct MusicTrackImpl {
    OpaqueMusicTrack field0;
    id field1;
    BOOL field2;
    unsigned int field3;
} MusicTrackImpl;

typedef struct OpaqueMusicEventIterator {
} // Error Processing Struct Fields

typedef struct MusicTrackEventIteratorImpl {
    OpaqueMusicEventIterator field0;
} MusicTrackEventIteratorImpl;

