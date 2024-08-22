typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct __CTFont {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL unarchiverSourceType;
    BOOL isTransientObject;
} ?;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __CFLocale {
} // Error Processing Struct Fields

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct TSWPAttributeRecord {
    NSUInteger field0;
    unk field1;
    id field2;
    TSWPParagraphData field3;
} TSWPAttributeRecord;

typedef struct TSWPChangeAttributeArray {
    unk field0;
    TSWPAttributeRecord field1;
    id field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
} TSWPChangeAttributeArray;

typedef struct TSWPParagraphAttributeArray {
    unk field0;
    TSWPAttributeRecord field1;
    id field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
} TSWPParagraphAttributeArray;

typedef struct TSWPAttributeArray {
    unk field0;
    TSWPAttributeRecord field1;
    id field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
} TSWPAttributeArray;

typedef struct TSWPParagraphEnumerator {
    id field0;
    id field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    NSUInteger field5;
    BOOL field6;
    _NSRange field7;
} TSWPParagraphEnumerator;

typedef struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long *, std::allocator<unsigned long>>;

typedef struct vector<unsigned long, std::allocator<unsigned long>> {
    NSUInteger __begin_;
    NSUInteger __end_;
    __compressed_pair<unsigned long *, std::allocator<unsigned long>> __end_cap_;
} vector<unsigned long, std::allocator<unsigned long>>;

typedef struct TSWPParagraphData {
    unk ;
    ? ;
    ? ;
    ? ;
    ? ;
    ? ;
    ? ;
} TSWPParagraphData;

typedef struct __CFStringTokenizer {
} // Error Processing Struct Fields

typedef struct TSWPStorageActionBuilder {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<unsigned long, std::__cxx_atomic_base_impl<unsigned long>> {
    uint8_t __a_value;
    NSUInteger field1;
} __cxx_atomic_impl<unsigned long, std::__cxx_atomic_base_impl<unsigned long>>;

typedef struct atomic<unsigned long> {
    __cxx_atomic_impl<unsigned long, std::__cxx_atomic_base_impl<unsigned long>> __a_;
} atomic<unsigned long>;

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
} CGAffineTransform;

typedef struct __CTParagraphStyle {
} // Error Processing Struct Fields

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct UIEdgeInsets {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} UIEdgeInsets;

typedef struct InternalMetadata {
    void field0;
} InternalMetadata;

typedef struct Message {
    unk field0;
    InternalMetadata field1;
} Message;

typedef struct TSWPFontHeightInfo {
    CGFloat spaceBefore;
    CGFloat attachmentHeight;
    CGFloat ascent;
    CGFloat capHeight;
    CGFloat descent;
    CGFloat leadingAbove;
    CGFloat leadingBelow;
    CGFloat spaceAfter;
    CGFloat verticalHeight;
    CGFloat xHeight;
    CGFloat underlinePosition;
    CGFloat underlineThickness;
} TSWPFontHeightInfo;

typedef struct TSWPLineFragment {
} // Error Processing Struct Fields

typedef struct _TSWPCharIndexAndPosition {
    NSUInteger field0;
    int field1;
    CGFloat field2;
    int field3;
    CGFloat field4;
} _TSWPCharIndexAndPosition;

