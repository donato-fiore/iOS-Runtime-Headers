typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct StringImpl {
} // Error Processing Struct Fields

typedef struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> {
    StringImpl m_ptr;
} RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>>;

typedef struct String {
    RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> m_impl;
} String;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct RetainPtr<_WKAuthenticationExtensionsClientOutputs> {
    void m_ptr;
} RetainPtr<_WKAuthenticationExtensionsClientOutputs>;

typedef struct Object {
    unk field0;
    id field1;
} Object;

typedef struct type {
    unsigned char __lx;
} type;

typedef struct ObjectStorage<API::CustomHeaderFields> {
    type data;
} ObjectStorage<API::CustomHeaderFields>;

typedef struct ObjectStorage<API::ResourceLoadStatisticsFirstParty> {
    type data;
} ObjectStorage<API::ResourceLoadStatisticsFirstParty>;

typedef struct ObjectStorage<API::ResourceLoadStatisticsThirdParty> {
    type data;
} ObjectStorage<API::ResourceLoadStatisticsThirdParty>;

typedef struct __IOHIDEvent {
} // Error Processing Struct Fields

typedef struct RetainPtr<__IOHIDEventSystemClient *> {
    void m_ptr;
} RetainPtr<__IOHIDEventSystemClient *>;

typedef struct ? {
    int identifier;
    CGPoint point;
    CGFloat pathMajorRadius;
    CGFloat pathPressure;
    unsigned char pathProximity;
} ?;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct __CFURL {
} // Error Processing Struct Fields

typedef struct RetainPtr<NSString> {
    void m_ptr;
} RetainPtr<NSString>;

typedef struct WeakObjCPtr<WKPreferenceObserver> {
    id m_weakReference;
} WeakObjCPtr<WKPreferenceObserver>;

typedef struct Vector<WTF::RetainPtr<WKUserDefaults>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
    void m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<WTF::RetainPtr<WKUserDefaults>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>;

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

typedef struct RetainPtr<NSURL> {
    void m_ptr;
} RetainPtr<NSURL>;

typedef struct RetainPtr<NSFileWrapper> {
    void m_ptr;
} RetainPtr<NSFileWrapper>;

typedef struct RetainPtr<UIImage> {
    void m_ptr;
} RetainPtr<UIImage>;

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

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
} CGAffineTransform;

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

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct CAFrameRateRange {
    float field0;
    float field1;
    float field2;
} CAFrameRateRange;

typedef struct _UIUpdateRequest {
} // Error Processing Struct Fields

typedef struct _UIUpdateRequestRecord {
    _UIUpdateRequest field0;
    unsigned int field1;
} _UIUpdateRequestRecord;

typedef struct UIOffset {
    CGFloat horizontal;
    CGFloat vertical;
} UIOffset;

typedef struct ObjectIdentifier<WebKit::LegacyCustomProtocolIDType> {
    NSUInteger m_identifier;
} ObjectIdentifier<WebKit::LegacyCustomProtocolIDType>;

typedef struct __CFRunLoop {
} // Error Processing Struct Fields

typedef struct RetainPtr<__CFRunLoop *> {
    void m_ptr;
} RetainPtr<__CFRunLoop *>;

typedef struct NetworkSessionCocoa {
} // Error Processing Struct Fields

typedef struct NakedRef<WebKit::NetworkSessionCocoa> {
    NetworkSessionCocoa field0;
} NakedRef<WebKit::NetworkSessionCocoa>;

typedef struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> {
    void m_ptr;
} RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>>;

typedef struct WeakPtr<WebKit::NetworkSessionCocoa, WTF::EmptyCounter> {
    RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> m_impl;
} WeakPtr<WebKit::NetworkSessionCocoa, WTF::EmptyCounter>;

typedef struct WeakPtr<WebKit::SessionWrapper, WTF::EmptyCounter> {
    RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> m_impl;
} WeakPtr<WebKit::SessionWrapper, WTF::EmptyCounter>;

typedef struct RetainPtr<PKPaymentRequest> {
    void m_ptr;
} RetainPtr<PKPaymentRequest>;

typedef struct RetainPtr<NSArray<PKPaymentSummaryItem *>> {
    void m_ptr;
} RetainPtr<NSArray<PKPaymentSummaryItem *>>;

typedef struct RetainPtr<NSArray<PKShippingMethod *>> {
    void m_ptr;
} RetainPtr<NSArray<PKShippingMethod *>>;

typedef struct RetainPtr<NSError> {
    void m_ptr;
} RetainPtr<NSError>;

typedef struct WeakPtr<WebKit::PaymentAuthorizationPresenter, WTF::EmptyCounter> {
    RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> m_impl;
} WeakPtr<WebKit::PaymentAuthorizationPresenter, WTF::EmptyCounter>;

typedef struct BlockPtr<void (PKPaymentAuthorizationResult *)> {
    id m_block;
    unk field1;
} BlockPtr<void (PKPaymentAuthorizationResult *)>;

typedef struct BlockPtr<void (PKPaymentMerchantSession *, NSError *)> {
    id m_block;
    unk field1;
} BlockPtr<void (PKPaymentMerchantSession *, NSError *)>;

typedef struct BlockPtr<void (PKPaymentRequestPaymentMethodUpdate *)> {
    id m_block;
    unk field1;
} BlockPtr<void (PKPaymentRequestPaymentMethodUpdate *)>;

typedef struct BlockPtr<void (PKPaymentRequestShippingContactUpdate *)> {
    id m_block;
    unk field1;
} BlockPtr<void (PKPaymentRequestShippingContactUpdate *)>;

typedef struct BlockPtr<void (PKPaymentRequestShippingMethodUpdate *)> {
    id m_block;
    unk field1;
} BlockPtr<void (PKPaymentRequestShippingMethodUpdate *)>;

typedef struct BlockPtr<void (PKPaymentRequestCouponCodeUpdate *)> {
    id m_block;
    unk field1;
} BlockPtr<void (PKPaymentRequestCouponCodeUpdate *)>;

typedef struct ObjectIdentifier<WebKit::WebPageProxyIdentifierType> {
    NSUInteger m_identifier;
} ObjectIdentifier<WebKit::WebPageProxyIdentifierType>;

typedef struct ObjectIdentifier<WebCore::PageIdentifierType> {
    NSUInteger m_identifier;
} ObjectIdentifier<WebCore::PageIdentifierType>;

typedef struct WebPageProxy {
} // Error Processing Struct Fields

typedef struct NakedRef<WebKit::WebPageProxy> {
    WebPageProxy field0;
} NakedRef<WebKit::WebPageProxy>;

typedef struct WebPage {
} // Error Processing Struct Fields

typedef struct NakedRef<WebKit::WebPage> {
    WebPage field0;
} NakedRef<WebKit::WebPage>;

typedef struct RetainPtr<_WKRemoteObjectRegistry> {
    void m_ptr;
} RetainPtr<_WKRemoteObjectRegistry>;

typedef struct RetainPtr<_WKRemoteObjectInterface> {
    void m_ptr;
} RetainPtr<_WKRemoteObjectInterface>;

typedef struct Dictionary {
} // Error Processing Struct Fields

typedef struct RefPtr<API::Dictionary, WTF::RawPtrTraits<API::Dictionary>, WTF::DefaultRefDerefTraits<API::Dictionary>> {
    Dictionary m_ptr;
} RefPtr<API::Dictionary, WTF::RawPtrTraits<API::Dictionary>, WTF::DefaultRefDerefTraits<API::Dictionary>>;

typedef struct HashTable<NSObject *, NSObject *, WTF::IdentityExtractor, WTF::DefaultHash<NSObject *>, WTF::HashTraits<NSObject *>, WTF::HashTraits<NSObject *>> {
    unk ;
    id m_table;
    unsigned int m_tableForLLDB;
} HashTable<NSObject *, NSObject *, WTF::IdentityExtractor, WTF::DefaultHash<NSObject *>, WTF::HashTraits<NSObject *>, WTF::HashTraits<NSObject *>>;

typedef struct HashSet<NSObject *, WTF::DefaultHash<NSObject *>, WTF::HashTraits<NSObject *>, WTF::HashTableTraits> {
    HashTable<NSObject *, NSObject *, WTF::IdentityExtractor, WTF::DefaultHash<NSObject *>, WTF::HashTraits<NSObject *>, WTF::HashTraits<NSObject *>> m_impl;
} HashSet<NSObject *, WTF::DefaultHash<NSObject *>, WTF::HashTraits<NSObject *>, WTF::HashTableTraits>;

typedef struct ObjectStorage<API::FrameHandle> {
    type data;
} ObjectStorage<API::FrameHandle>;

typedef struct HashTable<SEL *, WTF::KeyValuePair<SEL *, MethodInfo>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<SEL *, MethodInfo>>, WTF::DefaultHash<SEL *>, WTF::HashMap<SEL *, MethodInfo>::KeyValuePairTraits, WTF::HashTraits<SEL *>> {
    unk ;
    void m_table;
    unsigned int m_tableForLLDB;
} HashTable<SEL *, WTF::KeyValuePair<SEL *, MethodInfo>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<SEL *, MethodInfo>>, WTF::DefaultHash<SEL *>, WTF::HashMap<SEL *, MethodInfo>::KeyValuePairTraits, WTF::HashTraits<SEL *>>;

typedef struct HashMap<SEL *, MethodInfo, WTF::DefaultHash<SEL *>, WTF::HashTraits<SEL *>, WTF::HashTraits<MethodInfo>, WTF::HashTableTraits> {
    HashTable<SEL *, WTF::KeyValuePair<SEL *, MethodInfo>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<SEL *, MethodInfo>>, WTF::DefaultHash<SEL *>, WTF::HashMap<SEL *, MethodInfo>::KeyValuePairTraits, WTF::HashTraits<SEL *>> m_impl;
} HashMap<SEL *, MethodInfo, WTF::DefaultHash<SEL *>, WTF::HashTraits<SEL *>, WTF::HashTraits<MethodInfo>, WTF::HashTableTraits>;

typedef struct RemoteObjectRegistry {
} // Error Processing Struct Fields

typedef struct __compressed_pair<WebKit::RemoteObjectRegistry *, std::default_delete<WebKit::RemoteObjectRegistry>> {
    RemoteObjectRegistry __value_;
} __compressed_pair<WebKit::RemoteObjectRegistry *, std::default_delete<WebKit::RemoteObjectRegistry>>;

typedef struct unique_ptr<WebKit::RemoteObjectRegistry, std::default_delete<WebKit::RemoteObjectRegistry>> {
    __compressed_pair<WebKit::RemoteObjectRegistry *, std::default_delete<WebKit::RemoteObjectRegistry>> __ptr_;
} unique_ptr<WebKit::RemoteObjectRegistry, std::default_delete<WebKit::RemoteObjectRegistry>>;

typedef struct RetainPtr<NSMapTable> {
    void m_ptr;
} RetainPtr<NSMapTable>;

typedef struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, std::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, std::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>>>, WTF::DefaultHash<WTF::String>, WTF::HashMap<WTF::String, std::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>>::KeyValuePairTraits, WTF::HashTraits<WTF::String>> {
    unk ;
    void m_table;
    unsigned int m_tableForLLDB;
} HashTable<WTF::String, WTF::KeyValuePair<WTF::String, std::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, std::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>>>, WTF::DefaultHash<WTF::String>, WTF::HashMap<WTF::String, std::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>>::KeyValuePairTraits, WTF::HashTraits<WTF::String>>;

typedef struct HashMap<WTF::String, std::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>, WTF::DefaultHash<WTF::String>, WTF::HashTraits<WTF::String>, WTF::HashTraits<std::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>>, WTF::HashTableTraits> {
    HashTable<WTF::String, WTF::KeyValuePair<WTF::String, std::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, std::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>>>, WTF::DefaultHash<WTF::String>, WTF::HashMap<WTF::String, std::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>>::KeyValuePairTraits, WTF::HashTraits<WTF::String>> m_impl;
} HashMap<WTF::String, std::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>, WTF::DefaultHash<WTF::String>, WTF::HashTraits<WTF::String>, WTF::HashTraits<std::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>>, WTF::HashTableTraits>;

typedef struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, PendingReply>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, PendingReply>>, WTF::DefaultHash<unsigned long long>, WTF::HashMap<unsigned long long, PendingReply>::KeyValuePairTraits, WTF::HashTraits<unsigned long long>> {
    unk ;
    void m_table;
    unsigned int m_tableForLLDB;
} HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, PendingReply>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, PendingReply>>, WTF::DefaultHash<unsigned long long>, WTF::HashMap<unsigned long long, PendingReply>::KeyValuePairTraits, WTF::HashTraits<unsigned long long>>;

typedef struct HashMap<unsigned long long, PendingReply, WTF::DefaultHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<PendingReply>, WTF::HashTableTraits> {
    HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, PendingReply>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, PendingReply>>, WTF::DefaultHash<unsigned long long>, WTF::HashMap<unsigned long long, PendingReply>::KeyValuePairTraits, WTF::HashTraits<unsigned long long>> m_impl;
} HashMap<unsigned long long, PendingReply, WTF::DefaultHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<PendingReply>, WTF::HashTableTraits>;

typedef struct ObjectStorage<API::Array> {
    type data;
} ObjectStorage<API::Array>;

typedef struct ObjectStorage<API::Data> {
    type data;
} ObjectStorage<API::Data>;

typedef struct ObjectStorage<API::Dictionary> {
    type data;
} ObjectStorage<API::Dictionary>;

typedef struct RetainPtr<NSObject> {
    void m_ptr;
} RetainPtr<NSObject>;

typedef struct NSEdgeInsets {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} NSEdgeInsets;

typedef struct RetainPtr<CGImage *> {
    void m_ptr;
} RetainPtr<CGImage *>;

typedef struct RetainPtr<NSArray> {
    void m_ptr;
} RetainPtr<NSArray>;

typedef struct RetainPtr<_WKActivatedElementInfo> {
    void m_ptr;
} RetainPtr<_WKActivatedElementInfo>;

typedef struct RetainPtr<UIImageView> {
    void m_ptr;
} RetainPtr<UIImageView>;

typedef struct RetainPtr<_WKFrameHandle> {
    void m_ptr;
} RetainPtr<_WKFrameHandle>;

typedef struct RetainPtr<CGPDFDocument *> {
    void m_ptr;
} RetainPtr<CGPDFDocument *>;

typedef struct __SecTrust {
} // Error Processing Struct Fields

typedef struct RefPtr<WebKit::WebPageProxy, WTF::RawPtrTraits<WebKit::WebPageProxy>, WTF::DefaultRefDerefTraits<WebKit::WebPageProxy>> {
    WebPageProxy m_ptr;
} RefPtr<WebKit::WebPageProxy, WTF::RawPtrTraits<WebKit::WebPageProxy>, WTF::DefaultRefDerefTraits<WebKit::WebPageProxy>>;

