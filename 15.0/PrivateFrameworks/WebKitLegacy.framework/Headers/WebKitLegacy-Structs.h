typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
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

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct _WKQuad {
    CGPoint p1;
    CGPoint p2;
    CGPoint p3;
    CGPoint p4;
} _WKQuad;

typedef struct OpaqueJSValue {
} // Error Processing Struct Fields

typedef struct OpaqueJSContext {
} // Error Processing Struct Fields

typedef struct JSCell {
} // Error Processing Struct Fields

typedef struct ? {
    int field0;
    int field1;
} ?;

typedef struct JSValue {
} // Error Processing Struct Fields

typedef struct DOMObjectInternal {
} // Error Processing Struct Fields

typedef struct RootObject {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct __CTFont {
} // Error Processing Struct Fields

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct StringImpl {
} // Error Processing Struct Fields

typedef struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> {
    StringImpl m_ptr;
} RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>>;

typedef struct String {
    RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> m_impl;
} String;

typedef struct MimeClassInfo {
} // Error Processing Struct Fields

typedef struct Vector<WebCore::MimeClassInfo, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
    MimeClassInfo m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<WebCore::MimeClassInfo, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>;

typedef struct PluginInfo {
    String name;
    String file;
    String desc;
    Vector<WebCore::MimeClassInfo, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> mimes;
    BOOL isApplicationPlugin;
    unsigned char clientLoadPolicy;
    String bundleIdentifier;
} PluginInfo;

typedef struct RetainPtr<__CFBundle *> {
    void m_ptr;
} RetainPtr<__CFBundle *>;

typedef struct Frame {
} // Error Processing Struct Fields

typedef struct NakedPtr<WebCore::Frame> {
    Frame m_ptr;
} NakedPtr<WebCore::Frame>;

typedef struct ObjectIdentifier<WebCore::ProcessIdentifierType> {
    NSUInteger m_identifier;
} ObjectIdentifier<WebCore::ProcessIdentifierType>;

typedef struct PolicyCheckIdentifier {
    ObjectIdentifier<WebCore::ProcessIdentifierType> m_process;
    NSUInteger m_policyCheck;
} PolicyCheckIdentifier;

typedef struct RefPtr<WebCore::Frame, WTF::RawPtrTraits<WebCore::Frame>, WTF::DefaultRefDerefTraits<WebCore::Frame>> {
    Frame m_ptr;
} RefPtr<WebCore::Frame, WTF::RawPtrTraits<WebCore::Frame>, WTF::DefaultRefDerefTraits<WebCore::Frame>>;

typedef struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier>>> {
    void __value_;
} __compressed_pair<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier>>>;

typedef struct unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier>, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier>>> {
    __compressed_pair<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier>>> __ptr_;
} unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier>, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier>>>;

typedef struct Function<void (WebCore::PolicyAction, WebCore::PolicyCheckIdentifier)> {
    unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier>, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier>>> m_callableWrapper;
} Function<void (WebCore::PolicyAction, WebCore::PolicyCheckIdentifier)>;

typedef struct RetainPtr<NSURL> {
    void m_ptr;
} RetainPtr<NSURL>;

typedef struct DocumentLoader {
} // Error Processing Struct Fields

typedef struct NakedPtr<WebCore::DocumentLoader> {
    DocumentLoader field0;
} NakedPtr<WebCore::DocumentLoader>;

typedef struct RetainPtr<WebFrameView> {
    void m_ptr;
} RetainPtr<WebFrameView>;

typedef struct WebScriptDebugger {
} // Error Processing Struct Fields

typedef struct __compressed_pair<WebScriptDebugger *, std::default_delete<WebScriptDebugger>> {
    WebScriptDebugger __value_;
} __compressed_pair<WebScriptDebugger *, std::default_delete<WebScriptDebugger>>;

typedef struct unique_ptr<WebScriptDebugger, std::default_delete<WebScriptDebugger>> {
    __compressed_pair<WebScriptDebugger *, std::default_delete<WebScriptDebugger>> __ptr_;
} unique_ptr<WebScriptDebugger, std::default_delete<WebScriptDebugger>>;

typedef struct RetainPtr<NSString> {
    void m_ptr;
} RetainPtr<NSString>;

typedef struct Node {
} // Error Processing Struct Fields

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

typedef struct OptionSet<WebCore::PaintBehavior> {
    unsigned short field0;
} OptionSet<WebCore::PaintBehavior>;

typedef struct CGContext {
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

typedef struct Ref<WebCore::Frame, WTF::RawPtrTraits<WebCore::Frame>> {
    Frame field0;
} Ref<WebCore::Frame, WTF::RawPtrTraits<WebCore::Frame>>;

typedef struct RetainPtr<WAKScrollView> {
    void m_ptr;
} RetainPtr<WAKScrollView>;

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

typedef struct RetainPtr<WebEvent> {
    void m_ptr;
} RetainPtr<WebEvent>;

typedef struct RetainPtr<WebPluginController> {
    void m_ptr;
} RetainPtr<WebPluginController>;

typedef struct RetainPtr<NSArray> {
    void m_ptr;
} RetainPtr<NSArray>;

typedef struct KeyboardEvent {
} // Error Processing Struct Fields

typedef struct WebHTMLViewInterpretKeyEventsParameters {
    KeyboardEvent field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
} WebHTMLViewInterpretKeyEventsParameters;

typedef struct RetainPtr<WebDataSource> {
    void m_ptr;
} RetainPtr<WebDataSource>;

typedef struct EditorInternalCommand {
} // Error Processing Struct Fields

typedef struct Document {
} // Error Processing Struct Fields

typedef struct RefPtr<WebCore::Document, WTF::RawPtrTraits<WebCore::Document>, WTF::DefaultRefDerefTraits<WebCore::Document>> {
    Document field0;
} RefPtr<WebCore::Document, WTF::RawPtrTraits<WebCore::Document>, WTF::DefaultRefDerefTraits<WebCore::Document>>;

typedef struct Command {
    EditorInternalCommand field0;
    int field1;
    RefPtr<WebCore::Document, WTF::RawPtrTraits<WebCore::Document>, WTF::DefaultRefDerefTraits<WebCore::Document>> field2;
    RefPtr<WebCore::Frame, WTF::RawPtrTraits<WebCore::Frame>, WTF::DefaultRefDerefTraits<WebCore::Frame>> field3;
} Command;

typedef struct DOMWrapperWorld {
} // Error Processing Struct Fields

typedef struct RefPtr<WebCore::DOMWrapperWorld, WTF::RawPtrTraits<WebCore::DOMWrapperWorld>, WTF::DefaultRefDerefTraits<WebCore::DOMWrapperWorld>> {
    DOMWrapperWorld m_ptr;
} RefPtr<WebCore::DOMWrapperWorld, WTF::RawPtrTraits<WebCore::DOMWrapperWorld>, WTF::DefaultRefDerefTraits<WebCore::DOMWrapperWorld>>;

typedef struct WebEdgeInsets {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} WebEdgeInsets;

typedef struct Page {
} // Error Processing Struct Fields

typedef struct NakedPtr<WebCore::Page> {
    Page field0;
} NakedPtr<WebCore::Page>;

typedef struct IntPoint {
    int field0;
    int field1;
} IntPoint;

typedef struct OptionSet<WebCore::DragOperation> {
    unsigned char field0;
} OptionSet<WebCore::DragOperation>;

typedef struct OptionSet<WebCore::DragApplicationFlags> {
    unsigned char field0;
} OptionSet<WebCore::DragApplicationFlags>;

typedef struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
} // Error Processing Struct Fields

typedef struct OptionSet<WebCore::DragDestinationAction> {
    unsigned char field0;
} OptionSet<WebCore::DragDestinationAction>;

typedef struct ObjectIdentifier<WebCore::PageIdentifierType> {
    NSUInteger field0;
} ObjectIdentifier<WebCore::PageIdentifierType>;

typedef struct optional<WTF::ObjectIdentifier<WebCore::PageIdentifierType>> {
    unk field0;
    char field1;
    ObjectIdentifier<WebCore::PageIdentifierType> field2;
    BOOL field3;
} optional<WTF::ObjectIdentifier<WebCore::PageIdentifierType>>;

typedef struct DragData {
    IntPoint field0;
    IntPoint field1;
    void field2;
    OptionSet<WebCore::DragOperation> field3;
    OptionSet<WebCore::DragApplicationFlags> field4;
    Vector<WTF::String, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> field5;
    OptionSet<WebCore::DragDestinationAction> field6;
    optional<WTF::ObjectIdentifier<WebCore::PageIdentifierType>> field7;
    String field8;
} DragData;

typedef struct CGAffineTransform {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
} CGAffineTransform;

typedef struct HTMLVideoElement {
} // Error Processing Struct Fields

typedef struct NakedPtr<WebCore::HTMLVideoElement> {
    HTMLVideoElement field0;
} NakedPtr<WebCore::HTMLVideoElement>;

typedef struct FloatPoint {
    float field0;
    float field1;
} FloatPoint;

typedef struct FloatSize {
    BOOL field0;
    BOOL field1;
    float field2;
    float field3;
} FloatSize;

typedef struct FloatRect {
    FloatPoint field0;
    FloatSize field1;
} FloatRect;

typedef struct ObjectIdentifier<WebCore::DictationContextType> {
    NSUInteger field0;
} ObjectIdentifier<WebCore::DictationContextType>;

typedef struct RetainPtr<WebResource> {
    void m_ptr;
} RetainPtr<WebResource>;

typedef struct LegacyWebArchive {
} // Error Processing Struct Fields

typedef struct RefPtr<WebCore::LegacyWebArchive, WTF::RawPtrTraits<WebCore::LegacyWebArchive>, WTF::DefaultRefDerefTraits<WebCore::LegacyWebArchive>> {
    LegacyWebArchive m_ptr;
} RefPtr<WebCore::LegacyWebArchive, WTF::RawPtrTraits<WebCore::LegacyWebArchive>, WTF::DefaultRefDerefTraits<WebCore::LegacyWebArchive>>;

typedef struct DeviceOrientationData {
} // Error Processing Struct Fields

typedef struct RefPtr<WebCore::DeviceOrientationData, WTF::RawPtrTraits<WebCore::DeviceOrientationData>, WTF::DefaultRefDerefTraits<WebCore::DeviceOrientationData>> {
    DeviceOrientationData m_ptr;
} RefPtr<WebCore::DeviceOrientationData, WTF::RawPtrTraits<WebCore::DeviceOrientationData>, WTF::DefaultRefDerefTraits<WebCore::DeviceOrientationData>>;

typedef struct DeviceOrientationController {
} // Error Processing Struct Fields

typedef struct DeviceOrientationClientMock {
} // Error Processing Struct Fields

typedef struct __compressed_pair<WebCore::DeviceOrientationClientMock *, std::default_delete<WebCore::DeviceOrientationClientMock>> {
    DeviceOrientationClientMock __value_;
} __compressed_pair<WebCore::DeviceOrientationClientMock *, std::default_delete<WebCore::DeviceOrientationClientMock>>;

typedef struct unique_ptr<WebCore::DeviceOrientationClientMock, std::default_delete<WebCore::DeviceOrientationClientMock>> {
    __compressed_pair<WebCore::DeviceOrientationClientMock *, std::default_delete<WebCore::DeviceOrientationClientMock>> __ptr_;
} unique_ptr<WebCore::DeviceOrientationClientMock, std::default_delete<WebCore::DeviceOrientationClientMock>>;

typedef struct RetainPtr<id> {
    void m_ptr;
} RetainPtr<id>;

typedef struct _CFURLConnection {
} // Error Processing Struct Fields

typedef struct _CFURLRequest {
} // Error Processing Struct Fields

typedef struct _CFURLResponse {
} // Error Processing Struct Fields

typedef struct UndoStep {
} // Error Processing Struct Fields

typedef struct RefPtr<WebCore::UndoStep, WTF::RawPtrTraits<WebCore::UndoStep>, WTF::DefaultRefDerefTraits<WebCore::UndoStep>> {
    UndoStep m_ptr;
} RefPtr<WebCore::UndoStep, WTF::RawPtrTraits<WebCore::UndoStep>, WTF::DefaultRefDerefTraits<WebCore::UndoStep>>;

typedef struct Geolocation {
} // Error Processing Struct Fields

typedef struct NakedPtr<WebCore::Geolocation> {
    Geolocation field0;
} NakedPtr<WebCore::Geolocation>;

typedef struct RefPtr<WebCore::Geolocation, WTF::RawPtrTraits<WebCore::Geolocation>, WTF::DefaultRefDerefTraits<WebCore::Geolocation>> {
    Geolocation m_ptr;
} RefPtr<WebCore::Geolocation, WTF::RawPtrTraits<WebCore::Geolocation>, WTF::DefaultRefDerefTraits<WebCore::Geolocation>>;

typedef struct RetainPtr<WebView> {
    void m_ptr;
} RetainPtr<WebView>;

typedef struct NakedRef<WebCore::Geolocation> {
    Geolocation field0;
} NakedRef<WebCore::Geolocation>;

typedef struct RetainPtr<CLLocationManager> {
    void m_ptr;
} RetainPtr<CLLocationManager>;

typedef struct optional<double> {
    unk ;
    char __null_state_;
    CGFloat __val_;
    BOOL __engaged_;
} optional<double>;

typedef struct GeolocationPositionData {
    CGFloat timestamp;
    CGFloat latitude;
    CGFloat longitude;
    CGFloat accuracy;
    optional<double> altitude;
    optional<double> altitudeAccuracy;
    optional<double> heading;
    optional<double> speed;
    optional<double> floorLevel;
} GeolocationPositionData;

typedef struct RetainPtr<WebGeolocationCoreLocationProvider> {
    void m_ptr;
} RetainPtr<WebGeolocationCoreLocationProvider>;

typedef struct RetainPtr<_WebCoreLocationUpdateThreadingProxy> {
    void m_ptr;
} RetainPtr<_WebCoreLocationUpdateThreadingProxy>;

typedef struct HashTable<WTF::RetainPtr<WebView>, WTF::KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>>, WTF::DefaultHash<WTF::RetainPtr<WebView>>, WTF::HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>::KeyValuePairTraits, WTF::HashTraits<WTF::RetainPtr<WebView>>> {
    unk ;
    void m_table;
    unsigned int m_tableForLLDB;
} HashTable<WTF::RetainPtr<WebView>, WTF::KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>>, WTF::DefaultHash<WTF::RetainPtr<WebView>>, WTF::HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>::KeyValuePairTraits, WTF::HashTraits<WTF::RetainPtr<WebView>>>;

typedef struct HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>, WTF::DefaultHash<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>, WTF::HashTableTraits> {
    HashTable<WTF::RetainPtr<WebView>, WTF::KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>>, WTF::DefaultHash<WTF::RetainPtr<WebView>>, WTF::HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>::KeyValuePairTraits, WTF::HashTraits<WTF::RetainPtr<WebView>>> m_impl;
} HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>, WTF::DefaultHash<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>, WTF::HashTableTraits>;

typedef struct HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::DefaultHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *>> {
    unk ;
    id m_table;
    unsigned int m_tableForLLDB;
} HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::DefaultHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *>>;

typedef struct HashSet<WebView *, WTF::DefaultHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTableTraits> {
    HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::DefaultHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *>> m_impl;
} HashSet<WebView *, WTF::DefaultHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTableTraits>;

typedef struct RetainPtr<NSTimer> {
    void m_ptr;
} RetainPtr<NSTimer>;

typedef struct RetainPtr<WebGeolocationPosition> {
    void m_ptr;
} RetainPtr<WebGeolocationPosition>;

typedef struct RetainPtr<NSMutableDictionary> {
    void m_ptr;
} RetainPtr<NSMutableDictionary>;

typedef struct __compressed_pair<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>> *, std::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>>> {
    void __value_;
} __compressed_pair<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>> *, std::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>>>;

typedef struct unique_ptr<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>, std::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>>> {
    __compressed_pair<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>> *, std::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>>> __ptr_;
} unique_ptr<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>, std::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>>>;

typedef struct RetainPtr<NSMutableArray> {
    void m_ptr;
} RetainPtr<NSMutableArray>;

typedef struct HistoryItem {
} // Error Processing Struct Fields

typedef struct RefPtr<WebCore::HistoryItem, WTF::RawPtrTraits<WebCore::HistoryItem>, WTF::DefaultRefDerefTraits<WebCore::HistoryItem>> {
    HistoryItem m_ptr;
} RefPtr<WebCore::HistoryItem, WTF::RawPtrTraits<WebCore::HistoryItem>, WTF::DefaultRefDerefTraits<WebCore::HistoryItem>>;

typedef struct __compressed_pair<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16> *, std::default_delete<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16>>> {
    void __value_;
} __compressed_pair<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16> *, std::default_delete<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16>>>;

typedef struct unique_ptr<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16>, std::default_delete<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16>>> {
    __compressed_pair<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16> *, std::default_delete<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16>>> __ptr_;
} unique_ptr<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16>, std::default_delete<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16>>>;

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

typedef struct CGPath {
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

typedef struct WebInspectorFrontendClient {
} // Error Processing Struct Fields

typedef struct NakedPtr<WebInspectorFrontendClient> {
    WebInspectorFrontendClient m_ptr;
} NakedPtr<WebInspectorFrontendClient>;

typedef struct Element {
} // Error Processing Struct Fields

typedef struct RefPtr<WebCore::Element, WTF::RawPtrTraits<WebCore::Element>, WTF::DefaultRefDerefTraits<WebCore::Element>> {
    Element m_ptr;
} RefPtr<WebCore::Element, WTF::RawPtrTraits<WebCore::Element>, WTF::DefaultRefDerefTraits<WebCore::Element>>;

typedef struct RetainPtr<NSURLRequest> {
    void m_ptr;
} RetainPtr<NSURLRequest>;

typedef struct RetainPtr<NSURLResponse> {
    void m_ptr;
} RetainPtr<NSURLResponse>;

typedef struct InspectorController {
} // Error Processing Struct Fields

typedef struct NakedPtr<WebCore::InspectorController> {
    InspectorController m_ptr;
} NakedPtr<WebCore::InspectorController>;

typedef struct FileChooser {
} // Error Processing Struct Fields

typedef struct RefPtr<WebCore::FileChooser, WTF::RawPtrTraits<WebCore::FileChooser>, WTF::DefaultRefDerefTraits<WebCore::FileChooser>> {
    FileChooser m_ptr;
} RefPtr<WebCore::FileChooser, WTF::RawPtrTraits<WebCore::FileChooser>, WTF::DefaultRefDerefTraits<WebCore::FileChooser>>;

typedef struct CGPDFDocument {
} // Error Processing Struct Fields

typedef struct CGPDFPage {
} // Error Processing Struct Fields

typedef struct ArchiveResource {
} // Error Processing Struct Fields

typedef struct RefPtr<WebCore::ArchiveResource, WTF::RawPtrTraits<WebCore::ArchiveResource>, WTF::DefaultRefDerefTraits<WebCore::ArchiveResource>> {
    ArchiveResource m_ptr;
} RefPtr<WebCore::ArchiveResource, WTF::RawPtrTraits<WebCore::ArchiveResource>, WTF::DefaultRefDerefTraits<WebCore::ArchiveResource>>;

typedef struct NakedRef<WebCore::ArchiveResource> {
    ArchiveResource field0;
} NakedRef<WebCore::ArchiveResource>;

typedef struct WebSecurityOriginPrivate {
} // Error Processing Struct Fields

typedef struct TextIterator {
} // Error Processing Struct Fields

typedef struct __compressed_pair<WebCore::TextIterator *, std::default_delete<WebCore::TextIterator>> {
    TextIterator __value_;
} __compressed_pair<WebCore::TextIterator *, std::default_delete<WebCore::TextIterator>>;

typedef struct unique_ptr<WebCore::TextIterator, std::default_delete<WebCore::TextIterator>> {
    __compressed_pair<WebCore::TextIterator *, std::default_delete<WebCore::TextIterator>> __ptr_;
} unique_ptr<WebCore::TextIterator, std::default_delete<WebCore::TextIterator>>;

typedef struct Vector<unsigned short, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
    unsigned short m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<unsigned short, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>;

typedef struct UserContentURLPattern {
    BOOL m_invalid;
    String m_scheme;
    String m_host;
    String m_path;
    BOOL m_matchSubdomains;
} UserContentURLPattern;

typedef struct WebViewGroup {
} // Error Processing Struct Fields

typedef struct RefPtr<WebViewGroup, WTF::RawPtrTraits<WebViewGroup>, WTF::DefaultRefDerefTraits<WebViewGroup>> {
    WebViewGroup m_ptr;
} RefPtr<WebViewGroup, WTF::RawPtrTraits<WebViewGroup>, WTF::DefaultRefDerefTraits<WebViewGroup>>;

typedef struct RetainPtr<WebInspector> {
    void m_ptr;
} RetainPtr<WebInspector>;

typedef struct RetainPtr<WebNodeHighlight> {
    void m_ptr;
} RetainPtr<WebNodeHighlight>;

typedef struct ValidationBubble {
} // Error Processing Struct Fields

typedef struct RefPtr<WebCore::ValidationBubble, WTF::RawPtrTraits<WebCore::ValidationBubble>, WTF::DefaultRefDerefTraits<WebCore::ValidationBubble>> {
    ValidationBubble m_ptr;
} RefPtr<WebCore::ValidationBubble, WTF::RawPtrTraits<WebCore::ValidationBubble>, WTF::DefaultRefDerefTraits<WebCore::ValidationBubble>>;

typedef struct RetainPtr<WebPreferences> {
    void m_ptr;
} RetainPtr<WebPreferences>;

typedef struct RetainPtr<WAKWindow> {
    void m_ptr;
} RetainPtr<WAKWindow>;

typedef struct WebResourceDelegateImplementationCache {
    unk didReceiveAuthenticationChallengeFunc;
    unk canAuthenticateAgainstProtectionSpaceFunc;
    unk connectionPropertiesFunc;
    unk webThreadDidFinishLoadingFromDataSourceFunc;
    unk webThreadDidFailLoadingWithErrorFromDataSourceFunc;
    unk webThreadIdentifierForRequestFunc;
    unk webThreadDidLoadResourceFromMemoryCacheFunc;
    unk webThreadWillSendRequestFunc;
    unk webThreadDidReceiveResponseFunc;
    unk webThreadDidReceiveContentLengthFunc;
    unk webThreadWillCacheResponseFunc;
    unk identifierForRequestFunc;
    unk willSendRequestFunc;
    unk didReceiveResponseFunc;
    unk didReceiveContentLengthFunc;
    unk didFinishLoadingFromDataSourceFunc;
    unk didFailLoadingWithErrorFromDataSourceFunc;
    unk didLoadResourceFromMemoryCacheFunc;
    unk willCacheResponseFunc;
    unk plugInFailedWithErrorFunc;
    unk shouldUseCredentialStorageFunc;
    unk shouldPaintBrokenImageForURLFunc;
} WebResourceDelegateImplementationCache;

typedef struct WebFrameLoadDelegateImplementationCache {
    unk didCreateJavaScriptContextForFrameFunc;
    unk didClearWindowObjectForFrameFunc;
    unk didClearWindowObjectForFrameInScriptWorldFunc;
    unk didClearInspectorWindowObjectForFrameFunc;
    unk windowScriptObjectAvailableFunc;
    unk didHandleOnloadEventsForFrameFunc;
    unk didReceiveServerRedirectForProvisionalLoadForFrameFunc;
    unk didCancelClientRedirectForFrameFunc;
    unk willPerformClientRedirectToURLDelayFireDateForFrameFunc;
    unk didChangeLocationWithinPageForFrameFunc;
    unk didPushStateWithinPageForFrameFunc;
    unk didReplaceStateWithinPageForFrameFunc;
    unk didPopStateWithinPageForFrameFunc;
    unk willCloseFrameFunc;
    unk didStartProvisionalLoadForFrameFunc;
    unk didReceiveTitleForFrameFunc;
    unk didCommitLoadForFrameFunc;
    unk didFailProvisionalLoadWithErrorForFrameFunc;
    unk didFailLoadWithErrorForFrameFunc;
    unk didFinishLoadForFrameFunc;
    unk didFirstLayoutInFrameFunc;
    unk didFirstVisuallyNonEmptyLayoutInFrameFunc;
    unk didLayoutFunc;
    unk didReceiveIconForFrameFunc;
    unk didFinishDocumentLoadForFrameFunc;
    unk didDisplayInsecureContentFunc;
    unk didRunInsecureContentFunc;
    unk didDetectXSSFunc;
    unk didRemoveFrameFromHierarchyFunc;
    unk webThreadDidLayoutFunc;
} WebFrameLoadDelegateImplementationCache;

typedef struct WebScriptDebugDelegateImplementationCache {
    BOOL didParseSourceExpectsBaseLineNumber;
    BOOL exceptionWasRaisedExpectsHasHandlerFlag;
    unk didParseSourceFunc;
    unk failedToParseSourceFunc;
    unk exceptionWasRaisedFunc;
} WebScriptDebugDelegateImplementationCache;

typedef struct WebHistoryDelegateImplementationCache {
    unk navigatedFunc;
    unk clientRedirectFunc;
    unk serverRedirectFunc;
    unk deprecatedSetTitleFunc;
    unk setTitleFunc;
    unk populateVisitedLinksFunc;
} WebHistoryDelegateImplementationCache;

typedef struct RetainPtr<CGColor *> {
    void m_ptr;
} RetainPtr<CGColor *>;

typedef struct RetainPtr<NSMutableSet> {
    void m_ptr;
} RetainPtr<NSMutableSet>;

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

typedef struct RetainPtr<WebUITextIndicatorData> {
    void m_ptr;
} RetainPtr<WebUITextIndicatorData>;

typedef struct HashTable<unsigned long, WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id>>>, WTF::DefaultHash<unsigned long>, WTF::HashMap<unsigned long, WTF::RetainPtr<id>>::KeyValuePairTraits, WTF::HashTraits<unsigned long>> {
    unk ;
    void m_table;
    unsigned int m_tableForLLDB;
} HashTable<unsigned long, WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id>>>, WTF::DefaultHash<unsigned long>, WTF::HashMap<unsigned long, WTF::RetainPtr<id>>::KeyValuePairTraits, WTF::HashTraits<unsigned long>>;

typedef struct HashMap<unsigned long, WTF::RetainPtr<id>, WTF::DefaultHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id>>, WTF::HashTableTraits> {
    HashTable<unsigned long, WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id>>>, WTF::DefaultHash<unsigned long>, WTF::HashMap<unsigned long, WTF::RetainPtr<id>>::KeyValuePairTraits, WTF::HashTraits<unsigned long>> m_impl;
} HashMap<unsigned long, WTF::RetainPtr<id>, WTF::DefaultHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id>>, WTF::HashTableTraits>;

typedef struct LayerFlushController {
} // Error Processing Struct Fields

typedef struct RefPtr<LayerFlushController, WTF::RawPtrTraits<LayerFlushController>, WTF::DefaultRefDerefTraits<LayerFlushController>> {
    LayerFlushController m_ptr;
} RefPtr<LayerFlushController, WTF::RawPtrTraits<LayerFlushController>, WTF::DefaultRefDerefTraits<LayerFlushController>>;

typedef struct RetainPtr<WebVideoFullscreenController> {
    void m_ptr;
} RetainPtr<WebVideoFullscreenController>;

typedef struct Vector<WTF::RetainPtr<WebVideoFullscreenController>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
    void m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<WTF::RetainPtr<WebVideoFullscreenController>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>;

typedef struct RetainPtr<WebFullScreenController> {
    void m_ptr;
} RetainPtr<WebFullScreenController>;

typedef struct RetainPtr<WebIndicateLayer> {
    void m_ptr;
} RetainPtr<WebIndicateLayer>;

typedef struct RetainPtr<WebFixedPositionContent> {
    void m_ptr;
} RetainPtr<WebFixedPositionContent>;

typedef struct AlternativeTextUIController {
} // Error Processing Struct Fields

typedef struct __compressed_pair<WebCore::AlternativeTextUIController *, std::default_delete<WebCore::AlternativeTextUIController>> {
    AlternativeTextUIController __value_;
} __compressed_pair<WebCore::AlternativeTextUIController *, std::default_delete<WebCore::AlternativeTextUIController>>;

typedef struct unique_ptr<WebCore::AlternativeTextUIController, std::default_delete<WebCore::AlternativeTextUIController>> {
    __compressed_pair<WebCore::AlternativeTextUIController *, std::default_delete<WebCore::AlternativeTextUIController>> __ptr_;
} unique_ptr<WebCore::AlternativeTextUIController, std::default_delete<WebCore::AlternativeTextUIController>>;

typedef struct RetainPtr<NSData> {
    void m_ptr;
} RetainPtr<NSData>;

typedef struct WebObjectInternal {
} // Error Processing Struct Fields