typedef struct TSWPLineFragmentArray {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<TSWPLineFragmentArray> {
    TSWPLineFragmentArray __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<TSWPLineFragmentArray>;

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct TSWPDrawingState {
    id field0;
    id field1;
    CGRect field2;
    id field3;
    id field4;
    NSUInteger field5;
    CGColor field6;
    CGFloat field7;
    BOOL field8;
    BOOL field9;
    BOOL field10;
    BOOL field11;
    BOOL field12;
    BOOL field13;
    BOOL field14;
    BOOL field15;
    NSUInteger field16;
    _NSRange field17;
    id field18;
    id field19;
    _NSRange field20;
    _NSRange field21;
    NSUInteger field22;
    _NSRange field23;
    id field24;
    BOOL field25;
    id field26;
} TSWPDrawingState;

typedef struct __CTRun {
} // Error Processing Struct Fields

typedef struct __CTLine {
} // Error Processing Struct Fields

typedef struct TSWPLineRef {
    __CTLine field0;
    CGPoint field1;
    _NSRange field2;
    NSUInteger field3;
    CGAffineTransform field4;
    NSUInteger field5;
} TSWPLineRef;

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct CGPDFDocument {
} // Error Processing Struct Fields

typedef struct TSWPParagraphTypesetter {
} // Error Processing Struct Fields

typedef struct shared_ptr<TSWPParagraphTypesetter> {
} // Error Processing Struct Fields

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, std::less<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, std::less<unsigned long>, true>>;

typedef struct __tree<std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, std::less<unsigned long>, true>> __pair3_;
} __tree<std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>>>;

typedef struct map<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>>> {
    __tree<std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>>> __tree_;
} map<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>>>;

typedef struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> {
    unsigned short __value_;
} __compressed_pair<unsigned short *, std::allocator<unsigned short>>;

typedef struct vector<unsigned short, std::allocator<unsigned short>> {
    unsigned short __begin_;
    unsigned short __end_;
    __compressed_pair<unsigned short *, std::allocator<unsigned short>> __end_cap_;
} vector<unsigned short, std::allocator<unsigned short>>;

typedef struct vector<CGPoint, std::allocator<CGPoint>> {
} // Error Processing Struct Fields

typedef struct vector<CGRect, std::allocator<CGRect>> {
} // Error Processing Struct Fields

typedef struct vector<TSWPAttachmentPosition, std::allocator<TSWPAttachmentPosition>> {
} // Error Processing Struct Fields

typedef struct __list_node_base<unsigned long, void *> {
    void __prev_;
    void __next_;
} __list_node_base<unsigned long, void *>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__list_node<unsigned long, void *>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__list_node<unsigned long, void *>>>;

typedef struct list<unsigned long, std::allocator<unsigned long>> {
    __list_node_base<unsigned long, void *> __end_;
    __compressed_pair<unsigned long, std::allocator<std::__list_node<unsigned long, void *>>> __size_alloc_;
} list<unsigned long, std::allocator<unsigned long>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, TSWPFontMetricsCacheEntry>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, TSWPFontMetricsCacheEntry>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, TSWPFontMetricsCacheEntry>, std::less<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, TSWPFontMetricsCacheEntry>, std::less<unsigned long>, true>>;

typedef struct __tree<std::__value_type<unsigned long, TSWPFontMetricsCacheEntry>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, TSWPFontMetricsCacheEntry>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, TSWPFontMetricsCacheEntry>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, TSWPFontMetricsCacheEntry>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, TSWPFontMetricsCacheEntry>, std::less<unsigned long>, true>> __pair3_;
} __tree<std::__value_type<unsigned long, TSWPFontMetricsCacheEntry>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, TSWPFontMetricsCacheEntry>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, TSWPFontMetricsCacheEntry>>>;

typedef struct map<unsigned long, TSWPFontMetricsCacheEntry, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, TSWPFontMetricsCacheEntry>>> {
    __tree<std::__value_type<unsigned long, TSWPFontMetricsCacheEntry>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, TSWPFontMetricsCacheEntry>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, TSWPFontMetricsCacheEntry>>> __tree_;
} map<unsigned long, TSWPFontMetricsCacheEntry, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, TSWPFontMetricsCacheEntry>>>;

typedef struct _opaque_pthread_rwlock_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_rwlock_t;

typedef struct __compressed_pair<unsigned long, std::allocator<unsigned long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<unsigned long>>;

typedef struct vector<bool, std::allocator<bool>> {
    NSUInteger __begin_;
    NSUInteger __size_;
    __compressed_pair<unsigned long, std::allocator<unsigned long>> __cap_alloc_;
} vector<bool, std::allocator<bool>>;

typedef struct TSWPParagraphMetrics {
    BOOL field0;
    CGSize field1;
    NSUInteger field2;
    CGFloat field3;
} TSWPParagraphMetrics;

typedef struct vector<TSWPParagraphMetrics, std::allocator<TSWPParagraphMetrics>> {
} // Error Processing Struct Fields

typedef struct vector<_NSRange, std::allocator<_NSRange>> {
} // Error Processing Struct Fields

typedef struct CGImageSource {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct vector<TSWPDirtyRange, std::allocator<TSWPDirtyRange>> {
} // Error Processing Struct Fields

typedef struct CACornerRadii {
    CGSize field0;
    CGSize field1;
    CGSize field2;
    CGSize field3;
} CACornerRadii;

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

typedef struct TSWPAttributeEnumerator {
} // Error Processing Struct Fields

typedef struct __CTFontCollection {
} // Error Processing Struct Fields

typedef struct __CTFontDescriptor {
} // Error Processing Struct Fields

typedef struct _TSWPCharIndexAndAffinity {
} // Error Processing Struct Fields

typedef struct vector<_TSWPCharIndexAndAffinity, std::allocator<_TSWPCharIndexAndAffinity>> {
} // Error Processing Struct Fields

typedef struct TSWPStorageTransaction {
} // Error Processing Struct Fields