typedef struct PageLoadStateObserver {
} // Error Processing Struct Fields

typedef struct __compressed_pair<WebKit::PageLoadStateObserver *, std::default_delete<WebKit::PageLoadStateObserver>> {
    PageLoadStateObserver __value_;
} __compressed_pair<WebKit::PageLoadStateObserver *, std::default_delete<WebKit::PageLoadStateObserver>>;

typedef struct unique_ptr<WebKit::PageLoadStateObserver, std::default_delete<WebKit::PageLoadStateObserver>> {
    __compressed_pair<WebKit::PageLoadStateObserver *, std::default_delete<WebKit::PageLoadStateObserver>> __ptr_;
} unique_ptr<WebKit::PageLoadStateObserver, std::default_delete<WebKit::PageLoadStateObserver>>;

typedef struct RetainPtr<WKWebView> {
    void field0;
} RetainPtr<WKWebView>;

typedef struct ObjectStorage<WebKit::WebBackForwardList> {
    type data;
} ObjectStorage<WebKit::WebBackForwardList>;

typedef struct ObjectStorage<WebKit::WebBackForwardListItem> {
    type data;
} ObjectStorage<WebKit::WebBackForwardListItem>;

typedef struct OpaqueWKPage {
} // Error Processing Struct Fields

typedef struct WeakObjCPtr<id<WKBrowsingContextHistoryDelegate>> {
    id m_weakReference;
} WeakObjCPtr<id<WKBrowsingContextHistoryDelegate>>;

typedef struct WeakObjCPtr<id<WKBrowsingContextLoadDelegate>> {
    id m_weakReference;
} WeakObjCPtr<id<WKBrowsingContextLoadDelegate>>;

typedef struct WeakObjCPtr<id<WKBrowsingContextPolicyDelegate>> {
    id m_weakReference;
} WeakObjCPtr<id<WKBrowsingContextPolicyDelegate>>;

typedef struct OpaqueWKPageGroup {
} // Error Processing Struct Fields

typedef struct ObjectStorage<WebKit::WebPageGroup> {
    type data;
} ObjectStorage<WebKit::WebPageGroup>;

typedef struct WeakObjCPtr<id<WKConnectionDelegate>> {
    id m_weakReference;
} WeakObjCPtr<id<WKConnectionDelegate>>;

typedef struct ObjectStorage<API::ContentRuleList> {
    type data;
} ObjectStorage<API::ContentRuleList>;

typedef struct ObjectStorage<API::ContentRuleListStore> {
    type data;
} ObjectStorage<API::ContentRuleListStore>;

typedef struct ObjectStorage<API::ContentWorld> {
    type data;
} ObjectStorage<API::ContentWorld>;

typedef struct ObjectStorage<API::ContextMenuElementInfo> {
    type data;
} ObjectStorage<API::ContextMenuElementInfo>;

typedef struct ObjectStorage<WebKit::DownloadProxy> {
    type data;
} ObjectStorage<WebKit::DownloadProxy>;

typedef struct WeakObjCPtr<id<WKDownloadDelegate>> {
    id m_weakReference;
} WeakObjCPtr<id<WKDownloadDelegate>>;

typedef struct ObjectStorage<API::FrameInfo> {
    type data;
} ObjectStorage<API::FrameInfo>;

typedef struct ObjectStorage<API::HTTPCookieStore> {
    type data;
} ObjectStorage<API::HTTPCookieStore>;

typedef struct HashTable<const void *, WTF::KeyValuePair<const void *, std::unique_ptr<WKHTTPCookieStoreObserver>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<const void *, std::unique_ptr<WKHTTPCookieStoreObserver>>>, WTF::DefaultHash<const void *>, WTF::HashMap<const void *, std::unique_ptr<WKHTTPCookieStoreObserver>>::KeyValuePairTraits, WTF::HashTraits<const void *>> {
    unk ;
    void m_table;
    unsigned int m_tableForLLDB;
} HashTable<const void *, WTF::KeyValuePair<const void *, std::unique_ptr<WKHTTPCookieStoreObserver>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<const void *, std::unique_ptr<WKHTTPCookieStoreObserver>>>, WTF::DefaultHash<const void *>, WTF::HashMap<const void *, std::unique_ptr<WKHTTPCookieStoreObserver>>::KeyValuePairTraits, WTF::HashTraits<const void *>>;

typedef struct HashMap<const void *, std::unique_ptr<WKHTTPCookieStoreObserver>, WTF::DefaultHash<const void *>, WTF::HashTraits<const void *>, WTF::HashTraits<std::unique_ptr<WKHTTPCookieStoreObserver>>, WTF::HashTableTraits> {
    HashTable<const void *, WTF::KeyValuePair<const void *, std::unique_ptr<WKHTTPCookieStoreObserver>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<const void *, std::unique_ptr<WKHTTPCookieStoreObserver>>>, WTF::DefaultHash<const void *>, WTF::HashMap<const void *, std::unique_ptr<WKHTTPCookieStoreObserver>>::KeyValuePairTraits, WTF::HashTraits<const void *>> m_impl;
} HashMap<const void *, std::unique_ptr<WKHTTPCookieStoreObserver>, WTF::DefaultHash<const void *>, WTF::HashTraits<const void *>, WTF::HashTraits<std::unique_ptr<WKHTTPCookieStoreObserver>>, WTF::HashTableTraits>;

typedef struct ObjectStorage<API::Navigation> {
    type data;
} ObjectStorage<API::Navigation>;

typedef struct ObjectStorage<API::NavigationAction> {
    type data;
} ObjectStorage<API::NavigationAction>;

typedef struct ObjectStorage<API::NavigationData> {
    type data;
} ObjectStorage<API::NavigationData>;

typedef struct ObjectStorage<API::NavigationResponse> {
    type data;
} ObjectStorage<API::NavigationResponse>;

typedef struct ObjectStorage<WebKit::WebPreferences> {
    type data;
} ObjectStorage<WebKit::WebPreferences>;

typedef struct OpaqueWKContext {
} // Error Processing Struct Fields

typedef struct WebProcessPool {
} // Error Processing Struct Fields

typedef struct RefPtr<WebKit::WebProcessPool, WTF::RawPtrTraits<WebKit::WebProcessPool>, WTF::DefaultRefDerefTraits<WebKit::WebProcessPool>> {
    WebProcessPool m_ptr;
} RefPtr<WebKit::WebProcessPool, WTF::RawPtrTraits<WebKit::WebProcessPool>, WTF::DefaultRefDerefTraits<WebKit::WebProcessPool>>;

typedef struct WeakObjCPtr<id<WKProcessGroupDelegate>> {
    id m_weakReference;
} WeakObjCPtr<id<WKProcessGroupDelegate>>;

typedef struct RetainPtr<WKGeolocationProviderIOS> {
    void m_ptr;
} RetainPtr<WKGeolocationProviderIOS>;

typedef struct ObjectStorage<WebKit::WebProcessPool> {
    type data;
} ObjectStorage<WebKit::WebProcessPool>;

typedef struct WeakObjCPtr<id<_WKAutomationDelegate>> {
    id m_weakReference;
} WeakObjCPtr<id<_WKAutomationDelegate>>;

typedef struct WeakObjCPtr<id<_WKDownloadDelegate>> {
    id m_weakReference;
} WeakObjCPtr<id<_WKDownloadDelegate>>;

typedef struct RetainPtr<_WKAutomationSession> {
    void m_ptr;
} RetainPtr<_WKAutomationSession>;

typedef struct RetainPtr<id<_WKGeolocationCoreLocationProvider>> {
    void m_ptr;
} RetainPtr<id<_WKGeolocationCoreLocationProvider>>;

typedef struct RetainPtr<id> {
    void m_ptr;
} RetainPtr<id>;

typedef struct WeakObjCPtr<WKWebView> {
    id m_weakReference;
} WeakObjCPtr<WKWebView>;

typedef struct RetainPtr<WKFrameInfo> {
    void m_ptr;
} RetainPtr<WKFrameInfo>;

typedef struct RetainPtr<WKContentWorld> {
    void m_ptr;
} RetainPtr<WKContentWorld>;

typedef struct ObjectStorage<API::SecurityOrigin> {
    type data;
} ObjectStorage<API::SecurityOrigin>;

typedef struct WKRetainPtr<const void *> {
    void m_ptr;
} WKRetainPtr<const void *>;

typedef struct ObjectStorage<WebKit::WebURLSchemeTask> {
    type data;
} ObjectStorage<WebKit::WebURLSchemeTask>;

typedef struct ObjectStorage<WebKit::WebUserContentControllerProxy> {
    type data;
} ObjectStorage<WebKit::WebUserContentControllerProxy>;

typedef struct ObjectStorage<API::UserScript> {
    type data;
} ObjectStorage<API::UserScript>;

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
    FloatPoint m_location;
    FloatSize m_size;
} FloatRect;

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
    int m_x;
    int m_y;
} IntPoint;

typedef struct RetainPtr<WKWebViewConfiguration> {
    void m_ptr;
} RetainPtr<WKWebViewConfiguration>;

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

typedef struct PageConfiguration {
} // Error Processing Struct Fields

typedef struct Ref<API::PageConfiguration, WTF::RawPtrTraits<API::PageConfiguration>> {
    PageConfiguration field0;
} Ref<API::PageConfiguration, WTF::RawPtrTraits<API::PageConfiguration>>;

typedef struct RefPtr<API::PageConfiguration, WTF::RawPtrTraits<API::PageConfiguration>, WTF::DefaultRefDerefTraits<API::PageConfiguration>> {
    PageConfiguration m_ptr;
} RefPtr<API::PageConfiguration, WTF::RawPtrTraits<API::PageConfiguration>, WTF::DefaultRefDerefTraits<API::PageConfiguration>>;

typedef struct RetainPtr<WKProcessPool> {
    void m_ptr;
} RetainPtr<WKProcessPool>;

typedef struct LazyInitialized<WTF::RetainPtr<WKProcessPool>> {
    BOOL m_isInitialized;
    RetainPtr<WKProcessPool> m_value;
} LazyInitialized<WTF::RetainPtr<WKProcessPool>>;

typedef struct RetainPtr<WKPreferences> {
    void m_ptr;
} RetainPtr<WKPreferences>;

typedef struct LazyInitialized<WTF::RetainPtr<WKPreferences>> {
    BOOL m_isInitialized;
    RetainPtr<WKPreferences> m_value;
} LazyInitialized<WTF::RetainPtr<WKPreferences>>;

typedef struct RetainPtr<WKUserContentController> {
    void m_ptr;
} RetainPtr<WKUserContentController>;

typedef struct LazyInitialized<WTF::RetainPtr<WKUserContentController>> {
    BOOL m_isInitialized;
    RetainPtr<WKUserContentController> m_value;
} LazyInitialized<WTF::RetainPtr<WKUserContentController>>;

typedef struct RetainPtr<_WKVisitedLinkStore> {
    void m_ptr;
} RetainPtr<_WKVisitedLinkStore>;

typedef struct LazyInitialized<WTF::RetainPtr<_WKVisitedLinkStore>> {
    BOOL m_isInitialized;
    RetainPtr<_WKVisitedLinkStore> m_value;
} LazyInitialized<WTF::RetainPtr<_WKVisitedLinkStore>>;

typedef struct RetainPtr<WKWebsiteDataStore> {
    void m_ptr;
} RetainPtr<WKWebsiteDataStore>;

typedef struct LazyInitialized<WTF::RetainPtr<WKWebsiteDataStore>> {
    BOOL m_isInitialized;
    RetainPtr<WKWebsiteDataStore> m_value;
} LazyInitialized<WTF::RetainPtr<WKWebsiteDataStore>>;

typedef struct RetainPtr<WKWebpagePreferences> {
    void m_ptr;
} RetainPtr<WKWebpagePreferences>;

typedef struct LazyInitialized<WTF::RetainPtr<WKWebpagePreferences>> {
    BOOL m_isInitialized;
    RetainPtr<WKWebpagePreferences> m_value;
} LazyInitialized<WTF::RetainPtr<WKWebpagePreferences>>;

typedef struct optional<WTF::RetainPtr<NSString>> {
    unk ;
    char __null_state_;
    RetainPtr<NSString> __val_;
    BOOL __engaged_;
} optional<WTF::RetainPtr<NSString>>;

typedef struct RetainPtr<WKWebViewContentProviderRegistry> {
    void m_ptr;
} RetainPtr<WKWebViewContentProviderRegistry>;

typedef struct LazyInitialized<WTF::RetainPtr<WKWebViewContentProviderRegistry>> {
    BOOL m_isInitialized;
    RetainPtr<WKWebViewContentProviderRegistry> m_value;
} LazyInitialized<WTF::RetainPtr<WKWebViewContentProviderRegistry>>;

typedef struct RetainPtr<NSArray<NSString *>> {
    void m_ptr;
} RetainPtr<NSArray<NSString *>>;

typedef struct ObjectStorage<API::WebsitePolicies> {
    type data;
} ObjectStorage<API::WebsitePolicies>;

typedef struct ObjectStorage<API::WebsiteDataRecord> {
    type data;
} ObjectStorage<API::WebsiteDataRecord>;

typedef struct ObjectStorage<WebKit::WebsiteDataStore> {
    type data;
} ObjectStorage<WebKit::WebsiteDataStore>;

typedef struct WeakObjCPtr<id<_WKWebsiteDataStoreDelegate>> {
    id m_weakReference;
} WeakObjCPtr<id<_WKWebsiteDataStoreDelegate>>;

typedef struct ObjectStorage<API::WindowFeatures> {
    type data;
} ObjectStorage<API::WindowFeatures>;

typedef struct ShareableBitmap {
} // Error Processing Struct Fields

typedef struct RefPtr<WebKit::ShareableBitmap, WTF::RawPtrTraits<WebKit::ShareableBitmap>, WTF::DefaultRefDerefTraits<WebKit::ShareableBitmap>> {
    ShareableBitmap m_ptr;
} RefPtr<WebKit::ShareableBitmap, WTF::RawPtrTraits<WebKit::ShareableBitmap>, WTF::DefaultRefDerefTraits<WebKit::ShareableBitmap>>;

typedef struct RetainPtr<NSDictionary> {
    void m_ptr;
} RetainPtr<NSDictionary>;

typedef struct RetainPtr<NSData> {
    void m_ptr;
} RetainPtr<NSData>;

typedef struct ObjectStorage<API::ApplicationManifest> {
    type data;
} ObjectStorage<API::ApplicationManifest>;

typedef struct ObjectStorage<API::Attachment> {
    type data;
} ObjectStorage<API::Attachment>;

