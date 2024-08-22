typedef struct TSKUIDStruct {
    NSUInteger _lower;
    NSUInteger _upper;
} TSKUIDStruct;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CGAffineTransform {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
} CGAffineTransform;

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

typedef struct UIEdgeInsets {
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
} UIEdgeInsets;

typedef struct ? {
    BOOL genericInvalidated;
    BOOL sizeInvalidated;
} ?;

typedef struct TSUCellCoord {
    unsigned int row;
    unsigned short column;
    BOOL _preserveRow;
    BOOL _preserveColumn;
} TSUCellCoord;

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct TSCERecalculationState {
    unsigned char field0;
} TSCERecalculationState;

typedef struct TSUCellRect {
    TSUCellCoord field0;
    ? field1;
} TSUCellRect;

typedef struct TSCERangeCoordinate {
    TSUCellCoord _topLeft;
    TSUCellCoord _bottomRight;
} TSCERangeCoordinate;

typedef struct TSCERangeRef {
    TSCERangeCoordinate range;
    TSKUIDStruct _tableUID;
} TSCERangeRef;

typedef struct vector<TSCERangeRef, std::allocator<TSCERangeRef>> {
} // Error Processing Struct Fields

typedef struct TSCECellRef {
    TSUCellCoord field0;
    TSKUIDStruct field1;
} TSCECellRef;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<TSUCellCoord, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<TSUCellCoord, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *>, std::allocator<std::__hash_node<TSUCellCoord, void *>>> {
    __hash_node_base<std::__hash_node<TSUCellCoord, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *>, std::allocator<std::__hash_node<TSUCellCoord, void *>>>;

typedef struct __compressed_pair<unsigned long, std::hash<TSUCellCoord>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::hash<TSUCellCoord>>;

typedef struct __compressed_pair<float, std::equal_to<TSUCellCoord>> {
    float __value_;
} __compressed_pair<float, std::equal_to<TSUCellCoord>>;

typedef struct __hash_table<TSUCellCoord, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<TSUCellCoord>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *>, std::allocator<std::__hash_node<TSUCellCoord, void *>>> __p1_;
    __compressed_pair<unsigned long, std::hash<TSUCellCoord>> __p2_;
    __compressed_pair<float, std::equal_to<TSUCellCoord>> __p3_;
} __hash_table<TSUCellCoord, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<TSUCellCoord>>;

typedef struct unordered_set<TSUCellCoord, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<TSUCellCoord>> {
    __hash_table<TSUCellCoord, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<TSUCellCoord>> __table_;
} unordered_set<TSUCellCoord, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<TSUCellCoord>>;

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::pair<TSCEValue, TSUCellCoord> *, std::allocator<std::pair<TSCEValue, TSUCellCoord>>> {
    void field0;
} __compressed_pair<std::pair<TSCEValue, TSUCellCoord> *, std::allocator<std::pair<TSCEValue, TSUCellCoord>>>;

typedef struct vector<std::pair<TSCEValue, TSUCellCoord>, std::allocator<std::pair<TSCEValue, TSUCellCoord>>> {
    void field0;
    void field1;
    __compressed_pair<std::pair<TSCEValue, TSUCellCoord> *, std::allocator<std::pair<TSCEValue, TSUCellCoord>>> field2;
} vector<std::pair<TSCEValue, TSUCellCoord>, std::allocator<std::pair<TSCEValue, TSUCellCoord>>>;

typedef struct vector<TSUCellCoord, std::allocator<TSUCellCoord>> {
} // Error Processing Struct Fields

typedef struct TSCEDurationFormat {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
} TSCEDurationFormat;

typedef struct TSCEBaseFormat {
    unsigned char field0;
    unsigned char field1;
    BOOL field2;
} TSCEBaseFormat;

typedef struct TSCEFractionFormat {
    char field0;
} TSCEFractionFormat;

