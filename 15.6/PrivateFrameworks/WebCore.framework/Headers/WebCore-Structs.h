typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct opaqueCMSampleBuffer {
} // Error Processing Struct Fields

typedef struct AVContentKeySessionDelegateClient {
    unk field0;
} AVContentKeySessionDelegateClient;

typedef struct ? {
    NSInteger field0;
    int field1;
    unsigned int field2;
    NSInteger field3;
} ?;

typedef struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> {
    void m_ptr;
} RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>>;

typedef struct WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC, WTF::EmptyCounter> {
    RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> m_impl;
} WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC, WTF::EmptyCounter>;

typedef struct WorkQueue {
} // Error Processing Struct Fields

typedef struct RefPtr<WTF::WorkQueue, WTF::RawPtrTraits<WTF::WorkQueue>, WTF::DefaultRefDerefTraits<WTF::WorkQueue>> {
    WorkQueue m_ptr;
} RefPtr<WTF::WorkQueue, WTF::RawPtrTraits<WTF::WorkQueue>, WTF::DefaultRefDerefTraits<WTF::WorkQueue>>;

typedef struct RetainPtr<AVRouteDetector> {
    void m_ptr;
} RetainPtr<AVRouteDetector>;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct PlatformSpeechSynthesisUtterance {
} // Error Processing Struct Fields

typedef struct RefPtr<WebCore::PlatformSpeechSynthesisUtterance, WTF::RawPtrTraits<WebCore::PlatformSpeechSynthesisUtterance>, WTF::DefaultRefDerefTraits<WebCore::PlatformSpeechSynthesisUtterance>> {
    PlatformSpeechSynthesisUtterance m_ptr;
} RefPtr<WebCore::PlatformSpeechSynthesisUtterance, WTF::RawPtrTraits<WebCore::PlatformSpeechSynthesisUtterance>, WTF::DefaultRefDerefTraits<WebCore::PlatformSpeechSynthesisUtterance>>;

typedef struct RetainPtr<AVSpeechSynthesizer> {
    void m_ptr;
} RetainPtr<AVSpeechSynthesizer>;

typedef struct WeakPtr<WebCore::QueuedVideoOutput, WTF::EmptyCounter> {
    RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> m_impl;
} WeakPtr<WebCore::QueuedVideoOutput, WTF::EmptyCounter>;

typedef struct WeakPtr<WebCore::ReplayKitCaptureSource, WTF::EmptyCounter> {
    RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> m_impl;
} WeakPtr<WebCore::ReplayKitCaptureSource, WTF::EmptyCounter>;

typedef struct WeakPtr<WebCore::SourceBufferPrivateAVFObjC, WTF::EmptyCounter> {
    RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> m_impl;
} WeakPtr<WebCore::SourceBufferPrivateAVFObjC, WTF::EmptyCounter>;