typedef struct ObjectStorage<WebKit::WebAutomationSession> {
    type data;
} ObjectStorage<WebKit::WebAutomationSession>;

typedef struct RetainPtr<_WKAutomationSessionConfiguration> {
    void m_ptr;
} RetainPtr<_WKAutomationSessionConfiguration>;

typedef struct WeakObjCPtr<id<_WKAutomationSessionDelegate>> {
    id m_weakReference;
} WeakObjCPtr<id<_WKAutomationSessionDelegate>>;

typedef struct ObjectStorage<API::ContentRuleListAction> {
    type data;
} ObjectStorage<API::ContentRuleListAction>;

typedef struct RetainPtr<WKDownload> {
    void m_ptr;
} RetainPtr<WKDownload>;

typedef struct WeakObjCPtr<WKActionSheetAssistant> {
    id m_weakReference;
} WeakObjCPtr<WKActionSheetAssistant>;

typedef struct ObjectStorage<API::ExperimentalFeature> {
    type data;
} ObjectStorage<API::ExperimentalFeature>;

typedef struct ObjectStorage<API::FrameTreeNode> {
    type data;
} ObjectStorage<API::FrameTreeNode>;

typedef struct ObjectStorage<WebKit::WebGeolocationPosition> {
    type data;
} ObjectStorage<WebKit::WebGeolocationPosition>;

typedef struct ObjectStorage<WebKit::WebInspectorUIProxy> {
    type data;
} ObjectStorage<WebKit::WebInspectorUIProxy>;

typedef struct WeakObjCPtr<id<_WKInspectorDelegate>> {
    id m_weakReference;
} WeakObjCPtr<id<_WKInspectorDelegate>>;

typedef struct ObjectStorage<API::InspectorConfiguration> {
    type data;
} ObjectStorage<API::InspectorConfiguration>;

typedef struct ObjectStorage<API::DebuggableInfo> {
    type data;
} ObjectStorage<API::DebuggableInfo>;

typedef struct ObjectStorage<API::InternalDebugFeature> {
    type data;
} ObjectStorage<API::InternalDebugFeature>;

typedef struct RetainPtr<NSNumber> {
    void m_ptr;
} RetainPtr<NSNumber>;

typedef struct RetainPtr<NSMutableDictionary> {
    void m_ptr;
} RetainPtr<NSMutableDictionary>;

typedef struct ObjectStorage<API::ProcessPoolConfiguration> {
    type data;
} ObjectStorage<API::ProcessPoolConfiguration>;

typedef struct ObjectStorage<API::ResourceLoadInfo> {
    type data;
} ObjectStorage<API::ResourceLoadInfo>;

typedef struct BackForwardListItemState {
} // Error Processing Struct Fields

typedef struct Vector<WebKit::BackForwardListItemState, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
    BackForwardListItemState m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<WebKit::BackForwardListItemState, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>;

typedef struct optional<unsigned int> {
    unk ;
    char __null_state_;
    unsigned int __val_;
    BOOL __engaged_;
} optional<unsigned int>;

typedef struct BackForwardListState {
    Vector<WebKit::BackForwardListItemState, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> items;
    optional<unsigned int> currentIndex;
} BackForwardListState;

typedef struct URL {
    String m_string;
    BOOL m_isValid;
    BOOL m_protocolIsInHTTPFamily;
    BOOL m_cannotBeABaseURL;
    BOOL m_portLength;
    BOOL m_schemeEnd;
    unsigned int m_userStart;
    unsigned int m_userEnd;
    unsigned int m_passwordEnd;
    unsigned int m_hostEnd;
    unsigned int m_pathAfterLastSlash;
    unsigned int m_pathEnd;
    unsigned int m_queryEnd;
} URL;

typedef struct SessionState {
    BackForwardListState backForwardListState;
    NSUInteger renderTreeSize;
    URL provisionalURL;
} SessionState;

typedef struct ObjectIdentifier<WebCore::DocumentIdentifierType> {
    NSUInteger m_identifier;
} ObjectIdentifier<WebCore::DocumentIdentifierType>;

typedef struct ObjectIdentifier<WebCore::ElementIdentifierType> {
    NSUInteger m_identifier;
} ObjectIdentifier<WebCore::ElementIdentifierType>;

typedef struct ElementContext {
    FloatRect boundingRect;
    ObjectIdentifier<WebCore::PageIdentifierType> webPageIdentifier;
    ObjectIdentifier<WebCore::DocumentIdentifierType> documentIdentifier;
    ObjectIdentifier<WebCore::ElementIdentifierType> elementIdentifier;
} ElementContext;

typedef struct RetainPtr<NSArray<_WKTextManipulationToken *>> {
    void m_ptr;
} RetainPtr<NSArray<_WKTextManipulationToken *>>;

typedef struct RetainPtr<NSDictionary<NSString *,id>> {
    void m_ptr;
} RetainPtr<NSDictionary<NSString *,id>>;

typedef struct RetainPtr<WKContentRuleListStore> {
    void m_ptr;
} RetainPtr<WKContentRuleListStore>;

typedef struct RetainPtr<WKContentRuleList> {
    void m_ptr;
} RetainPtr<WKContentRuleList>;

typedef struct ObjectStorage<API::UserInitiatedAction> {
    type data;
} ObjectStorage<API::UserInitiatedAction>;

typedef struct ObjectStorage<API::UserStyleSheet> {
    type data;
} ObjectStorage<API::UserStyleSheet>;

typedef struct ObjectStorage<WebKit::VisitedLinkStore> {
    type data;
} ObjectStorage<WebKit::VisitedLinkStore>;

typedef struct ObjectStorage<API::WebAuthenticationAssertionResponse> {
    type data;
} ObjectStorage<API::WebAuthenticationAssertionResponse>;

typedef struct RpEntity {
    String field0;
    String field1;
    String field2;
} RpEntity;

typedef struct __storage_wrapper<WTF::RefPtr<JSC::ArrayBufferView>> {
    type field0;
} __storage_wrapper<WTF::RefPtr<JSC::ArrayBufferView>>;

typedef struct __dummy_type {
} // Error Processing Struct Fields

typedef struct __storage_wrapper<WTF::RefPtr<JSC::ArrayBuffer>> {
    type field0;
} __storage_wrapper<WTF::RefPtr<JSC::ArrayBuffer>>;

typedef struct Variant<WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> {
    void field0;
    int field1;
    CGFloat field2;
    unk field3;
    SEL field4;
    SEL field5;
    float field6;
    unsigned short field7;
    unsigned char field8;
    SEL field9;
    SEL field10;
    uint8_t field11;
    BOOL field12;
    float field13;
    float field14;
    int field15;
    unk field16;
    SEL field17;
    SEL field18;
    float field19;
    unsigned short field20;
    unsigned char field21;
    SEL field22;
    SEL field23;
    uint8_t field24;
    BOOL field25;
    float field26;
    float field27;
    void field28;
    int field29;
    CGFloat field30;
    unk field31;
    SEL field32;
    SEL field33;
    float field34;
    unsigned short field35;
    unsigned char field36;
    SEL field37;
    SEL field38;
    uint8_t field39;
    BOOL field40;
    float field41;
    float field42;
    int field43;
    __storage_wrapper<WTF::RefPtr<JSC::ArrayBufferView>> field44;
    __dummy_type field45;
    void field46;
    int field47;
    CGFloat field48;
    unk field49;
    SEL field50;
    SEL field51;
    float field52;
    unsigned short field53;
    unsigned char field54;
    SEL field55;
    SEL field56;
    uint8_t field57;
    BOOL field58;
    float field59;
    float field60;
    __storage_wrapper<WTF::RefPtr<JSC::ArrayBuffer>> field61;
    __dummy_type field62;
    char field63;
} Variant<WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>>;

typedef struct BufferSource {
    Variant<WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> field0;
} BufferSource;

typedef struct Vector<unsigned char, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
    char * field0;
    unsigned int field1;
    unsigned int field2;
} Vector<unsigned char, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>;

typedef struct UserEntity {
    String field0;
    String field1;
    BufferSource field2;
    Vector<unsigned char, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> field3;
    String field4;
} UserEntity;

typedef struct Parameters {
} // Error Processing Struct Fields

typedef struct Vector<WebCore::PublicKeyCredentialCreationOptions::Parameters, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
    Parameters field0;
    unsigned int field1;
    unsigned int field2;
} Vector<WebCore::PublicKeyCredentialCreationOptions::Parameters, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>;

typedef struct PublicKeyCredentialDescriptor {
} // Error Processing Struct Fields

typedef struct Vector<WebCore::PublicKeyCredentialDescriptor, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
    PublicKeyCredentialDescriptor field0;
    unsigned int field1;
    unsigned int field2;
} Vector<WebCore::PublicKeyCredentialDescriptor, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>;

typedef struct optional<WebCore::AuthenticatorAttachment> {
    unk field0;
    char field1;
    int field2;
    BOOL field3;
} optional<WebCore::AuthenticatorAttachment>;

typedef struct AuthenticatorSelectionCriteria {
    optional<WebCore::AuthenticatorAttachment> field0;
    BOOL field1;
    int field2;
} AuthenticatorSelectionCriteria;

typedef struct optional<WebCore::PublicKeyCredentialCreationOptions::AuthenticatorSelectionCriteria> {
    unk field0;
    char field1;
    AuthenticatorSelectionCriteria field2;
    BOOL field3;
} optional<WebCore::PublicKeyCredentialCreationOptions::AuthenticatorSelectionCriteria>;

typedef struct AuthenticationExtensionsClientInputs {
    String field0;
    BOOL field1;
} AuthenticationExtensionsClientInputs;

typedef struct optional<WebCore::AuthenticationExtensionsClientInputs> {
    unk field0;
    char field1;
    AuthenticationExtensionsClientInputs field2;
    BOOL field3;
} optional<WebCore::AuthenticationExtensionsClientInputs>;

typedef struct PublicKeyCredentialCreationOptions {
    RpEntity field0;
    UserEntity field1;
    BufferSource field2;
    Vector<WebCore::PublicKeyCredentialCreationOptions::Parameters, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> field3;
    optional<unsigned int> field4;
    Vector<WebCore::PublicKeyCredentialDescriptor, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> field5;
    optional<WebCore::PublicKeyCredentialCreationOptions::AuthenticatorSelectionCriteria> field6;
    int field7;
    optional<WebCore::AuthenticationExtensionsClientInputs> field8;
} PublicKeyCredentialCreationOptions;

typedef struct PublicKeyCredentialRequestOptions {
    BufferSource field0;
    optional<unsigned int> field1;
    String field2;
    Vector<WebCore::PublicKeyCredentialDescriptor, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> field3;
    int field4;
    optional<WebCore::AuthenticatorAttachment> field5;
    optional<WebCore::AuthenticationExtensionsClientInputs> field6;
} PublicKeyCredentialRequestOptions;

typedef struct ObjectStorage<API::WebAuthenticationPanel> {
    type data;
} ObjectStorage<API::WebAuthenticationPanel>;

typedef struct WeakPtr<WebKit::WebAuthenticationPanelClient, WTF::EmptyCounter> {
    RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> m_impl;
} WeakPtr<WebKit::WebAuthenticationPanelClient, WTF::EmptyCounter>;

typedef struct RetainPtr<NSMutableSet> {
    void m_ptr;
} RetainPtr<NSMutableSet>;

typedef struct HashTable<unsigned int, WTF::KeyValuePair<unsigned int, unsigned long long>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, unsigned long long>>, WTF::DefaultHash<unsigned int>, WTF::HashMap<unsigned int, unsigned long long>::KeyValuePairTraits, WTF::HashTraits<unsigned int>> {
    unk ;
    void m_table;
    unsigned int m_tableForLLDB;
} HashTable<unsigned int, WTF::KeyValuePair<unsigned int, unsigned long long>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, unsigned long long>>, WTF::DefaultHash<unsigned int>, WTF::HashMap<unsigned int, unsigned long long>::KeyValuePairTraits, WTF::HashTraits<unsigned int>>;

typedef struct HashMap<unsigned int, unsigned long long, WTF::DefaultHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned long long>, WTF::HashTableTraits> {
    HashTable<unsigned int, WTF::KeyValuePair<unsigned int, unsigned long long>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, unsigned long long>>, WTF::DefaultHash<unsigned int>, WTF::HashMap<unsigned int, unsigned long long>::KeyValuePairTraits, WTF::HashTraits<unsigned int>> m_impl;
} HashMap<unsigned int, unsigned long long, WTF::DefaultHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned long long>, WTF::HashTableTraits>;

typedef struct Size {
    NSUInteger totalSize;
    HashMap<unsigned int, unsigned long long, WTF::DefaultHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned long long>, WTF::HashTableTraits> typeSizes;
} Size;

typedef struct ObjectStorage<WebKit::WebsiteDataStoreConfiguration> {
    type data;
} ObjectStorage<WebKit::WebsiteDataStoreConfiguration>;

typedef struct WeakPtr<WebKit::LegacyCustomProtocolManagerProxy, WTF::EmptyCounter> {
    RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> m_impl;
} WeakPtr<WebKit::LegacyCustomProtocolManagerProxy, WTF::EmptyCounter>;

typedef struct RetainPtr<NSURLConnection> {
    void m_ptr;
} RetainPtr<NSURLConnection>;

typedef struct RetainPtr<NSItemProvider> {
    void m_ptr;
} RetainPtr<NSItemProvider>;

typedef struct RetainPtr<ARQuickLookWebKitItem> {
    void m_ptr;
} RetainPtr<ARQuickLookWebKitItem>;

typedef struct IntSize {
    int m_width;
    int m_height;
} IntSize;

typedef struct IntRect {
    IntPoint m_location;
    IntSize m_size;
} IntRect;

typedef struct WeakObjCPtr<AVPlayerViewController> {
    id m_weakReference;
} WeakObjCPtr<AVPlayerViewController>;

typedef struct WeakObjCPtr<id<CNContactPickerDelegate>> {
    id m_weakReference;
} WeakObjCPtr<id<CNContactPickerDelegate>>;

typedef struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
} // Error Processing Struct Fields

typedef struct ContactInfo {
} // Error Processing Struct Fields

typedef struct WeakObjCPtr<id<WKContactPickerDelegate>> {
    id m_weakReference;
} WeakObjCPtr<id<WKContactPickerDelegate>>;

typedef struct Vector<WebCore::ContactProperty, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
    unsigned char m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<WebCore::ContactProperty, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>;

typedef struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, std::optional<WTF::Vector<WebCore::ContactInfo, 0, WTF::CrashOnOverflow, 16>> &&> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, std::optional<WTF::Vector<WebCore::ContactInfo, 0, WTF::CrashOnOverflow, 16>> &&>>> {
    void __value_;
} __compressed_pair<WTF::Detail::CallableWrapperBase<void, std::optional<WTF::Vector<WebCore::ContactInfo, 0, WTF::CrashOnOverflow, 16>> &&> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, std::optional<WTF::Vector<WebCore::ContactInfo, 0, WTF::CrashOnOverflow, 16>> &&>>>;

