typedef struct CGSize {
    CGFloat field0;
    CGFloat field1;
} CGSize;

typedef struct OpaqueAudioComponentInstance {
} // Error Processing Struct Fields

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct Connection {
    id field0;
} Connection;

typedef struct AssetService {
    unk field0;
} AssetService;

typedef struct VertexAttributeDescriptor {
    char * field0;
    unsigned char field1;
    unsigned char field2;
} VertexAttributeDescriptor;

typedef struct Buffer {
    id field0;
} Buffer;

typedef struct ? {
    NSInteger value;
    int timescale;
    unsigned int flags;
    NSInteger epoch;
} ?;

typedef struct Allocator {
    unk field0;
    char * field1;
} Allocator;

typedef struct BufferSlice {
} // Error Processing Struct Fields

typedef struct FixedArray<re::BufferSlice> {
    Allocator field0;
    NSUInteger field1;
    BufferSlice field2;
} FixedArray<re::BufferSlice>;

typedef struct FixedArray<re::VertexBufferFormat> {
} // Error Processing Struct Fields

typedef struct FixedArray<re::StringID> {
} // Error Processing Struct Fields

typedef struct HashBrown<re::WeakStringID, unsigned char, re::Hash<re::WeakStringID>, re::EqualTo<re::WeakStringID>, re::Hash<uint8_t>, false> {
} // Error Processing Struct Fields

typedef struct AttributeTable {
    NSUInteger field0;
    FixedArray<re::BufferSlice> field1;
    FixedArray<re::VertexBufferFormat> field2;
    FixedArray<re::StringID> field3;
    HashBrown<re::WeakStringID, unsigned char, re::Hash<re::WeakStringID>, re::EqualTo<re::WeakStringID>, re::Hash<uint8_t>, false> field4;
} AttributeTable;

typedef struct float4x4 {
} // Error Processing Struct Fields

typedef struct Vector4<float> {
    unk field0;
    ? field1;
    float field2;
} Vector4<float>;

typedef struct Matrix4x4<float> {
    unk field0;
    ? field1;
    float4x4 field2;
    ? field3;
    Vector4<float> field4;
    float field5;
    float field6;
} Matrix4x4<float>;

typedef struct Vector3<float> {
    unk field0;
    ? field1;
    float field2;
} Vector3<float>;

typedef struct AABB {
    Vector3<float> field0;
    Vector3<float> field1;
} AABB;

typedef struct FixedInlineArray<unsigned char, 24UL> {
    unsigned char field0;
} FixedInlineArray<unsigned char, 24UL>;

typedef struct StringID {
    ? field0;
    char * field1;
} StringID;

typedef struct RenderFlags {
    unsigned char field0;
} RenderFlags;

typedef struct MeshPart {
    AttributeTable field0;
    Matrix4x4<float> field1;
    AABB field2;
    unsigned int field3;
    unsigned int field4;
    unsigned char field5;
    unsigned short field6;
    FixedInlineArray<unsigned char, 24UL> field7;
    StringID field8;
    unsigned int field9;
    unsigned int field10;
    unsigned char field11;
    int field12;
    RenderFlags field13;
} MeshPart;

typedef struct Device {
    id field0;
} Device;

typedef struct DeformationModelData {
    unique_ptr<void, std::function<void (void *)>> field0;
} DeformationModelData;

typedef struct SkinningModelBuilder {
    Device field0;
    DeformationModelData field1;
    NSUInteger field2;
    BOOL field3;
} SkinningModelBuilder;

typedef struct BlendShapeModelBuilder {
} // Error Processing Struct Fields

typedef struct MeshLodLevelInfo {
    float field0;
    float field1;
    unsigned int field2;
} MeshLodLevelInfo;

typedef struct FixedArray<re::MeshPart> {
} // Error Processing Struct Fields

typedef struct FixedArray<re::MeshLodLevelInfo> {
} // Error Processing Struct Fields

typedef struct type {
    unsigned char field0;
} type;

typedef struct __value_func<void (void *)> {
    type field0;
    void field1;
} __value_func<void (void *)>;

typedef struct function<void (void *)> {
    __value_func<void (void *)> field0;
} function<void (void *)>;

typedef struct __compressed_pair<void *, std::function<void (void *)>> {
    void field0;
    function<void (void *)> field1;
} __compressed_pair<void *, std::function<void (void *)>>;