typedef struct TSCENumberFormat {
    unsigned char field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    unsigned short field4;
} TSCENumberFormat;

typedef struct TSCEFormat {
    id field0;
    unsigned int field1;
    unsigned char field2;
    TSCEDurationFormat field3;
    TSCEBaseFormat field4;
    TSCEFractionFormat field5;
    TSCENumberFormat field6;
} TSCEFormat;

typedef struct TSCEGrid {
    unk field0;
    id field1;
    TSCEFormat field2;
} TSCEGrid;

typedef struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long *, std::allocator<unsigned long>>;

typedef struct vector<unsigned long, std::allocator<unsigned long>> {
    NSUInteger __begin_;
    NSUInteger __end_;
    __compressed_pair<unsigned long *, std::allocator<unsigned long>> __end_cap_;
} vector<unsigned long, std::allocator<unsigned long>>;

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct TSCEValue {
    unk field0;
    ? field1;
    NSUInteger field2;
    unsigned char field3;
} TSCEValue;

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct __compressed_pair<TNChartFormulaType *, std::allocator<TNChartFormulaType>> {
    NSUInteger field0;
} __compressed_pair<TNChartFormulaType *, std::allocator<TNChartFormulaType>>;

typedef struct vector<TNChartFormulaType, std::allocator<TNChartFormulaType>> {
    NSUInteger field0;
    NSUInteger field1;
    __compressed_pair<TNChartFormulaType *, std::allocator<TNChartFormulaType>> field2;
} vector<TNChartFormulaType, std::allocator<TNChartFormulaType>>;

typedef struct __compressed_pair<TSCECategoryRef *__strong *, std::allocator<TSCECategoryRef *>> {
    id field0;
} __compressed_pair<TSCECategoryRef *__strong *, std::allocator<TSCECategoryRef *>>;

typedef struct vector<TSCECategoryRef *, std::allocator<TSCECategoryRef *>> {
    id field0;
    id field1;
    __compressed_pair<TSCECategoryRef *__strong *, std::allocator<TSCECategoryRef *>> field2;
} vector<TSCECategoryRef *, std::allocator<TSCECategoryRef *>>;

typedef struct vector<TSCERangeCoordinate, std::allocator<TSCERangeCoordinate>> {
} // Error Processing Struct Fields

typedef struct TSWPFontHeightInfo {
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
} TSWPFontHeightInfo;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, std::less<TSUCellCoord>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, std::less<TSUCellCoord>, true>>;

typedef struct __tree<std::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, std::less<TSUCellCoord>, true>, std::allocator<std::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, std::less<TSUCellCoord>, true>> __pair3_;
} __tree<std::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, std::less<TSUCellCoord>, true>, std::allocator<std::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>>>;

typedef struct map<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>, std::less<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>>> {
    __tree<std::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, std::less<TSUCellCoord>, true>, std::allocator<std::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>>> __tree_;
} map<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>, std::less<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>>>;

typedef struct _opaque_pthread_rwlock_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_rwlock_t;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<TSUCellCoord, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<TSUCellCoord, void *>>>;

typedef struct __compressed_pair<unsigned long, std::less<TSUCellCoord>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::less<TSUCellCoord>>;

typedef struct __tree<TSUCellCoord, std::less<TSUCellCoord>, std::allocator<TSUCellCoord>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<TSUCellCoord, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::less<TSUCellCoord>> __pair3_;
} __tree<TSUCellCoord, std::less<TSUCellCoord>, std::allocator<TSUCellCoord>>;

typedef struct set<TSUCellCoord, std::less<TSUCellCoord>, std::allocator<TSUCellCoord>> {
    __tree<TSUCellCoord, std::less<TSUCellCoord>, std::allocator<TSUCellCoord>> __tree_;
} set<TSUCellCoord, std::less<TSUCellCoord>, std::allocator<TSUCellCoord>>;

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

typedef struct CGImageSource {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __CFLocale {
} // Error Processing Struct Fields

