typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    NSUInteger field0;
    id field1;
    NSUInteger field2;
    NSUInteger field3;
} ?;

typedef struct SLLexer {
    unk field0;
} SLLexer;

typedef struct MTFESentence {
} // Error Processing Struct Fields

typedef struct MTFEIntonationalPhrase {
} // Error Processing Struct Fields

typedef struct MTFEIntermediatePhrase {
} // Error Processing Struct Fields

typedef struct MTFEWord {
} // Error Processing Struct Fields

typedef struct MTFEHomograph {
} // Error Processing Struct Fields

typedef struct MTFEPhoneme {
} // Error Processing Struct Fields

typedef struct SLToken {
} // Error Processing Struct Fields

typedef struct MTFEBuilder {
    unk field0;
    SLLexer field1;
    MTFESentence field2;
    MTFEIntonationalPhrase field3;
    MTFEIntermediatePhrase field4;
    MTFEWord field5;
    MTFEHomograph field6;
    MTFEPhoneme field7;
    BOOL field8;
    BOOL field9;
    BOOL field10;
    BOOL field11;
    BOOL field12;
    BOOL field13;
    BOOL field14;
    float field15;
    float field16;
    float field17;
    unsigned int field18;
    SLToken field19;
    short field20;
} MTFEBuilder;

typedef struct SLDictionary {
} // Error Processing Struct Fields

typedef struct SLDictLookup {
} // Error Processing Struct Fields

typedef struct SLPronouncer {
    unk field0;
} SLPronouncer;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct SLCFStringTextSource {
    unk field0;
    BOOL field1;
    NSInteger field2;
    __CFString field3;
    unsigned short field4;
} SLCFStringTextSource;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct MTBEPersistentParam {
} // Error Processing Struct Fields

typedef struct SpeechErrorInfo {
    short field0;
    short field1;
    NSInteger field2;
    short field3;
    NSInteger field4;
} SpeechErrorInfo;

typedef struct MTBENotifier {
    unk field0;
    int field1;
    int field2;
    int field3;
    int field4;
    SpeechErrorInfo field5;
    short field6;
    unsigned int field7;
    unsigned short field8;
} MTBENotifier;

typedef struct MTFESpeechElement {
} // Error Processing Struct Fields

typedef struct MTFESyllable {
} // Error Processing Struct Fields

typedef struct MTFECommand {
} // Error Processing Struct Fields

typedef struct AudioComponentDescription {
    unsigned int componentType;
    unsigned int componentSubType;
    unsigned int componentManufacturer;
    unsigned int componentFlags;
    unsigned int componentFlagsMask;
} AudioComponentDescription;

typedef struct VoiceSpec {
    unsigned int field0;
    unsigned int field1;
} VoiceSpec;

typedef struct VoiceDescription {
    int field0;
    VoiceSpec field1;
    int field2;
    unsigned char field3;
    unsigned char field4;
    short field5;
    short field6;
    short field7;
    short field8;
    short field9;
    int field10;
} VoiceDescription;

typedef struct MEOWReader {
} // Error Processing Struct Fields

typedef struct PROWReader {
} // Error Processing Struct Fields

typedef struct WrappedMTVoice {
    unk field0;
    BOOL field1;
    int field2;
    char field3;
    unsigned char field4;
    short field5;
    void field6;
    MEOWReader field7;
    PROWReader field8;
} WrappedMTVoice;

typedef struct __CFBundle {
} // Error Processing Struct Fields

typedef struct OpaqueAudioComponent {
} // Error Processing Struct Fields

typedef struct OpaqueAudioComponentInstance {
} // Error Processing Struct Fields

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

