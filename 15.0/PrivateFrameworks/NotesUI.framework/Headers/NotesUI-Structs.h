typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

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

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct CGAffineTransform {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
} CGAffineTransform;

typedef struct ? {
    BOOL _allowsTextAttachmentView;
    BOOL _embeddingType;
    BOOL _standaloneAlignment;
    BOOL _allocatesTextContainer;
    BOOL _prefersOldAttachmentBounds;
    BOOL _prefersOldImageForBounds;
    BOOL _cellWasExplicitlySet;
    BOOL _ignoresOrientation;
    BOOL _allowsEditingContents;
} ?;

typedef struct NSDirectionalEdgeInsets {
    CGFloat top;
    CGFloat leading;
    CGFloat bottom;
    CGFloat trailing;
} NSDirectionalEdgeInsets;

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CLLocationCoordinate2D {
    CGFloat latitude;
    CGFloat longitude;
} CLLocationCoordinate2D;

typedef struct __GSEvent {
} // Error Processing Struct Fields

typedef struct UIEdgeInsets {
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
} UIEdgeInsets;

typedef struct UIRectCornerRadii {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} UIRectCornerRadii;

typedef struct _UITraitCollectionTraitChanges {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
} _UITraitCollectionTraitChanges;

typedef struct _UITraitCollectionChangeDescription {
    id field0;
    id field1;
    BOOL field2;
    _UITraitCollectionTraitChanges field3;
} _UITraitCollectionChangeDescription;

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

typedef struct CAFrameRateRange {
    float field0;
    float field1;
    float field2;
} CAFrameRateRange;

typedef struct _NSStoredContainerUsage {
    CGRect field0;
    CGRect field1;
    ? field2;
    CGRect field3;
    _NSRange field4;
} _NSStoredContainerUsage;

typedef struct __lmFlags {
    BOOL containersAreFull;
    BOOL glyphsMightDrawOutsideLines;
    BOOL backgroundLayoutEnabled;
    BOOL resizingInProgress;
    BOOL allowScreenFonts;
    BOOL cachedRectArrayInUse;
    BOOL displayInvalidationInProgress;
    BOOL insertionPointNeedsUpdate;
    BOOL layoutManagerInDirtyList;
    BOOL originalFontOverride;
    BOOL showInvisibleCharacters;
    BOOL showControlCharacters;
    BOOL delegateRespondsToDidInvalidate;
    BOOL delegateRespondsToDidComplete;
    BOOL glyphFormat;
    BOOL textStorageRespondsToIsEditing;
    BOOL notifyEditedInProgress;
    BOOL containersChanged;
    BOOL isGeneratingGlyphs;
    BOOL hasNonGeneratedGlyphData;
    BOOL syncAlignmentToDirection;
    BOOL defaultAttachmentScaling;
    BOOL usesFontLeading;
    BOOL seenRightToLeft;
    BOOL ignoresViewTransformations;
    BOOL needToFlushGlyph;
    BOOL flipsIfNeeded;
    BOOL allowNonContig;
    BOOL useNonContig;
    BOOL inBackgroundLayout;
} __lmFlags;

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

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct UIOffset {
    CGFloat horizontal;
    CGFloat vertical;
} UIOffset;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct _UIUpdateRequest {
} // Error Processing Struct Fields

typedef struct _UIUpdateRequestRecord {
    _UIUpdateRequest field0;
    unsigned int field1;
} _UIUpdateRequestRecord;

typedef struct __CFCharacterSet {
} // Error Processing Struct Fields

typedef struct __SecTrust {
} // Error Processing Struct Fields

typedef struct WebPageProxy {
} // Error Processing Struct Fields

typedef struct NakedPtr<WebKit::WebPageProxy> {
    WebPageProxy field0;
} NakedPtr<WebKit::WebPageProxy>;

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
    FloatPoint field0;
    FloatSize field1;
} FloatRect;

typedef struct OpaqueWKPage {
} // Error Processing Struct Fields

typedef struct optional<bool> {
    unk ;
    char __null_state_;
    BOOL __val_;
    BOOL __engaged_;
} optional<bool>;

typedef struct ViewSnapshot {
} // Error Processing Struct Fields

typedef struct RefPtr<WebKit::ViewSnapshot, WTF::RawPtrTraits<WebKit::ViewSnapshot>, WTF::DefaultRefDerefTraits<WebKit::ViewSnapshot>> {
    ViewSnapshot field0;
} RefPtr<WebKit::ViewSnapshot, WTF::RawPtrTraits<WebKit::ViewSnapshot>, WTF::DefaultRefDerefTraits<WebKit::ViewSnapshot>>;

typedef struct OptionSet<WebKit::ViewStabilityFlag> {
    unsigned char m_storage;
} OptionSet<WebKit::ViewStabilityFlag>;

typedef struct Navigation {
} // Error Processing Struct Fields

typedef struct optional<WebCore::FloatPoint> {
    unk ;
    char __null_state_;
    FloatPoint __val_;
    BOOL __engaged_;
} optional<WebCore::FloatPoint>;

typedef struct array<float, 4> {
    float __elems_;
} array<float, 4>;

typedef struct RectEdges<float> {
    array<float, 4> m_sides;
} RectEdges<float>;

typedef struct IntPoint {
    int field0;
    int field1;
} IntPoint;

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

typedef struct Vector<WTF::BlockPtr<void ()>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
    void m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<WTF::BlockPtr<void ()>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>;

typedef struct RetainPtr<WKFullScreenWindowController> {
    void m_ptr;
} RetainPtr<WKFullScreenWindowController>;

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

typedef struct optional<WebKit::MonotonicObjectIdentifier<WebKit::TransactionIDType>> {
    unk ;
    char __null_state_;
    MonotonicObjectIdentifier<WebKit::TransactionIDType> __val_;
    BOOL __engaged_;
} optional<WebKit::MonotonicObjectIdentifier<WebKit::TransactionIDType>>;

typedef struct RetainPtr<UIView<WKWebViewContentProvider>> {
    void m_ptr;
} RetainPtr<UIView<WKWebViewContentProvider>>;

typedef struct RetainPtr<NSTimer> {
    void m_ptr;
} RetainPtr<NSTimer>;

typedef struct Color {
    NSUInteger m_colorAndFlags;
} Color;

typedef struct Vector<WTF::Function<void ()>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
    void m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<WTF::Function<void ()>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>;

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

typedef struct ICDeviceHardwareInfo {
    NSUInteger modelName;
    NSInteger version;
    NSInteger subVersion;
} ICDeviceHardwareInfo;

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct CGColorSpace {
} // Error Processing Struct Fields

typedef struct _CARenderRendererInfo {
    int field0;
    unsigned int field1;
    unsigned int field2;
} _CARenderRendererInfo;

typedef struct _CAPropertyInfo {
} // Error Processing Struct Fields

typedef struct _CALayerIvars {
    int refcount;
    unsigned int magic;
    void layer;
    void _objc_observation_info;
} _CALayerIvars;

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct TopoID {
    id field0;
    unsigned int field1;
} TopoID;

typedef struct TopoIDRange {
    TopoID field0;
    unsigned int field1;
} TopoIDRange;

typedef struct NSEdgeInsets {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} NSEdgeInsets;

typedef struct __tcFlags {
    BOOL widthTracksTextView;
    BOOL heightTracksTextView;
    BOOL observingFrameChanges;
    BOOL lineBreakMode;
    BOOL oldAPI;
    BOOL _reserved;
} __tcFlags;

typedef struct __CFArray {
} // Error Processing Struct Fields

