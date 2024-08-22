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

typedef struct _NSZone {
} // Error Processing Struct Fields

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

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct CAFrameRateRange {
    float field0;
    float field1;
    float field2;
} CAFrameRateRange;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct CGImageSource {
} // Error Processing Struct Fields

typedef struct _SXConvertibleValue {
    CGFloat value;
    NSUInteger unit;
} _SXConvertibleValue;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct CGColorSpace {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct CGDataProvider {
} // Error Processing Struct Fields

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct CGPath {
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

typedef struct TSWPAttributeRecord {
} // Error Processing Struct Fields

typedef struct TSWPChangeAttributeArray {
    unk field0;
    unsigned int field1;
    NSUInteger field2;
    NSUInteger field3;
    TSWPAttributeRecord field4;
    id field5;
    NSUInteger field6;
    BOOL field7;
    id field8;
    int field9;
} TSWPChangeAttributeArray;

typedef struct TSWPStorageTransaction {
} // Error Processing Struct Fields

typedef struct __CFLocale {
} // Error Processing Struct Fields

typedef struct TSWPParagraphEnumerator {
    id field0;
    id field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    NSUInteger field5;
    BOOL field6;
} TSWPParagraphEnumerator;

typedef struct TSWPAttributeArray {
} // Error Processing Struct Fields

typedef struct TSWPParagraphAttributeArray {
} // Error Processing Struct Fields

typedef struct __CTFont {
} // Error Processing Struct Fields

typedef struct TSWPRangeVector {
} // Error Processing Struct Fields

typedef struct CLLocationCoordinate2D {
    CGFloat latitude;
    CGFloat longitude;
} CLLocationCoordinate2D;

typedef struct NSEdgeInsets {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} NSEdgeInsets;

typedef struct _SXComponentContentInset {
    BOOL all;
    BOOL left;
    BOOL top;
    BOOL right;
    BOOL bottom;
} _SXComponentContentInset;

typedef struct __CFStringTokenizer {
} // Error Processing Struct Fields

typedef struct TSWPLineFragment {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, NSMutableArray *>, TSP::IdentifierHash, std::equal_to<const long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, NSMutableArray *>, TSP::IdentifierHash, std::equal_to<const long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, NSMutableArray *>, std::equal_to<const long long>, TSP::IdentifierHash, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, NSMutableArray *>, std::equal_to<const long long>, TSP::IdentifierHash, true>>;

typedef struct __hash_table<std::__hash_value_type<const long long, NSMutableArray *>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, NSMutableArray *>, TSP::IdentifierHash, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, NSMutableArray *>, std::equal_to<const long long>, TSP::IdentifierHash, true>, std::allocator<std::__hash_value_type<const long long, NSMutableArray *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, NSMutableArray *>, TSP::IdentifierHash, std::equal_to<const long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, NSMutableArray *>, std::equal_to<const long long>, TSP::IdentifierHash, true>> __p3_;
} __hash_table<std::__hash_value_type<const long long, NSMutableArray *>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, NSMutableArray *>, TSP::IdentifierHash, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, NSMutableArray *>, std::equal_to<const long long>, TSP::IdentifierHash, true>, std::allocator<std::__hash_value_type<const long long, NSMutableArray *>>>;

typedef struct unordered_map<const long long, NSMutableArray *, TSP::IdentifierHash, std::equal_to<const long long>, std::allocator<std::pair<const long long, NSMutableArray *>>> {
    __hash_table<std::__hash_value_type<const long long, NSMutableArray *>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, NSMutableArray *>, TSP::IdentifierHash, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, NSMutableArray *>, std::equal_to<const long long>, TSP::IdentifierHash, true>, std::allocator<std::__hash_value_type<const long long, NSMutableArray *>>> __table_;
} unordered_map<const long long, NSMutableArray *, TSP::IdentifierHash, std::equal_to<const long long>, std::allocator<std::pair<const long long, NSMutableArray *>>>;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

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