typedef struct unique_ptr<WTF::Detail::CallableWrapperBase<void, std::optional<WTF::Vector<WebCore::ContactInfo, 0, WTF::CrashOnOverflow, 16>> &&>, std::default_delete<WTF::Detail::CallableWrapperBase<void, std::optional<WTF::Vector<WebCore::ContactInfo, 0, WTF::CrashOnOverflow, 16>> &&>>> {
    __compressed_pair<WTF::Detail::CallableWrapperBase<void, std::optional<WTF::Vector<WebCore::ContactInfo, 0, WTF::CrashOnOverflow, 16>> &&> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, std::optional<WTF::Vector<WebCore::ContactInfo, 0, WTF::CrashOnOverflow, 16>> &&>>> __ptr_;
} unique_ptr<WTF::Detail::CallableWrapperBase<void, std::optional<WTF::Vector<WebCore::ContactInfo, 0, WTF::CrashOnOverflow, 16>> &&>, std::default_delete<WTF::Detail::CallableWrapperBase<void, std::optional<WTF::Vector<WebCore::ContactInfo, 0, WTF::CrashOnOverflow, 16>> &&>>>;

typedef struct Function<void (std::optional<WTF::Vector<WebCore::ContactInfo, 0, WTF::CrashOnOverflow, 16>> &&)> {
    unique_ptr<WTF::Detail::CallableWrapperBase<void, std::optional<WTF::Vector<WebCore::ContactInfo, 0, WTF::CrashOnOverflow, 16>> &&>, std::default_delete<WTF::Detail::CallableWrapperBase<void, std::optional<WTF::Vector<WebCore::ContactInfo, 0, WTF::CrashOnOverflow, 16>> &&>>> m_callableWrapper;
} Function<void (std::optional<WTF::Vector<WebCore::ContactInfo, 0, WTF::CrashOnOverflow, 16>> &&)>;

typedef struct CompletionHandler<void (std::optional<WTF::Vector<WebCore::ContactInfo, 0, WTF::CrashOnOverflow, 16>> &&)> {
    Function<void (std::optional<WTF::Vector<WebCore::ContactInfo, 0, WTF::CrashOnOverflow, 16>> &&)> m_function;
} CompletionHandler<void (std::optional<WTF::Vector<WebCore::ContactInfo, 0, WTF::CrashOnOverflow, 16>> &&)>;

typedef struct RetainPtr<WKCNContactPickerDelegate> {
    void m_ptr;
} RetainPtr<WKCNContactPickerDelegate>;

typedef struct RetainPtr<CNContactPickerViewController> {
    void m_ptr;
} RetainPtr<CNContactPickerViewController>;

typedef struct WebEditCommandProxy {
} // Error Processing Struct Fields

typedef struct RefPtr<WebKit::WebEditCommandProxy, WTF::RawPtrTraits<WebKit::WebEditCommandProxy>, WTF::DefaultRefDerefTraits<WebKit::WebEditCommandProxy>> {
    WebEditCommandProxy m_ptr;
} RefPtr<WebKit::WebEditCommandProxy, WTF::RawPtrTraits<WebKit::WebEditCommandProxy>, WTF::DefaultRefDerefTraits<WebKit::WebEditCommandProxy>>;

typedef struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, Class<WKWebViewContentProvider>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, Class<WKWebViewContentProvider>>>, WTF::ASCIICaseInsensitiveHash, WTF::HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::ASCIICaseInsensitiveHash>::KeyValuePairTraits, WTF::HashTraits<WTF::String>> {
    unk ;
    void m_table;
    unsigned int m_tableForLLDB;
} HashTable<WTF::String, WTF::KeyValuePair<WTF::String, Class<WKWebViewContentProvider>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, Class<WKWebViewContentProvider>>>, WTF::ASCIICaseInsensitiveHash, WTF::HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::ASCIICaseInsensitiveHash>::KeyValuePairTraits, WTF::HashTraits<WTF::String>>;

typedef struct HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<Class<WKWebViewContentProvider>>, WTF::HashTableTraits> {
    HashTable<WTF::String, WTF::KeyValuePair<WTF::String, Class<WKWebViewContentProvider>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, Class<WKWebViewContentProvider>>>, WTF::ASCIICaseInsensitiveHash, WTF::HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::ASCIICaseInsensitiveHash>::KeyValuePairTraits, WTF::HashTraits<WTF::String>> m_impl;
} HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<Class<WKWebViewContentProvider>>, WTF::HashTableTraits>;

typedef struct HashTable<WebKit::WebPageProxy *, WTF::KeyValuePair<WebKit::WebPageProxy *, unsigned int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebKit::WebPageProxy *, unsigned int>>, WTF::DefaultHash<WebKit::WebPageProxy *>, WTF::HashMap<WebKit::WebPageProxy *, unsigned int>::KeyValuePairTraits, WTF::HashTraits<WebKit::WebPageProxy *>> {
    unk ;
    void m_table;
    unsigned int m_tableForLLDB;
} HashTable<WebKit::WebPageProxy *, WTF::KeyValuePair<WebKit::WebPageProxy *, unsigned int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebKit::WebPageProxy *, unsigned int>>, WTF::DefaultHash<WebKit::WebPageProxy *>, WTF::HashMap<WebKit::WebPageProxy *, unsigned int>::KeyValuePairTraits, WTF::HashTraits<WebKit::WebPageProxy *>>;

typedef struct HashMap<WebKit::WebPageProxy *, unsigned int, WTF::DefaultHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *>, WTF::HashTraits<unsigned int>, WTF::HashTableTraits> {
    HashTable<WebKit::WebPageProxy *, WTF::KeyValuePair<WebKit::WebPageProxy *, unsigned int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebKit::WebPageProxy *, unsigned int>>, WTF::DefaultHash<WebKit::WebPageProxy *>, WTF::HashMap<WebKit::WebPageProxy *, unsigned int>::KeyValuePairTraits, WTF::HashTraits<WebKit::WebPageProxy *>> m_impl;
} HashMap<WebKit::WebPageProxy *, unsigned int, WTF::DefaultHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *>, WTF::HashTraits<unsigned int>, WTF::HashTableTraits>;

typedef struct HashCountedSet<WebKit::WebPageProxy *, WTF::DefaultHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *>> {
    HashMap<WebKit::WebPageProxy *, unsigned int, WTF::DefaultHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *>, WTF::HashTraits<unsigned int>, WTF::HashTableTraits> m_impl;
} HashCountedSet<WebKit::WebPageProxy *, WTF::DefaultHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *>>;

typedef struct WeakPtr<WebKit::PopUpSOAuthorizationSession, WTF::EmptyCounter> {
    RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> m_impl;
} WeakPtr<WebKit::PopUpSOAuthorizationSession, WTF::EmptyCounter>;

typedef struct SOAuthorizationSession {
} // Error Processing Struct Fields

typedef struct RefPtr<WebKit::SOAuthorizationSession, WTF::RawPtrTraits<WebKit::SOAuthorizationSession>, WTF::DefaultRefDerefTraits<WebKit::SOAuthorizationSession>> {
    SOAuthorizationSession m_ptr;
} RefPtr<WebKit::SOAuthorizationSession, WTF::RawPtrTraits<WebKit::SOAuthorizationSession>, WTF::DefaultRefDerefTraits<WebKit::SOAuthorizationSession>>;

typedef struct RetainPtr<NSMutableArray<CAShapeLayer *>> {
    void m_ptr;
} RetainPtr<NSMutableArray<CAShapeLayer *>>;

typedef struct RetainPtr<NSMutableArray<CALayer *>> {
    void m_ptr;
} RetainPtr<NSMutableArray<CALayer *>>;

typedef struct RetainPtr<UITouch> {
    void m_ptr;
} RetainPtr<UITouch>;

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

typedef struct WeakPtr<WebKit::AuthenticatorPresenterCoordinator, WTF::EmptyCounter> {
    RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> m_impl;
} WeakPtr<WebKit::AuthenticatorPresenterCoordinator, WTF::EmptyCounter>;

typedef struct WeakPtr<WebKit::NfcConnection, WTF::EmptyCounter> {
    RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> m_impl;
} WeakPtr<WebKit::NfcConnection, WTF::EmptyCounter>;

typedef struct RetainPtr<RBSAssertion> {
    void m_ptr;
} RetainPtr<RBSAssertion>;

typedef struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> {
    uint8_t __a_value;
    BOOL field1;
} __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>;

typedef struct atomic<bool> {
    __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> __a_;
} atomic<bool>;

typedef struct HashTable<WTF::Ref<WTF::WeakPtrImpl<>>, WTF::Ref<WTF::WeakPtrImpl<>>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<>>>> {
    unk ;
    void m_table;
    unsigned int m_tableForLLDB;
} HashTable<WTF::Ref<WTF::WeakPtrImpl<>>, WTF::Ref<WTF::WeakPtrImpl<>>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<>>>>;

typedef struct HashSet<WTF::Ref<WTF::WeakPtrImpl<>>, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTableTraits> {
    HashTable<WTF::Ref<WTF::WeakPtrImpl<>>, WTF::Ref<WTF::WeakPtrImpl<>>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<>>>> m_impl;
} HashSet<WTF::Ref<WTF::WeakPtrImpl<>>, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTableTraits>;

typedef struct WeakHashSet<WebKit::ProcessAndUIAssertion, WTF::EmptyCounter> {
    HashSet<WTF::Ref<WTF::WeakPtrImpl<>>, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTableTraits> m_set;
} WeakHashSet<WebKit::ProcessAndUIAssertion, WTF::EmptyCounter>;

typedef struct RetainPtr<_UINavigationInteractiveTransitionBase> {
    void m_ptr;
} RetainPtr<_UINavigationInteractiveTransitionBase>;

typedef struct WeakObjCPtr<UIView> {
    id m_weakReference;
} WeakObjCPtr<UIView>;

typedef struct RetainPtr<UIViewController> {
    void m_ptr;
} RetainPtr<UIViewController>;

typedef struct RetainPtr<id<UIPopoverPresentationControllerDelegate>> {
    void m_ptr;
} RetainPtr<id<UIPopoverPresentationControllerDelegate>>;

typedef struct RetainPtr<NSArray<_WKElementAction *>> {
    void field0;
} RetainPtr<NSArray<_WKElementAction *>>;

typedef struct InteractionInformationRequest {
    IntPoint point;
    BOOL includeSnapshot;
    BOOL includeLinkIndicator;
    BOOL includeCaretContext;
    BOOL includeHasDoubleClickHandler;
    BOOL includeImageData;
    BOOL linkIndicatorShouldHaveLegacyMargins;
    BOOL disallowUserAgentShadowContent;
} InteractionInformationRequest;

typedef struct Image {
} // Error Processing Struct Fields

typedef struct RefPtr<WebCore::Image, WTF::RawPtrTraits<WebCore::Image>, WTF::DefaultRefDerefTraits<WebCore::Image>> {
    Image m_ptr;
} RefPtr<WebCore::Image, WTF::RawPtrTraits<WebCore::Image>, WTF::DefaultRefDerefTraits<WebCore::Image>>;

typedef struct Cursor {
    int m_type;
    RefPtr<WebCore::Image, WTF::RawPtrTraits<WebCore::Image>, WTF::DefaultRefDerefTraits<WebCore::Image>> m_image;
    IntPoint m_hotSpot;
    void m_platformCursor;
} Cursor;

typedef struct optional<WebCore::Cursor> {
    unk ;
    char __null_state_;
    Cursor __val_;
    BOOL __engaged_;
} optional<WebCore::Cursor>;

typedef struct Vector<WebCore::FloatRect, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
} // Error Processing Struct Fields

typedef struct OptionSet<WebCore::TextIndicatorOption> {
    unsigned short field0;
} OptionSet<WebCore::TextIndicatorOption>;

typedef struct TextIndicatorData {
} // Error Processing Struct Fields

typedef struct optional<WebCore::ElementContext> {
    unk ;
    char __null_state_;
    ElementContext __val_;
    BOOL __engaged_;
} optional<WebCore::ElementContext>;

typedef struct InteractionInformationAtPosition {
    InteractionInformationRequest request;
    BOOL canBeValid;
    optional<bool> nodeAtPositionHasDoubleClickHandler;
    BOOL isSelectable;
    BOOL isSelected;
    BOOL prefersDraggingOverTextSelection;
    BOOL isNearMarkedText;
    BOOL touchCalloutEnabled;
    BOOL isLink;
    BOOL isImage;
    BOOL isAttachment;
    BOOL isAnimatedImage;
    BOOL isElement;
    BOOL isContentEditable;
    NSUInteger containerScrollingNodeID;
    BOOL isDataDetectorLink;
    BOOL preventTextInteraction;
    BOOL shouldNotUseIBeamInEditableContent;
    BOOL isImageOverlayText;
    BOOL isVerticalWritingMode;
    FloatPoint adjustedPointForNodeRespondingToClickEvents;
    URL url;
    URL imageURL;
    String title;
    String idAttribute;
    IntRect bounds;
    RefPtr<WebKit::ShareableBitmap, WTF::RawPtrTraits<WebKit::ShareableBitmap>, WTF::DefaultRefDerefTraits<WebKit::ShareableBitmap>> image;
    String textBefore;
    String textAfter;
    float caretLength;
    FloatRect lineCaretExtent;
    optional<WebCore::Cursor> cursor;
    TextIndicatorData linkIndicator;
    String dataDetectorIdentifier;
    RetainPtr<NSArray> dataDetectorResults;
    IntRect dataDetectorBounds;
    optional<WebCore::ElementContext> elementContext;
    optional<WebCore::ElementContext> imageElementContext;
} InteractionInformationAtPosition;

typedef struct optional<WebKit::InteractionInformationAtPosition> {
    unk ;
    char __null_state_;
    InteractionInformationAtPosition __val_;
    BOOL __engaged_;
} optional<WebKit::InteractionInformationAtPosition>;

typedef struct WeakObjCPtr<id<WKActionSheetAssistantDelegate>> {
    id m_weakReference;
} WeakObjCPtr<id<WKActionSheetAssistantDelegate>>;

typedef struct RetainPtr<WKActionSheet> {
    void m_ptr;
} RetainPtr<WKActionSheet>;

typedef struct RetainPtr<UIContextMenuInteraction> {
    void m_ptr;
} RetainPtr<UIContextMenuInteraction>;

typedef struct RetainPtr<UIMenu> {
    void m_ptr;
} RetainPtr<UIMenu>;