typedef struct unique_ptr<void, std::function<void (void *)>> {
    __compressed_pair<void *, std::function<void (void *)>> field0;
} unique_ptr<void, std::function<void (void *)>>;

typedef struct MeshModel {
    StringID field0;
    AABB field1;
    FixedArray<re::MeshPart> field2;
    FixedArray<re::MeshLodLevelInfo> field3;
    DeformationModelData field4;
} MeshModel;

typedef struct MeshModelContext {
    id field0;
    Buffer field1;
} MeshModelContext;

typedef struct MeshLodSelectOptions {
    int strategy;
    BOOL crossFade;
    float crossFadeInterval;
    float bias;
    float throttleBias;
} MeshLodSelectOptions;

typedef struct REMeshLodSelectOptions {
    MeshLodSelectOptions options;
} REMeshLodSelectOptions;

typedef struct ElementPointer {
    unsigned short field0;
    unsigned short field1;
} ElementPointer;

typedef struct DataArrayHandle<re::MeshModel> {
    ElementPointer field0;
    BOOL field1;
    BOOL field2;
} DataArrayHandle<re::MeshModel>;

typedef struct FixedArray<int> {
} // Error Processing Struct Fields

typedef struct MeshInstance {
    StringID field0;
    DataArrayHandle<re::MeshModel> field1;
    MeshLodSelectOptions field2;
    Matrix4x4<float> field3;
    FixedArray<int> field4;
} MeshInstance;

typedef struct AudioComponentDescription {
    unsigned int componentType;
    unsigned int componentSubType;
    unsigned int componentManufacturer;
    unsigned int componentFlags;
    unsigned int componentFlagsMask;
} AudioComponentDescription;

