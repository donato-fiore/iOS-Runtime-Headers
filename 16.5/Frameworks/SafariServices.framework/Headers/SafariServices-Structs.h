typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct __CFStringTokenizer {
} // Error Processing Struct Fields

typedef struct UIEdgeInsets {
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
} UIEdgeInsets;

typedef struct SFScrollIndicatorInsets {
    UIEdgeInsets field0;
    UIEdgeInsets field1;
} SFScrollIndicatorInsets;

typedef struct _NSZone {
} // Error Processing Struct Fields

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

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct __GSEvent {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL hasOverrideClient;
    BOOL hasOverrideHost;
    BOOL hasInputAssistantItem;
    BOOL suppressSoftwareKeyboard;
    BOOL conformsToUIKeyInputIsSet;
    BOOL conformsToUIKeyInput;
} ?;

typedef struct NSDirectionalEdgeInsets {
    CGFloat top;
    CGFloat leading;
    CGFloat bottom;
    CGFloat trailing;
} NSDirectionalEdgeInsets;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct CGVector {
    CGFloat field0;
    CGFloat field1;
} CGVector;

typedef struct CGAffineTransform {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
} CGAffineTransform;

typedef struct _UITraitCollectionTraitChanges {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
    BOOL field8;
    BOOL field9;
} _UITraitCollectionTraitChanges;

typedef struct _UITraitCollectionChangeDescription {
    id field0;
    id field1;
    BOOL field2;
    _UITraitCollectionTraitChanges field3;
} _UITraitCollectionChangeDescription;

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct CATransform3D {
    CGFloat m11;
    CGFloat m12;
    CGFloat m13;
    CGFloat m14;
    CGFloat m21;
    CGFloat m22;
    CGFloat m23;
    CGFloat m24;
    CGFloat m31;
    CGFloat m32;
    CGFloat m33;
    CGFloat m34;
    CGFloat m41;
    CGFloat m42;
    CGFloat m43;
    CGFloat m44;
} CATransform3D;

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct UIRectCornerRadii {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} UIRectCornerRadii;

typedef struct CAFrameRateRange {
    float field0;
    float field1;
    float field2;
} CAFrameRateRange;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

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

typedef struct __SecIdentity {
} // Error Processing Struct Fields