typedef struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, unsigned long long> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, unsigned long long>>> {
    void __value_;
} __compressed_pair<WTF::Detail::CallableWrapperBase<void, unsigned long long> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, unsigned long long>>>;

typedef struct unique_ptr<WTF::Detail::CallableWrapperBase<void, unsigned long long>, std::default_delete<WTF::Detail::CallableWrapperBase<void, unsigned long long>>> {
    __compressed_pair<WTF::Detail::CallableWrapperBase<void, unsigned long long> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, unsigned long long>>> __ptr_;
} unique_ptr<WTF::Detail::CallableWrapperBase<void, unsigned long long>, std::default_delete<WTF::Detail::CallableWrapperBase<void, unsigned long long>>>;

typedef struct Function<void (unsigned long long)> {
    unique_ptr<WTF::Detail::CallableWrapperBase<void, unsigned long long>, std::default_delete<WTF::Detail::CallableWrapperBase<void, unsigned long long>>> m_callableWrapper;
} Function<void (unsigned long long)>;

typedef struct CompletionHandler<void (unsigned long long)> {
    Function<void (unsigned long long)> m_function;
} CompletionHandler<void (unsigned long long)>;

typedef struct ApplicationStateTracker {
} // Error Processing Struct Fields

typedef struct __compressed_pair<WebKit::ApplicationStateTracker *, std::default_delete<WebKit::ApplicationStateTracker>> {
    ApplicationStateTracker __value_;
} __compressed_pair<WebKit::ApplicationStateTracker *, std::default_delete<WebKit::ApplicationStateTracker>>;

typedef struct unique_ptr<WebKit::ApplicationStateTracker, std::default_delete<WebKit::ApplicationStateTracker>> {
    __compressed_pair<WebKit::ApplicationStateTracker *, std::default_delete<WebKit::ApplicationStateTracker>> __ptr_;
} unique_ptr<WebKit::ApplicationStateTracker, std::default_delete<WebKit::ApplicationStateTracker>>;

typedef struct WeakObjCPtr<id<WKDeferringGestureRecognizerDelegate>> {
    id m_weakReference;
} WeakObjCPtr<id<WKDeferringGestureRecognizerDelegate>>;

typedef struct WebGeolocationManagerProxy {
} // Error Processing Struct Fields

typedef struct RefPtr<WebKit::WebGeolocationManagerProxy, WTF::RawPtrTraits<WebKit::WebGeolocationManagerProxy>, WTF::DefaultRefDerefTraits<WebKit::WebGeolocationManagerProxy>> {
    WebGeolocationManagerProxy m_ptr;
} RefPtr<WebKit::WebGeolocationManagerProxy, WTF::RawPtrTraits<WebKit::WebGeolocationManagerProxy>, WTF::DefaultRefDerefTraits<WebKit::WebGeolocationManagerProxy>>;

typedef struct WebGeolocationPosition {
} // Error Processing Struct Fields

typedef struct RefPtr<WebKit::WebGeolocationPosition, WTF::RawPtrTraits<WebKit::WebGeolocationPosition>, WTF::DefaultRefDerefTraits<WebKit::WebGeolocationPosition>> {
    WebGeolocationPosition m_ptr;
} RefPtr<WebKit::WebGeolocationPosition, WTF::RawPtrTraits<WebKit::WebGeolocationPosition>, WTF::DefaultRefDerefTraits<WebKit::WebGeolocationPosition>>;

typedef struct GeolocationRequestData {
} // Error Processing Struct Fields

typedef struct VectorBuffer<GeolocationRequestData, 0, WTF::FastMalloc> {
    GeolocationRequestData m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} VectorBuffer<GeolocationRequestData, 0, WTF::FastMalloc>;

typedef struct Deque<GeolocationRequestData, 0> {
    NSUInteger m_start;
    NSUInteger m_end;
    VectorBuffer<GeolocationRequestData, 0, WTF::FastMalloc> m_buffer;
} Deque<GeolocationRequestData, 0>;

typedef struct RetainPtr<WebGeolocationCoreLocationProvider> {
    void m_ptr;
} RetainPtr<WebGeolocationCoreLocationProvider>;

typedef struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, bool> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, bool>>> {
    void __value_;
} __compressed_pair<WTF::Detail::CallableWrapperBase<void, bool> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, bool>>>;

typedef struct unique_ptr<WTF::Detail::CallableWrapperBase<void, bool>, std::default_delete<WTF::Detail::CallableWrapperBase<void, bool>>> {
    __compressed_pair<WTF::Detail::CallableWrapperBase<void, bool> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, bool>>> __ptr_;
} unique_ptr<WTF::Detail::CallableWrapperBase<void, bool>, std::default_delete<WTF::Detail::CallableWrapperBase<void, bool>>>;

typedef struct Function<void (bool)> {
    unique_ptr<WTF::Detail::CallableWrapperBase<void, bool>, std::default_delete<WTF::Detail::CallableWrapperBase<void, bool>>> m_callableWrapper;
} Function<void (bool)>;

typedef struct WeakObjCPtr<UIScrollView> {
    id m_weakReference;
} WeakObjCPtr<UIScrollView>;

typedef struct RetainPtr<CAShapeLayer> {
    void m_ptr;
} RetainPtr<CAShapeLayer>;

typedef struct RetainPtr<CALayer> {
    void m_ptr;
} RetainPtr<CALayer>;

typedef struct RetainPtr<CAPortalLayer> {
    void m_ptr;
} RetainPtr<CAPortalLayer>;

typedef struct KeyboardScrollParameters {
    float field0;
    float field1;
    float field2;
    float field3;
    float field4;
    float field5;
} KeyboardScrollParameters;

typedef struct KeyboardScroll {
    FloatSize offset;
    FloatSize maximumVelocity;
    FloatSize force;
    unsigned char granularity;
    unsigned char direction;
} KeyboardScroll;

typedef struct optional<WebCore::KeyboardScroll> {
    unk ;
    char __null_state_;
    KeyboardScroll __val_;
    BOOL __engaged_;
} optional<WebCore::KeyboardScroll>;

typedef struct RetainPtr<CADisplayLink> {
    void m_ptr;
} RetainPtr<CADisplayLink>;

typedef struct array<bool, 4> {
    BOOL field0;
} array<bool, 4>;

typedef struct RectEdges<bool> {
    array<bool, 4> field0;
} RectEdges<bool>;

typedef struct RetainPtr<WKKeyboardScrollingAnimator> {
    void m_ptr;
} RetainPtr<WKKeyboardScrollingAnimator>;

typedef struct RetainPtr<ASVInlinePreview> {
    void m_ptr;
} RetainPtr<ASVInlinePreview>;

typedef struct RetainPtr<WKModelInteractionGestureRecognizer> {
    void m_ptr;
} RetainPtr<WKModelInteractionGestureRecognizer>;

typedef struct RetainPtr<id<BSInvalidatable>> {
    void m_ptr;
} RetainPtr<id<BSInvalidatable>>;

typedef struct OSObjectPtr<NSObject<OS_dispatch_queue> *> {
    id m_ptr;
} OSObjectPtr<NSObject<OS_dispatch_queue> *>;

typedef struct optional<CGPoint> {
    unk ;
    char __null_state_;
    CGPoint __val_;
    BOOL __engaged_;
} optional<CGPoint>;

typedef struct NativeWebMouseEvent {
} // Error Processing Struct Fields

typedef struct __compressed_pair<WebKit::NativeWebMouseEvent *, std::default_delete<WebKit::NativeWebMouseEvent>> {
    NativeWebMouseEvent __value_;
} __compressed_pair<WebKit::NativeWebMouseEvent *, std::default_delete<WebKit::NativeWebMouseEvent>>;

typedef struct unique_ptr<WebKit::NativeWebMouseEvent, std::default_delete<WebKit::NativeWebMouseEvent>> {
    __compressed_pair<WebKit::NativeWebMouseEvent *, std::default_delete<WebKit::NativeWebMouseEvent>> __ptr_;
} unique_ptr<WebKit::NativeWebMouseEvent, std::default_delete<WebKit::NativeWebMouseEvent>>;

typedef struct RetainPtr<UIEvent> {
    void m_ptr;
} RetainPtr<UIEvent>;

typedef struct optional<long> {
    unk ;
    char __null_state_;
    NSInteger __val_;
    BOOL __engaged_;
} optional<long>;

typedef struct RetainPtr<UILabel> {
    void m_ptr;
} RetainPtr<UILabel>;

typedef struct RetainPtr<_UIBackdropView> {
    void m_ptr;
} RetainPtr<_UIBackdropView>;

typedef struct CGPDFDocument {
} // Error Processing Struct Fields

typedef struct RetainPtr<WKActionSheetAssistant> {
    void m_ptr;
} RetainPtr<WKActionSheetAssistant>;

typedef struct BlockPtr<void ()> {
    id m_block;
    unk field1;
} BlockPtr<void ()>;

typedef struct optional<unsigned long> {
    unk ;
    char __null_state_;
    NSUInteger __val_;
    BOOL __engaged_;
} optional<unsigned long>;

typedef struct RetainPtr<PDFHostViewController> {
    void m_ptr;
} RetainPtr<PDFHostViewController>;

typedef struct CStringBuffer {
} // Error Processing Struct Fields

typedef struct RefPtr<WTF::CStringBuffer, WTF::RawPtrTraits<WTF::CStringBuffer>, WTF::DefaultRefDerefTraits<WTF::CStringBuffer>> {
    CStringBuffer m_ptr;
} RefPtr<WTF::CStringBuffer, WTF::RawPtrTraits<WTF::CStringBuffer>, WTF::DefaultRefDerefTraits<WTF::CStringBuffer>>;

typedef struct CString {
    RefPtr<WTF::CStringBuffer, WTF::RawPtrTraits<WTF::CStringBuffer>, WTF::DefaultRefDerefTraits<WTF::CStringBuffer>> m_buffer;
} CString;

typedef struct RetainPtr<WKKeyboardScrollViewAnimator> {
    void m_ptr;
} RetainPtr<WKKeyboardScrollViewAnimator>;

typedef struct RetainPtr<WKShareSheet> {
    void m_ptr;
} RetainPtr<WKShareSheet>;

typedef struct RetainPtr<UIScrollView> {
    void m_ptr;
} RetainPtr<UIScrollView>;

typedef struct RetainPtr<UIDocumentPasswordView> {
    void m_ptr;
} RetainPtr<UIDocumentPasswordView>;

typedef struct RetainPtr<UIColor> {
    void m_ptr;
} RetainPtr<UIColor>;

typedef struct WeakObjCPtr<id<UIScrollViewDelegate>> {
    id m_weakReference;
} WeakObjCPtr<id<UIScrollViewDelegate>>;

typedef struct RetainPtr<WKScrollViewDelegateForwarder> {
    void m_ptr;
} RetainPtr<WKScrollViewDelegateForwarder>;

typedef struct optional<UIEdgeInsets> {
    unk ;
    char __null_state_;
    UIEdgeInsets __val_;
    BOOL __engaged_;
} optional<UIEdgeInsets>;

typedef struct RetainPtr<QLItem> {
    void m_ptr;
} RetainPtr<QLItem>;

typedef struct RetainPtr<ASVThumbnailView> {
    void m_ptr;
} RetainPtr<ASVThumbnailView>;

typedef struct FloatQuad {
    FloatPoint m_p1;
    FloatPoint m_p2;
    FloatPoint m_p3;
    FloatPoint m_p4;
} FloatQuad;

typedef struct optional<WebCore::IntRect> {
    unk ;
    char __null_state_;
    IntRect __val_;
    BOOL __engaged_;
} optional<WebCore::IntRect>;

typedef struct SelectionGeometry {
    FloatQuad m_quad;
    BOOL m_behavior;
    BOOL m_direction;
    int m_minX;
    int m_maxX;
    int m_maxY;
    int m_lineNumber;
    BOOL m_isLineBreak;
    BOOL m_isFirstOnLine;
    BOOL m_isLastOnLine;
    BOOL m_containsStart;
    BOOL m_containsEnd;
    BOOL m_isHorizontal;
    BOOL m_isInFixedPosition;
    BOOL m_isRubyText;
    int m_pageNumber;
    optional<WebCore::IntRect> m_cachedEnclosingRect;
} SelectionGeometry;

typedef struct OptionSet<WebCore::TouchAction> {
    unsigned char field0;
} OptionSet<WebCore::TouchAction>;

typedef struct HashTable<unsigned int, WTF::KeyValuePair<unsigned int, WTF::OptionSet<WebCore::TouchAction>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, WTF::OptionSet<WebCore::TouchAction>>>, WTF::DefaultHash<unsigned int>, WTF::HashMap<unsigned int, WTF::OptionSet<WebCore::TouchAction>>::KeyValuePairTraits, WTF::HashTraits<unsigned int>> {
    unk ;
    void m_table;
    unsigned int m_tableForLLDB;
} HashTable<unsigned int, WTF::KeyValuePair<unsigned int, WTF::OptionSet<WebCore::TouchAction>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, WTF::OptionSet<WebCore::TouchAction>>>, WTF::DefaultHash<unsigned int>, WTF::HashMap<unsigned int, WTF::OptionSet<WebCore::TouchAction>>::KeyValuePairTraits, WTF::HashTraits<unsigned int>>;

typedef struct HashMap<unsigned int, WTF::OptionSet<WebCore::TouchAction>, WTF::DefaultHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::OptionSet<WebCore::TouchAction>>, WTF::HashTableTraits> {
    HashTable<unsigned int, WTF::KeyValuePair<unsigned int, WTF::OptionSet<WebCore::TouchAction>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, WTF::OptionSet<WebCore::TouchAction>>>, WTF::DefaultHash<unsigned int>, WTF::HashMap<unsigned int, WTF::OptionSet<WebCore::TouchAction>>::KeyValuePairTraits, WTF::HashTraits<unsigned int>> m_impl;
} HashMap<unsigned int, WTF::OptionSet<WebCore::TouchAction>, WTF::DefaultHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::OptionSet<WebCore::TouchAction>>, WTF::HashTableTraits>;

typedef struct WeakPtr<WebKit::WebDataListSuggestionsDropdownIOS, WTF::EmptyCounter> {
    RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> m_impl;
} WeakPtr<WebKit::WebDataListSuggestionsDropdownIOS, WTF::EmptyCounter>;

typedef struct DataListSuggestion {
} // Error Processing Struct Fields

typedef struct Vector<WebCore::DataListSuggestion, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
    DataListSuggestion m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<WebCore::DataListSuggestion, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>;

typedef struct RetainPtr<WKDataListSuggestionsPickerView> {
    void m_ptr;
} RetainPtr<WKDataListSuggestionsPickerView>;

typedef struct RetainPtr<WKFormRotatingAccessoryPopover> {
    void m_ptr;
} RetainPtr<WKFormRotatingAccessoryPopover>;