typedef struct Vector<WTF::RetainPtr<AVSampleBufferDisplayLayer>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> {
    void m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<WTF::RetainPtr<AVSampleBufferDisplayLayer>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc>;

typedef struct Vector<WTF::RetainPtr<AVSampleBufferAudioRenderer>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> {
    void m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<WTF::RetainPtr<AVSampleBufferAudioRenderer>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc>;

typedef struct ObjectIdentifier<WebCore::SpeechRecognitionConnectionClientIdentifierType> {
    NSUInteger m_identifier;
} ObjectIdentifier<WebCore::SpeechRecognitionConnectionClientIdentifierType>;

typedef struct BlockPtr<void (const WebCore::SpeechRecognitionUpdate &)> {
    id m_block;
    unk field1;
} BlockPtr<void (const WebCore::SpeechRecognitionUpdate &)>;

typedef struct RetainPtr<SFSpeechRecognizer> {
    void m_ptr;
} RetainPtr<SFSpeechRecognizer>;

typedef struct RetainPtr<SFSpeechAudioBufferRecognitionRequest> {
    void m_ptr;
} RetainPtr<SFSpeechAudioBufferRecognitionRequest>;

typedef struct WeakObjCPtr<SFSpeechRecognitionTask> {
    id m_weakReference;
} WeakObjCPtr<SFSpeechRecognitionTask>;

typedef struct RetainPtr<WebSpeechRecognizerTaskImpl> {
    void m_ptr;
} RetainPtr<WebSpeechRecognizerTaskImpl>;

typedef struct Node {
} // Error Processing Struct Fields

typedef struct RefPtr<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>> {
    Node field0;
} RefPtr<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>>;

typedef struct Position {
    RefPtr<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>> field0;
    unsigned int field1;
    BOOL field2;
    BOOL field3;
} Position;

typedef struct VisiblePosition {
    Position field0;
    BOOL field1;
} VisiblePosition;

typedef struct CharacterOffset {
} // Error Processing Struct Fields

typedef struct ObjectIdentifier<WebCore::AXIDType> {
    NSUInteger m_identifier;
} ObjectIdentifier<WebCore::AXIDType>;

typedef struct TextMarkerData {
} // Error Processing Struct Fields

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct FloatPoint {
    float m_x;
    float m_y;
} FloatPoint;

typedef struct FloatSize {
    BOOL hasIntrinsicWidth;
    BOOL hasIntrinsicHeight;
    float m_width;
    float m_height;
} FloatSize;

typedef struct FloatRect {
    FloatPoint m_location;
    FloatSize m_size;
} FloatRect;

typedef struct Ref<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>> {
    Node field0;
} Ref<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>>;

typedef struct BoundaryPoint {
    Ref<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>> field0;
    unsigned int field1;
} BoundaryPoint;

typedef struct SimpleRange {
    BoundaryPoint field0;
    BoundaryPoint field1;
} SimpleRange;

typedef struct optional<WebCore::SimpleRange> {
    unk field0;
    char field1;
    SimpleRange field2;
    BOOL field3;
} optional<WebCore::SimpleRange>;

typedef struct ArchiveResource {
} // Error Processing Struct Fields

typedef struct RefPtr<WebCore::ArchiveResource, WTF::RawPtrTraits<WebCore::ArchiveResource>, WTF::DefaultRefDerefTraits<WebCore::ArchiveResource>> {
    ArchiveResource m_ptr;
} RefPtr<WebCore::ArchiveResource, WTF::RawPtrTraits<WebCore::ArchiveResource>, WTF::DefaultRefDerefTraits<WebCore::ArchiveResource>>;

typedef struct WeakPtr<WebCore::CaptionUserPreferencesMediaAF, WTF::EmptyCounter> {
    RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> m_impl;
} WeakPtr<WebCore::CaptionUserPreferencesMediaAF, WTF::EmptyCounter>;

typedef struct CGAffineTransform {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
} CGAffineTransform;

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct CATransform3D {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
    CGFloat field6;
    CGFloat field7;
    CGFloat field8;
    CGFloat field9;
    CGFloat field10;
    CGFloat field11;
    CGFloat field12;
    CGFloat field13;
    CGFloat field14;
    CGFloat field15;
} CATransform3D;

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct CGColorSpace {
} // Error Processing Struct Fields

typedef struct _CARenderRendererInfo {
    int field0;
    unsigned int field1;
    unsigned int field2;
} _CARenderRendererInfo;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct _CAPropertyInfo {
    unsigned int field0;
    BOOL field1;
    BOOL field2;
    SEL field3;
    char * field4;
    __CFString field5;
} _CAPropertyInfo;

typedef struct _CALayerIvars {
    int refcount;
    unsigned int magic;
    void layer;
    void _objc_observation_info;
} _CALayerIvars;

typedef struct TextIndicator {
} // Error Processing Struct Fields

typedef struct RefPtr<WebCore::TextIndicator, WTF::RawPtrTraits<WebCore::TextIndicator>, WTF::DefaultRefDerefTraits<WebCore::TextIndicator>> {
    TextIndicator m_ptr;
} RefPtr<WebCore::TextIndicator, WTF::RawPtrTraits<WebCore::TextIndicator>, WTF::DefaultRefDerefTraits<WebCore::TextIndicator>>;

typedef struct RetainPtr<NSArray> {
    void m_ptr;
} RetainPtr<NSArray>;

typedef struct FloatQuad {
    FloatPoint field0;
    FloatPoint field1;
    FloatPoint field2;
    FloatPoint field3;
} FloatQuad;

typedef struct DataSegment {
} // Error Processing Struct Fields

typedef struct RefPtr<const WebCore::DataSegment, WTF::RawPtrTraits<const WebCore::DataSegment>, WTF::DefaultRefDerefTraits<const WebCore::DataSegment>> {
    DataSegment m_ptr;
} RefPtr<const WebCore::DataSegment, WTF::RawPtrTraits<const WebCore::DataSegment>, WTF::DefaultRefDerefTraits<const WebCore::DataSegment>>;

typedef struct RetainPtr<NSData> {
    void m_ptr;
} RetainPtr<NSData>;

typedef struct Vector<WTF::RetainPtr<AVAssetResourceLoadingRequest>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> {
    void m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<WTF::RetainPtr<AVAssetResourceLoadingRequest>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc>;

typedef struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> {
    uint8_t __a_value;
    unsigned char field1;
} __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>>;

typedef struct atomic<unsigned char> {
    __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> __a_;
} atomic<unsigned char>;

typedef struct Atomic<unsigned char> {
    atomic<unsigned char> value;
} Atomic<unsigned char>;

typedef struct Lock {
    Atomic<unsigned char> m_byte;
} Lock;

typedef struct WeakPtr<WebCore::LocalSampleBufferDisplayLayer, WTF::EmptyCounter> {
    RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> m_impl;
} WeakPtr<WebCore::LocalSampleBufferDisplayLayer, WTF::EmptyCounter>;

typedef struct __compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::default_delete<WTF::Detail::CallableWrapperBase<void>>> {
    void __value_;
} __compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::default_delete<WTF::Detail::CallableWrapperBase<void>>>;

typedef struct unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::default_delete<WTF::Detail::CallableWrapperBase<void>>> {
    __compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::default_delete<WTF::Detail::CallableWrapperBase<void>>> __ptr_;
} unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::default_delete<WTF::Detail::CallableWrapperBase<void>>>;

typedef struct Function<void ()> {
    unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::default_delete<WTF::Detail::CallableWrapperBase<void>>> m_callableWrapper;
} Function<void ()>;

typedef struct RetainPtr<CALayer> {
    void m_ptr;
} RetainPtr<CALayer>;

typedef struct TiledBacking {
    unk field0;
} TiledBacking;

typedef struct TileController {
} // Error Processing Struct Fields

typedef struct __compressed_pair<WebCore::TileController *, std::default_delete<WebCore::TileController>> {
    TileController __value_;
} __compressed_pair<WebCore::TileController *, std::default_delete<WebCore::TileController>>;

typedef struct unique_ptr<WebCore::TileController, std::default_delete<WebCore::TileController>> {
    __compressed_pair<WebCore::TileController *, std::default_delete<WebCore::TileController>> __ptr_;
} unique_ptr<WebCore::TileController, std::default_delete<WebCore::TileController>>;

typedef struct RetainPtr<AVPlayerLayer> {
    void m_ptr;
} RetainPtr<AVPlayerLayer>;

typedef struct WeakPtr<WebCore::PreviewPlatformDelegate, WTF::EmptyCounter> {
    RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> m_impl;
} WeakPtr<WebCore::PreviewPlatformDelegate, WTF::EmptyCounter>;

typedef struct RetainPtr<UIViewController> {
    void m_ptr;
} RetainPtr<UIViewController>;

typedef struct RetainPtr<UITapGestureRecognizer> {
    void m_ptr;
} RetainPtr<UITapGestureRecognizer>;

typedef struct WeakPtr<WebCore::PlaybackSessionModel, WTF::EmptyCounter> {
    RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> m_impl;
} WeakPtr<WebCore::PlaybackSessionModel, WTF::EmptyCounter>;

typedef struct WeakPtr<WebCore::PlaybackSessionInterfaceAVKit, WTF::EmptyCounter> {
    RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> m_impl;
} WeakPtr<WebCore::PlaybackSessionInterfaceAVKit, WTF::EmptyCounter>;

typedef struct RetainPtr<CMMotionManager> {
    void m_ptr;
} RetainPtr<CMMotionManager>;

typedef struct RetainPtr<CLLocationManager> {
    void m_ptr;
} RetainPtr<CLLocationManager>;

typedef struct HashTable<WTF::Ref<WTF::WeakPtrImpl<>>, WTF::Ref<WTF::WeakPtrImpl<>>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<>>>> {
    unk ;
    void m_table;
    unsigned int m_tableForLLDB;
} HashTable<WTF::Ref<WTF::WeakPtrImpl<>>, WTF::Ref<WTF::WeakPtrImpl<>>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<>>>>;

typedef struct HashSet<WTF::Ref<WTF::WeakPtrImpl<>>, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTableTraits> {
    HashTable<WTF::Ref<WTF::WeakPtrImpl<>>, WTF::Ref<WTF::WeakPtrImpl<>>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<>>>> m_impl;
} HashSet<WTF::Ref<WTF::WeakPtrImpl<>>, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTableTraits>;

typedef struct WeakHashSet<WebCore::MotionManagerClient, WTF::EmptyCounter> {
    HashSet<WTF::Ref<WTF::WeakPtrImpl<>>, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTableTraits> m_set;
} WeakHashSet<WebCore::MotionManagerClient, WTF::EmptyCounter>;

typedef struct RetainPtr<NSTimer> {
    void m_ptr;
} RetainPtr<NSTimer>;

typedef struct _WKClassInfo {
} // Error Processing Struct Fields

typedef struct _WAKObject {
    unsigned int field0;
    _WKClassInfo field1;
} _WAKObject;

typedef struct _WKViewContext {
    unk notificationCallback;
    void notificationUserInfo;
    unk responderCallback;
    void responderUserInfo;
    unk willRemoveSubviewCallback;
    unk invalidateGStateCallback;
} _WKViewContext;

typedef struct _WKView {
    _WAKObject field0;
    _WKViewContext field1;
    id field2;
    _WKView field3;
    __CFArray field4;
    CGPoint field5;
    CGRect field6;
    unsigned int field7;
    float field8;
    void field9;
} _WKView;

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct BlockPtr<void ()> {
    id m_block;
    unk field1;
} BlockPtr<void ()>;

typedef struct AuthenticationClient {
    unk field0;
} AuthenticationClient;

typedef struct RetainPtr<UIView> {
    void m_ptr;
} RetainPtr<UIView>;

typedef struct RetainPtr<NSString> {
    void m_ptr;
} RetainPtr<NSString>;

typedef struct WeakPtr<WebCore::VideoFullscreenInterfaceAVKit, WTF::EmptyCounter> {
    RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> m_impl;
} WeakPtr<WebCore::VideoFullscreenInterfaceAVKit, WTF::EmptyCounter>;

typedef struct VideoFullscreenInterfaceAVKit {
} // Error Processing Struct Fields

typedef struct RefPtr<WebCore::VideoFullscreenInterfaceAVKit, WTF::RawPtrTraits<WebCore::VideoFullscreenInterfaceAVKit>, WTF::DefaultRefDerefTraits<WebCore::VideoFullscreenInterfaceAVKit>> {
    VideoFullscreenInterfaceAVKit m_ptr;
} RefPtr<WebCore::VideoFullscreenInterfaceAVKit, WTF::RawPtrTraits<WebCore::VideoFullscreenInterfaceAVKit>, WTF::DefaultRefDerefTraits<WebCore::VideoFullscreenInterfaceAVKit>>;

typedef struct RetainPtr<WebAVPlayerController> {
    void m_ptr;
} RetainPtr<WebAVPlayerController>;

typedef struct RetainPtr<AVPlayerViewController> {
    void m_ptr;
} RetainPtr<AVPlayerViewController>;

typedef struct RetainPtr<AVObservationController> {
    void m_ptr;
} RetainPtr<AVObservationController>;

typedef struct MonotonicTime {
    CGFloat m_value;
} MonotonicTime;

typedef struct StringImpl {
} // Error Processing Struct Fields

typedef struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> {
    StringImpl m_ptr;
} RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>>;

typedef struct String {
    RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> m_impl;
} String;

typedef struct AdditionalNetworkLoadMetricsForWebInspector {
} // Error Processing Struct Fields

typedef struct RefPtr<WebCore::AdditionalNetworkLoadMetricsForWebInspector, WTF::RawPtrTraits<WebCore::AdditionalNetworkLoadMetricsForWebInspector>, WTF::DefaultRefDerefTraits<WebCore::AdditionalNetworkLoadMetricsForWebInspector>> {
    AdditionalNetworkLoadMetricsForWebInspector m_ptr;
} RefPtr<WebCore::AdditionalNetworkLoadMetricsForWebInspector, WTF::RawPtrTraits<WebCore::AdditionalNetworkLoadMetricsForWebInspector>, WTF::DefaultRefDerefTraits<WebCore::AdditionalNetworkLoadMetricsForWebInspector>>;

typedef struct NetworkLoadMetrics {
    MonotonicTime redirectStart;
    MonotonicTime fetchStart;
    MonotonicTime domainLookupStart;
    MonotonicTime domainLookupEnd;
    MonotonicTime connectStart;
    MonotonicTime secureConnectionStart;
    MonotonicTime connectEnd;
    MonotonicTime requestStart;
    MonotonicTime responseStart;
    MonotonicTime responseEnd;
    String protocol;
    unsigned short redirectCount;
    BOOL complete;
    BOOL cellular;
    BOOL expensive;
    BOOL constrained;
    BOOL multipath;
    BOOL isReusedConnection;
    BOOL failsTAOCheck;
    BOOL hasCrossOriginRedirect;
    unsigned char privacyStance;
    NSUInteger responseBodyBytesReceived;
    NSUInteger responseBodyDecodedSize;
    RefPtr<WebCore::AdditionalNetworkLoadMetricsForWebInspector, WTF::RawPtrTraits<WebCore::AdditionalNetworkLoadMetricsForWebInspector>, WTF::DefaultRefDerefTraits<WebCore::AdditionalNetworkLoadMetricsForWebInspector>> additionalNetworkLoadMetricsForWebInspector;
} NetworkLoadMetrics;

typedef struct RetainPtr<WebCoreNSURLSessionTaskTransactionMetrics> {
    void m_ptr;
} RetainPtr<WebCoreNSURLSessionTaskTransactionMetrics>;

typedef struct PlatformMediaResourceLoader {
} // Error Processing Struct Fields

typedef struct RefPtr<WebCore::PlatformMediaResourceLoader, WTF::RawPtrTraits<WebCore::PlatformMediaResourceLoader>, WTF::DefaultRefDerefTraits<WebCore::PlatformMediaResourceLoader>> {
    PlatformMediaResourceLoader m_ptr;
} RefPtr<WebCore::PlatformMediaResourceLoader, WTF::RawPtrTraits<WebCore::PlatformMediaResourceLoader>, WTF::DefaultRefDerefTraits<WebCore::PlatformMediaResourceLoader>>;

typedef struct WeakObjCPtr<id<NSURLSessionDelegate>> {
    id m_weakReference;
} WeakObjCPtr<id<NSURLSessionDelegate>>;

typedef struct RetainPtr<NSOperationQueue> {
    void m_ptr;
} RetainPtr<NSOperationQueue>;

typedef struct HashTable<WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>> {
    unk ;
    void m_table;
    unsigned int m_tableForLLDB;
} HashTable<WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>>;

typedef struct HashSet<WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::DefaultHash<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTableTraits> {
    HashTable<WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>> m_impl;
} HashSet<WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::DefaultHash<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTableTraits>;

typedef struct HashTable<WTF::RefPtr<WebCore::SecurityOrigin>, WTF::RefPtr<WebCore::SecurityOrigin>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::RefPtr<WebCore::SecurityOrigin>>, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin>>, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin>>> {
    unk ;
    void m_table;
    unsigned int m_tableForLLDB;
} HashTable<WTF::RefPtr<WebCore::SecurityOrigin>, WTF::RefPtr<WebCore::SecurityOrigin>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::RefPtr<WebCore::SecurityOrigin>>, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin>>, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin>>>;

typedef struct HashSet<WTF::RefPtr<WebCore::SecurityOrigin>, WTF::DefaultHash<WTF::RefPtr<WebCore::SecurityOrigin>>, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin>>, WTF::HashTableTraits> {
    HashTable<WTF::RefPtr<WebCore::SecurityOrigin>, WTF::RefPtr<WebCore::SecurityOrigin>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::RefPtr<WebCore::SecurityOrigin>>, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin>>, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin>>> m_impl;
} HashSet<WTF::RefPtr<WebCore::SecurityOrigin>, WTF::DefaultHash<WTF::RefPtr<WebCore::SecurityOrigin>>, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin>>, WTF::HashTableTraits>;

typedef struct OSObjectPtr<NSObject<OS_dispatch_queue> *> {
    id m_ptr;
} OSObjectPtr<NSObject<OS_dispatch_queue> *>;

typedef struct RangeResponseGenerator {
} // Error Processing Struct Fields

typedef struct RefPtr<WebCore::RangeResponseGenerator, WTF::RawPtrTraits<WebCore::RangeResponseGenerator>, WTF::DefaultRefDerefTraits<WebCore::RangeResponseGenerator>> {
    RangeResponseGenerator m_ptr;
} RefPtr<WebCore::RangeResponseGenerator, WTF::RawPtrTraits<WebCore::RangeResponseGenerator>, WTF::DefaultRefDerefTraits<WebCore::RangeResponseGenerator>>;

typedef struct WeakObjCPtr<WebCoreNSURLSession> {
    id m_weakReference;
} WeakObjCPtr<WebCoreNSURLSession>;

typedef struct PlatformMediaResource {
} // Error Processing Struct Fields

typedef struct RefPtr<WebCore::PlatformMediaResource, WTF::RawPtrTraits<WebCore::PlatformMediaResource>, WTF::DefaultRefDerefTraits<WebCore::PlatformMediaResource>> {
    PlatformMediaResource m_ptr;
} RefPtr<WebCore::PlatformMediaResource, WTF::RawPtrTraits<WebCore::PlatformMediaResource>, WTF::DefaultRefDerefTraits<WebCore::PlatformMediaResource>>;

typedef struct RetainPtr<NSURLResponse> {
    void m_ptr;
} RetainPtr<NSURLResponse>;

typedef struct RetainPtr<NSURLRequest> {
    void m_ptr;
} RetainPtr<NSURLRequest>;

typedef struct RetainPtr<NSError> {
    void m_ptr;
} RetainPtr<NSError>;

typedef struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> {
    uint8_t __a_value;
    BOOL field1;
} __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>;

typedef struct atomic<bool> {
    __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> __a_;
} atomic<bool>;

typedef struct Atomic<bool> {
    atomic<bool> value;
} Atomic<bool>;

typedef struct Condition {
    Atomic<bool> m_hasWaiters;
} Condition;

typedef struct BinarySemaphore {
    BOOL m_isSet;
    Lock m_lock;
    Condition m_condition;
} BinarySemaphore;

typedef struct SynchronousLoaderMessageQueue {
} // Error Processing Struct Fields

typedef struct RefPtr<WebCore::SynchronousLoaderMessageQueue, WTF::RawPtrTraits<WebCore::SynchronousLoaderMessageQueue>, WTF::DefaultRefDerefTraits<WebCore::SynchronousLoaderMessageQueue>> {
    SynchronousLoaderMessageQueue m_ptr;
} RefPtr<WebCore::SynchronousLoaderMessageQueue, WTF::RawPtrTraits<WebCore::SynchronousLoaderMessageQueue>, WTF::DefaultRefDerefTraits<WebCore::SynchronousLoaderMessageQueue>>;

typedef struct RetainPtr<NSCachedURLResponse> {
    void m_ptr;
} RetainPtr<NSCachedURLResponse>;

typedef struct HashTable<WTF::RefPtr<WTF::SchedulePair>, WTF::RefPtr<WTF::SchedulePair>, WTF::IdentityExtractor, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair>>, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair>>> {
    unk ;
    void m_table;
    unsigned int m_tableForLLDB;
} HashTable<WTF::RefPtr<WTF::SchedulePair>, WTF::RefPtr<WTF::SchedulePair>, WTF::IdentityExtractor, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair>>, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair>>>;

typedef struct HashSet<WTF::RefPtr<WTF::SchedulePair>, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair>>, WTF::HashTableTraits> {
    HashTable<WTF::RefPtr<WTF::SchedulePair>, WTF::RefPtr<WTF::SchedulePair>, WTF::IdentityExtractor, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair>>, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair>>> m_impl;
} HashSet<WTF::RefPtr<WTF::SchedulePair>, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair>>, WTF::HashTableTraits>;

typedef struct optional<WTF::HashSet<WTF::RefPtr<WTF::SchedulePair>, WTF::SchedulePairHash>> {
    unk ;
    char __null_state_;
    HashSet<WTF::RefPtr<WTF::SchedulePair>, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair>>, WTF::HashTableTraits> __val_;
    BOOL __engaged_;
} optional<WTF::HashSet<WTF::RefPtr<WTF::SchedulePair>, WTF::SchedulePairHash>>;

typedef struct RetainPtr<id<NSItemProviderWriting>> {
    void m_ptr;
} RetainPtr<id<NSItemProviderWriting>>;

typedef struct BlockPtr<void (void (^)(NSURL *, NSError *))> {
    id m_block;
    unk field1;
} BlockPtr<void (void (^)(NSURL *, NSError *))>;

typedef struct RetainPtr<NSMutableArray> {
    void m_ptr;
} RetainPtr<NSMutableArray>;

typedef struct RetainPtr<NSMutableDictionary<NSString *,NSURL *>> {
    void m_ptr;
} RetainPtr<NSMutableDictionary<NSString *,NSURL *>>;

typedef struct RetainPtr<NSItemProvider> {
    void m_ptr;
} RetainPtr<NSItemProvider>;

typedef struct RetainPtr<NSArray<NSString *>> {
    void m_ptr;
} RetainPtr<NSArray<NSString *>>;

typedef struct RetainPtr<NSArray<WebItemProviderRegistrationInfoList *>> {
    void m_ptr;
} RetainPtr<NSArray<WebItemProviderRegistrationInfoList *>>;

typedef struct Vector<WTF::RetainPtr<WebItemProviderLoadResult>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> {
    void m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<WTF::RetainPtr<WebItemProviderLoadResult>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc>;

typedef struct OpaqueJSValue {
} // Error Processing Struct Fields

typedef struct OpaqueJSContext {
} // Error Processing Struct Fields

typedef struct JSCell {
} // Error Processing Struct Fields

typedef struct JSValue {
    char field0;
    CGFloat field1;
    CGFloat field2;
    long field3;
    short field4;
    char field5;
    int field6;
    NSInteger field7;
    JSCell field8;
    ? field9;
} JSValue;

typedef struct HTMLVideoElement {
} // Error Processing Struct Fields

typedef struct NakedPtr<WebCore::HTMLVideoElement> {
    HTMLVideoElement field0;
} NakedPtr<WebCore::HTMLVideoElement>;

typedef struct VideoFullscreenControllerContext {
} // Error Processing Struct Fields

typedef struct RefPtr<VideoFullscreenControllerContext, WTF::RawPtrTraits<VideoFullscreenControllerContext>, WTF::DefaultRefDerefTraits<VideoFullscreenControllerContext>> {
    VideoFullscreenControllerContext m_ptr;
} RefPtr<VideoFullscreenControllerContext, WTF::RawPtrTraits<VideoFullscreenControllerContext>, WTF::DefaultRefDerefTraits<VideoFullscreenControllerContext>>;

typedef struct RefPtr<WebCore::HTMLVideoElement, WTF::RawPtrTraits<WebCore::HTMLVideoElement>, WTF::DefaultRefDerefTraits<WebCore::HTMLVideoElement>> {
    HTMLVideoElement m_ptr;
} RefPtr<WebCore::HTMLVideoElement, WTF::RawPtrTraits<WebCore::HTMLVideoElement>, WTF::DefaultRefDerefTraits<WebCore::HTMLVideoElement>>;