typedef struct __SecTrust {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct OpaqueJSValue {
} // Error Processing Struct Fields

typedef struct OpaqueJSContext {
} // Error Processing Struct Fields

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct WebProcessPlugInReaderJSController {
} // Error Processing Struct Fields

typedef struct __compressed_pair<SafariServices::WebProcessPlugInReaderJSController *, std::default_delete<SafariServices::WebProcessPlugInReaderJSController>> {
    WebProcessPlugInReaderJSController __value_;
} __compressed_pair<SafariServices::WebProcessPlugInReaderJSController *, std::default_delete<SafariServices::WebProcessPlugInReaderJSController>>;

typedef struct unique_ptr<SafariServices::WebProcessPlugInReaderJSController, std::default_delete<SafariServices::WebProcessPlugInReaderJSController>> {
    __compressed_pair<SafariServices::WebProcessPlugInReaderJSController *, std::default_delete<SafariServices::WebProcessPlugInReaderJSController>> __ptr_;
} unique_ptr<SafariServices::WebProcessPlugInReaderJSController, std::default_delete<SafariServices::WebProcessPlugInReaderJSController>>;

typedef struct HashTable<OpaqueFormAutoFillFrame *, WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>>>, WTF::DefaultHash<OpaqueFormAutoFillFrame *>, WTF::HashMap<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>>::KeyValuePairTraits, WTF::HashTraits<OpaqueFormAutoFillFrame *>> {
    unk ;
    void m_table;
    unsigned int m_tableForLLDB;
} HashTable<OpaqueFormAutoFillFrame *, WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>>>, WTF::DefaultHash<OpaqueFormAutoFillFrame *>, WTF::HashMap<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>>::KeyValuePairTraits, WTF::HashTraits<OpaqueFormAutoFillFrame *>>;

typedef struct HashMap<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>, WTF::DefaultHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<std::unique_ptr<SafariShared::FrameMetadata>>, WTF::HashTableTraits> {
    HashTable<OpaqueFormAutoFillFrame *, WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>>>, WTF::DefaultHash<OpaqueFormAutoFillFrame *>, WTF::HashMap<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>>::KeyValuePairTraits, WTF::HashTraits<OpaqueFormAutoFillFrame *>> m_impl;
} HashMap<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>, WTF::DefaultHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<std::unique_ptr<SafariShared::FrameMetadata>>, WTF::HashTableTraits>;

typedef struct __cxx_atomic_impl<LoadingStatus, std::__cxx_atomic_base_impl<LoadingStatus>> {
    uint8_t __a_value;
    NSInteger field1;
} __cxx_atomic_impl<LoadingStatus, std::__cxx_atomic_base_impl<LoadingStatus>>;

typedef struct atomic<LoadingStatus> {
    __cxx_atomic_impl<LoadingStatus, std::__cxx_atomic_base_impl<LoadingStatus>> __a_;
} atomic<LoadingStatus>;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct OpaqueJSScript {
} // Error Processing Struct Fields

typedef struct UIOffset {
    CGFloat field0;
    CGFloat field1;
} UIOffset;

typedef struct ReaderAvailabilityController {
} // Error Processing Struct Fields

typedef struct __compressed_pair<SafariServices::ReaderAvailabilityController *, std::default_delete<SafariServices::ReaderAvailabilityController>> {
    ReaderAvailabilityController __value_;
} __compressed_pair<SafariServices::ReaderAvailabilityController *, std::default_delete<SafariServices::ReaderAvailabilityController>>;

typedef struct unique_ptr<SafariServices::ReaderAvailabilityController, std::default_delete<SafariServices::ReaderAvailabilityController>> {
    __compressed_pair<SafariServices::ReaderAvailabilityController *, std::default_delete<SafariServices::ReaderAvailabilityController>> __ptr_;
} unique_ptr<SafariServices::ReaderAvailabilityController, std::default_delete<SafariServices::ReaderAvailabilityController>>;

typedef struct __CFCharacterSet {
} // Error Processing Struct Fields

typedef struct OpaqueFormAutoFillFrame {
} // Error Processing Struct Fields

typedef struct FloatPoint {
    float m_x;
    float m_y;
} FloatPoint;

typedef struct FloatSize {
    float m_width;
    float m_height;
} FloatSize;

typedef struct FloatRect {
    FloatPoint field0;
    FloatSize field1;
} FloatRect;

typedef struct WebPageProxy {
} // Error Processing Struct Fields

typedef struct NakedPtr<WebKit::WebPageProxy> {
    WebPageProxy field0;
} NakedPtr<WebKit::WebPageProxy>;

typedef struct OpaqueWKPage {
} // Error Processing Struct Fields

typedef struct Navigation {
} // Error Processing Struct Fields

typedef struct optional<bool> {
    unk ;
    char __null_state_;
    BOOL __val_;
    BOOL __engaged_;
} optional<bool>;

typedef struct optional<WebCore::FloatPoint> {
    unk ;
    char __null_state_;
    FloatPoint __val_;
    BOOL __engaged_;
} optional<WebCore::FloatPoint>;

typedef struct array<float, 4UL> {
    float __elems_;
} array<float, 4UL>;

typedef struct RectEdges<float> {
    array<float, 4UL> m_sides;
} RectEdges<float>;

typedef struct IntPoint {
    int field0;
    int field1;
} IntPoint;

typedef struct ViewSnapshot {
} // Error Processing Struct Fields

typedef struct RefPtr<WebKit::ViewSnapshot, WTF::RawPtrTraits<WebKit::ViewSnapshot>, WTF::DefaultRefDerefTraits<WebKit::ViewSnapshot>> {
    ViewSnapshot field0;
} RefPtr<WebKit::ViewSnapshot, WTF::RawPtrTraits<WebKit::ViewSnapshot>, WTF::DefaultRefDerefTraits<WebKit::ViewSnapshot>>;

typedef struct OptionSet<WebKit::ViewStabilityFlag> {
    unsigned char m_storage;
} OptionSet<WebKit::ViewStabilityFlag>;

typedef struct RetainPtr<WKWebViewConfiguration> {
    void m_ptr;
} RetainPtr<WKWebViewConfiguration>;

typedef struct RefPtr<WebKit::WebPageProxy, WTF::RawPtrTraits<WebKit::WebPageProxy>, WTF::DefaultRefDerefTraits<WebKit::WebPageProxy>> {
    WebPageProxy m_ptr;
} RefPtr<WebKit::WebPageProxy, WTF::RawPtrTraits<WebKit::WebPageProxy>, WTF::DefaultRefDerefTraits<WebKit::WebPageProxy>>;

typedef struct NavigationState {
} // Error Processing Struct Fields

typedef struct __compressed_pair<WebKit::NavigationState *, std::default_delete<WebKit::NavigationState>> {
    NavigationState __value_;
} __compressed_pair<WebKit::NavigationState *, std::default_delete<WebKit::NavigationState>>;

typedef struct unique_ptr<WebKit::NavigationState, std::default_delete<WebKit::NavigationState>> {
    __compressed_pair<WebKit::NavigationState *, std::default_delete<WebKit::NavigationState>> __ptr_;
} unique_ptr<WebKit::NavigationState, std::default_delete<WebKit::NavigationState>>;

typedef struct UIDelegate {
} // Error Processing Struct Fields

typedef struct __compressed_pair<WebKit::UIDelegate *, std::default_delete<WebKit::UIDelegate>> {
    UIDelegate __value_;
} __compressed_pair<WebKit::UIDelegate *, std::default_delete<WebKit::UIDelegate>>;

typedef struct unique_ptr<WebKit::UIDelegate, std::default_delete<WebKit::UIDelegate>> {
    __compressed_pair<WebKit::UIDelegate *, std::default_delete<WebKit::UIDelegate>> __ptr_;
} unique_ptr<WebKit::UIDelegate, std::default_delete<WebKit::UIDelegate>>;

typedef struct IconLoadingDelegate {
} // Error Processing Struct Fields

typedef struct __compressed_pair<WebKit::IconLoadingDelegate *, std::default_delete<WebKit::IconLoadingDelegate>> {
    IconLoadingDelegate __value_;
} __compressed_pair<WebKit::IconLoadingDelegate *, std::default_delete<WebKit::IconLoadingDelegate>>;

typedef struct unique_ptr<WebKit::IconLoadingDelegate, std::default_delete<WebKit::IconLoadingDelegate>> {
    __compressed_pair<WebKit::IconLoadingDelegate *, std::default_delete<WebKit::IconLoadingDelegate>> __ptr_;
} unique_ptr<WebKit::IconLoadingDelegate, std::default_delete<WebKit::IconLoadingDelegate>>;

typedef struct ResourceLoadDelegate {
} // Error Processing Struct Fields

typedef struct __compressed_pair<WebKit::ResourceLoadDelegate *, std::default_delete<WebKit::ResourceLoadDelegate>> {
    ResourceLoadDelegate __value_;
} __compressed_pair<WebKit::ResourceLoadDelegate *, std::default_delete<WebKit::ResourceLoadDelegate>>;

typedef struct unique_ptr<WebKit::ResourceLoadDelegate, std::default_delete<WebKit::ResourceLoadDelegate>> {
    __compressed_pair<WebKit::ResourceLoadDelegate *, std::default_delete<WebKit::ResourceLoadDelegate>> __ptr_;
} unique_ptr<WebKit::ResourceLoadDelegate, std::default_delete<WebKit::ResourceLoadDelegate>>;

typedef struct WeakObjCPtr<id<_WKTextManipulationDelegate>> {
    id m_weakReference;
} WeakObjCPtr<id<_WKTextManipulationDelegate>>;

typedef struct WeakObjCPtr<id<_WKInputDelegate>> {
    id m_weakReference;
} WeakObjCPtr<id<_WKInputDelegate>>;

typedef struct WeakObjCPtr<id<_WKAppHighlightDelegate>> {
    id m_weakReference;
} WeakObjCPtr<id<_WKAppHighlightDelegate>>;

typedef struct RetainPtr<WKSafeBrowsingWarning> {
    void m_ptr;
} RetainPtr<WKSafeBrowsingWarning>;

typedef struct RetainPtr<WKScrollView> {
    void m_ptr;
} RetainPtr<WKScrollView>;

typedef struct RetainPtr<WKContentView> {
    void m_ptr;
} RetainPtr<WKContentView>;

typedef struct ViewGestureController {
} // Error Processing Struct Fields

typedef struct __compressed_pair<WebKit::ViewGestureController *, std::default_delete<WebKit::ViewGestureController>> {
    ViewGestureController __value_;
} __compressed_pair<WebKit::ViewGestureController *, std::default_delete<WebKit::ViewGestureController>>;

typedef struct unique_ptr<WebKit::ViewGestureController, std::default_delete<WebKit::ViewGestureController>> {
    __compressed_pair<WebKit::ViewGestureController *, std::default_delete<WebKit::ViewGestureController>> __ptr_;
} unique_ptr<WebKit::ViewGestureController, std::default_delete<WebKit::ViewGestureController>>;

typedef struct Vector<WTF::BlockPtr<void ()>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> {
    void m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<WTF::BlockPtr<void ()>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc>;

typedef struct RetainPtr<WKFullScreenWindowController> {
    void m_ptr;
} RetainPtr<WKFullScreenWindowController>;

typedef struct RetainPtr<UIFindInteraction> {
    void m_ptr;
} RetainPtr<UIFindInteraction>;

typedef struct RetainPtr<_WKRemoteObjectRegistry> {
    void m_ptr;
} RetainPtr<_WKRemoteObjectRegistry>;

typedef struct Color {
    NSUInteger m_colorAndFlags;
} Color;

typedef struct optional<WebCore::FloatSize> {
    unk ;
    char __null_state_;
    FloatSize __val_;
    BOOL __engaged_;
} optional<WebCore::FloatSize>;

typedef struct optional<int> {
    unk ;
    char __null_state_;
    int __val_;
    BOOL __engaged_;
} optional<int>;

typedef struct optional<double> {
    unk ;
    char __null_state_;
    CGFloat __val_;
    BOOL __engaged_;
} optional<double>;

typedef struct optional<CGRect> {
    unk ;
    char __null_state_;
    CGRect __val_;
    BOOL __engaged_;
} optional<CGRect>;

typedef struct MonotonicObjectIdentifier<WebKit::TransactionIDType> {
    NSUInteger m_identifier;
} MonotonicObjectIdentifier<WebKit::TransactionIDType>;

typedef struct optional<WebKit::MonotonicObjectIdentifier<WebKit::TransactionIDType>> {
    unk ;
    char __null_state_;
    MonotonicObjectIdentifier<WebKit::TransactionIDType> __val_;
    BOOL __engaged_;
} optional<WebKit::MonotonicObjectIdentifier<WebKit::TransactionIDType>>;

typedef struct ObjectIdentifier<WebCore::GraphicsLayer::PlatformLayerIDType> {
    NSUInteger m_identifier;
} ObjectIdentifier<WebCore::GraphicsLayer::PlatformLayerIDType>;

typedef struct ObjectIdentifier<WebCore::ProcessIdentifierType> {
    NSUInteger m_identifier;
} ObjectIdentifier<WebCore::ProcessIdentifierType>;

typedef struct ProcessQualified<WTF::ObjectIdentifier<WebCore::GraphicsLayer::PlatformLayerIDType>> {
    ObjectIdentifier<WebCore::GraphicsLayer::PlatformLayerIDType> m_object;
    ObjectIdentifier<WebCore::ProcessIdentifierType> m_processIdentifier;
} ProcessQualified<WTF::ObjectIdentifier<WebCore::GraphicsLayer::PlatformLayerIDType>>;

typedef struct LiveResizeParameters {
    CGFloat viewWidth;
    CGPoint initialScrollPosition;
} LiveResizeParameters;

typedef struct optional<LiveResizeParameters> {
    unk ;
    char __null_state_;
    LiveResizeParameters __val_;
    BOOL __engaged_;
} optional<LiveResizeParameters>;

typedef struct PerWebProcessState {
    CGFloat viewportMetaTagWidth;
    CGFloat initialScaleFactor;
    BOOL hasCommittedLoadForMainFrame;
    BOOL needsResetViewStateAfterCommitLoadForMainFrame;
    int dynamicViewportUpdateMode;
    BOOL waitingForEndAnimatedResize;
    BOOL waitingForCommitAfterAnimatedResize;
    CGFloat animatedResizeOriginalContentWidth;
    CGRect animatedResizeOldBounds;
    optional<WebCore::FloatPoint> scrollOffsetToRestore;
    optional<WebCore::FloatPoint> unobscuredCenterToRestore;
    Color scrollViewBackgroundColor;
    BOOL invokingUIScrollViewDelegateCallback;
    BOOL didDeferUpdateVisibleContentRectsForUIScrollViewDelegateCallback;
    BOOL didDeferUpdateVisibleContentRectsForAnyReason;
    BOOL didDeferUpdateVisibleContentRectsForUnstableScrollView;
    BOOL currentlyAdjustingScrollViewInsetsForKeyboard;
    BOOL hasScheduledVisibleRectUpdate;
    BOOL commitDidRestoreScrollPosition;
    BOOL avoidsUnsafeArea;
    BOOL viewportMetaTagWidthWasExplicit;
    BOOL viewportMetaTagCameFromImageDocument;
    optional<WebCore::FloatSize> lastSentViewLayoutSize;
    optional<int> lastSentDeviceOrientation;
    optional<double> lastSentMinimumEffectiveDeviceWidth;
    optional<CGRect> frozenVisibleContentRect;
    optional<CGRect> frozenUnobscuredContentRect;
    MonotonicObjectIdentifier<WebKit::TransactionIDType> firstPaintAfterCommitLoadTransactionID;
    MonotonicObjectIdentifier<WebKit::TransactionIDType> lastTransactionID;
    optional<WebKit::MonotonicObjectIdentifier<WebKit::TransactionIDType>> firstTransactionIDAfterPageRestore;
    ProcessQualified<WTF::ObjectIdentifier<WebCore::GraphicsLayer::PlatformLayerIDType>> pendingFindLayerID;
    ProcessQualified<WTF::ObjectIdentifier<WebCore::GraphicsLayer::PlatformLayerIDType>> committedFindLayerID;
    optional<LiveResizeParameters> liveResizeParameters;
} PerWebProcessState;

typedef struct optional<CGSize> {
    unk ;
    char __null_state_;
    CGSize __val_;
    BOOL __engaged_;
} optional<CGSize>;

typedef struct RetainPtr<UIView> {
    void m_ptr;
} RetainPtr<UIView>;

typedef struct RetainPtr<id> {
    void m_ptr;
} RetainPtr<id>;

typedef struct Vector<WTF::RetainPtr<id<_UIInvalidatable>>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> {
    void m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<WTF::RetainPtr<id<_UIInvalidatable>>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc>;

typedef struct RetainPtr<UIView<WKWebViewContentProvider>> {
    void m_ptr;
} RetainPtr<UIView<WKWebViewContentProvider>>;

typedef struct RetainPtr<NSTimer> {
    void m_ptr;
} RetainPtr<NSTimer>;

typedef struct Vector<WTF::Function<void ()>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> {
    void m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<WTF::Function<void ()>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc>;

typedef struct RetainPtr<NSMutableArray> {
    void m_ptr;
} RetainPtr<NSMutableArray>;

typedef struct RetainPtr<WKPasswordView> {
    void m_ptr;
} RetainPtr<WKPasswordView>;

typedef struct optional<WebCore::WheelScrollGestureState> {
    unk ;
    char __null_state_;
    unsigned char __val_;
    BOOL __engaged_;
} optional<WebCore::WheelScrollGestureState>;

typedef struct MonotonicTime {
    CGFloat m_value;
} MonotonicTime;

typedef struct optional<WTF::MonotonicTime> {
    unk ;
    char __null_state_;
    MonotonicTime __val_;
    BOOL __engaged_;
} optional<WTF::MonotonicTime>;

typedef struct RetainPtr<NSArray<NSNumber *>> {
    void m_ptr;
} RetainPtr<NSArray<NSNumber *>>;