typedef struct RetainPtr<WKDataListSuggestionsViewController> {
    void m_ptr;
} RetainPtr<WKDataListSuggestionsViewController>;

typedef struct RetainPtr<NSArray<UIMenuElement *>> {
    void m_ptr;
} RetainPtr<NSArray<UIMenuElement *>>;

typedef struct RetainPtr<MPMediaControlsViewController> {
    void m_ptr;
} RetainPtr<MPMediaControlsViewController>;

typedef struct RetainPtr<UIDatePicker> {
    void m_ptr;
} RetainPtr<UIDatePicker>;

typedef struct WeakObjCPtr<id<WKDateTimePickerViewControllerDelegate>> {
    id m_weakReference;
} WeakObjCPtr<id<WKDateTimePickerViewControllerDelegate>>;

typedef struct RetainPtr<NSDateFormatter> {
    void field0;
} RetainPtr<NSDateFormatter>;

typedef struct RetainPtr<_UIDatePickerOverlayPresentation> {
    void m_ptr;
} RetainPtr<_UIDatePickerOverlayPresentation>;

typedef struct RetainPtr<UIToolbar> {
    void m_ptr;
} RetainPtr<UIToolbar>;

typedef struct RetainPtr<NSObject<WKFormControl>> {
    void m_ptr;
} RetainPtr<NSObject<WKFormControl>>;

typedef struct WeakObjCPtr<WKContentView> {
    id m_weakReference;
} WeakObjCPtr<WKContentView>;

typedef struct WebOpenPanelResultListenerProxy {
} // Error Processing Struct Fields

typedef struct RefPtr<WebKit::WebOpenPanelResultListenerProxy, WTF::RawPtrTraits<WebKit::WebOpenPanelResultListenerProxy>, WTF::DefaultRefDerefTraits<WebKit::WebOpenPanelResultListenerProxy>> {
    WebOpenPanelResultListenerProxy m_ptr;
} RefPtr<WebKit::WebOpenPanelResultListenerProxy, WTF::RawPtrTraits<WebKit::WebOpenPanelResultListenerProxy>, WTF::DefaultRefDerefTraits<WebKit::WebOpenPanelResultListenerProxy>>;

typedef struct RetainPtr<NSSet<NSString *>> {
    void m_ptr;
} RetainPtr<NSSet<NSString *>>;

typedef struct OptionSet<WKFileUploadPanelImagePickerType> {
    unsigned char m_storage;
} OptionSet<WKFileUploadPanelImagePickerType>;

typedef struct RetainPtr<UIImagePickerController> {
    void m_ptr;
} RetainPtr<UIImagePickerController>;

typedef struct RetainPtr<UIPopoverController> {
    void m_ptr;
} RetainPtr<UIPopoverController>;

typedef struct RetainPtr<UIDocumentPickerViewController> {
    void m_ptr;
} RetainPtr<UIDocumentPickerViewController>;

typedef struct RetainPtr<UIColorPickerViewController> {
    void m_ptr;
} RetainPtr<UIColorPickerViewController>;

typedef struct WeakObjCPtr<WKSelectPickerTableViewController> {
    id m_weakReference;
} WeakObjCPtr<WKSelectPickerTableViewController>;

typedef struct RetainPtr<NSMutableSet<NSNumber *>> {
    void m_ptr;
} RetainPtr<NSMutableSet<NSNumber *>>;

typedef struct RetainPtr<UIBarButtonItem> {
    void m_ptr;
} RetainPtr<UIBarButtonItem>;

typedef struct RetainPtr<UINavigationController> {
    void m_ptr;
} RetainPtr<UINavigationController>;

typedef struct RetainPtr<WKSelectPickerTableViewController> {
    void m_ptr;
} RetainPtr<WKSelectPickerTableViewController>;

typedef struct RetainPtr<WKSelectTableViewController> {
    void m_ptr;
} RetainPtr<WKSelectTableViewController>;

typedef struct RetainPtr<UILongPressGestureRecognizer> {
    void m_ptr;
} RetainPtr<UILongPressGestureRecognizer>;

typedef struct RetainPtr<WKFullscreenStackView> {
    void m_ptr;
} RetainPtr<WKFullscreenStackView>;

typedef struct RetainPtr<_WKExtrinsicButton> {
    void m_ptr;
} RetainPtr<_WKExtrinsicButton>;

typedef struct RetainPtr<UIButton> {
    void m_ptr;
} RetainPtr<UIButton>;

typedef struct RetainPtr<UILayoutGuide> {
    void m_ptr;
} RetainPtr<UILayoutGuide>;

typedef struct RetainPtr<NSLayoutConstraint> {
    void m_ptr;
} RetainPtr<NSLayoutConstraint>;

typedef struct Seconds {
    CGFloat m_value;
} Seconds;

typedef struct FullscreenTouchSecheuristicParameters {
    Seconds rampUpSpeed;
    Seconds rampDownSpeed;
    CGFloat xWeight;
    CGFloat yWeight;
    CGFloat gamma;
    CGFloat gammaCutoff;
    CGFloat requiredScore;
} FullscreenTouchSecheuristicParameters;

typedef struct FullscreenTouchSecheuristic {
    CGFloat m_weight;
    FullscreenTouchSecheuristicParameters m_parameters;
    CGSize m_size;
    Seconds m_lastTouchTime;
    CGPoint m_lastTouchLocation;
    CGFloat m_lastScore;
} FullscreenTouchSecheuristic;

typedef struct WeakObjCPtr<WKFullScreenViewController> {
    id m_weakReference;
} WeakObjCPtr<WKFullScreenViewController>;

typedef struct PlaybackSessionInterfaceAVKit {
} // Error Processing Struct Fields

typedef struct RefPtr<WebCore::PlaybackSessionInterfaceAVKit, WTF::RawPtrTraits<WebCore::PlaybackSessionInterfaceAVKit>, WTF::DefaultRefDerefTraits<WebCore::PlaybackSessionInterfaceAVKit>> {
    PlaybackSessionInterfaceAVKit m_ptr;
} RefPtr<WebCore::PlaybackSessionInterfaceAVKit, WTF::RawPtrTraits<WebCore::PlaybackSessionInterfaceAVKit>, WTF::DefaultRefDerefTraits<WebCore::PlaybackSessionInterfaceAVKit>>;

typedef struct WKFullScreenViewControllerPlaybackSessionModelClient {
    unk _vptr$PlaybackSessionModelClient;
    WeakObjCPtr<WKFullScreenViewController> m_parent;
    RefPtr<WebCore::PlaybackSessionInterfaceAVKit, WTF::RawPtrTraits<WebCore::PlaybackSessionInterfaceAVKit>, WTF::DefaultRefDerefTraits<WebCore::PlaybackSessionInterfaceAVKit>> m_interface;
} WKFullScreenViewControllerPlaybackSessionModelClient;

typedef struct RetainPtr<id<UIViewControllerContextTransitioning>> {
    void m_ptr;
} RetainPtr<id<UIViewControllerContextTransitioning>>;

typedef struct RetainPtr<WKFullscreenAnimationController> {
    void m_ptr;
} RetainPtr<WKFullscreenAnimationController>;

typedef struct RetainPtr<WKFullScreenPlaceholderView> {
    void m_ptr;
} RetainPtr<WKFullScreenPlaceholderView>;

typedef struct WKWebViewState {
    float _savedTopContentInset;
    CGFloat _savedPageScale;
    CGFloat _savedViewScale;
    CGFloat _savedZoomScale;
    UIEdgeInsets _savedEdgeInset;
    UIEdgeInsets _savedObscuredInsets;
    UIEdgeInsets _savedScrollIndicatorInsets;
    CGPoint _savedContentOffset;
    CGFloat _savedMinimumZoomScale;
    CGFloat _savedMaximumZoomScale;
    BOOL _savedBouncesZoom;
    BOOL _savedForceAlwaysUserScalable;
} WKWebViewState;

typedef struct RetainPtr<UIWindow> {
    void m_ptr;
} RetainPtr<UIWindow>;

typedef struct RetainPtr<WKFullScreenViewController> {
    void m_ptr;
} RetainPtr<WKFullScreenViewController>;

typedef struct RetainPtr<UISwipeGestureRecognizer> {
    void m_ptr;
} RetainPtr<UISwipeGestureRecognizer>;

typedef struct RetainPtr<UIPanGestureRecognizer> {
    void m_ptr;
} RetainPtr<UIPanGestureRecognizer>;

typedef struct RetainPtr<UIPinchGestureRecognizer> {
    void m_ptr;
} RetainPtr<UIPinchGestureRecognizer>;

typedef struct RetainPtr<WKFullScreenInteractiveTransition> {
    void m_ptr;
} RetainPtr<WKFullScreenInteractiveTransition>;

typedef struct WeakPtrFactory<WebKit::VideoFullscreenManagerProxyClient, WTF::EmptyCounter> {
    RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> m_impl;
} WeakPtrFactory<WebKit::VideoFullscreenManagerProxyClient, WTF::EmptyCounter>;

typedef struct WKFullScreenWindowControllerVideoFullscreenManagerProxyClient {
    unk _vptr$VideoFullscreenManagerProxyClient;
    WeakPtrFactory<WebKit::VideoFullscreenManagerProxyClient, WTF::EmptyCounter> m_weakPtrFactory;
    id m_parent;
} WKFullScreenWindowControllerVideoFullscreenManagerProxyClient;

typedef struct RetainPtr<AVBackgroundView> {
    void m_ptr;
} RetainPtr<AVBackgroundView>;

typedef struct WeakPtr<WebKit::MediaPlayerPrivateRemote, WTF::EmptyCounter> {
    RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> m_impl;
} WeakPtr<WebKit::MediaPlayerPrivateRemote, WTF::EmptyCounter>;

typedef struct RetainPtr<CAContext> {
    void m_ptr;
} RetainPtr<CAContext>;

typedef struct Timer {
} // Error Processing Struct Fields

typedef struct __compressed_pair<WebCore::Timer *, std::default_delete<WebCore::Timer>> {
    Timer __value_;
} __compressed_pair<WebCore::Timer *, std::default_delete<WebCore::Timer>>;

typedef struct unique_ptr<WebCore::Timer, std::default_delete<WebCore::Timer>> {
    __compressed_pair<WebCore::Timer *, std::default_delete<WebCore::Timer>> __ptr_;
} unique_ptr<WebCore::Timer, std::default_delete<WebCore::Timer>>;

typedef struct ObjectStorage<WebKit::WebFrame> {
    type data;
} ObjectStorage<WebKit::WebFrame>;

typedef struct ObjectStorage<WebKit::InjectedBundleHitTestResult> {
    type data;
} ObjectStorage<WebKit::InjectedBundleHitTestResult>;

typedef struct ObjectStorage<WebKit::InjectedBundleNodeHandle> {
    type data;
} ObjectStorage<WebKit::InjectedBundleNodeHandle>;

typedef struct ObjectStorage<WebKit::WebPageGroupProxy> {
    type data;
} ObjectStorage<WebKit::WebPageGroupProxy>;

typedef struct ObjectStorage<WebKit::InjectedBundleRangeHandle> {
    type data;
} ObjectStorage<WebKit::InjectedBundleRangeHandle>;

typedef struct ObjectStorage<WebKit::InjectedBundleScriptWorld> {
    type data;
} ObjectStorage<WebKit::InjectedBundleScriptWorld>;

typedef struct Document {
} // Error Processing Struct Fields

typedef struct NakedRef<WebCore::Document> {
    Document field0;
} NakedRef<WebCore::Document>;

typedef struct DocumentParserYieldToken {
} // Error Processing Struct Fields

typedef struct __compressed_pair<WebCore::DocumentParserYieldToken *, std::default_delete<WebCore::DocumentParserYieldToken>> {
    DocumentParserYieldToken __value_;
} __compressed_pair<WebCore::DocumentParserYieldToken *, std::default_delete<WebCore::DocumentParserYieldToken>>;

typedef struct unique_ptr<WebCore::DocumentParserYieldToken, std::default_delete<WebCore::DocumentParserYieldToken>> {
    __compressed_pair<WebCore::DocumentParserYieldToken *, std::default_delete<WebCore::DocumentParserYieldToken>> __ptr_;
} unique_ptr<WebCore::DocumentParserYieldToken, std::default_delete<WebCore::DocumentParserYieldToken>>;

typedef struct OpaqueWKBundleNodeHandle {
} // Error Processing Struct Fields

typedef struct Node {
} // Error Processing Struct Fields

typedef struct RefPtr<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>> {
    Node m_ptr;
} RefPtr<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>>;

typedef struct OpaqueWKBundleRangeHandle {
} // Error Processing Struct Fields

typedef struct Range {
} // Error Processing Struct Fields

typedef struct RefPtr<WebCore::Range, WTF::RawPtrTraits<WebCore::Range>, WTF::DefaultRefDerefTraits<WebCore::Range>> {
    Range m_ptr;
} RefPtr<WebCore::Range, WTF::RawPtrTraits<WebCore::Range>, WTF::DefaultRefDerefTraits<WebCore::Range>>;

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

typedef struct OpaqueWKBundle {
} // Error Processing Struct Fields

typedef struct ObjectStorage<WebKit::InjectedBundle> {
    type data;
} ObjectStorage<WebKit::InjectedBundle>;

typedef struct RetainPtr<id<WKWebProcessPlugIn>> {
    void m_ptr;
} RetainPtr<id<WKWebProcessPlugIn>>;

typedef struct OpaqueWKBundlePage {
} // Error Processing Struct Fields

typedef struct ObjectStorage<WebKit::WebPage> {
    type data;
} ObjectStorage<WebKit::WebPage>;

typedef struct WeakObjCPtr<id<WKWebProcessPlugInLoadDelegate>> {
    id m_weakReference;
} WeakObjCPtr<id<WKWebProcessPlugInLoadDelegate>>;

typedef struct WeakObjCPtr<id<WKWebProcessPlugInFormDelegatePrivate>> {
    id m_weakReference;
} WeakObjCPtr<id<WKWebProcessPlugInFormDelegatePrivate>>;

typedef struct WeakObjCPtr<id<WKWebProcessPlugInEditingDelegate>> {
    id m_weakReference;
} WeakObjCPtr<id<WKWebProcessPlugInEditingDelegate>>;

typedef struct NakedPtr<WebKit::WebPage> {
    WebPage m_ptr;
} NakedPtr<WebKit::WebPage>;

typedef struct AXObjectCache {
} // Error Processing Struct Fields

typedef struct NakedPtr<WebCore::AXObjectCache> {
    AXObjectCache field0;
} NakedPtr<WebCore::AXObjectCache>;

typedef struct RetainPtr<NSUserDefaults> {
    void m_ptr;
} RetainPtr<NSUserDefaults>;