typedef struct OpaqueAudioComponent {
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

typedef struct __compressed_pair<float *, std::allocator<float>> {
    float __value_;
} __compressed_pair<float *, std::allocator<float>>;

typedef struct vector<float, std::allocator<float>> {
    float __begin_;
    float __end_;
    __compressed_pair<float *, std::allocator<float>> __end_cap_;
} vector<float, std::allocator<float>>;

typedef struct array<std::vector<float>, 2UL> {
    vector<float, std::allocator<float>> __elems_;
} array<std::vector<float>, 2UL>;

typedef struct __compressed_pair<int *, std::allocator<int>> {
    int __value_;
} __compressed_pair<int *, std::allocator<int>>;

typedef struct vector<int, std::allocator<int>> {
    int __begin_;
    int __end_;
    __compressed_pair<int *, std::allocator<int>> __end_cap_;
} vector<int, std::allocator<int>>;

typedef struct __compressed_pair<re::audio::FixedSpscAudioQueue<GainRampCommand> *, std::default_delete<re::audio::FixedSpscAudioQueue<GainRampCommand>>> {
    void __value_;
} __compressed_pair<re::audio::FixedSpscAudioQueue<GainRampCommand> *, std::default_delete<re::audio::FixedSpscAudioQueue<GainRampCommand>>>;

typedef struct unique_ptr<re::audio::FixedSpscAudioQueue<GainRampCommand>, std::default_delete<re::audio::FixedSpscAudioQueue<GainRampCommand>>> {
    __compressed_pair<re::audio::FixedSpscAudioQueue<GainRampCommand> *, std::default_delete<re::audio::FixedSpscAudioQueue<GainRampCommand>>> __ptr_;
} unique_ptr<re::audio::FixedSpscAudioQueue<GainRampCommand>, std::default_delete<re::audio::FixedSpscAudioQueue<GainRampCommand>>>;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct mutex {
    _opaque_pthread_mutex_t __m_;
} mutex;

typedef struct AudioBuffer {
    unsigned int field0;
    unsigned int field1;
    void field2;
} AudioBuffer;

typedef struct AudioBufferList {
    unsigned int field0;
    AudioBuffer field1;
} AudioBufferList;

typedef struct __cxx_atomic_impl<float, std::__cxx_atomic_base_impl<float>> {
    uint8_t __a_value;
    float field1;
} __cxx_atomic_impl<float, std::__cxx_atomic_base_impl<float>>;

typedef struct atomic<float> {
    __cxx_atomic_impl<float, std::__cxx_atomic_base_impl<float>> __a_;
} atomic<float>;

typedef struct StreamWriter {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<AudioStreamRecordingManager::StreamWriter> {
    StreamWriter __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<AudioStreamRecordingManager::StreamWriter>;

typedef struct __cxx_atomic_impl<REAudioPlaybackState, std::__cxx_atomic_base_impl<REAudioPlaybackState>> {
    uint8_t __a_value;
    NSUInteger field1;
} __cxx_atomic_impl<REAudioPlaybackState, std::__cxx_atomic_base_impl<REAudioPlaybackState>>;

typedef struct atomic<REAudioPlaybackState> {
    __cxx_atomic_impl<REAudioPlaybackState, std::__cxx_atomic_base_impl<REAudioPlaybackState>> __a_;
} atomic<REAudioPlaybackState>;

typedef struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> {
    uint8_t __a_value;
    unsigned int field1;
} __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>>;

typedef struct atomic<unsigned int> {
    __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> __a_;
} atomic<unsigned int>;

typedef struct FadeState {
    unsigned int uniqueID;
    BOOL shouldFade;
} FadeState;

typedef struct __cxx_atomic_impl<FadeState, std::__cxx_atomic_base_impl<FadeState>> {
    uint8_t __a_value;
    FadeState field1;
} __cxx_atomic_impl<FadeState, std::__cxx_atomic_base_impl<FadeState>>;

typedef struct atomic<FadeState> {
    __cxx_atomic_impl<FadeState, std::__cxx_atomic_base_impl<FadeState>> __a_;
} atomic<FadeState>;

typedef struct OpaqueAudioFileID {
} // Error Processing Struct Fields

typedef struct OpaqueExtAudioFile {
} // Error Processing Struct Fields

typedef struct AudioFileAssetReader {
    char * data;
    NSUInteger size;
    id backing;
    OpaqueAudioFileID NSData;
    OpaqueExtAudioFile audioFile;
    NSInteger audioFileRef;
    id fileLength;
} AudioFileAssetReader;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct ServiceLocator {
} // Error Processing Struct Fields

typedef struct object {
    id field0;
} object;

typedef struct queue {
    object field0;
} queue;

typedef struct DynamicString {
} // Error Processing Struct Fields

typedef struct Config {
} // Error Processing Struct Fields

typedef struct IDSSessionService {
    unk field0;
} IDSSessionService;

typedef struct IDSDiscoveryIdentity {
} // Error Processing Struct Fields

typedef struct SharedPtr<re::IDSDiscoveryIdentity> {
    IDSDiscoveryIdentity field0;
} SharedPtr<re::IDSDiscoveryIdentity>;

typedef struct IDSDiscoveryView {
} // Error Processing Struct Fields

typedef struct SharedPtr<re::IDSDiscoveryView> {
    IDSDiscoveryView field0;
} SharedPtr<re::IDSDiscoveryView>;

typedef struct DiscoveryInvite {
} // Error Processing Struct Fields

typedef struct SharedPtr<re::DiscoveryInvite> {
    DiscoveryInvite field0;
} SharedPtr<re::DiscoveryInvite>;

typedef struct Slice<re::DynamicString> {
} // Error Processing Struct Fields

typedef struct DiscoveryView {
} // Error Processing Struct Fields

typedef struct SharedPtr<re::DiscoveryView> {
    DiscoveryView field0;
} SharedPtr<re::DiscoveryView>;

typedef struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::Subscription> {
} // Error Processing Struct Fields

typedef struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::SubscriptionLegacy> {
} // Error Processing Struct Fields

typedef struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>> {
    DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::Subscription> m_subscriptions;
    DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::SubscriptionLegacy> m_subscriptionsLegacy;
} Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>;

typedef struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::Subscription> {
} // Error Processing Struct Fields

typedef struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::SubscriptionLegacy> {
} // Error Processing Struct Fields

typedef struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>> {
    DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::Subscription> m_subscriptions;
    DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::SubscriptionLegacy> m_subscriptionsLegacy;
} Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>;

typedef struct DynamicArray<re::IDSInvite *> {
} // Error Processing Struct Fields

typedef struct DynamicArray<re::IDSDiscoveryView *> {
} // Error Processing Struct Fields

typedef struct Address {
} // Error Processing Struct Fields

typedef struct DynamicArray<unsigned char> {
} // Error Processing Struct Fields

typedef struct DynamicArray<re::SharedPtr<(anonymous namespace)::MCProtocolHandle>> {
} // Error Processing Struct Fields

typedef struct Queue<QueuedUpdateMessage> {
} // Error Processing Struct Fields

typedef struct UnfairLock {
    os_unfair_lock_s m_lock;
} UnfairLock;

