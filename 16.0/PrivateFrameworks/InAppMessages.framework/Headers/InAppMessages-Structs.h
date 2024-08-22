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
    NSUInteger field0;
    NSUInteger field1;
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

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct CGImage {
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

typedef struct __SecTrust {
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

typedef struct ViewSnapshot {
} // Error Processing Struct Fields

typedef struct RefPtr<WebKit::ViewSnapshot, WTF::RawPtrTraits<WebKit::ViewSnapshot>, WTF::DefaultRefDerefTraits<WebKit::ViewSnapshot>> {
    ViewSnapshot field0;
} RefPtr<WebKit::ViewSnapshot, WTF::RawPtrTraits<WebKit::ViewSnapshot>, WTF::DefaultRefDerefTraits<WebKit::ViewSnapshot>>;

typedef struct IntPoint {
    int field0;
    int field1;
} IntPoint;

typedef struct OptionSet<WebKit::ViewStabilityFlag> {
    unsigned char m_storage;
} OptionSet<WebKit::ViewStabilityFlag>;

typedef struct Navigation {
} // Error Processing Struct Fields

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

typedef struct optional<CGSize> {
    unk ;
    char __null_state_;
    CGSize __val_;
    BOOL __engaged_;
} optional<CGSize>;

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

typedef struct MonotonicObjectIdentifier<WebKit::TransactionIDType> {
    NSUInteger m_identifier;
} MonotonicObjectIdentifier<WebKit::TransactionIDType>;

typedef struct RetainPtr<UIView> {
    void m_ptr;
} RetainPtr<UIView>;

typedef struct optional<CGRect> {
    unk ;
    char __null_state_;
    CGRect __val_;
    BOOL __engaged_;
} optional<CGRect>;

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

typedef struct RetainPtr<id> {
    void m_ptr;
} RetainPtr<id>;

typedef struct optional<WebKit::MonotonicObjectIdentifier<WebKit::TransactionIDType>> {
    unk ;
    char __null_state_;
    MonotonicObjectIdentifier<WebKit::TransactionIDType> __val_;
    BOOL __engaged_;
} optional<WebKit::MonotonicObjectIdentifier<WebKit::TransactionIDType>>;

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

typedef struct Color {
    NSUInteger m_colorAndFlags;
} Color;

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

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