typedef struct __CFCharacterSet {
} // Error Processing Struct Fields

typedef struct RetainPtr<VKImageAnalyzerRequest> {
    void field0;
} RetainPtr<VKImageAnalyzerRequest>;

typedef struct optional<WebCore::TextIndicatorData> {
} // Error Processing Struct Fields

typedef struct OptionSet<WebCore::DragSourceAction> {
    unsigned char m_storage;
} OptionSet<WebCore::DragSourceAction>;

typedef struct ContactsRequestData {
} // Error Processing Struct Fields

typedef struct optional<WebCore::FloatRect> {
    unk field0;
    char field1;
    FloatRect field2;
    BOOL field3;
} optional<WebCore::FloatRect>;

typedef struct NakedRef<WebKit::WebProcessPool> {
    WebProcessPool field0;
} NakedRef<WebKit::WebProcessPool>;

typedef struct TextIndicator {
} // Error Processing Struct Fields

typedef struct Ref<WebCore::TextIndicator, WTF::RawPtrTraits<WebCore::TextIndicator>> {
    TextIndicator field0;
} Ref<WebCore::TextIndicator, WTF::RawPtrTraits<WebCore::TextIndicator>>;

typedef struct DrawingAreaProxy {
} // Error Processing Struct Fields

typedef struct __compressed_pair<WebKit::DrawingAreaProxy *, std::default_delete<WebKit::DrawingAreaProxy>> {
    DrawingAreaProxy field0;
} __compressed_pair<WebKit::DrawingAreaProxy *, std::default_delete<WebKit::DrawingAreaProxy>>;

typedef struct unique_ptr<WebKit::DrawingAreaProxy, std::default_delete<WebKit::DrawingAreaProxy>> {
    __compressed_pair<WebKit::DrawingAreaProxy *, std::default_delete<WebKit::DrawingAreaProxy>> field0;
} unique_ptr<WebKit::DrawingAreaProxy, std::default_delete<WebKit::DrawingAreaProxy>>;

typedef struct OptionSet<WebCore::DragOperation> {
    unsigned char field0;
} OptionSet<WebCore::DragOperation>;

typedef struct OptionSet<WebCore::DragApplicationFlags> {
    unsigned char field0;
} OptionSet<WebCore::DragApplicationFlags>;

typedef struct DragData {
} // Error Processing Struct Fields

typedef struct ObjectIdentifier<WebKit::ImageAnalysisRequestIdentifierType> {
    NSUInteger m_identifier;
} ObjectIdentifier<WebKit::ImageAnalysisRequestIdentifierType>;

typedef struct OptionSet<WebCore::ActivityState::Flag> {
    unsigned int field0;
} OptionSet<WebCore::ActivityState::Flag>;

typedef struct OpenPanelParameters {
} // Error Processing Struct Fields

typedef struct RetainPtr<WKDeferringGestureRecognizer> {
    void m_ptr;
} RetainPtr<WKDeferringGestureRecognizer>;

typedef struct GestureRecognizerConsistencyEnforcer {
} // Error Processing Struct Fields

typedef struct __compressed_pair<WebKit::GestureRecognizerConsistencyEnforcer *, std::default_delete<WebKit::GestureRecognizerConsistencyEnforcer>> {
    GestureRecognizerConsistencyEnforcer __value_;
} __compressed_pair<WebKit::GestureRecognizerConsistencyEnforcer *, std::default_delete<WebKit::GestureRecognizerConsistencyEnforcer>>;

typedef struct unique_ptr<WebKit::GestureRecognizerConsistencyEnforcer, std::default_delete<WebKit::GestureRecognizerConsistencyEnforcer>> {
    __compressed_pair<WebKit::GestureRecognizerConsistencyEnforcer *, std::default_delete<WebKit::GestureRecognizerConsistencyEnforcer>> __ptr_;
} unique_ptr<WebKit::GestureRecognizerConsistencyEnforcer, std::default_delete<WebKit::GestureRecognizerConsistencyEnforcer>>;

typedef struct RetainPtr<UIWebTouchEventsGestureRecognizer> {
    void m_ptr;
} RetainPtr<UIWebTouchEventsGestureRecognizer>;

typedef struct RetainPtr<WKSyntheticTapGestureRecognizer> {
    void m_ptr;
} RetainPtr<WKSyntheticTapGestureRecognizer>;

typedef struct RetainPtr<WKHighlightLongPressGestureRecognizer> {
    void m_ptr;
} RetainPtr<WKHighlightLongPressGestureRecognizer>;

typedef struct RetainPtr<UITapGestureRecognizer> {
    void m_ptr;
} RetainPtr<UITapGestureRecognizer>;

typedef struct RetainPtr<WKInspectorNodeSearchGestureRecognizer> {
    void m_ptr;
} RetainPtr<WKInspectorNodeSearchGestureRecognizer>;

typedef struct RetainPtr<WKTouchActionGestureRecognizer> {
    void m_ptr;
} RetainPtr<WKTouchActionGestureRecognizer>;

typedef struct RetainPtr<WKMouseGestureRecognizer> {
    void m_ptr;
} RetainPtr<WKMouseGestureRecognizer>;

typedef struct RetainPtr<WKHoverPlatter> {
    void m_ptr;
} RetainPtr<WKHoverPlatter>;

typedef struct RetainPtr<UIIndirectScribbleInteraction> {
    void m_ptr;
} RetainPtr<UIIndirectScribbleInteraction>;

typedef struct RetainPtr<UIPointerInteraction> {
    void m_ptr;
} RetainPtr<UIPointerInteraction>;

typedef struct BlockPtr<void (UIPointerRegion *)> {
    id m_block;
    unk field1;
} BlockPtr<void (UIPointerRegion *)>;

typedef struct pair<WebKit::InteractionInformationRequest, WTF::BlockPtr<void (UIPointerRegion *)>> {
    InteractionInformationRequest first;
    BlockPtr<void (UIPointerRegion *)> second;
} pair<WebKit::InteractionInformationRequest, WTF::BlockPtr<void (UIPointerRegion *)>>;

typedef struct optional<std::pair<WebKit::InteractionInformationRequest, WTF::BlockPtr<void (UIPointerRegion *)>>> {
    unk ;
    char __null_state_;
    pair<WebKit::InteractionInformationRequest, WTF::BlockPtr<void (UIPointerRegion *)>> __val_;
    BOOL __engaged_;
} optional<std::pair<WebKit::InteractionInformationRequest, WTF::BlockPtr<void (UIPointerRegion *)>>>;

typedef struct RetainPtr<UIWKTextInteractionAssistant> {
    void m_ptr;
} RetainPtr<UIWKTextInteractionAssistant>;

typedef struct OptionSet<WebKit::SuppressSelectionAssistantReason> {
    unsigned char m_storage;
} OptionSet<WebKit::SuppressSelectionAssistantReason>;

typedef struct RetainPtr<UITextInputTraits> {
    void m_ptr;
} RetainPtr<UITextInputTraits>;

typedef struct RetainPtr<UIWebFormAccessory> {
    void m_ptr;
} RetainPtr<UIWebFormAccessory>;

typedef struct RetainPtr<_UIHighlightView> {
    void m_ptr;
} RetainPtr<_UIHighlightView>;

typedef struct RetainPtr<WKAirPlayRoutePicker> {
    void m_ptr;
} RetainPtr<WKAirPlayRoutePicker>;

typedef struct RetainPtr<WKFormInputSession> {
    void m_ptr;
} RetainPtr<WKFormInputSession>;

typedef struct RetainPtr<WKFileUploadPanel> {
    void m_ptr;
} RetainPtr<WKFileUploadPanel>;

typedef struct CommonHeader {
} // Error Processing Struct Fields

typedef struct Vector<WebCore::HTTPHeaderMap::CommonHeader, 0, WTF::CrashOnOverflow, 6, WTF::FastMalloc> {
    CommonHeader m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<WebCore::HTTPHeaderMap::CommonHeader, 0, WTF::CrashOnOverflow, 6, WTF::FastMalloc>;

typedef struct UncommonHeader {
} // Error Processing Struct Fields

typedef struct Vector<WebCore::HTTPHeaderMap::UncommonHeader, 0, WTF::CrashOnOverflow, 0, WTF::FastMalloc> {
    UncommonHeader m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<WebCore::HTTPHeaderMap::UncommonHeader, 0, WTF::CrashOnOverflow, 0, WTF::FastMalloc>;

typedef struct HTTPHeaderMap {
    Vector<WebCore::HTTPHeaderMap::CommonHeader, 0, WTF::CrashOnOverflow, 6, WTF::FastMalloc> m_commonHeaders;
    Vector<WebCore::HTTPHeaderMap::UncommonHeader, 0, WTF::CrashOnOverflow, 0, WTF::FastMalloc> m_uncommonHeaders;
} HTTPHeaderMap;

typedef struct ResourceRequest {
} // Error Processing Struct Fields

typedef struct optional<unsigned short> {
    unk ;
    char __null_state_;
    unsigned short __val_;
    BOOL __engaged_;
} optional<unsigned short>;

typedef struct SecurityOriginData {
    String protocol;
    String host;
    optional<unsigned short> port;
} SecurityOriginData;

typedef struct ObjectIdentifier<WebCore::FrameIdentifierType> {
    NSUInteger m_identifier;
} ObjectIdentifier<WebCore::FrameIdentifierType>;

typedef struct optional<WTF::ObjectIdentifier<WebCore::FrameIdentifierType>> {
    unk ;
    char __null_state_;
    ObjectIdentifier<WebCore::FrameIdentifierType> __val_;
    BOOL __engaged_;
} optional<WTF::ObjectIdentifier<WebCore::FrameIdentifierType>>;

typedef struct FrameInfoData {
    BOOL isMainFrame;
    ResourceRequest request;
    SecurityOriginData securityOrigin;
    optional<WTF::ObjectIdentifier<WebCore::FrameIdentifierType>> frameID;
    optional<WTF::ObjectIdentifier<WebCore::FrameIdentifierType>> parentFrameID;
} FrameInfoData;

typedef struct RetainPtr<WKContactPicker> {
    void m_ptr;
} RetainPtr<WKContactPicker>;

typedef struct RetainPtr<UIGestureRecognizer> {
    void m_ptr;
} RetainPtr<UIGestureRecognizer>;

typedef struct Vector<bool, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
    BOOL m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<bool, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>;

typedef struct RetainPtr<WKContextMenuElementInfo> {
    void m_ptr;
} RetainPtr<WKContextMenuElementInfo>;

typedef struct RetainPtr<UIPreviewItemController> {
    void m_ptr;
} RetainPtr<UIPreviewItemController>;

typedef struct RefPtr<WebCore::TextIndicator, WTF::RawPtrTraits<WebCore::TextIndicator>, WTF::DefaultRefDerefTraits<WebCore::TextIndicator>> {
    TextIndicator m_ptr;
} RefPtr<WebCore::TextIndicator, WTF::RawPtrTraits<WebCore::TextIndicator>, WTF::DefaultRefDerefTraits<WebCore::TextIndicator>>;

typedef struct RetainPtr<WebTextIndicatorLayer> {
    void m_ptr;
} RetainPtr<WebTextIndicatorLayer>;

typedef struct RetainPtr<UITargetedPreview> {
    void m_ptr;
} RetainPtr<UITargetedPreview>;

typedef struct SmartMagnificationController {
} // Error Processing Struct Fields

typedef struct __compressed_pair<WebKit::SmartMagnificationController *, std::default_delete<WebKit::SmartMagnificationController>> {
    SmartMagnificationController __value_;
} __compressed_pair<WebKit::SmartMagnificationController *, std::default_delete<WebKit::SmartMagnificationController>>;

typedef struct unique_ptr<WebKit::SmartMagnificationController, std::default_delete<WebKit::SmartMagnificationController>> {
    __compressed_pair<WebKit::SmartMagnificationController *, std::default_delete<WebKit::SmartMagnificationController>> __ptr_;
} unique_ptr<WebKit::SmartMagnificationController, std::default_delete<WebKit::SmartMagnificationController>>;

typedef struct WeakObjCPtr<id<UITextInputDelegate>> {
    id m_weakReference;
} WeakObjCPtr<id<UITextInputDelegate>>;

typedef struct Vector<WebCore::FloatQuad, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
} // Error Processing Struct Fields

typedef struct TapHighlightInformation {
    BOOL nodeHasBuiltInClickHandling;
    Color color;
    Vector<WebCore::FloatQuad, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> quads;
    IntSize topLeftRadius;
    IntSize topRightRadius;
    IntSize bottomLeftRadius;
    IntSize bottomRightRadius;
} TapHighlightInformation;

typedef struct EditingRange {
    NSUInteger location;
    NSUInteger length;
} EditingRange;

typedef struct WebAutocorrectionContext {
    String contextBefore;
    String markedText;
    String selectedText;
    String contextAfter;
    EditingRange markedTextRange;
} WebAutocorrectionContext;

typedef struct RetainPtr<UIFont> {
    void m_ptr;
} RetainPtr<UIFont>;

typedef struct WKAutoCorrectionData {
    RetainPtr<UIFont> font;
    CGRect textFirstRect;
    CGRect textLastRect;
} WKAutoCorrectionData;

typedef struct OptionItem {
} // Error Processing Struct Fields

typedef struct Vector<WebKit::OptionItem, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
    OptionItem m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<WebKit::OptionItem, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>;

typedef struct Vector<WebCore::Color, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
} // Error Processing Struct Fields

typedef struct FocusedElementInformation {
    IntRect interactionRect;
    ElementContext elementContext;
    IntPoint lastInteractionLocation;
    CGFloat minimumScaleFactor;
    CGFloat maximumScaleFactor;
    CGFloat maximumScaleFactorIgnoringAlwaysScalable;
    CGFloat nodeFontSize;
    BOOL hasNextNode;
    IntRect nextNodeRect;
    BOOL hasPreviousNode;
    IntRect previousNodeRect;
    BOOL isAutocorrect;
    BOOL isRTL;
    BOOL isMultiSelect;
    BOOL isReadOnly;
    BOOL allowsUserScaling;
    BOOL allowsUserScalingIgnoringAlwaysScalable;
    BOOL insideFixedPosition;
    unsigned char autocapitalizeType;
    int elementType;
    unsigned char inputMode;
    unsigned char enterKeyHint;
    String formAction;
    Vector<WebKit::OptionItem, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> selectOptions;
    int selectedIndex;
    String value;
    CGFloat valueAsNumber;
    String title;
    BOOL acceptsAutofilledLoginCredentials;
    BOOL isAutofillableUsernameField;
    URL representingPageURL;
    int autofillFieldName;
    String placeholder;
    String label;
    String ariaLabel;
    BOOL hasSuggestions;
    BOOL isFocusingWithDataListDropdown;
    Color colorValue;
    Vector<WebCore::Color, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> suggestedColors;
    BOOL shouldSynthesizeKeyEventsForEditing;
    BOOL isSpellCheckingEnabled;
    BOOL shouldAvoidResizingWhenInputViewBoundsChange;
    BOOL shouldAvoidScrollingWhenFocusedContentIsVisible;
    BOOL shouldUseLegacySelectPopoverDismissalBehaviorInDataActivation;
    BOOL isFocusingWithValidationMessage;
    NSUInteger focusedElementIdentifier;
    NSUInteger containerScrollingNodeID;
} FocusedElementInformation;

typedef struct RetainPtr<NSObject<WKFormPeripheral>> {
    void m_ptr;
} RetainPtr<NSObject<WKFormPeripheral>>;

typedef struct BlockPtr<void (WebEvent *, bool)> {
    id m_block;
    unk field1;
} BlockPtr<void (WebEvent *, bool)>;

typedef struct Vector<WebCore::SelectionGeometry, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
} // Error Processing Struct Fields

typedef struct WKSelectionDrawingInfo {
    int type;
    IntRect caretRect;
    Vector<WebCore::SelectionGeometry, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> selectionGeometries;
    IntRect selectionClipRect;
} WKSelectionDrawingInfo;

typedef struct RetainPtr<WKTextRange> {
    void m_ptr;
} RetainPtr<WKTextRange>;

typedef struct optional<WebKit::InteractionInformationRequest> {
    unk ;
    char __null_state_;
    InteractionInformationRequest __val_;
    BOOL __engaged_;
} optional<WebKit::InteractionInformationRequest>;

typedef struct Vector<std::optional<std::pair<WebKit::InteractionInformationRequest, WTF::BlockPtr<void (WebKit::InteractionInformationAtPosition)>>>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
    void m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<std::optional<std::pair<WebKit::InteractionInformationRequest, WTF::BlockPtr<void (WebKit::InteractionInformationAtPosition)>>>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>;

typedef struct InputViewUpdateDeferrer {
} // Error Processing Struct Fields

typedef struct __compressed_pair<WebKit::InputViewUpdateDeferrer *, std::default_delete<WebKit::InputViewUpdateDeferrer>> {
    InputViewUpdateDeferrer __value_;
} __compressed_pair<WebKit::InputViewUpdateDeferrer *, std::default_delete<WebKit::InputViewUpdateDeferrer>>;

typedef struct unique_ptr<WebKit::InputViewUpdateDeferrer, std::default_delete<WebKit::InputViewUpdateDeferrer>> {
    __compressed_pair<WebKit::InputViewUpdateDeferrer *, std::default_delete<WebKit::InputViewUpdateDeferrer>> __ptr_;
} unique_ptr<WebKit::InputViewUpdateDeferrer, std::default_delete<WebKit::InputViewUpdateDeferrer>>;

typedef struct RetainPtr<UIView<WKFormControl>> {
    void m_ptr;
} RetainPtr<UIView<WKFormControl>>;

typedef struct RetainPtr<NSArray<UITextSuggestion *>> {
    void m_ptr;
} RetainPtr<NSArray<UITextSuggestion *>>;

typedef struct WeakObjCPtr<WKDataListSuggestionsControl> {
    id m_weakReference;
} WeakObjCPtr<WKDataListSuggestionsControl>;

typedef struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, WebCore::DOMPasteAccessResponse> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::DOMPasteAccessResponse>>> {
    void __value_;
} __compressed_pair<WTF::Detail::CallableWrapperBase<void, WebCore::DOMPasteAccessResponse> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::DOMPasteAccessResponse>>>;

typedef struct unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::DOMPasteAccessResponse>, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::DOMPasteAccessResponse>>> {
    __compressed_pair<WTF::Detail::CallableWrapperBase<void, WebCore::DOMPasteAccessResponse> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::DOMPasteAccessResponse>>> __ptr_;
} unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::DOMPasteAccessResponse>, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::DOMPasteAccessResponse>>>;

typedef struct Function<void (WebCore::DOMPasteAccessResponse)> {
    unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::DOMPasteAccessResponse>, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::DOMPasteAccessResponse>>> m_callableWrapper;
} Function<void (WebCore::DOMPasteAccessResponse)>;

typedef struct CompletionHandler<void (WebCore::DOMPasteAccessResponse)> {
    Function<void (WebCore::DOMPasteAccessResponse)> m_function;
} CompletionHandler<void (WebCore::DOMPasteAccessResponse)>;

typedef struct BlockPtr<void (UIWKAutocorrectionContext *)> {
    id m_block;
    unk field1;
} BlockPtr<void (UIWKAutocorrectionContext *)>;

typedef struct __compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::default_delete<WTF::Detail::CallableWrapperBase<void>>> {
    void __value_;
} __compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::default_delete<WTF::Detail::CallableWrapperBase<void>>>;

typedef struct unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::default_delete<WTF::Detail::CallableWrapperBase<void>>> {
    __compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::default_delete<WTF::Detail::CallableWrapperBase<void>>> __ptr_;
} unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::default_delete<WTF::Detail::CallableWrapperBase<void>>>;

typedef struct Function<void ()> {
    unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::default_delete<WTF::Detail::CallableWrapperBase<void>>> m_callableWrapper;
} Function<void ()>;

typedef struct CompletionHandler<void ()> {
    Function<void ()> m_function;
} CompletionHandler<void ()>;

typedef struct RetainPtr<id<UIDragSession>> {
    void m_ptr;
} RetainPtr<id<UIDragSession>>;

typedef struct RetainPtr<id<UIDropSession>> {
    void m_ptr;
} RetainPtr<id<UIDropSession>>;

typedef struct BlockPtr<void (NSArray<UIDragItem *> *)> {
    id m_block;
    unk field1;
} BlockPtr<void (NSArray<UIDragItem *> *)>;

typedef struct DragSourceState {
} // Error Processing Struct Fields

typedef struct optional<WebKit::DragSourceState> {
    unk ;
    char __null_state_;
    DragSourceState __val_;
    BOOL __engaged_;
} optional<WebKit::DragSourceState>;

typedef struct Vector<WebKit::DragSourceState, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
} // Error Processing Struct Fields

typedef struct ItemAndPreviewProvider {
} // Error Processing Struct Fields

typedef struct Vector<WebKit::ItemAndPreviewProvider, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
    ItemAndPreviewProvider m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<WebKit::ItemAndPreviewProvider, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>;

typedef struct ItemAndPreview {
} // Error Processing Struct Fields

typedef struct Vector<WebKit::ItemAndPreview, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
    ItemAndPreview m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<WebKit::ItemAndPreview, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>;

typedef struct DragDropInteractionState {
    CGPoint m_lastGlobalPosition;
    CGPoint m_adjustedPositionForDragEnd;
    BOOL m_didBeginDragging;
    BOOL m_isPerformingDrop;
    RetainPtr<id<UIDragSession>> m_dragSession;
    RetainPtr<id<UIDropSession>> m_dropSession;
    BlockPtr<void ()> m_dragStartCompletionBlock;
    BlockPtr<void ()> m_dragCancelSetDownBlock;
    BlockPtr<void (NSArray<UIDragItem *> *)> m_addDragItemCompletionBlock;
    optional<WebKit::DragSourceState> m_stagedDragSource;
    Vector<WebKit::DragSourceState, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> m_activeDragSources;
    Vector<WebKit::ItemAndPreviewProvider, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> m_delayedItemPreviewProviders;
    Vector<WebKit::ItemAndPreview, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> m_defaultDropPreviews;
} DragDropInteractionState;

typedef struct RetainPtr<UIDragInteraction> {
    void m_ptr;
} RetainPtr<UIDragInteraction>;

typedef struct RetainPtr<UIDropInteraction> {
    void m_ptr;
} RetainPtr<UIDropInteraction>;

typedef struct RetainPtr<_UITextDragCaretView> {
    void m_ptr;
} RetainPtr<_UITextDragCaretView>;

typedef struct RetainPtr<WKImageAnalysisGestureRecognizer> {
    void m_ptr;
} RetainPtr<WKImageAnalysisGestureRecognizer>;

typedef struct optional<WTF::ObjectIdentifier<WebKit::ImageAnalysisRequestIdentifierType>> {
    unk ;
    char __null_state_;
    ObjectIdentifier<WebKit::ImageAnalysisRequestIdentifierType> __val_;
    BOOL __engaged_;
} optional<WTF::ObjectIdentifier<WebKit::ImageAnalysisRequestIdentifierType>>;

typedef struct Vector<WTF::BlockPtr<void (WebKit::ProceedWithTextSelectionInImage)>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
    void m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<WTF::BlockPtr<void (WebKit::ProceedWithTextSelectionInImage)>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>;

typedef struct RetainPtr<VKImageAnalyzer> {
    void m_ptr;
} RetainPtr<VKImageAnalyzer>;

typedef struct RetainPtr<QLPreviewController> {
    void m_ptr;
} RetainPtr<QLPreviewController>;

typedef struct PageClientImpl {
} // Error Processing Struct Fields

typedef struct __compressed_pair<WebKit::PageClientImpl *, std::default_delete<WebKit::PageClientImpl>> {
    PageClientImpl __value_;
} __compressed_pair<WebKit::PageClientImpl *, std::default_delete<WebKit::PageClientImpl>>;

typedef struct unique_ptr<WebKit::PageClientImpl, std::default_delete<WebKit::PageClientImpl>> {
    __compressed_pair<WebKit::PageClientImpl *, std::default_delete<WebKit::PageClientImpl>> __ptr_;
} unique_ptr<WebKit::PageClientImpl, std::default_delete<WebKit::PageClientImpl>>;

typedef struct RetainPtr<WKBrowsingContextController> {
    void m_ptr;
} RetainPtr<WKBrowsingContextController>;

typedef struct RetainPtr<WKInspectorIndicationView> {
    void m_ptr;
} RetainPtr<WKInspectorIndicationView>;

typedef struct RetainPtr<WKInspectorHighlightView> {
    void m_ptr;
} RetainPtr<WKInspectorHighlightView>;

typedef struct RetainPtr<_UILayerHostView> {
    void m_ptr;
} RetainPtr<_UILayerHostView>;

typedef struct Data {
    MonotonicTime timestamp;
    FloatPoint position;
    CGFloat scale;
} Data;

typedef struct HistoricalVelocityData {
    unsigned int m_historySize;
    unsigned int m_latestDataIndex;
    MonotonicTime m_lastAppendTimestamp;
    Data m_positionHistory;
} HistoricalVelocityData;

typedef struct RetainPtr<NSUndoManager> {
    void m_ptr;
} RetainPtr<NSUndoManager>;

typedef struct RetainPtr<WKQuirkyNSUndoManager> {
    void m_ptr;
} RetainPtr<WKQuirkyNSUndoManager>;

typedef struct RetainPtr<WKFocusedElementInfo> {
    void m_ptr;
} RetainPtr<WKFocusedElementInfo>;

typedef struct RetainPtr<NSObject<NSSecureCoding>> {
    void m_ptr;
} RetainPtr<NSObject<NSSecureCoding>>;

typedef struct _NSProgressFraction {
    NSInteger field0;
    NSInteger field1;
    BOOL field2;
} _NSProgressFraction;

typedef struct _NSProgressFractionTuple {
    _NSProgressFraction field0;
    _NSProgressFraction field1;
} _NSProgressFractionTuple;

typedef struct SandboxExtension {
} // Error Processing Struct Fields

typedef struct RefPtr<WebKit::SandboxExtension, WTF::RawPtrTraits<WebKit::SandboxExtension>, WTF::DefaultRefDerefTraits<WebKit::SandboxExtension>> {
    SandboxExtension m_ptr;
} RefPtr<WebKit::SandboxExtension, WTF::RawPtrTraits<WebKit::SandboxExtension>, WTF::DefaultRefDerefTraits<WebKit::SandboxExtension>>;

typedef struct RetainPtr<NSURLSessionDownloadTask> {
    void m_ptr;
} RetainPtr<NSURLSessionDownloadTask>;

typedef struct WeakPtr<WebKit::Download, WTF::EmptyCounter> {
    RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> m_impl;
} WeakPtr<WebKit::Download, WTF::EmptyCounter>;

typedef struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&>>> {
    void __value_;
} __compressed_pair<WTF::Detail::CallableWrapperBase<void, WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&>>>;

typedef struct unique_ptr<WTF::Detail::CallableWrapperBase<void, WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&>, std::default_delete<WTF::Detail::CallableWrapperBase<void, WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&>>> {
    __compressed_pair<WTF::Detail::CallableWrapperBase<void, WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&>>> __ptr_;
} unique_ptr<WTF::Detail::CallableWrapperBase<void, WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&>, std::default_delete<WTF::Detail::CallableWrapperBase<void, WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&>>>;

typedef struct Function<void (WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&)> {
    unique_ptr<WTF::Detail::CallableWrapperBase<void, WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&>, std::default_delete<WTF::Detail::CallableWrapperBase<void, WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&>>> m_callableWrapper;
} Function<void (WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&)>;

typedef struct CompletionHandler<void (WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&)> {
    Function<void (WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&)> m_function;
} CompletionHandler<void (WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&)>;

typedef struct SafeBrowsingWarning {
} // Error Processing Struct Fields

typedef struct RefPtr<const WebKit::SafeBrowsingWarning, WTF::RawPtrTraits<const WebKit::SafeBrowsingWarning>, WTF::DefaultRefDerefTraits<const WebKit::SafeBrowsingWarning>> {
    SafeBrowsingWarning m_ptr;
} RefPtr<const WebKit::SafeBrowsingWarning, WTF::RawPtrTraits<const WebKit::SafeBrowsingWarning>, WTF::DefaultRefDerefTraits<const WebKit::SafeBrowsingWarning>>;

typedef struct WeakObjCPtr<WKSafeBrowsingTextView> {
    id m_weakReference;
} WeakObjCPtr<WKSafeBrowsingTextView>;

typedef struct WeakObjCPtr<WKSafeBrowsingBox> {
    id m_weakReference;
} WeakObjCPtr<WKSafeBrowsingBox>;

typedef struct WeakObjCPtr<WKSafeBrowsingWarning> {
    id m_weakReference;
} WeakObjCPtr<WKSafeBrowsingWarning>;

typedef struct WeakObjCPtr<id<WKShareSheetDelegate>> {
    id m_weakReference;
} WeakObjCPtr<id<WKShareSheetDelegate>>;

typedef struct CompletionHandler<void (bool)> {
    Function<void (bool)> m_function;
} CompletionHandler<void (bool)>;

typedef struct RetainPtr<UIActivityViewController> {
    void m_ptr;
} RetainPtr<UIActivityViewController>;

