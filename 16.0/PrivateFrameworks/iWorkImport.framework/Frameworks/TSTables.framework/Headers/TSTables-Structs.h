typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct TSUCellCoord {
    unsigned int row;
    unsigned short column;
    BOOL _preserveRow;
    BOOL _preserveColumn;
} TSUCellCoord;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL unarchiverSourceType;
    BOOL isTransientObject;
} ?;

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

typedef struct __CTFont {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long *, std::allocator<unsigned long>>;

typedef struct vector<unsigned long, std::allocator<unsigned long>> {
    NSUInteger __begin_;
    NSUInteger __end_;
    __compressed_pair<unsigned long *, std::allocator<unsigned long>> __end_cap_;
} vector<unsigned long, std::allocator<unsigned long>>;

typedef struct TSWPParagraphData {
    unk field0;
    ? field1;
    ? field2;
    ? field3;
    ? field4;
    ? field5;
    ? field6;
} TSWPParagraphData;

typedef struct __CFStringTokenizer {
} // Error Processing Struct Fields

typedef struct TSWPStorageActionBuilder {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __CFLocale {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<unsigned long, std::__cxx_atomic_base_impl<unsigned long>> {
    uint8_t __a_value;
    NSUInteger field1;
} __cxx_atomic_impl<unsigned long, std::__cxx_atomic_base_impl<unsigned long>>;

typedef struct atomic<unsigned long> {
    __cxx_atomic_impl<unsigned long, std::__cxx_atomic_base_impl<unsigned long>> __a_;
} atomic<unsigned long>;

typedef struct TSKUIDStruct {
    NSUInteger _lower;
    NSUInteger _upper;
} TSKUIDStruct;

typedef struct TSCEReplaceFormulaOptions {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    TSKUIDStruct field5;
    id field6;
} TSCEReplaceFormulaOptions;

typedef struct TSCECellRef {
    TSUCellCoord coordinate;
    TSKUIDStruct _tableUID;
} TSCECellRef;

typedef struct TSCERangeCoordinate {
    TSUCellCoord _topLeft;
    TSUCellCoord _bottomRight;
} TSCERangeCoordinate;

typedef struct TSCERangeRef {
    TSCERangeCoordinate range;
    TSKUIDStruct _tableUID;
} TSCERangeRef;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSKUIDStruct, TSCECellCoordSet>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSKUIDStruct, TSCECellCoordSet>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::less<TSKUIDStruct>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::less<TSKUIDStruct>, true>>;

typedef struct __tree<std::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::less<TSKUIDStruct>, true>, std::allocator<std::__value_type<TSKUIDStruct, TSCECellCoordSet>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSKUIDStruct, TSCECellCoordSet>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::less<TSKUIDStruct>, true>> __pair3_;
} __tree<std::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::less<TSKUIDStruct>, true>, std::allocator<std::__value_type<TSKUIDStruct, TSCECellCoordSet>>>;

typedef struct map<TSKUIDStruct, TSCECellCoordSet, std::less<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSCECellCoordSet>>> {
    __tree<std::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::less<TSKUIDStruct>, true>, std::allocator<std::__value_type<TSKUIDStruct, TSCECellCoordSet>>> __tree_;
} map<TSKUIDStruct, TSCECellCoordSet, std::less<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSCECellCoordSet>>>;

typedef struct TSCECellRefSet {
    map<TSKUIDStruct, TSCECellCoordSet, std::less<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSCECellCoordSet>>> _coordsForOwnerUid;
} TSCECellRefSet;

typedef struct TSKUIDStructVectorTemplate<TSKUIDStruct> {
} // Error Processing Struct Fields

typedef struct TSUPreserveFlags {
    unsigned char _flags;
} TSUPreserveFlags;

typedef struct TSUIndexRange {
    NSInteger _begin;
    NSInteger _end;
} TSUIndexRange;

typedef struct TSUIndexSet {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>>>;

typedef struct unordered_map<TSKUIDStruct, TSTAggNode *, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSTAggNode *>>> {
    __hash_table<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTAggNode *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSTAggNode *>>> __table_;
} unordered_map<TSKUIDStruct, TSTAggNode *, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSTAggNode *>>>;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>>>;

typedef struct unordered_map<TSKUIDStruct, TSTGroupNode *, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSTGroupNode *>>> {
    __hash_table<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSTGroupNode *>>> __table_;
} unordered_map<TSKUIDStruct, TSTGroupNode *, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSTGroupNode *>>>;

typedef struct vector<TSUCellCoord, std::allocator<TSUCellCoord>> {
} // Error Processing Struct Fields

typedef struct TSCEWarningReportingContext {
    BOOL field0;
    BOOL field1;
    id field2;
} TSCEWarningReportingContext;

typedef struct TSKUIDStructCoord {
    TSKUIDStruct _column;
    TSKUIDStruct _row;
} TSKUIDStructCoord;

typedef struct TSUCellRect {
    TSUCellCoord origin;
    ? size;
} TSUCellRect;

typedef struct TSUColumnRowOffset {
    int field0;
    int field1;
} TSUColumnRowOffset;

typedef struct RefTypeHolder<TSCERangeRef, 2> {
    TSCERangeRef _ref;
} RefTypeHolder<TSCERangeRef, 2>;

typedef struct RefTypeHolder<TSCERangeRef, 0> {
    TSCERangeRef field0;
} RefTypeHolder<TSCERangeRef, 0>;

typedef struct TSUChromeCellCoord {
    TSUCellCoord field0;
} TSUChromeCellCoord;

typedef struct TSCETableResolver {
    unk field0;
} TSCETableResolver;

typedef struct TSUModelRowIndex {
    unsigned int _row;
} TSUModelRowIndex;

typedef struct TSUModelColumnIndex {
    unsigned short _column;
} TSUModelColumnIndex;

typedef struct TSUModelCellRect {
    TSUCellRect field0;
} TSUModelCellRect;

typedef struct TSCERecalculationState {
    unsigned char field0;
} TSCERecalculationState;

typedef struct TSUModelCellCoord {
    TSUCellCoord _coord;
} TSUModelCellCoord;

typedef struct TSTSimpleRange {
    NSInteger origin;
    NSUInteger length;
} TSTSimpleRange;

typedef struct TSCEValue {
    unk ;
    ? DONT_USE_fakeTSCENumberValueStandIn;
    NSUInteger _buff;
    unsigned char _type;
} TSCEValue;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned short, TSUIndexSet>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned short, TSUIndexSet>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>, true>>;

typedef struct __tree<std::__value_type<unsigned short, TSUIndexSet>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>, true>, std::allocator<std::__value_type<unsigned short, TSUIndexSet>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned short, TSUIndexSet>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>, true>> __pair3_;
} __tree<std::__value_type<unsigned short, TSUIndexSet>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>, true>, std::allocator<std::__value_type<unsigned short, TSUIndexSet>>>;

typedef struct map<unsigned short, TSUIndexSet, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, TSUIndexSet>>> {
    __tree<std::__value_type<unsigned short, TSUIndexSet>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>, true>, std::allocator<std::__value_type<unsigned short, TSUIndexSet>>> __tree_;
} map<unsigned short, TSUIndexSet, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, TSUIndexSet>>>;

typedef struct TSCECellCoordSet {
    map<unsigned short, TSUIndexSet, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, TSUIndexSet>>> _rowsPerColumn;
} TSCECellCoordSet;

typedef struct TSKUIDStructTract {
} // Error Processing Struct Fields

typedef struct __compressed_pair<TSTCellValueType *, std::allocator<TSTCellValueType>> {
    unsigned char __value_;
} __compressed_pair<TSTCellValueType *, std::allocator<TSTCellValueType>>;

typedef struct vector<TSTCellValueType, std::allocator<TSTCellValueType>> {
    unsigned char __begin_;
    unsigned char __end_;
    __compressed_pair<TSTCellValueType *, std::allocator<TSTCellValueType>> __end_cap_;
} vector<TSTCellValueType, std::allocator<TSTCellValueType>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, TSTGroupingType>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, TSTGroupingType>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, TSTGroupingType>, std::less<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, TSTGroupingType>, std::less<unsigned long>, true>>;

typedef struct __tree<std::__value_type<unsigned long, TSTGroupingType>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, TSTGroupingType>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, TSTGroupingType>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, TSTGroupingType>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, TSTGroupingType>, std::less<unsigned long>, true>> __pair3_;
} __tree<std::__value_type<unsigned long, TSTGroupingType>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, TSTGroupingType>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, TSTGroupingType>>>;

typedef struct map<unsigned long, TSTGroupingType, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, TSTGroupingType>>> {
    __tree<std::__value_type<unsigned long, TSTGroupingType>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, TSTGroupingType>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, TSTGroupingType>>> __tree_;
} map<unsigned long, TSTGroupingType, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, TSTGroupingType>>>;

typedef struct TSTCellStorage {
    ? field0;
    unsigned char field1;
} TSTCellStorage;

typedef struct __compressed_pair<std::pair<TSUCellCoord, double> *, std::allocator<std::pair<TSUCellCoord, double>>> {
    void __value_;
} __compressed_pair<std::pair<TSUCellCoord, double> *, std::allocator<std::pair<TSUCellCoord, double>>>;

typedef struct vector<std::pair<TSUCellCoord, double>, std::allocator<std::pair<TSUCellCoord, double>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::pair<TSUCellCoord, double> *, std::allocator<std::pair<TSUCellCoord, double>>> __end_cap_;
} vector<std::pair<TSUCellCoord, double>, std::allocator<std::pair<TSUCellCoord, double>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, double>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, double>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, double>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, double>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned short, double>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, double>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, double>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>, std::allocator<std::__hash_value_type<unsigned short, double>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, double>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, double>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned short, double>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, double>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, double>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>, std::allocator<std::__hash_value_type<unsigned short, double>>>;

typedef struct unordered_map<unsigned short, double, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, double>>> {
    __hash_table<std::__hash_value_type<unsigned short, double>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, double>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, double>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>, std::allocator<std::__hash_value_type<unsigned short, double>>> __table_;
} unordered_map<unsigned short, double, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, double>>>;

typedef struct TSCEDurationFormat {
    BOOL _useAutomaticUnits;
    BOOL _durationUnitSmallest;
    BOOL _durationUnitLargest;
    BOOL _durationStyle;
} TSCEDurationFormat;

typedef struct TSCEBaseFormat {
    unsigned char base;
    unsigned char basePlaces;
    BOOL baseUseMinusSign;
} TSCEBaseFormat;

typedef struct TSCEFractionFormat {
    char fractionAccuracy;
} TSCEFractionFormat;

typedef struct TSCENumberFormat {
    unsigned char decimalPlaces;
    BOOL negativeStyle;
    BOOL showThousandsSeparator;
    BOOL useAccountingStyle;
    unsigned short currencyCodeIndex;
} TSCENumberFormat;

typedef struct TSCEFormat {
    id _tskFormat;
    unsigned int TSKFormat;
    unsigned char _formatType;
    TSCEDurationFormat _formatState;
    TSCEBaseFormat _durationFormat;
    TSCEFractionFormat _baseFormat;
    TSCENumberFormat _fractionFormat;
} TSCEFormat;

typedef struct TSCEDateValue {
    unk _vptr$TSCEAbstractValue;
    id mDate;
    TSCEFormat NSDate;
} TSCEDateValue;

typedef struct InternalMetadata {
    void field0;
} InternalMetadata;

typedef struct Message {
    unk field0;
    InternalMetadata field1;
} Message;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>> field0;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>>> {
    void field0;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>> field1;
} __compressed_pair<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>>> field0;
} unique_ptr<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<TSUCellCoord, void *> *> {
    void field0;
} __hash_node_base<std::__hash_node<TSUCellCoord, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *>, std::allocator<std::__hash_node<TSUCellCoord, void *>>> {
    __hash_node_base<std::__hash_node<TSUCellCoord, void *> *> field0;
} __compressed_pair<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *>, std::allocator<std::__hash_node<TSUCellCoord, void *>>>;

typedef struct __compressed_pair<unsigned long, std::hash<TSUCellCoord>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::hash<TSUCellCoord>>;

typedef struct __compressed_pair<float, std::equal_to<TSUCellCoord>> {
    float field0;
} __compressed_pair<float, std::equal_to<TSUCellCoord>>;

typedef struct __hash_table<TSUCellCoord, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<TSUCellCoord>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>>> field0;
    __compressed_pair<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *>, std::allocator<std::__hash_node<TSUCellCoord, void *>>> field1;
    __compressed_pair<unsigned long, std::hash<TSUCellCoord>> field2;
    __compressed_pair<float, std::equal_to<TSUCellCoord>> field3;
} __hash_table<TSUCellCoord, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<TSUCellCoord>>;

typedef struct unordered_set<TSUCellCoord, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<TSUCellCoord>> {
    __hash_table<TSUCellCoord, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<TSUCellCoord>> field0;
} unordered_set<TSUCellCoord, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<TSUCellCoord>>;

typedef struct TSCECellTractRefCore {
} // Error Processing Struct Fields

typedef struct TSCEFormulaContainingCell {
    TSCECellRef field0;
    TSCECellRef field1;
    BOOL field2;
    BOOL field3;
} TSCEFormulaContainingCell;

typedef struct TSCEFormulaRewriteContextRecord {
    TSCEFormulaContainingCell field0;
    TSKUIDStruct field1;
    TSUColumnRowOffset field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
    BOOL field8;
    BOOL field9;
} TSCEFormulaRewriteContextRecord;

typedef struct TSCEFormulaRewriteContext {
    id field0;
    id field1;
    TSCEFormulaRewriteContextRecord field2;
} TSCEFormulaRewriteContext;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
} CGAffineTransform;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct TSUChromeColumnIndex {
    unsigned short field0;
} TSUChromeColumnIndex;

typedef struct TSUChromeRowIndex {
    unsigned int field0;
} TSUChromeRowIndex;

typedef struct TSUViewColumnIndex {
    unsigned short field0;
} TSUViewColumnIndex;

typedef struct TSUViewCellCoord {
    TSUCellCoord _coord;
} TSUViewCellCoord;

typedef struct vector<TSUCellRect, std::allocator<TSUCellRect>> {
} // Error Processing Struct Fields

typedef struct vector<TSKUIDStructCoord, std::allocator<TSKUIDStructCoord>> {
} // Error Processing Struct Fields

typedef struct RefTypeHolder<TSCERangeRef, 1> {
    TSCERangeRef field0;
} RefTypeHolder<TSCERangeRef, 1>;

typedef struct __compressed_pair<RefTypeHolder<TSCERangeRef, 0> *, std::allocator<RefTypeHolder<TSCERangeRef, 0>>> {
    void field0;
} __compressed_pair<RefTypeHolder<TSCERangeRef, 0> *, std::allocator<RefTypeHolder<TSCERangeRef, 0>>>;

typedef struct vector<RefTypeHolder<TSCERangeRef, 0>, std::allocator<RefTypeHolder<TSCERangeRef, 0>>> {
    void field0;
    void field1;
    __compressed_pair<RefTypeHolder<TSCERangeRef, 0> *, std::allocator<RefTypeHolder<TSCERangeRef, 0>>> field2;
} vector<RefTypeHolder<TSCERangeRef, 0>, std::allocator<RefTypeHolder<TSCERangeRef, 0>>>;

typedef struct __compressed_pair<RefTypeHolder<TSCERangeRef, 1> *, std::allocator<RefTypeHolder<TSCERangeRef, 1>>> {
    void field0;
} __compressed_pair<RefTypeHolder<TSCERangeRef, 1> *, std::allocator<RefTypeHolder<TSCERangeRef, 1>>>;

typedef struct vector<RefTypeHolder<TSCERangeRef, 1>, std::allocator<RefTypeHolder<TSCERangeRef, 1>>> {
    void field0;
    void field1;
    __compressed_pair<RefTypeHolder<TSCERangeRef, 1> *, std::allocator<RefTypeHolder<TSCERangeRef, 1>>> field2;
} vector<RefTypeHolder<TSCERangeRef, 1>, std::allocator<RefTypeHolder<TSCERangeRef, 1>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSUCellRect>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSUCellRect>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSUCellRect>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSUCellRect>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned short, TSUCellRect>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSUCellRect>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSUCellRect>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>, std::allocator<std::__hash_value_type<unsigned short, TSUCellRect>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSUCellRect>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSUCellRect>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned short, TSUCellRect>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSUCellRect>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSUCellRect>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>, std::allocator<std::__hash_value_type<unsigned short, TSUCellRect>>>;

typedef struct unordered_map<unsigned short, TSUCellRect, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, TSUCellRect>>> {
    __hash_table<std::__hash_value_type<unsigned short, TSUCellRect>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSUCellRect>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSUCellRect>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>, std::allocator<std::__hash_value_type<unsigned short, TSUCellRect>>> __table_;
} unordered_map<unsigned short, TSUCellRect, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, TSUCellRect>>>;

typedef struct TSTCSENodeData {
    NSUInteger field0;
    NSUInteger field1;
} TSTCSENodeData;

typedef struct TSCEASTNodeArray {
    char * field0;
    NSUInteger field1;
    NSUInteger field2;
    BOOL field3;
} TSCEASTNodeArray;

typedef struct TSCEFunctionArgSpec {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, TSTCSENodeData>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, TSTCSENodeData>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, TSTCSENodeData>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, TSTCSENodeData>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned long, TSTCSENodeData>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, TSTCSENodeData>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, TSTCSENodeData>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, TSTCSENodeData>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, TSTCSENodeData>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, TSTCSENodeData>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned long, TSTCSENodeData>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, TSTCSENodeData>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, TSTCSENodeData>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, TSTCSENodeData>>>;

typedef struct unordered_map<unsigned long, TSTCSENodeData, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, TSTCSENodeData>>> {
    __hash_table<std::__hash_value_type<unsigned long, TSTCSENodeData>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, TSTCSENodeData>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, TSTCSENodeData>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, TSTCSENodeData>>> __table_;
} unordered_map<unsigned long, TSTCSENodeData, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, TSTCSENodeData>>>;

typedef struct TSUViewRowIndex {
    unsigned int field0;
} TSUViewRowIndex;

typedef struct TSUViewCellRect {
    TSUCellRect _rect;
} TSUViewCellRect;

typedef struct vector<TSUViewCellRect, std::allocator<TSUViewCellRect>> {
} // Error Processing Struct Fields

typedef struct RefTypeHolder<TSCECellRef, 0> {
    TSCECellRef _ref;
} RefTypeHolder<TSCECellRef, 0>;

typedef struct RefTypeHolder<TSCECellRef, 2> {
    TSCECellRef field0;
} RefTypeHolder<TSCECellRef, 2>;

typedef struct RefTypeHolder<TSCECellRef, 1> {
    TSCECellRef field0;
} RefTypeHolder<TSCECellRef, 1>;

typedef struct __compressed_pair<TSTCell *__strong *, std::allocator<TSTCell *>> {
    id __value_;
} __compressed_pair<TSTCell *__strong *, std::allocator<TSTCell *>>;

typedef struct vector<TSTCell *, std::allocator<TSTCell *>> {
    id __begin_;
    id __end_;
    __compressed_pair<TSTCell *__strong *, std::allocator<TSTCell *>> __end_cap_;
} vector<TSTCell *, std::allocator<TSTCell *>>;

typedef struct TSTTableTileRowBuffer {
    ? _private;
} TSTTableTileRowBuffer;

typedef struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::allocator<TSU::UUIDData<TSP::UUIDData>>> {
    void __value_;
} __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::allocator<TSU::UUIDData<TSP::UUIDData>>>;

typedef struct vector<TSU::UUIDData<TSP::UUIDData>, std::allocator<TSU::UUIDData<TSP::UUIDData>>> {
    void __begin_;
    void __end_;
    __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::allocator<TSU::UUIDData<TSP::UUIDData>>> __end_cap_;
} vector<TSU::UUIDData<TSP::UUIDData>, std::allocator<TSU::UUIDData<TSP::UUIDData>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSCENameTrieNode *>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSCENameTrieNode *>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSCENameTrieNode *>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSCENameTrieNode *>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSCENameTrieNode *>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSCENameTrieNode *>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>, std::allocator<std::__hash_value_type<unsigned short, TSCENameTrieNode *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSCENameTrieNode *>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSCENameTrieNode *>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSCENameTrieNode *>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSCENameTrieNode *>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>, std::allocator<std::__hash_value_type<unsigned short, TSCENameTrieNode *>>>;

typedef struct unordered_map<unsigned short, TSCENameTrieNode *, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, TSCENameTrieNode *>>> {
    __hash_table<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSCENameTrieNode *>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSCENameTrieNode *>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>, std::allocator<std::__hash_value_type<unsigned short, TSCENameTrieNode *>>> __table_;
} unordered_map<unsigned short, TSCENameTrieNode *, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, TSCENameTrieNode *>>>;

typedef struct TSCENameTrieNode {
    unordered_map<unsigned short, TSCENameTrieNode *, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, TSCENameTrieNode *>>> _children;
    id _name;
} TSCENameTrieNode;

typedef struct __compressed_pair<TSTGroupNode *__strong *, std::allocator<TSTGroupNode *>> {
    id field0;
} __compressed_pair<TSTGroupNode *__strong *, std::allocator<TSTGroupNode *>>;

typedef struct vector<TSTGroupNode *, std::allocator<TSTGroupNode *>> {
    id field0;
    id field1;
    __compressed_pair<TSTGroupNode *__strong *, std::allocator<TSTGroupNode *>> field2;
} vector<TSTGroupNode *, std::allocator<TSTGroupNode *>>;

typedef struct __compressed_pair<TSTGroupBy *__strong *, std::allocator<TSTGroupBy *>> {
    id __value_;
} __compressed_pair<TSTGroupBy *__strong *, std::allocator<TSTGroupBy *>>;

typedef struct vector<TSTGroupBy *, std::allocator<TSTGroupBy *>> {
    id __begin_;
    id __end_;
    __compressed_pair<TSTGroupBy *__strong *, std::allocator<TSTGroupBy *>> __end_cap_;
} vector<TSTGroupBy *, std::allocator<TSTGroupBy *>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>>>;

typedef struct unordered_map<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>>> {
    __hash_table<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>>> __table_;
} unordered_map<TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, std::pair<unsigned long, TSTColumnAggregate *>>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>>>;

typedef struct unordered_map<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>>> {
    __hash_table<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>>> __table_;
} unordered_map<TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSKUIDStructVectorTemplate<TSKUIDStruct>>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>>>;

typedef struct unordered_map<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>>> {
    __hash_table<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>>> __table_;
} unordered_map<TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, std::pair<TSKUIDStruct, unsigned long>>>>;

typedef struct vector<TSUIndexSet, std::allocator<TSUIndexSet>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<TSCEFunctionIndex *, std::allocator<TSCEFunctionIndex>> {
    unsigned short field0;
} __compressed_pair<TSCEFunctionIndex *, std::allocator<TSCEFunctionIndex>>;

typedef struct vector<TSCEFunctionIndex, std::allocator<TSCEFunctionIndex>> {
    unsigned short field0;
    unsigned short field1;
    __compressed_pair<TSCEFunctionIndex *, std::allocator<TSCEFunctionIndex>> field2;
} vector<TSCEFunctionIndex, std::allocator<TSCEFunctionIndex>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCEFunctionIndex, std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, std::hash<TSCEFunctionIndex>, std::equal_to<TSCEFunctionIndex>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCEFunctionIndex, std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, std::hash<TSCEFunctionIndex>, std::equal_to<TSCEFunctionIndex>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSCEFunctionIndex, std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, std::equal_to<TSCEFunctionIndex>, std::hash<TSCEFunctionIndex>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSCEFunctionIndex, std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, std::equal_to<TSCEFunctionIndex>, std::hash<TSCEFunctionIndex>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, std::__unordered_map_hasher<TSCEFunctionIndex, std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, std::hash<TSCEFunctionIndex>, std::equal_to<TSCEFunctionIndex>, true>, std::__unordered_map_equal<TSCEFunctionIndex, std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, std::equal_to<TSCEFunctionIndex>, std::hash<TSCEFunctionIndex>, true>, std::allocator<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCEFunctionIndex, std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, std::hash<TSCEFunctionIndex>, std::equal_to<TSCEFunctionIndex>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSCEFunctionIndex, std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, std::equal_to<TSCEFunctionIndex>, std::hash<TSCEFunctionIndex>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, std::__unordered_map_hasher<TSCEFunctionIndex, std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, std::hash<TSCEFunctionIndex>, std::equal_to<TSCEFunctionIndex>, true>, std::__unordered_map_equal<TSCEFunctionIndex, std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, std::equal_to<TSCEFunctionIndex>, std::hash<TSCEFunctionIndex>, true>, std::allocator<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>>>;

typedef struct unordered_map<TSCEFunctionIndex, TSCEReferenceSet *, std::hash<TSCEFunctionIndex>, std::equal_to<TSCEFunctionIndex>, std::allocator<std::pair<const TSCEFunctionIndex, TSCEReferenceSet *>>> {
    __hash_table<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, std::__unordered_map_hasher<TSCEFunctionIndex, std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, std::hash<TSCEFunctionIndex>, std::equal_to<TSCEFunctionIndex>, true>, std::__unordered_map_equal<TSCEFunctionIndex, std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, std::equal_to<TSCEFunctionIndex>, std::hash<TSCEFunctionIndex>, true>, std::allocator<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>>> __table_;
} unordered_map<TSCEFunctionIndex, TSCEReferenceSet *, std::hash<TSCEFunctionIndex>, std::equal_to<TSCEFunctionIndex>, std::allocator<std::pair<const TSCEFunctionIndex, TSCEReferenceSet *>>>;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct vector<TSKUIDStructTract, std::allocator<TSKUIDStructTract>> {
} // Error Processing Struct Fields

typedef struct vector<TSUModelRowIndex, std::allocator<TSUModelRowIndex>> {
} // Error Processing Struct Fields

typedef struct vector<TSUModelColumnIndex, std::allocator<TSUModelColumnIndex>> {
} // Error Processing Struct Fields

typedef struct vector<TSUViewRowIndex, std::allocator<TSUViewRowIndex>> {
} // Error Processing Struct Fields

typedef struct vector<TSUViewColumnIndex, std::allocator<TSUViewColumnIndex>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<long *, std::allocator<long>> {
    NSInteger __value_;
} __compressed_pair<long *, std::allocator<long>>;

typedef struct vector<long, std::allocator<long>> {
    NSInteger __begin_;
    NSInteger __end_;
    __compressed_pair<long *, std::allocator<long>> __end_cap_;
} vector<long, std::allocator<long>>;

typedef struct vector<TSTNineKeyStructPreBNC, std::allocator<TSTNineKeyStructPreBNC>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSObject<TSTTableDataPayloadHashing> *, std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, TSTTableDataPayloadHash, TSTTableDataPayloadEqual, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<NSObject<TSTTableDataPayloadHashing> *, std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, TSTTableDataPayloadHash, TSTTableDataPayloadEqual, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<NSObject<TSTTableDataPayloadHashing> *, std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, TSTTableDataPayloadEqual, TSTTableDataPayloadHash, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<NSObject<TSTTableDataPayloadHashing> *, std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, TSTTableDataPayloadEqual, TSTTableDataPayloadHash, true>>;

typedef struct __hash_table<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, std::__unordered_map_hasher<NSObject<TSTTableDataPayloadHashing> *, std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, TSTTableDataPayloadHash, TSTTableDataPayloadEqual, true>, std::__unordered_map_equal<NSObject<TSTTableDataPayloadHashing> *, std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, TSTTableDataPayloadEqual, TSTTableDataPayloadHash, true>, std::allocator<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<NSObject<TSTTableDataPayloadHashing> *, std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, TSTTableDataPayloadHash, TSTTableDataPayloadEqual, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<NSObject<TSTTableDataPayloadHashing> *, std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, TSTTableDataPayloadEqual, TSTTableDataPayloadHash, true>> __p3_;
} __hash_table<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, std::__unordered_map_hasher<NSObject<TSTTableDataPayloadHashing> *, std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, TSTTableDataPayloadHash, TSTTableDataPayloadEqual, true>, std::__unordered_map_equal<NSObject<TSTTableDataPayloadHashing> *, std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, TSTTableDataPayloadEqual, TSTTableDataPayloadHash, true>, std::allocator<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>>>;

typedef struct unordered_map<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *, TSTTableDataPayloadHash, TSTTableDataPayloadEqual, std::allocator<std::pair<NSObject<TSTTableDataPayloadHashing> *const, TSTTableDataObject *>>> {
    __hash_table<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, std::__unordered_map_hasher<NSObject<TSTTableDataPayloadHashing> *, std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, TSTTableDataPayloadHash, TSTTableDataPayloadEqual, true>, std::__unordered_map_equal<NSObject<TSTTableDataPayloadHashing> *, std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, TSTTableDataPayloadEqual, TSTTableDataPayloadHash, true>, std::allocator<std::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>>> __table_;
} unordered_map<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *, TSTTableDataPayloadHash, TSTTableDataPayloadEqual, std::allocator<std::pair<NSObject<TSTTableDataPayloadHashing> *const, TSTTableDataObject *>>>;

typedef struct UUIDData<TSP::UUIDData> {
    unk ;
    unsigned char _uuid;
    ? _cfuuid;
    ? ;
} UUIDData<TSP::UUIDData>;

typedef struct TSCEStringValue {
    unk field0;
    id field1;
    TSCEFormat field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
} TSCEStringValue;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> field0;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>>, std::less<TSUCellCoord>, true>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>>, std::less<TSUCellCoord>, true>>;

typedef struct __tree<std::__value_type<TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>>, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>>, std::less<TSUCellCoord>, true>, std::allocator<std::__value_type<TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>>>> {
    void field0;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>>, void *>>> field1;
    __compressed_pair<unsigned long, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>>, std::less<TSUCellCoord>, true>> field2;
} __tree<std::__value_type<TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>>, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>>, std::less<TSUCellCoord>, true>, std::allocator<std::__value_type<TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>>>>;

typedef struct multimap<TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>, std::less<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>>>> {
    __tree<std::__value_type<TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>>, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>>, std::less<TSUCellCoord>, true>, std::allocator<std::__value_type<TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>>>> field0;
} multimap<TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>, std::less<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>>>>;

typedef struct TSUDecimal {
    ? _decimal;
} TSUDecimal;

typedef struct TSCENumberValue {
    unk _vptr$TSCEAbstractValue;
    TSUDecimal _decimal;
    TSCEFormat _format;
    unsigned short _baseUnit;
    BOOL _isUnitlessZero;
} TSCENumberValue;

typedef struct TSCEGridDimensions {
    unsigned int width;
    unsigned int height;
} TSCEGridDimensions;

typedef struct TSCEGridCoord {
    unsigned int column;
    unsigned int row;
} TSCEGridCoord;

typedef struct TSCEGridAccessContext {
} // Error Processing Struct Fields

typedef struct TSCEGrid {
    unk field0;
    id field1;
    TSCEFormat field2;
} TSCEGrid;

typedef struct TSCEReferenceValue {
    unk field0;
    id field1;
    TSUCellCoord field2;
    TSUPreserveFlags field3;
    BOOL field4;
    BOOL field5;
} TSCEReferenceValue;

typedef struct UIEdgeInsets {
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
} UIEdgeInsets;

typedef struct TSCEInternalCellReference {
    TSUCellCoord coordinate;
    unsigned short tableID;
    unsigned short reserved;
} TSCEInternalCellReference;

typedef struct TSCEInternalRangeReference {
    TSCERangeCoordinate field0;
    unsigned short field1;
} TSCEInternalRangeReference;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSCECellCoordSet>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSCECellCoordSet>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSCECellCoordSet>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSCECellCoordSet>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned short, TSCECellCoordSet>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSCECellCoordSet>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSCECellCoordSet>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>, std::allocator<std::__hash_value_type<unsigned short, TSCECellCoordSet>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSCECellCoordSet>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSCECellCoordSet>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned short, TSCECellCoordSet>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSCECellCoordSet>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSCECellCoordSet>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>, std::allocator<std::__hash_value_type<unsigned short, TSCECellCoordSet>>>;

typedef struct unordered_map<unsigned short, TSCECellCoordSet, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, TSCECellCoordSet>>> {
    __hash_table<std::__hash_value_type<unsigned short, TSCECellCoordSet>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSCECellCoordSet>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSCECellCoordSet>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>, std::allocator<std::__hash_value_type<unsigned short, TSCECellCoordSet>>> __table_;
} unordered_map<unsigned short, TSCECellCoordSet, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, TSCECellCoordSet>>>;

typedef struct TSCEInternalCellRefSet {
    unordered_map<unsigned short, TSCECellCoordSet, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, TSCECellCoordSet>>> _coordsForOwnerId;
} TSCEInternalCellRefSet;

typedef struct vector<TSCEInternalRangeReference, std::allocator<TSCEInternalRangeReference>> {
} // Error Processing Struct Fields

typedef struct TSCEErrorValue {
    unk field0;
    id field1;
} TSCEErrorValue;

typedef struct vector<_NSRange, std::allocator<_NSRange>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned int, unsigned int>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, unsigned int>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned int, unsigned int>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, unsigned int>>>;

typedef struct unordered_map<unsigned int, unsigned int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>> {
    __hash_table<std::__hash_value_type<unsigned int, unsigned int>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, unsigned int>>> __table_;
} unordered_map<unsigned int, unsigned int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, unsigned short>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, unsigned short>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, unsigned short>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, unsigned short>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, unsigned short>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, unsigned short>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, unsigned short>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, unsigned short>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, unsigned short>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, unsigned short>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, unsigned short>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, unsigned short>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, unsigned short>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, unsigned short>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, unsigned short>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, unsigned short>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, unsigned short>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, unsigned short>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, unsigned short>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned short, unsigned short>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, unsigned short>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, unsigned short>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned short, unsigned short>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, unsigned short>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, unsigned short>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, unsigned short>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, unsigned short>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned short, unsigned short>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, unsigned short>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, unsigned short>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>, std::allocator<std::__hash_value_type<unsigned short, unsigned short>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, unsigned short>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, unsigned short>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, unsigned short>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned short, unsigned short>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, unsigned short>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, unsigned short>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned short, unsigned short>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, unsigned short>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, unsigned short>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>, std::allocator<std::__hash_value_type<unsigned short, unsigned short>>>;

typedef struct unordered_map<unsigned short, unsigned short, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, unsigned short>>> {
    __hash_table<std::__hash_value_type<unsigned short, unsigned short>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, unsigned short>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, unsigned short>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>, std::allocator<std::__hash_value_type<unsigned short, unsigned short>>> __table_;
} unordered_map<unsigned short, unsigned short, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, unsigned short>>>;

typedef struct __compressed_pair<TSTCellBorder *__strong *, std::allocator<TSTCellBorder *>> {
    id field0;
} __compressed_pair<TSTCellBorder *__strong *, std::allocator<TSTCellBorder *>>;

typedef struct vector<TSTCellBorder *, std::allocator<TSTCellBorder *>> {
    id field0;
    id field1;
    __compressed_pair<TSTCellBorder *__strong *, std::allocator<TSTCellBorder *>> field2;
} vector<TSTCellBorder *, std::allocator<TSTCellBorder *>>;

typedef struct vector<TSUModelCellRect, std::allocator<TSUModelCellRect>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, TSUModelCellRect>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, TSUModelCellRect>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, TSUModelCellRect>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, TSUModelCellRect>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned long, TSUModelCellRect>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, TSUModelCellRect>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, TSUModelCellRect>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, TSUModelCellRect>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, TSUModelCellRect>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, TSUModelCellRect>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned long, TSUModelCellRect>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, TSUModelCellRect>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, TSUModelCellRect>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, TSUModelCellRect>>>;

typedef struct unordered_map<unsigned long, TSUModelCellRect, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, TSUModelCellRect>>> {
    __hash_table<std::__hash_value_type<unsigned long, TSUModelCellRect>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, TSUModelCellRect>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, TSUModelCellRect>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, TSUModelCellRect>>> __table_;
} unordered_map<unsigned long, TSUModelCellRect, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, TSUModelCellRect>>>;

typedef struct Node {
} // Error Processing Struct Fields

typedef struct TSCECellRangeRTree_Int {
    Node m_root;
} TSCECellRangeRTree_Int;

typedef struct TSCECellRangeRTree {
    TSCECellRangeRTree_Int _rTree;
} TSCECellRangeRTree;

typedef struct TSCEBitGridTile {
} // Error Processing Struct Fields

typedef struct vector<TSCEBitGridTile *, std::allocator<TSCEBitGridTile *>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSUIndexSet *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSUIndexSet *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSUIndexSet *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSUIndexSet *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSUIndexSet *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSUIndexSet *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSUIndexSet *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSUIndexSet *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSUIndexSet *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSUIndexSet *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSUIndexSet *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSUIndexSet *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSUIndexSet *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSUIndexSet *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSUIndexSet *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSUIndexSet *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSUIndexSet *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSUIndexSet *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSUIndexSet *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, TSUIndexSet *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSUIndexSet *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSUIndexSet *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, TSUIndexSet *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, TSUIndexSet *>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, TSUIndexSet *>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, TSUIndexSet *>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, TSUIndexSet *>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned int, TSUIndexSet *>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, TSUIndexSet *>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, TSUIndexSet *>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, TSUIndexSet *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSUIndexSet *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSUIndexSet *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSUIndexSet *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, TSUIndexSet *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, TSUIndexSet *>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, TSUIndexSet *>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned int, TSUIndexSet *>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, TSUIndexSet *>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, TSUIndexSet *>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, TSUIndexSet *>>>;

typedef struct unordered_map<unsigned int, TSUIndexSet *, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, TSUIndexSet *>>> {
    __hash_table<std::__hash_value_type<unsigned int, TSUIndexSet *>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, TSUIndexSet *>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, TSUIndexSet *>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, TSUIndexSet *>>> __table_;
} unordered_map<unsigned int, TSUIndexSet *, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, TSUIndexSet *>>>;

typedef struct TSCEBitGrid {
    vector<TSCEBitGridTile *, std::allocator<TSCEBitGridTile *>> _tiles;
    NSUInteger _count;
    NSUInteger _lastTileFoundAtIndex;
    unordered_map<unsigned int, TSUIndexSet *, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, TSUIndexSet *>>> _bitsInColumn;
} TSCEBitGrid;

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_rwlock_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_rwlock_t;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, std::equal_to<TSCEInternalCellReference>, std::hash<TSCEInternalCellReference>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, std::equal_to<TSCEInternalCellReference>, std::hash<TSCEInternalCellReference>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, std::__unordered_map_hasher<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, true>, std::__unordered_map_equal<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, std::equal_to<TSCEInternalCellReference>, std::hash<TSCEInternalCellReference>, true>, std::allocator<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, std::equal_to<TSCEInternalCellReference>, std::hash<TSCEInternalCellReference>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, std::__unordered_map_hasher<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, true>, std::__unordered_map_equal<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, std::equal_to<TSCEInternalCellReference>, std::hash<TSCEInternalCellReference>, true>, std::allocator<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>>>;

typedef struct unordered_map<TSCEInternalCellReference, TSCECountedInternalCellRefSet, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, std::allocator<std::pair<const TSCEInternalCellReference, TSCECountedInternalCellRefSet>>> {
    __hash_table<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, std::__unordered_map_hasher<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, true>, std::__unordered_map_equal<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>, std::equal_to<TSCEInternalCellReference>, std::hash<TSCEInternalCellReference>, true>, std::allocator<std::__hash_value_type<TSCEInternalCellReference, TSCECountedInternalCellRefSet>>> __table_;
} unordered_map<TSCEInternalCellReference, TSCECountedInternalCellRefSet, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, std::allocator<std::pair<const TSCEInternalCellReference, TSCECountedInternalCellRefSet>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<TSKUIDStruct, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *>, std::allocator<std::__hash_node<TSKUIDStruct, void *>>> {
    __hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *>, std::allocator<std::__hash_node<TSKUIDStruct, void *>>>;

typedef struct __compressed_pair<unsigned long, std::hash<TSKUIDStruct>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::hash<TSKUIDStruct>>;

typedef struct __compressed_pair<float, std::equal_to<TSKUIDStruct>> {
    float __value_;
} __compressed_pair<float, std::equal_to<TSKUIDStruct>>;

typedef struct __hash_table<TSKUIDStruct, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<TSKUIDStruct>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *>, std::allocator<std::__hash_node<TSKUIDStruct, void *>>> __p1_;
    __compressed_pair<unsigned long, std::hash<TSKUIDStruct>> __p2_;
    __compressed_pair<float, std::equal_to<TSKUIDStruct>> __p3_;
} __hash_table<TSKUIDStruct, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<TSKUIDStruct>>;

typedef struct unordered_set<TSKUIDStruct, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<TSKUIDStruct>> {
    __hash_table<TSKUIDStruct, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<TSKUIDStruct>> __table_;
} unordered_set<TSKUIDStruct, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<TSKUIDStruct>>;

typedef struct TSCEFormulaTranslationFlags {
    unsigned char _flags;
} TSCEFormulaTranslationFlags;

typedef struct TSCEFormulaCreator {
    id field0;
    unk field1;
} TSCEFormulaCreator;

typedef struct __compressed_pair<TSCECategoryRef *__strong *, std::allocator<TSCECategoryRef *>> {
    id field0;
} __compressed_pair<TSCECategoryRef *__strong *, std::allocator<TSCECategoryRef *>>;

typedef struct vector<TSCECategoryRef *, std::allocator<TSCECategoryRef *>> {
    id field0;
    id field1;
    __compressed_pair<TSCECategoryRef *__strong *, std::allocator<TSCECategoryRef *>> field2;
} vector<TSCECategoryRef *, std::allocator<TSCECategoryRef *>>;

typedef struct TSCEASTNodeArgInfo {
    int field0;
    int field1;
    TSKUIDStruct field2;
    TSUCellCoord field3;
} TSCEASTNodeArgInfo;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUCellRect>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUCellRect>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUCellRect>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUCellRect>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUCellRect>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUCellRect>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUCellRect>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUCellRect>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUCellRect>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUCellRect>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUCellRect>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUCellRect>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUCellRect>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUCellRect>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUCellRect>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUCellRect>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUCellRect>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUCellRect>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUCellRect>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, TSUCellRect>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUCellRect>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUCellRect>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, TSUCellRect>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, TSUCellRect>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, TSUCellRect>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, TSUCellRect>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, TSUCellRect>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned long, TSUCellRect>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, TSUCellRect>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, TSUCellRect>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, TSUCellRect>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUCellRect>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUCellRect>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUCellRect>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, TSUCellRect>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, TSUCellRect>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, TSUCellRect>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned long, TSUCellRect>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, TSUCellRect>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, TSUCellRect>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, TSUCellRect>>>;

typedef struct unordered_map<unsigned long, TSUCellRect, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, TSUCellRect>>> {
    __hash_table<std::__hash_value_type<unsigned long, TSUCellRect>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, TSUCellRect>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, TSUCellRect>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, TSUCellRect>>> __table_;
} unordered_map<unsigned long, TSUCellRect, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, TSUCellRect>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSTCellRegionGathererKey, std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, std::hash<TSTCellRegionGathererKey>, std::equal_to<TSTCellRegionGathererKey>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSTCellRegionGathererKey, std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, std::hash<TSTCellRegionGathererKey>, std::equal_to<TSTCellRegionGathererKey>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSTCellRegionGathererKey, std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, std::equal_to<TSTCellRegionGathererKey>, std::hash<TSTCellRegionGathererKey>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSTCellRegionGathererKey, std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, std::equal_to<TSTCellRegionGathererKey>, std::hash<TSTCellRegionGathererKey>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, std::__unordered_map_hasher<TSTCellRegionGathererKey, std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, std::hash<TSTCellRegionGathererKey>, std::equal_to<TSTCellRegionGathererKey>, true>, std::__unordered_map_equal<TSTCellRegionGathererKey, std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, std::equal_to<TSTCellRegionGathererKey>, std::hash<TSTCellRegionGathererKey>, true>, std::allocator<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSTCellRegionGathererKey, std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, std::hash<TSTCellRegionGathererKey>, std::equal_to<TSTCellRegionGathererKey>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSTCellRegionGathererKey, std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, std::equal_to<TSTCellRegionGathererKey>, std::hash<TSTCellRegionGathererKey>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, std::__unordered_map_hasher<TSTCellRegionGathererKey, std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, std::hash<TSTCellRegionGathererKey>, std::equal_to<TSTCellRegionGathererKey>, true>, std::__unordered_map_equal<TSTCellRegionGathererKey, std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, std::equal_to<TSTCellRegionGathererKey>, std::hash<TSTCellRegionGathererKey>, true>, std::allocator<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>>>;

typedef struct unordered_map<TSTCellRegionGathererKey, unsigned long, std::hash<TSTCellRegionGathererKey>, std::equal_to<TSTCellRegionGathererKey>, std::allocator<std::pair<const TSTCellRegionGathererKey, unsigned long>>> {
    __hash_table<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, std::__unordered_map_hasher<TSTCellRegionGathererKey, std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, std::hash<TSTCellRegionGathererKey>, std::equal_to<TSTCellRegionGathererKey>, true>, std::__unordered_map_equal<TSTCellRegionGathererKey, std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>, std::equal_to<TSTCellRegionGathererKey>, std::hash<TSTCellRegionGathererKey>, true>, std::allocator<std::__hash_value_type<TSTCellRegionGathererKey, unsigned long>>> __table_;
} unordered_map<TSTCellRegionGathererKey, unsigned long, std::hash<TSTCellRegionGathererKey>, std::equal_to<TSTCellRegionGathererKey>, std::allocator<std::pair<const TSTCellRegionGathererKey, unsigned long>>>;

typedef struct TSTCellRegionGathererMap {
    NSUInteger _cellRangeIndex;
    _NSRange _rowRange;
    unordered_map<unsigned long, TSUCellRect, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, TSUCellRect>>> _cellRanges;
    unordered_map<TSTCellRegionGathererKey, unsigned long, std::hash<TSTCellRegionGathererKey>, std::equal_to<TSTCellRegionGathererKey>, std::allocator<std::pair<const TSTCellRegionGathererKey, unsigned long>>> _encodedJoinCoordToCandidateIndexMap;
} TSTCellRegionGathererMap;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellRect>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellRect>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellRect>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellRect>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellRect>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellRect>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellRect>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellRect>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellRect>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellRect>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellRect>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellRect>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellRect>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellRect>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellRect>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellRect>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellRect>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellRect>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellRect>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellRect>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellRect>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellRect>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellRect>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSUCellRect>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSUCellRect>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSUCellRect>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSUCellRect>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSUCellCoord, TSUCellRect>, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSUCellRect>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSUCellRect>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>, std::allocator<std::__hash_value_type<TSUCellCoord, TSUCellRect>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellRect>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellRect>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellRect>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellRect>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSUCellRect>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSUCellRect>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSUCellCoord, TSUCellRect>, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSUCellRect>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSUCellRect>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>, std::allocator<std::__hash_value_type<TSUCellCoord, TSUCellRect>>>;

typedef struct unordered_map<TSUCellCoord, TSUCellRect, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, TSUCellRect>>> {
    __hash_table<std::__hash_value_type<TSUCellCoord, TSUCellRect>, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSUCellRect>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSUCellRect>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>, std::allocator<std::__hash_value_type<TSUCellCoord, TSUCellRect>>> __table_;
} unordered_map<TSUCellCoord, TSUCellRect, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, TSUCellRect>>>;

typedef struct TSCERegionNode {
    NSUInteger field0;
    TSCERegionNode field1;
    void field2;
} TSCERegionNode;

typedef struct vector<TSCEASTNodeArray *, std::allocator<TSCEASTNodeArray *>> {
} // Error Processing Struct Fields

typedef struct vector<TSCECellRef, std::allocator<TSCECellRef>> {
} // Error Processing Struct Fields

typedef struct TSCERelativeCellCoordinate {
    int row;
    short column;
    BOOL _preserveRow;
    BOOL _preserveColumn;
} TSCERelativeCellCoordinate;

typedef struct __compressed_pair<TSTCellStyle *__strong *, std::allocator<TSTCellStyle *>> {
    id __value_;
} __compressed_pair<TSTCellStyle *__strong *, std::allocator<TSTCellStyle *>>;

typedef struct vector<TSTCellStyle *, std::allocator<TSTCellStyle *>> {
    id __begin_;
    id __end_;
    __compressed_pair<TSTCellStyle *__strong *, std::allocator<TSTCellStyle *>> __end_cap_;
} vector<TSTCellStyle *, std::allocator<TSTCellStyle *>>;

typedef struct __compressed_pair<TSWPParagraphStyle *__strong *, std::allocator<TSWPParagraphStyle *>> {
    id __value_;
} __compressed_pair<TSWPParagraphStyle *__strong *, std::allocator<TSWPParagraphStyle *>>;

typedef struct vector<TSWPParagraphStyle *, std::allocator<TSWPParagraphStyle *>> {
    id __begin_;
    id __end_;
    __compressed_pair<TSWPParagraphStyle *__strong *, std::allocator<TSWPParagraphStyle *>> __end_cap_;
} vector<TSWPParagraphStyle *, std::allocator<TSWPParagraphStyle *>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>>>;

typedef struct TSKUIDStructMap {
    __hash_table<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>>> __table_;
} TSKUIDStructMap;

typedef struct TSCESpanningRangeRef {
    TSCERangeRef rangeRef;
    unsigned char rangeContext;
} TSCESpanningRangeRef;

typedef struct TSCEAnyRef {
    unsigned short _refType;
    TSCESpanningRangeRef _spanningRef;
    TSKUIDStruct _uuidValue;
    BOOL _couldBeIntersection;
    id _refSet;
} TSCEAnyRef;

typedef struct TSCEDependencyTracker {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *> *>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *> *>> field0;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *> *>>> {
    void field0;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *> *>> field1;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *> *>>> field0;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *> {
    void field0;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *> field0;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> {
    float field0;
} __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *> *>>> field0;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, void *>>> field1;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> field2;
    __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> field3;
} __hash_table<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>>>;

typedef struct unordered_map<TSKUIDStruct, std::unordered_set<TSUCellCoord>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, std::unordered_set<TSUCellCoord>>>> {
    __hash_table<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, std::unordered_set<TSUCellCoord>>>> field0;
} unordered_map<TSKUIDStruct, std::unordered_set<TSUCellCoord>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, std::unordered_set<TSUCellCoord>>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> field0;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>>, std::less<TSKUIDStruct>, true>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>>, std::less<TSKUIDStruct>, true>>;

typedef struct __tree<std::__value_type<TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>>, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>>, std::less<TSKUIDStruct>, true>, std::allocator<std::__value_type<TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>>>> {
    void field0;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>>, void *>>> field1;
    __compressed_pair<unsigned long, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>>, std::less<TSKUIDStruct>, true>> field2;
} __tree<std::__value_type<TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>>, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>>, std::less<TSKUIDStruct>, true>, std::allocator<std::__value_type<TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>>>>;

typedef struct map<TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>, std::less<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>>>> {
    __tree<std::__value_type<TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>>, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>>, std::less<TSKUIDStruct>, true>, std::allocator<std::__value_type<TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>>>> field0;
} map<TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>, std::less<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>>>>;

typedef struct TSCEReferenceSet {
    unk field0;
    TSCEDependencyTracker field1;
    unordered_map<TSKUIDStruct, std::unordered_set<TSUCellCoord>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, std::unordered_set<TSUCellCoord>>>> field2;
    map<TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>, std::less<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, std::unordered_set<TSCERangeCoordinate>>>> field3;
    void field4;
    void field5;
    void field6;
    void field7;
    void field8;
    id field9;
    void field10;
} TSCEReferenceSet;

typedef struct vector<TSCEValue, std::allocator<TSCEValue>> {
} // Error Processing Struct Fields

typedef struct TSCEGroupingColumnChange {
} // Error Processing Struct Fields

typedef struct vector<TSCEGroupingColumnChange, std::allocator<TSCEGroupingColumnChange>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>, std::allocator<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>, std::allocator<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>>>;

typedef struct unordered_map<TSCECellRef, TSTConditionalStyleSet *, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, std::allocator<std::pair<const TSCECellRef, TSTConditionalStyleSet *>>> {
    __hash_table<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>, std::allocator<std::__hash_value_type<TSCECellRef, TSTConditionalStyleSet *>>> __table_;
} unordered_map<TSCECellRef, TSTConditionalStyleSet *, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, std::allocator<std::pair<const TSCECellRef, TSTConditionalStyleSet *>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSUCellRect>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSUCellRect>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSUCellRect>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSUCellRect>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSUCellRect>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSUCellRect>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSUCellRect>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSUCellRect>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSUCellRect>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSUCellRect>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSUCellRect>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSUCellRect>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSUCellRect>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSUCellRect>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSUCellRect>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSUCellRect>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSUCellRect>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSUCellRect>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSUCellRect>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCECellRef, TSUCellRect>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSUCellRect>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSUCellRect>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCECellRef, TSUCellRect>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, TSUCellRect>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, TSUCellRect>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, TSUCellRect>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, TSUCellRect>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSCECellRef, TSUCellRect>, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, TSUCellRect>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, TSUCellRect>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>, std::allocator<std::__hash_value_type<TSCECellRef, TSUCellRect>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSUCellRect>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSUCellRect>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSUCellRect>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCECellRef, TSUCellRect>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, TSUCellRect>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, TSUCellRect>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSCECellRef, TSUCellRect>, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, TSUCellRect>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, TSUCellRect>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>, std::allocator<std::__hash_value_type<TSCECellRef, TSUCellRect>>>;

typedef struct unordered_map<TSCECellRef, TSUCellRect, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, std::allocator<std::pair<const TSCECellRef, TSUCellRect>>> {
    __hash_table<std::__hash_value_type<TSCECellRef, TSUCellRect>, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, TSUCellRect>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, TSUCellRect>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>, std::allocator<std::__hash_value_type<TSCECellRef, TSUCellRect>>> __table_;
} unordered_map<TSCECellRef, TSUCellRect, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, std::allocator<std::pair<const TSCECellRef, TSUCellRect>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>>>;

typedef struct unordered_map<TSKUIDStruct, TSCECoordMapper *, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSCECoordMapper *>>> {
    __hash_table<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSCECoordMapper *>>> __table_;
} unordered_map<TSKUIDStruct, TSCECoordMapper *, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSCECoordMapper *>>>;

typedef struct TSCELexer {
} // Error Processing Struct Fields

typedef struct TSCEParser {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TSCEArgumentType, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TSCEArgumentType, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSCEArgumentType, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TSCEArgumentType, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSCEArgumentType, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<TSCEArgumentType, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSCEArgumentType, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSCEArgumentType, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<TSCEArgumentType, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSCEArgumentType, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<TSCEArgumentType, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSCEArgumentType, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<TSCEArgumentType, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSCEArgumentType, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<TSCEArgumentType, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSCEArgumentType, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<TSCEArgumentType, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<TSCEArgumentType, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<TSCEArgumentType, void *> *>, std::allocator<std::__hash_node<TSCEArgumentType, void *>>> {
    __hash_node_base<std::__hash_node<TSCEArgumentType, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<TSCEArgumentType, void *> *>, std::allocator<std::__hash_node<TSCEArgumentType, void *>>>;

typedef struct __compressed_pair<unsigned long, std::hash<TSCEArgumentType>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::hash<TSCEArgumentType>>;

typedef struct __compressed_pair<float, std::equal_to<TSCEArgumentType>> {
    float __value_;
} __compressed_pair<float, std::equal_to<TSCEArgumentType>>;

typedef struct __hash_table<TSCEArgumentType, std::hash<TSCEArgumentType>, std::equal_to<TSCEArgumentType>, std::allocator<TSCEArgumentType>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<TSCEArgumentType, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSCEArgumentType, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<TSCEArgumentType, void *> *>, std::allocator<std::__hash_node<TSCEArgumentType, void *>>> __p1_;
    __compressed_pair<unsigned long, std::hash<TSCEArgumentType>> __p2_;
    __compressed_pair<float, std::equal_to<TSCEArgumentType>> __p3_;
} __hash_table<TSCEArgumentType, std::hash<TSCEArgumentType>, std::equal_to<TSCEArgumentType>, std::allocator<TSCEArgumentType>>;

typedef struct unordered_set<TSCEArgumentType, std::hash<TSCEArgumentType>, std::equal_to<TSCEArgumentType>, std::allocator<TSCEArgumentType>> {
    __hash_table<TSCEArgumentType, std::hash<TSCEArgumentType>, std::equal_to<TSCEArgumentType>, std::allocator<TSCEArgumentType>> __table_;
} unordered_set<TSCEArgumentType, std::hash<TSCEArgumentType>, std::equal_to<TSCEArgumentType>, std::allocator<TSCEArgumentType>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTCell *>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTCell *>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTCell *>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTCell *>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSUCellCoord, TSTCell *>, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTCell *>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTCell *>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>, std::allocator<std::__hash_value_type<TSUCellCoord, TSTCell *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTCell *>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTCell *>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSUCellCoord, TSTCell *>, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTCell *>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTCell *>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>, std::allocator<std::__hash_value_type<TSUCellCoord, TSTCell *>>>;

typedef struct unordered_map<TSUCellCoord, TSTCell *, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, TSTCell *>>> {
    __hash_table<std::__hash_value_type<TSUCellCoord, TSTCell *>, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTCell *>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTCell *>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>, std::allocator<std::__hash_value_type<TSUCellCoord, TSTCell *>>> __table_;
} unordered_map<TSUCellCoord, TSTCell *, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, TSTCell *>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStructCoord, std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, std::hash<TSKUIDStructCoord>, std::equal_to<TSKUIDStructCoord>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStructCoord, std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, std::hash<TSKUIDStructCoord>, std::equal_to<TSKUIDStructCoord>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStructCoord, std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, std::equal_to<TSKUIDStructCoord>, std::hash<TSKUIDStructCoord>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSKUIDStructCoord, std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, std::equal_to<TSKUIDStructCoord>, std::hash<TSKUIDStructCoord>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, std::__unordered_map_hasher<TSKUIDStructCoord, std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, std::hash<TSKUIDStructCoord>, std::equal_to<TSKUIDStructCoord>, true>, std::__unordered_map_equal<TSKUIDStructCoord, std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, std::equal_to<TSKUIDStructCoord>, std::hash<TSKUIDStructCoord>, true>, std::allocator<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStructCoord, std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, std::hash<TSKUIDStructCoord>, std::equal_to<TSKUIDStructCoord>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSKUIDStructCoord, std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, std::equal_to<TSKUIDStructCoord>, std::hash<TSKUIDStructCoord>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, std::__unordered_map_hasher<TSKUIDStructCoord, std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, std::hash<TSKUIDStructCoord>, std::equal_to<TSKUIDStructCoord>, true>, std::__unordered_map_equal<TSKUIDStructCoord, std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, std::equal_to<TSKUIDStructCoord>, std::hash<TSKUIDStructCoord>, true>, std::allocator<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>>>;

typedef struct unordered_map<TSKUIDStructCoord, TSTCell *, std::hash<TSKUIDStructCoord>, std::equal_to<TSKUIDStructCoord>, std::allocator<std::pair<const TSKUIDStructCoord, TSTCell *>>> {
    __hash_table<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, std::__unordered_map_hasher<TSKUIDStructCoord, std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, std::hash<TSKUIDStructCoord>, std::equal_to<TSKUIDStructCoord>, true>, std::__unordered_map_equal<TSKUIDStructCoord, std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, std::equal_to<TSKUIDStructCoord>, std::hash<TSKUIDStructCoord>, true>, std::allocator<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>>> __table_;
} unordered_map<TSKUIDStructCoord, TSTCell *, std::hash<TSKUIDStructCoord>, std::equal_to<TSKUIDStructCoord>, std::allocator<std::pair<const TSKUIDStructCoord, TSTCell *>>>;

typedef struct pair<TSTCell *, TSKUIDStructCoord> {
    id field0;
    TSKUIDStructCoord field1;
} pair<TSTCell *, TSKUIDStructCoord>;

typedef struct TSTStrokeWidthCacheEntry {
} // Error Processing Struct Fields

typedef struct vector<TSTStrokeWidthCacheEntry, std::allocator<TSTStrokeWidthCacheEntry>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned short>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned short>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned short>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned short>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned short>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned short>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned short>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned short>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned short>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned short>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned short>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned short>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned short>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned short>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned short>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned short>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned short>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned short>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned short>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned short>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned short>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned short>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned short>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned short>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned short>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned short>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned short>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSKUIDStruct, unsigned short>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned short>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned short>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, unsigned short>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned short>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned short>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned short>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned short>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned short>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned short>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSKUIDStruct, unsigned short>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned short>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned short>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, unsigned short>>>;

typedef struct unordered_map<TSKUIDStruct, unsigned short, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, unsigned short>>> {
    __hash_table<std::__hash_value_type<TSKUIDStruct, unsigned short>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned short>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned short>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, unsigned short>>> __table_;
} unordered_map<TSKUIDStruct, unsigned short, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, unsigned short>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned int>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned int>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned int>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned int>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSKUIDStruct, unsigned int>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned int>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned int>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, unsigned int>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned int>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned int>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSKUIDStruct, unsigned int>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned int>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned int>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, unsigned int>>>;

typedef struct unordered_map<TSKUIDStruct, unsigned int, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, unsigned int>>> {
    __hash_table<std::__hash_value_type<TSKUIDStruct, unsigned int>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned int>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned int>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, unsigned int>>> __table_;
} unordered_map<TSKUIDStruct, unsigned int, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, unsigned int>>>;

typedef struct __compressed_pair<double *, std::allocator<double>> {
    CGFloat __value_;
} __compressed_pair<double *, std::allocator<double>>;

typedef struct vector<double, std::allocator<double>> {
    CGFloat __begin_;
    CGFloat __end_;
    __compressed_pair<double *, std::allocator<double>> __end_cap_;
} vector<double, std::allocator<double>>;

typedef struct __compressed_pair<int *, std::allocator<int>> {
    int __value_;
} __compressed_pair<int *, std::allocator<int>>;

typedef struct vector<int, std::allocator<int>> {
    int __begin_;
    int __end_;
    __compressed_pair<int *, std::allocator<int>> __end_cap_;
} vector<int, std::allocator<int>>;

typedef struct TSTStrokeLayerRun {
} // Error Processing Struct Fields

typedef struct vector<TSTStrokeLayerRun, std::allocator<TSTStrokeLayerRun>> {
} // Error Processing Struct Fields

typedef struct TSCERelativeCellRef {
    TSCERelativeCellCoordinate relativeCoord;
    TSKUIDStruct tableUID;
    BOOL preserveColumn;
    BOOL preserveRow;
    BOOL isSpanningColumn;
    BOOL isSpanningRow;
} TSCERelativeCellRef;

typedef struct TSCECrossTableReference {
    TSKUIDStruct field0;
    TSCERelativeCellCoordinate field1;
} TSCECrossTableReference;

typedef struct TSCEUidCellRef {
    TSKUIDStruct _columnUid;
    TSKUIDStruct _rowUid;
    TSKUIDStruct _tableUid;
} TSCEUidCellRef;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, TSKUIDStruct>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, TSKUIDStruct>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, TSKUIDStruct>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, TSKUIDStruct>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned int, TSKUIDStruct>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, TSKUIDStruct>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, TSKUIDStruct>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, TSKUIDStruct>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, TSKUIDStruct>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, TSKUIDStruct>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned int, TSKUIDStruct>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, TSKUIDStruct>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, TSKUIDStruct>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, TSKUIDStruct>>>;

typedef struct unordered_map<unsigned int, TSKUIDStruct, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, TSKUIDStruct>>> {
    __hash_table<std::__hash_value_type<unsigned int, TSKUIDStruct>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, TSKUIDStruct>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, TSKUIDStruct>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, TSKUIDStruct>>> __table_;
} unordered_map<unsigned int, TSKUIDStruct, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, TSKUIDStruct>>>;

typedef struct vector<TSCERangeCoordinate, std::allocator<TSCERangeCoordinate>> {
} // Error Processing Struct Fields

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSUCellCoord, std::set<TSUCellRect>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSUCellCoord, std::set<TSUCellRect>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, std::set<TSUCellRect>>, std::less<TSUCellCoord>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, std::set<TSUCellRect>>, std::less<TSUCellCoord>, true>>;

typedef struct __tree<std::__value_type<TSUCellCoord, std::set<TSUCellRect>>, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, std::set<TSUCellRect>>, std::less<TSUCellCoord>, true>, std::allocator<std::__value_type<TSUCellCoord, std::set<TSUCellRect>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSUCellCoord, std::set<TSUCellRect>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, std::set<TSUCellRect>>, std::less<TSUCellCoord>, true>> __pair3_;
} __tree<std::__value_type<TSUCellCoord, std::set<TSUCellRect>>, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, std::set<TSUCellRect>>, std::less<TSUCellCoord>, true>, std::allocator<std::__value_type<TSUCellCoord, std::set<TSUCellRect>>>>;

typedef struct map<TSUCellCoord, std::set<TSUCellRect>, std::less<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, std::set<TSUCellRect>>>> {
    __tree<std::__value_type<TSUCellCoord, std::set<TSUCellRect>>, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, std::set<TSUCellRect>>, std::less<TSUCellCoord>, true>, std::allocator<std::__value_type<TSUCellCoord, std::set<TSUCellRect>>>> __tree_;
} map<TSUCellCoord, std::set<TSUCellRect>, std::less<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, std::set<TSUCellRect>>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCECategoryLevel, std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, std::hash<TSCECategoryLevel>, std::equal_to<TSCECategoryLevel>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCECategoryLevel, std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, std::hash<TSCECategoryLevel>, std::equal_to<TSCECategoryLevel>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSCECategoryLevel, std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, std::equal_to<TSCECategoryLevel>, std::hash<TSCECategoryLevel>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSCECategoryLevel, std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, std::equal_to<TSCECategoryLevel>, std::hash<TSCECategoryLevel>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, std::__unordered_map_hasher<TSCECategoryLevel, std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, std::hash<TSCECategoryLevel>, std::equal_to<TSCECategoryLevel>, true>, std::__unordered_map_equal<TSCECategoryLevel, std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, std::equal_to<TSCECategoryLevel>, std::hash<TSCECategoryLevel>, true>, std::allocator<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCECategoryLevel, std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, std::hash<TSCECategoryLevel>, std::equal_to<TSCECategoryLevel>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSCECategoryLevel, std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, std::equal_to<TSCECategoryLevel>, std::hash<TSCECategoryLevel>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, std::__unordered_map_hasher<TSCECategoryLevel, std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, std::hash<TSCECategoryLevel>, std::equal_to<TSCECategoryLevel>, true>, std::__unordered_map_equal<TSCECategoryLevel, std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, std::equal_to<TSCECategoryLevel>, std::hash<TSCECategoryLevel>, true>, std::allocator<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>>>;

typedef struct unordered_map<TSCECategoryLevel, TSKUIDStructCoord, std::hash<TSCECategoryLevel>, std::equal_to<TSCECategoryLevel>, std::allocator<std::pair<const TSCECategoryLevel, TSKUIDStructCoord>>> {
    __hash_table<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, std::__unordered_map_hasher<TSCECategoryLevel, std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, std::hash<TSCECategoryLevel>, std::equal_to<TSCECategoryLevel>, true>, std::__unordered_map_equal<TSCECategoryLevel, std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>, std::equal_to<TSCECategoryLevel>, std::hash<TSCECategoryLevel>, true>, std::allocator<std::__hash_value_type<TSCECategoryLevel, TSKUIDStructCoord>>> __table_;
} unordered_map<TSCECategoryLevel, TSKUIDStructCoord, std::hash<TSCECategoryLevel>, std::equal_to<TSCECategoryLevel>, std::allocator<std::pair<const TSCECategoryLevel, TSKUIDStructCoord>>>;

typedef struct TSTRunningAggregate {
    TSKUIDStruct field0;
    BOOL field1;
    BOOL field2;
} TSTRunningAggregate;

typedef struct __compressed_pair<TSCECellValue *__strong *, std::allocator<TSCECellValue *>> {
    id __value_;
} __compressed_pair<TSCECellValue *__strong *, std::allocator<TSCECellValue *>>;

typedef struct vector<TSCECellValue *, std::allocator<TSCECellValue *>> {
    id __begin_;
    id __end_;
    __compressed_pair<TSCECellValue *__strong *, std::allocator<TSCECellValue *>> __end_cap_;
} vector<TSCECellValue *, std::allocator<TSCECellValue *>>;

typedef struct __compressed_pair<TSTUidCoordsPerGroupValueTuple *__strong *, std::allocator<TSTUidCoordsPerGroupValueTuple *>> {
    id __value_;
} __compressed_pair<TSTUidCoordsPerGroupValueTuple *__strong *, std::allocator<TSTUidCoordsPerGroupValueTuple *>>;

typedef struct vector<TSTUidCoordsPerGroupValueTuple *, std::allocator<TSTUidCoordsPerGroupValueTuple *>> {
    id __begin_;
    id __end_;
    __compressed_pair<TSTUidCoordsPerGroupValueTuple *__strong *, std::allocator<TSTUidCoordsPerGroupValueTuple *>> __end_cap_;
} vector<TSTUidCoordsPerGroupValueTuple *, std::allocator<TSTUidCoordsPerGroupValueTuple *>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSTRunningAggregate>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSTRunningAggregate>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSTRunningAggregate>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSTRunningAggregate>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSTRunningAggregate>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSTRunningAggregate>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSTRunningAggregate>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSTRunningAggregate>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSTRunningAggregate>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSTRunningAggregate>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSTRunningAggregate>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSTRunningAggregate>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSTRunningAggregate>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSTRunningAggregate>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSTRunningAggregate>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSTRunningAggregate>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSTRunningAggregate>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSTRunningAggregate>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSTRunningAggregate>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned short, TSTRunningAggregate>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSTRunningAggregate>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSTRunningAggregate>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned short, TSTRunningAggregate>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSTRunningAggregate>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSTRunningAggregate>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSTRunningAggregate>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSTRunningAggregate>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned short, TSTRunningAggregate>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSTRunningAggregate>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSTRunningAggregate>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>, std::allocator<std::__hash_value_type<unsigned short, TSTRunningAggregate>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSTRunningAggregate>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSTRunningAggregate>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSTRunningAggregate>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned short, TSTRunningAggregate>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSTRunningAggregate>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSTRunningAggregate>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned short, TSTRunningAggregate>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSTRunningAggregate>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSTRunningAggregate>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>, std::allocator<std::__hash_value_type<unsigned short, TSTRunningAggregate>>>;

typedef struct unordered_map<unsigned short, TSTRunningAggregate, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, TSTRunningAggregate>>> {
    __hash_table<std::__hash_value_type<unsigned short, TSTRunningAggregate>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSTRunningAggregate>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSTRunningAggregate>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>, std::allocator<std::__hash_value_type<unsigned short, TSTRunningAggregate>>> __table_;
} unordered_map<unsigned short, TSTRunningAggregate, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, TSTRunningAggregate>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>, std::allocator<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>, std::allocator<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>>>;

typedef struct unordered_map<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>>> {
    __hash_table<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>, std::allocator<std::__hash_value_type<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>>> __table_;
} unordered_map<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>>>;

typedef struct unordered_map<TSKUIDStruct, TSCECellCoordSet, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSCECellCoordSet>>> {
    __hash_table<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSCECellCoordSet>>> __table_;
} unordered_map<TSKUIDStruct, TSCECellCoordSet, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSCECellCoordSet>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>>>;

typedef struct unordered_map<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>>> {
    __hash_table<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>>> __table_;
} unordered_map<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>, std::allocator<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>, std::allocator<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>>>;

typedef struct unordered_map<TSUCellCoord, std::unordered_set<TSCEUuidPair>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, std::unordered_set<TSCEUuidPair>>>> {
    __hash_table<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>, std::allocator<std::__hash_value_type<TSUCellCoord, std::unordered_set<TSCEUuidPair>>>> __table_;
} unordered_map<TSUCellCoord, std::unordered_set<TSCEUuidPair>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, std::unordered_set<TSCEUuidPair>>>>;

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

typedef struct __compressed_pair<TSCECategoryLevel *, std::allocator<TSCECategoryLevel>> {
    unsigned char field0;
} __compressed_pair<TSCECategoryLevel *, std::allocator<TSCECategoryLevel>>;

typedef struct vector<TSCECategoryLevel, std::allocator<TSCECategoryLevel>> {
    unsigned char field0;
    unsigned char field1;
    __compressed_pair<TSCECategoryLevel *, std::allocator<TSCECategoryLevel>> field2;
} vector<TSCECategoryLevel, std::allocator<TSCECategoryLevel>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, void *> *> *>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, void *> *> *>> field0;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, void *> *> *>>> {
    void field0;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, void *> *> *>> field1;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, void *> *> *>>> field0;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, void *> *> {
    void field0;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, void *> *> field0;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> {
    float field0;
} __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, void *> *> *>>> field0;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, void *>>> field1;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> field2;
    __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> field3;
} __hash_table<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>>>;

typedef struct unordered_map<TSKUIDStruct, TSTPlanForGroupingCell, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSTPlanForGroupingCell>>> {
    __hash_table<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSTPlanForGroupingCell>>> field0;
} unordered_map<TSKUIDStruct, TSTPlanForGroupingCell, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSTPlanForGroupingCell>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTAggNode *>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTAggNode *>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTAggNode *>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTAggNode *>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTAggNode *>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTAggNode *>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>, std::allocator<std::__hash_value_type<TSUCellCoord, TSTAggNode *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTAggNode *>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTAggNode *>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTAggNode *>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTAggNode *>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>, std::allocator<std::__hash_value_type<TSUCellCoord, TSTAggNode *>>>;

typedef struct unordered_map<TSUCellCoord, TSTAggNode *, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, TSTAggNode *>>> {
    __hash_table<std::__hash_value_type<TSUCellCoord, TSTAggNode *>, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTAggNode *>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTAggNode *>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>, std::allocator<std::__hash_value_type<TSUCellCoord, TSTAggNode *>>> __table_;
} unordered_map<TSUCellCoord, TSTAggNode *, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, TSTAggNode *>>>;

typedef struct TSCEUidLookupList {
} // Error Processing Struct Fields

typedef struct TSTCellUIDLookupList {
} // Error Processing Struct Fields

typedef struct __compressed_pair<TSTStrokeLayer *__unsafe_unretained *, std::allocator<TSTStrokeLayer *__unsafe_unretained>> {
    id field0;
} __compressed_pair<TSTStrokeLayer *__unsafe_unretained *, std::allocator<TSTStrokeLayer *__unsafe_unretained>>;

typedef struct vector<TSTStrokeLayer *__unsafe_unretained, std::allocator<TSTStrokeLayer *__unsafe_unretained>> {
    id field0;
    id field1;
    __compressed_pair<TSTStrokeLayer *__unsafe_unretained *, std::allocator<TSTStrokeLayer *__unsafe_unretained>> field2;
} vector<TSTStrokeLayer *__unsafe_unretained, std::allocator<TSTStrokeLayer *__unsafe_unretained>>;

typedef struct TSUViewColumnOrRowIndex {
    unsigned int _index;
} TSUViewColumnOrRowIndex;

typedef struct TSUModelColumnOrRowIndex {
    unsigned int _index;
} TSUModelColumnOrRowIndex;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned char>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned char>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned char>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned char>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSKUIDStruct, unsigned char>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned char>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned char>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, unsigned char>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned char>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned char>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSKUIDStruct, unsigned char>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned char>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned char>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, unsigned char>>>;

typedef struct unordered_map<TSKUIDStruct, unsigned char, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, unsigned char>>> {
    __hash_table<std::__hash_value_type<TSKUIDStruct, unsigned char>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned char>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned char>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, unsigned char>>> __table_;
} unordered_map<TSKUIDStruct, unsigned char, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, unsigned char>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUModelCellCoord, std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, std::hash<TSUModelCellCoord>, std::equal_to<TSUModelCellCoord>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUModelCellCoord, std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, std::hash<TSUModelCellCoord>, std::equal_to<TSUModelCellCoord>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSUModelCellCoord, std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, std::equal_to<TSUModelCellCoord>, std::hash<TSUModelCellCoord>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSUModelCellCoord, std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, std::equal_to<TSUModelCellCoord>, std::hash<TSUModelCellCoord>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, std::__unordered_map_hasher<TSUModelCellCoord, std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, std::hash<TSUModelCellCoord>, std::equal_to<TSUModelCellCoord>, true>, std::__unordered_map_equal<TSUModelCellCoord, std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, std::equal_to<TSUModelCellCoord>, std::hash<TSUModelCellCoord>, true>, std::allocator<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUModelCellCoord, std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, std::hash<TSUModelCellCoord>, std::equal_to<TSUModelCellCoord>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSUModelCellCoord, std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, std::equal_to<TSUModelCellCoord>, std::hash<TSUModelCellCoord>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, std::__unordered_map_hasher<TSUModelCellCoord, std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, std::hash<TSUModelCellCoord>, std::equal_to<TSUModelCellCoord>, true>, std::__unordered_map_equal<TSUModelCellCoord, std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, std::equal_to<TSUModelCellCoord>, std::hash<TSUModelCellCoord>, true>, std::allocator<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>>>;

typedef struct unordered_map<TSUModelCellCoord, TSUModelCellCoord, std::hash<TSUModelCellCoord>, std::equal_to<TSUModelCellCoord>, std::allocator<std::pair<const TSUModelCellCoord, TSUModelCellCoord>>> {
    __hash_table<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, std::__unordered_map_hasher<TSUModelCellCoord, std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, std::hash<TSUModelCellCoord>, std::equal_to<TSUModelCellCoord>, true>, std::__unordered_map_equal<TSUModelCellCoord, std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, std::equal_to<TSUModelCellCoord>, std::hash<TSUModelCellCoord>, true>, std::allocator<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>>> __table_;
} unordered_map<TSUModelCellCoord, TSUModelCellCoord, std::hash<TSUModelCellCoord>, std::equal_to<TSUModelCellCoord>, std::allocator<std::pair<const TSUModelCellCoord, TSUModelCellCoord>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, TSTTableDataObject *>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, TSTTableDataObject *>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, TSTTableDataObject *>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, TSTTableDataObject *>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned int, TSTTableDataObject *>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, TSTTableDataObject *>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, TSTTableDataObject *>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, TSTTableDataObject *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, TSTTableDataObject *>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, TSTTableDataObject *>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned int, TSTTableDataObject *>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, TSTTableDataObject *>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, TSTTableDataObject *>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, TSTTableDataObject *>>>;

typedef struct unordered_map<unsigned int, TSTTableDataObject *, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, TSTTableDataObject *>>> {
    __hash_table<std::__hash_value_type<unsigned int, TSTTableDataObject *>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, TSTTableDataObject *>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, TSTTableDataObject *>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, TSTTableDataObject *>>> __table_;
} unordered_map<unsigned int, TSTTableDataObject *, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, TSTTableDataObject *>>>;

typedef struct __compressed_pair<TSCEFormulaObject *__strong *, std::allocator<TSCEFormulaObject *>> {
    id __value_;
} __compressed_pair<TSCEFormulaObject *__strong *, std::allocator<TSCEFormulaObject *>>;

typedef struct vector<TSCEFormulaObject *, std::allocator<TSCEFormulaObject *>> {
    id __begin_;
    id __end_;
    __compressed_pair<TSCEFormulaObject *__strong *, std::allocator<TSCEFormulaObject *>> __end_cap_;
} vector<TSCEFormulaObject *, std::allocator<TSCEFormulaObject *>>;

typedef struct __split_buffer<TSKUIDStruct *, std::allocator<TSKUIDStruct *>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<TSKUIDStruct>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<TSKUIDStruct>>;

typedef struct deque<TSKUIDStruct, std::allocator<TSKUIDStruct>> {
    __split_buffer<TSKUIDStruct *, std::allocator<TSKUIDStruct *>> __map_;
    NSUInteger __start_;
    __compressed_pair<unsigned long, std::allocator<TSKUIDStruct>> __size_;
} deque<TSKUIDStruct, std::allocator<TSKUIDStruct>>;

typedef struct TSCEBooleanValue {
    unk field0;
    BOOL field1;
    TSCEFormat field2;
} TSCEBooleanValue;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>>>;

typedef struct unordered_map<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>>> {
    __hash_table<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>>> __table_;
} unordered_map<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSKUIDStruct, TSTPivotGroupingColumnOptions *>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSKUIDStruct, TSTPivotGroupingColumnOptions *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, TSTPivotGroupingColumnOptions *>, std::less<TSKUIDStruct>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, TSTPivotGroupingColumnOptions *>, std::less<TSKUIDStruct>, true>>;

typedef struct __tree<std::__value_type<TSKUIDStruct, TSTPivotGroupingColumnOptions *>, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, TSTPivotGroupingColumnOptions *>, std::less<TSKUIDStruct>, true>, std::allocator<std::__value_type<TSKUIDStruct, TSTPivotGroupingColumnOptions *>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSKUIDStruct, TSTPivotGroupingColumnOptions *>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, TSTPivotGroupingColumnOptions *>, std::less<TSKUIDStruct>, true>> __pair3_;
} __tree<std::__value_type<TSKUIDStruct, TSTPivotGroupingColumnOptions *>, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, TSTPivotGroupingColumnOptions *>, std::less<TSKUIDStruct>, true>, std::allocator<std::__value_type<TSKUIDStruct, TSTPivotGroupingColumnOptions *>>>;

typedef struct map<TSKUIDStruct, TSTPivotGroupingColumnOptions *, std::less<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSTPivotGroupingColumnOptions *>>> {
    __tree<std::__value_type<TSKUIDStruct, TSTPivotGroupingColumnOptions *>, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, TSTPivotGroupingColumnOptions *>, std::less<TSKUIDStruct>, true>, std::allocator<std::__value_type<TSKUIDStruct, TSTPivotGroupingColumnOptions *>>> __tree_;
} map<TSKUIDStruct, TSTPivotGroupingColumnOptions *, std::less<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSTPivotGroupingColumnOptions *>>>;

typedef struct __compressed_pair<TSTWidthHeightCacheEntry<4> *, std::allocator<TSTWidthHeightCacheEntry<4>>> {
    void __value_;
} __compressed_pair<TSTWidthHeightCacheEntry<4> *, std::allocator<TSTWidthHeightCacheEntry<4>>>;

typedef struct vector<TSTWidthHeightCacheEntry<4>, std::allocator<TSTWidthHeightCacheEntry<4>>> {
    void __begin_;
    void __end_;
    __compressed_pair<TSTWidthHeightCacheEntry<4> *, std::allocator<TSTWidthHeightCacheEntry<4>>> __end_cap_;
} vector<TSTWidthHeightCacheEntry<4>, std::allocator<TSTWidthHeightCacheEntry<4>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>>>;

typedef struct unordered_map<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>>> {
    __hash_table<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>>> __table_;
} unordered_map<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>>>;

typedef struct unordered_map<TSKUIDStruct, TSCEMutableUIDSet *, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSCEMutableUIDSet *>>> {
    __hash_table<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>>> __table_;
} unordered_map<TSKUIDStruct, TSCEMutableUIDSet *, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSCEMutableUIDSet *>>>;

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct __compressed_pair<NSString *__strong *, std::allocator<NSString *>> {
    id __value_;
} __compressed_pair<NSString *__strong *, std::allocator<NSString *>>;

typedef struct vector<NSString *, std::allocator<NSString *>> {
    id __begin_;
    id __end_;
    __compressed_pair<NSString *__strong *, std::allocator<NSString *>> __end_cap_;
} vector<NSString *, std::allocator<NSString *>>;

typedef struct __compressed_pair<unsigned long, std::allocator<unsigned long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<unsigned long>>;

typedef struct vector<bool, std::allocator<bool>> {
    NSUInteger __begin_;
    NSUInteger __size_;
    __compressed_pair<unsigned long, std::allocator<unsigned long>> __cap_alloc_;
} vector<bool, std::allocator<bool>>;

typedef struct TSCEEvaluationContext {
} // Error Processing Struct Fields

typedef struct TSCETaggedDecimal {
} // Error Processing Struct Fields

typedef struct vector<TSCETaggedDecimal, std::allocator<TSCETaggedDecimal>> {
} // Error Processing Struct Fields

typedef struct TSCETaggedDecimalList {
    vector<TSCETaggedDecimal, std::allocator<TSCETaggedDecimal>> _list;
    NSUInteger _startIdx;
    NSUInteger _size;
} TSCETaggedDecimalList;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSTFontInfoCacheDupContentEntry, std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, std::hash<TSTFontInfoCacheDupContentEntry>, std::equal_to<TSTFontInfoCacheDupContentEntry>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSTFontInfoCacheDupContentEntry, std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, std::hash<TSTFontInfoCacheDupContentEntry>, std::equal_to<TSTFontInfoCacheDupContentEntry>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSTFontInfoCacheDupContentEntry, std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, std::equal_to<TSTFontInfoCacheDupContentEntry>, std::hash<TSTFontInfoCacheDupContentEntry>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSTFontInfoCacheDupContentEntry, std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, std::equal_to<TSTFontInfoCacheDupContentEntry>, std::hash<TSTFontInfoCacheDupContentEntry>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, std::__unordered_map_hasher<TSTFontInfoCacheDupContentEntry, std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, std::hash<TSTFontInfoCacheDupContentEntry>, std::equal_to<TSTFontInfoCacheDupContentEntry>, true>, std::__unordered_map_equal<TSTFontInfoCacheDupContentEntry, std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, std::equal_to<TSTFontInfoCacheDupContentEntry>, std::hash<TSTFontInfoCacheDupContentEntry>, true>, std::allocator<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSTFontInfoCacheDupContentEntry, std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, std::hash<TSTFontInfoCacheDupContentEntry>, std::equal_to<TSTFontInfoCacheDupContentEntry>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSTFontInfoCacheDupContentEntry, std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, std::equal_to<TSTFontInfoCacheDupContentEntry>, std::hash<TSTFontInfoCacheDupContentEntry>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, std::__unordered_map_hasher<TSTFontInfoCacheDupContentEntry, std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, std::hash<TSTFontInfoCacheDupContentEntry>, std::equal_to<TSTFontInfoCacheDupContentEntry>, true>, std::__unordered_map_equal<TSTFontInfoCacheDupContentEntry, std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, std::equal_to<TSTFontInfoCacheDupContentEntry>, std::hash<TSTFontInfoCacheDupContentEntry>, true>, std::allocator<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>>>;

typedef struct unordered_map<TSTFontInfoCacheDupContentEntry, double, std::hash<TSTFontInfoCacheDupContentEntry>, std::equal_to<TSTFontInfoCacheDupContentEntry>, std::allocator<std::pair<const TSTFontInfoCacheDupContentEntry, double>>> {
    __hash_table<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, std::__unordered_map_hasher<TSTFontInfoCacheDupContentEntry, std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, std::hash<TSTFontInfoCacheDupContentEntry>, std::equal_to<TSTFontInfoCacheDupContentEntry>, true>, std::__unordered_map_equal<TSTFontInfoCacheDupContentEntry, std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>, std::equal_to<TSTFontInfoCacheDupContentEntry>, std::hash<TSTFontInfoCacheDupContentEntry>, true>, std::allocator<std::__hash_value_type<TSTFontInfoCacheDupContentEntry, double>>> __table_;
} unordered_map<TSTFontInfoCacheDupContentEntry, double, std::hash<TSTFontInfoCacheDupContentEntry>, std::equal_to<TSTFontInfoCacheDupContentEntry>, std::allocator<std::pair<const TSTFontInfoCacheDupContentEntry, double>>>;

typedef struct __compressed_pair<std::vector<NSString *> *, std::allocator<std::vector<NSString *>>> {
    void __value_;
} __compressed_pair<std::vector<NSString *> *, std::allocator<std::vector<NSString *>>>;

typedef struct vector<std::vector<NSString *>, std::allocator<std::vector<NSString *>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::vector<NSString *> *, std::allocator<std::vector<NSString *>>> __end_cap_;
} vector<std::vector<NSString *>, std::allocator<std::vector<NSString *>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<NSString *, TSTHeaderNameMgrEntry *>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<NSString *, TSTHeaderNameMgrEntry *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<NSString *, std::__value_type<NSString *, TSTHeaderNameMgrEntry *>, std::less<NSString *>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<NSString *, std::__value_type<NSString *, TSTHeaderNameMgrEntry *>, std::less<NSString *>, true>>;

typedef struct __tree<std::__value_type<NSString *, TSTHeaderNameMgrEntry *>, std::__map_value_compare<NSString *, std::__value_type<NSString *, TSTHeaderNameMgrEntry *>, std::less<NSString *>, true>, std::allocator<std::__value_type<NSString *, TSTHeaderNameMgrEntry *>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<NSString *, TSTHeaderNameMgrEntry *>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<NSString *, std::__value_type<NSString *, TSTHeaderNameMgrEntry *>, std::less<NSString *>, true>> __pair3_;
} __tree<std::__value_type<NSString *, TSTHeaderNameMgrEntry *>, std::__map_value_compare<NSString *, std::__value_type<NSString *, TSTHeaderNameMgrEntry *>, std::less<NSString *>, true>, std::allocator<std::__value_type<NSString *, TSTHeaderNameMgrEntry *>>>;

typedef struct map<NSString *, TSTHeaderNameMgrEntry *, std::less<NSString *>, std::allocator<std::pair<NSString *const, TSTHeaderNameMgrEntry *>>> {
    __tree<std::__value_type<NSString *, TSTHeaderNameMgrEntry *>, std::__map_value_compare<NSString *, std::__value_type<NSString *, TSTHeaderNameMgrEntry *>, std::less<NSString *>, true>, std::allocator<std::__value_type<NSString *, TSTHeaderNameMgrEntry *>>> __tree_;
} map<NSString *, TSTHeaderNameMgrEntry *, std::less<NSString *>, std::allocator<std::pair<NSString *const, TSTHeaderNameMgrEntry *>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSCECellRefSet>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSCECellRefSet>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSCECellRefSet>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSCECellRefSet>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSCECellRefSet>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSCECellRefSet>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSCECellRefSet>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSCECellRefSet>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSCECellRefSet>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSCECellRefSet>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSCECellRefSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSCECellRefSet>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSCECellRefSet>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSCECellRefSet>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSCECellRefSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSCECellRefSet>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSCECellRefSet>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSCECellRefSet>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSCECellRefSet>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, TSCECellRefSet>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSCECellRefSet>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSCECellRefSet>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, TSCECellRefSet>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, TSCECellRefSet>, std::hash<NSString *>, std::equal_to<NSString *>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, TSCECellRefSet>, std::hash<NSString *>, std::equal_to<NSString *>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, TSCECellRefSet>, std::equal_to<NSString *>, std::hash<NSString *>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, TSCECellRefSet>, std::equal_to<NSString *>, std::hash<NSString *>, true>>;

typedef struct __hash_table<std::__hash_value_type<NSString *, TSCECellRefSet>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, TSCECellRefSet>, std::hash<NSString *>, std::equal_to<NSString *>, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, TSCECellRefSet>, std::equal_to<NSString *>, std::hash<NSString *>, true>, std::allocator<std::__hash_value_type<NSString *, TSCECellRefSet>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSCECellRefSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSCECellRefSet>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSCECellRefSet>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, TSCECellRefSet>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, TSCECellRefSet>, std::hash<NSString *>, std::equal_to<NSString *>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, TSCECellRefSet>, std::equal_to<NSString *>, std::hash<NSString *>, true>> __p3_;
} __hash_table<std::__hash_value_type<NSString *, TSCECellRefSet>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, TSCECellRefSet>, std::hash<NSString *>, std::equal_to<NSString *>, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, TSCECellRefSet>, std::equal_to<NSString *>, std::hash<NSString *>, true>, std::allocator<std::__hash_value_type<NSString *, TSCECellRefSet>>>;

typedef struct unordered_map<NSString *, TSCECellRefSet, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, TSCECellRefSet>>> {
    __hash_table<std::__hash_value_type<NSString *, TSCECellRefSet>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, TSCECellRefSet>, std::hash<NSString *>, std::equal_to<NSString *>, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, TSCECellRefSet>, std::equal_to<NSString *>, std::hash<NSString *>, true>, std::allocator<std::__hash_value_type<NSString *, TSCECellRefSet>>> __table_;
} unordered_map<NSString *, TSCECellRefSet, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, TSCECellRefSet>>>;

typedef struct TSTHeaderPerTable {
    TSKUIDStruct field0;
    TSUCellCoord field1;
    id field2;
    id field3;
    id field4;
    id field5;
    BOOL field6;
} TSTHeaderPerTable;

typedef struct __compressed_pair<TSTHeaderNameMgrTile *__strong *, std::allocator<TSTHeaderNameMgrTile *>> {
    id __value_;
} __compressed_pair<TSTHeaderNameMgrTile *__strong *, std::allocator<TSTHeaderNameMgrTile *>>;

typedef struct vector<TSTHeaderNameMgrTile *, std::allocator<TSTHeaderNameMgrTile *>> {
    id __begin_;
    id __end_;
    __compressed_pair<TSTHeaderNameMgrTile *__strong *, std::allocator<TSTHeaderNameMgrTile *>> __end_cap_;
} vector<TSTHeaderNameMgrTile *, std::allocator<TSTHeaderNameMgrTile *>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>, std::allocator<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>, std::allocator<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>>>;

typedef struct unordered_map<TSUCellCoord, TSTHeaderNameMgrEntry *, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, TSTHeaderNameMgrEntry *>>> {
    __hash_table<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>, std::allocator<std::__hash_value_type<TSUCellCoord, TSTHeaderNameMgrEntry *>>> __table_;
} unordered_map<TSUCellCoord, TSTHeaderNameMgrEntry *, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, TSTHeaderNameMgrEntry *>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCEUidCellRef, std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, std::hash<TSCEUidCellRef>, std::equal_to<TSCEUidCellRef>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCEUidCellRef, std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, std::hash<TSCEUidCellRef>, std::equal_to<TSCEUidCellRef>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSCEUidCellRef, std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, std::equal_to<TSCEUidCellRef>, std::hash<TSCEUidCellRef>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSCEUidCellRef, std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, std::equal_to<TSCEUidCellRef>, std::hash<TSCEUidCellRef>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, std::__unordered_map_hasher<TSCEUidCellRef, std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, std::hash<TSCEUidCellRef>, std::equal_to<TSCEUidCellRef>, true>, std::__unordered_map_equal<TSCEUidCellRef, std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, std::equal_to<TSCEUidCellRef>, std::hash<TSCEUidCellRef>, true>, std::allocator<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCEUidCellRef, std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, std::hash<TSCEUidCellRef>, std::equal_to<TSCEUidCellRef>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSCEUidCellRef, std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, std::equal_to<TSCEUidCellRef>, std::hash<TSCEUidCellRef>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, std::__unordered_map_hasher<TSCEUidCellRef, std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, std::hash<TSCEUidCellRef>, std::equal_to<TSCEUidCellRef>, true>, std::__unordered_map_equal<TSCEUidCellRef, std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, std::equal_to<TSCEUidCellRef>, std::hash<TSCEUidCellRef>, true>, std::allocator<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>>>;

typedef struct unordered_map<TSCEUidCellRef, TSCECellCoordSet, std::hash<TSCEUidCellRef>, std::equal_to<TSCEUidCellRef>, std::allocator<std::pair<const TSCEUidCellRef, TSCECellCoordSet>>> {
    __hash_table<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, std::__unordered_map_hasher<TSCEUidCellRef, std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, std::hash<TSCEUidCellRef>, std::equal_to<TSCEUidCellRef>, true>, std::__unordered_map_equal<TSCEUidCellRef, std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>, std::equal_to<TSCEUidCellRef>, std::hash<TSCEUidCellRef>, true>, std::allocator<std::__hash_value_type<TSCEUidCellRef, TSCECellCoordSet>>> __table_;
} unordered_map<TSCEUidCellRef, TSCECellCoordSet, std::hash<TSCEUidCellRef>, std::equal_to<TSCEUidCellRef>, std::allocator<std::pair<const TSCEUidCellRef, TSCECellCoordSet>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>>>;

typedef struct unordered_map<TSKUIDStruct, TSTHeaderPerTable *, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSTHeaderPerTable *>>> {
    __hash_table<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSTHeaderPerTable *>>> __table_;
} unordered_map<TSKUIDStruct, TSTHeaderPerTable *, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSTHeaderPerTable *>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>, std::allocator<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>, std::allocator<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>>>;

typedef struct unordered_map<TSUCellCoord, TSKUIDStruct, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, TSKUIDStruct>>> {
    __hash_table<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSKUIDStruct>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>, std::allocator<std::__hash_value_type<TSUCellCoord, TSKUIDStruct>>> __table_;
} unordered_map<TSUCellCoord, TSKUIDStruct, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, TSKUIDStruct>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSUCellCoord>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSUCellCoord>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSUCellCoord>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSUCellCoord>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSUCellCoord>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSUCellCoord>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSUCellCoord>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSUCellCoord>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSUCellCoord>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSUCellCoord>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSUCellCoord>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSUCellCoord>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSUCellCoord>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSUCellCoord>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSUCellCoord>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSUCellCoord>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSUCellCoord>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSUCellCoord>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSUCellCoord>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, TSUCellCoord>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSUCellCoord>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSUCellCoord>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, TSUCellCoord>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, TSUCellCoord>, std::hash<NSString *>, std::equal_to<NSString *>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, TSUCellCoord>, std::hash<NSString *>, std::equal_to<NSString *>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, TSUCellCoord>, std::equal_to<NSString *>, std::hash<NSString *>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, TSUCellCoord>, std::equal_to<NSString *>, std::hash<NSString *>, true>>;

typedef struct __hash_table<std::__hash_value_type<NSString *, TSUCellCoord>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, TSUCellCoord>, std::hash<NSString *>, std::equal_to<NSString *>, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, TSUCellCoord>, std::equal_to<NSString *>, std::hash<NSString *>, true>, std::allocator<std::__hash_value_type<NSString *, TSUCellCoord>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSUCellCoord>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSUCellCoord>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, TSUCellCoord>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, TSUCellCoord>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, TSUCellCoord>, std::hash<NSString *>, std::equal_to<NSString *>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, TSUCellCoord>, std::equal_to<NSString *>, std::hash<NSString *>, true>> __p3_;
} __hash_table<std::__hash_value_type<NSString *, TSUCellCoord>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, TSUCellCoord>, std::hash<NSString *>, std::equal_to<NSString *>, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, TSUCellCoord>, std::equal_to<NSString *>, std::hash<NSString *>, true>, std::allocator<std::__hash_value_type<NSString *, TSUCellCoord>>>;

typedef struct unordered_map<NSString *, TSUCellCoord, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, TSUCellCoord>>> {
    __hash_table<std::__hash_value_type<NSString *, TSUCellCoord>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, TSUCellCoord>, std::hash<NSString *>, std::equal_to<NSString *>, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, TSUCellCoord>, std::equal_to<NSString *>, std::hash<NSString *>, true>, std::allocator<std::__hash_value_type<NSString *, TSUCellCoord>>> __table_;
} unordered_map<NSString *, TSUCellCoord, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, TSUCellCoord>>>;

typedef struct __long {
    char * __data_;
    NSUInteger __size_;
    NSUInteger __cap_;
} __long;

typedef struct __short {
    char __data_;
    ? ;
} __short;

typedef struct __raw {
    NSUInteger __words;
} __raw;

typedef struct __rep {
    unk ;
    __long __l;
    __short __s;
    __raw __r;
} __rep;

typedef struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
    __rep __value_;
} __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>>;

typedef struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> __r_;
} basic_string<char, std::char_traits<char>, std::allocator<char>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>>>;

typedef struct unordered_map<TSKUIDStruct, TSCEInternalCellRefSet, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSCEInternalCellRefSet>>> {
    __hash_table<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSCEInternalCellRefSet>>> __table_;
} unordered_map<TSKUIDStruct, TSCEInternalCellRefSet, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSCEInternalCellRefSet>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, std::equal_to<TSCEInternalCellReference>, std::hash<TSCEInternalCellReference>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, std::equal_to<TSCEInternalCellReference>, std::hash<TSCEInternalCellReference>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, std::__unordered_map_hasher<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, true>, std::__unordered_map_equal<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, std::equal_to<TSCEInternalCellReference>, std::hash<TSCEInternalCellReference>, true>, std::allocator<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, std::equal_to<TSCEInternalCellReference>, std::hash<TSCEInternalCellReference>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, std::__unordered_map_hasher<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, true>, std::__unordered_map_equal<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, std::equal_to<TSCEInternalCellReference>, std::hash<TSCEInternalCellReference>, true>, std::allocator<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>>>;

typedef struct unordered_map<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, std::allocator<std::pair<const TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>>> {
    __hash_table<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, std::__unordered_map_hasher<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, true>, std::__unordered_map_equal<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>, std::equal_to<TSCEInternalCellReference>, std::hash<TSCEInternalCellReference>, true>, std::allocator<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>>> __table_;
} unordered_map<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, std::allocator<std::pair<const TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<TSTMergeRangeElem, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<TSTMergeRangeElem, void *>>>;

typedef struct __compressed_pair<unsigned long, TSTMergeRangeElemCompare> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, TSTMergeRangeElemCompare>;

typedef struct __tree<TSTMergeRangeElem, TSTMergeRangeElemCompare, std::allocator<TSTMergeRangeElem>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<TSTMergeRangeElem, void *>>> __pair1_;
    __compressed_pair<unsigned long, TSTMergeRangeElemCompare> __pair3_;
} __tree<TSTMergeRangeElem, TSTMergeRangeElemCompare, std::allocator<TSTMergeRangeElem>>;

typedef struct set<TSTMergeRangeElem, TSTMergeRangeElemCompare, std::allocator<TSTMergeRangeElem>> {
    __tree<TSTMergeRangeElem, TSTMergeRangeElemCompare, std::allocator<TSTMergeRangeElem>> __tree_;
} set<TSTMergeRangeElem, TSTMergeRangeElemCompare, std::allocator<TSTMergeRangeElem>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUViewColumnIndex, std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, std::hash<TSUViewColumnIndex>, std::equal_to<TSUViewColumnIndex>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUViewColumnIndex, std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, std::hash<TSUViewColumnIndex>, std::equal_to<TSUViewColumnIndex>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSUViewColumnIndex, std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, std::equal_to<TSUViewColumnIndex>, std::hash<TSUViewColumnIndex>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSUViewColumnIndex, std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, std::equal_to<TSUViewColumnIndex>, std::hash<TSUViewColumnIndex>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, std::__unordered_map_hasher<TSUViewColumnIndex, std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, std::hash<TSUViewColumnIndex>, std::equal_to<TSUViewColumnIndex>, true>, std::__unordered_map_equal<TSUViewColumnIndex, std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, std::equal_to<TSUViewColumnIndex>, std::hash<TSUViewColumnIndex>, true>, std::allocator<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUViewColumnIndex, std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, std::hash<TSUViewColumnIndex>, std::equal_to<TSUViewColumnIndex>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSUViewColumnIndex, std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, std::equal_to<TSUViewColumnIndex>, std::hash<TSUViewColumnIndex>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, std::__unordered_map_hasher<TSUViewColumnIndex, std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, std::hash<TSUViewColumnIndex>, std::equal_to<TSUViewColumnIndex>, true>, std::__unordered_map_equal<TSUViewColumnIndex, std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, std::equal_to<TSUViewColumnIndex>, std::hash<TSUViewColumnIndex>, true>, std::allocator<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>>>;

typedef struct unordered_map<TSUViewColumnIndex, TSUModelColumnIndex, std::hash<TSUViewColumnIndex>, std::equal_to<TSUViewColumnIndex>, std::allocator<std::pair<const TSUViewColumnIndex, TSUModelColumnIndex>>> {
    __hash_table<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, std::__unordered_map_hasher<TSUViewColumnIndex, std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, std::hash<TSUViewColumnIndex>, std::equal_to<TSUViewColumnIndex>, true>, std::__unordered_map_equal<TSUViewColumnIndex, std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, std::equal_to<TSUViewColumnIndex>, std::hash<TSUViewColumnIndex>, true>, std::allocator<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>>> __table_;
} unordered_map<TSUViewColumnIndex, TSUModelColumnIndex, std::hash<TSUViewColumnIndex>, std::equal_to<TSUViewColumnIndex>, std::allocator<std::pair<const TSUViewColumnIndex, TSUModelColumnIndex>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSKUIDStructCoord, TSTCell *>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSKUIDStructCoord, TSTCell *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<TSKUIDStructCoord, std::__value_type<TSKUIDStructCoord, TSTCell *>, std::less<TSKUIDStructCoord>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<TSKUIDStructCoord, std::__value_type<TSKUIDStructCoord, TSTCell *>, std::less<TSKUIDStructCoord>, true>>;

typedef struct __tree<std::__value_type<TSKUIDStructCoord, TSTCell *>, std::__map_value_compare<TSKUIDStructCoord, std::__value_type<TSKUIDStructCoord, TSTCell *>, std::less<TSKUIDStructCoord>, true>, std::allocator<std::__value_type<TSKUIDStructCoord, TSTCell *>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSKUIDStructCoord, TSTCell *>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<TSKUIDStructCoord, std::__value_type<TSKUIDStructCoord, TSTCell *>, std::less<TSKUIDStructCoord>, true>> __pair3_;
} __tree<std::__value_type<TSKUIDStructCoord, TSTCell *>, std::__map_value_compare<TSKUIDStructCoord, std::__value_type<TSKUIDStructCoord, TSTCell *>, std::less<TSKUIDStructCoord>, true>, std::allocator<std::__value_type<TSKUIDStructCoord, TSTCell *>>>;

typedef struct map<TSKUIDStructCoord, TSTCell *, std::less<TSKUIDStructCoord>, std::allocator<std::pair<const TSKUIDStructCoord, TSTCell *>>> {
    __tree<std::__value_type<TSKUIDStructCoord, TSTCell *>, std::__map_value_compare<TSKUIDStructCoord, std::__value_type<TSKUIDStructCoord, TSTCell *>, std::less<TSKUIDStructCoord>, true>, std::allocator<std::__value_type<TSKUIDStructCoord, TSTCell *>>> __tree_;
} map<TSKUIDStructCoord, TSTCell *, std::less<TSKUIDStructCoord>, std::allocator<std::pair<const TSKUIDStructCoord, TSTCell *>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<TSUCellRect, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<TSUCellRect, void *>>>;

typedef struct __compressed_pair<unsigned long, TSTCellRangeRowMajorLess> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, TSTCellRangeRowMajorLess>;

typedef struct __tree<TSUCellRect, TSTCellRangeRowMajorLess, std::allocator<TSUCellRect>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<TSUCellRect, void *>>> __pair1_;
    __compressed_pair<unsigned long, TSTCellRangeRowMajorLess> __pair3_;
} __tree<TSUCellRect, TSTCellRangeRowMajorLess, std::allocator<TSUCellRect>>;

typedef struct set<TSUCellRect, TSTCellRangeRowMajorLess, std::allocator<TSUCellRect>> {
    __tree<TSUCellRect, TSTCellRangeRowMajorLess, std::allocator<TSUCellRect>> __tree_;
} set<TSUCellRect, TSTCellRangeRowMajorLess, std::allocator<TSUCellRect>>;

typedef struct __compressed_pair<unsigned long, TSTCellRangeColumnMajorLess> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, TSTCellRangeColumnMajorLess>;

typedef struct __tree<TSUCellRect, TSTCellRangeColumnMajorLess, std::allocator<TSUCellRect>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<TSUCellRect, void *>>> __pair1_;
    __compressed_pair<unsigned long, TSTCellRangeColumnMajorLess> __pair3_;
} __tree<TSUCellRect, TSTCellRangeColumnMajorLess, std::allocator<TSUCellRect>>;

typedef struct set<TSUCellRect, TSTCellRangeColumnMajorLess, std::allocator<TSUCellRect>> {
    __tree<TSUCellRect, TSTCellRangeColumnMajorLess, std::allocator<TSUCellRect>> __tree_;
} set<TSUCellRect, TSTCellRangeColumnMajorLess, std::allocator<TSUCellRect>>;

typedef struct TSCECellRecord {
} // Error Processing Struct Fields

typedef struct TSCECellRecordTile {
    unsigned short field0;
    unsigned int field1;
    TSCECellRecord field2;
    NSUInteger field3;
    NSUInteger field4;
    NSUInteger field5;
    id field6;
} TSCECellRecordTile;

typedef struct vector<TSCEFunctionArgSpec, std::allocator<TSCEFunctionArgSpec>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>>>;

typedef struct unordered_map<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>>> {
    __hash_table<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>>> __table_;
} unordered_map<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, std::equal_to<TSCEInternalCellReference>, std::hash<TSCEInternalCellReference>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, std::equal_to<TSCEInternalCellReference>, std::hash<TSCEInternalCellReference>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, std::__unordered_map_hasher<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, true>, std::__unordered_map_equal<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, std::equal_to<TSCEInternalCellReference>, std::hash<TSCEInternalCellReference>, true>, std::allocator<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, std::equal_to<TSCEInternalCellReference>, std::hash<TSCEInternalCellReference>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, std::__unordered_map_hasher<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, true>, std::__unordered_map_equal<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, std::equal_to<TSCEInternalCellReference>, std::hash<TSCEInternalCellReference>, true>, std::allocator<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>>>;

typedef struct unordered_map<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, std::allocator<std::pair<const TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>>> {
    __hash_table<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, std::__unordered_map_hasher<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, true>, std::__unordered_map_equal<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>, std::equal_to<TSCEInternalCellReference>, std::hash<TSCEInternalCellReference>, true>, std::allocator<std::__hash_value_type<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>>> __table_;
} unordered_map<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, std::allocator<std::pair<const TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>, std::allocator<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>, std::allocator<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>>>;

typedef struct unordered_map<TSCECellRef, TSCEFormulaObject *, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, std::allocator<std::pair<const TSCECellRef, TSCEFormulaObject *>>> {
    __hash_table<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>, std::allocator<std::__hash_value_type<TSCECellRef, TSCEFormulaObject *>>> __table_;
} unordered_map<TSCECellRef, TSCEFormulaObject *, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, std::allocator<std::pair<const TSCECellRef, TSCEFormulaObject *>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TSCECellRef, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TSCECellRef, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSCECellRef, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TSCECellRef, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSCECellRef, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<TSCECellRef, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSCECellRef, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSCECellRef, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<TSCECellRef, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSCECellRef, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<TSCECellRef, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSCECellRef, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<TSCECellRef, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSCECellRef, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<TSCECellRef, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSCECellRef, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<TSCECellRef, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<TSCECellRef, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<TSCECellRef, void *> *>, std::allocator<std::__hash_node<TSCECellRef, void *>>> {
    __hash_node_base<std::__hash_node<TSCECellRef, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<TSCECellRef, void *> *>, std::allocator<std::__hash_node<TSCECellRef, void *>>>;

typedef struct __compressed_pair<unsigned long, std::hash<TSCECellRef>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::hash<TSCECellRef>>;

typedef struct __compressed_pair<float, std::equal_to<TSCECellRef>> {
    float __value_;
} __compressed_pair<float, std::equal_to<TSCECellRef>>;

typedef struct __hash_table<TSCECellRef, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, std::allocator<TSCECellRef>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<TSCECellRef, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSCECellRef, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<TSCECellRef, void *> *>, std::allocator<std::__hash_node<TSCECellRef, void *>>> __p1_;
    __compressed_pair<unsigned long, std::hash<TSCECellRef>> __p2_;
    __compressed_pair<float, std::equal_to<TSCECellRef>> __p3_;
} __hash_table<TSCECellRef, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, std::allocator<TSCECellRef>>;

typedef struct unordered_set<TSCECellRef, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, std::allocator<TSCECellRef>> {
    __hash_table<TSCECellRef, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, std::allocator<TSCECellRef>> __table_;
} unordered_set<TSCECellRef, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, std::allocator<TSCECellRef>>;

typedef struct __compressed_pair<TSCESubFormulaOwnerIndex *, std::allocator<TSCESubFormulaOwnerIndex>> {
    unsigned short field0;
} __compressed_pair<TSCESubFormulaOwnerIndex *, std::allocator<TSCESubFormulaOwnerIndex>>;

typedef struct vector<TSCESubFormulaOwnerIndex, std::allocator<TSCESubFormulaOwnerIndex>> {
    unsigned short field0;
    unsigned short field1;
    __compressed_pair<TSCESubFormulaOwnerIndex *, std::allocator<TSCESubFormulaOwnerIndex>> field2;
} vector<TSCESubFormulaOwnerIndex, std::allocator<TSCESubFormulaOwnerIndex>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCESubFormulaOwnerIndex, std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, std::hash<TSCESubFormulaOwnerIndex>, std::equal_to<TSCESubFormulaOwnerIndex>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCESubFormulaOwnerIndex, std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, std::hash<TSCESubFormulaOwnerIndex>, std::equal_to<TSCESubFormulaOwnerIndex>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSCESubFormulaOwnerIndex, std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, std::equal_to<TSCESubFormulaOwnerIndex>, std::hash<TSCESubFormulaOwnerIndex>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSCESubFormulaOwnerIndex, std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, std::equal_to<TSCESubFormulaOwnerIndex>, std::hash<TSCESubFormulaOwnerIndex>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, std::__unordered_map_hasher<TSCESubFormulaOwnerIndex, std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, std::hash<TSCESubFormulaOwnerIndex>, std::equal_to<TSCESubFormulaOwnerIndex>, true>, std::__unordered_map_equal<TSCESubFormulaOwnerIndex, std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, std::equal_to<TSCESubFormulaOwnerIndex>, std::hash<TSCESubFormulaOwnerIndex>, true>, std::allocator<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCESubFormulaOwnerIndex, std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, std::hash<TSCESubFormulaOwnerIndex>, std::equal_to<TSCESubFormulaOwnerIndex>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSCESubFormulaOwnerIndex, std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, std::equal_to<TSCESubFormulaOwnerIndex>, std::hash<TSCESubFormulaOwnerIndex>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, std::__unordered_map_hasher<TSCESubFormulaOwnerIndex, std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, std::hash<TSCESubFormulaOwnerIndex>, std::equal_to<TSCESubFormulaOwnerIndex>, true>, std::__unordered_map_equal<TSCESubFormulaOwnerIndex, std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, std::equal_to<TSCESubFormulaOwnerIndex>, std::hash<TSCESubFormulaOwnerIndex>, true>, std::allocator<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>>>;

typedef struct unordered_map<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *, std::hash<TSCESubFormulaOwnerIndex>, std::equal_to<TSCESubFormulaOwnerIndex>, std::allocator<std::pair<const TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>>> {
    __hash_table<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, std::__unordered_map_hasher<TSCESubFormulaOwnerIndex, std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, std::hash<TSCESubFormulaOwnerIndex>, std::equal_to<TSCESubFormulaOwnerIndex>, true>, std::__unordered_map_equal<TSCESubFormulaOwnerIndex, std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, std::equal_to<TSCESubFormulaOwnerIndex>, std::hash<TSCESubFormulaOwnerIndex>, true>, std::allocator<std::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>>> __table_;
} unordered_map<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *, std::hash<TSCESubFormulaOwnerIndex>, std::equal_to<TSCESubFormulaOwnerIndex>, std::allocator<std::pair<const TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, NSString *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, NSString *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, NSString *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, NSString *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, NSString *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, NSString *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, NSString *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, NSString *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, NSString *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, NSString *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, NSString *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, NSString *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, NSString *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, NSString *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, NSString *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, NSString *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, NSString *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, NSString *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, NSString *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCECellRef, NSString *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, NSString *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, NSString *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCECellRef, NSString *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, NSString *>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, NSString *>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, NSString *>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, NSString *>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSCECellRef, NSString *>, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, NSString *>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, NSString *>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>, std::allocator<std::__hash_value_type<TSCECellRef, NSString *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, NSString *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, NSString *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, NSString *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCECellRef, NSString *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, NSString *>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, NSString *>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSCECellRef, NSString *>, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, NSString *>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, NSString *>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>, std::allocator<std::__hash_value_type<TSCECellRef, NSString *>>>;

typedef struct unordered_map<TSCECellRef, NSString *, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, std::allocator<std::pair<const TSCECellRef, NSString *>>> {
    __hash_table<std::__hash_value_type<TSCECellRef, NSString *>, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, NSString *>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, NSString *>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>, std::allocator<std::__hash_value_type<TSCECellRef, NSString *>>> __table_;
} unordered_map<TSCECellRef, NSString *, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, std::allocator<std::pair<const TSCECellRef, NSString *>>>;

typedef struct TSTColumnOrRowMap {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    BOOL field3;
} TSTColumnOrRowMap;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<TSTColumnOrRowMap, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<TSTColumnOrRowMap, void *>>>;

typedef struct __compressed_pair<unsigned long, TSTColumnOrRowMapTgtLess> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, TSTColumnOrRowMapTgtLess>;

typedef struct __tree<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::allocator<TSTColumnOrRowMap>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<TSTColumnOrRowMap, void *>>> __pair1_;
    __compressed_pair<unsigned long, TSTColumnOrRowMapTgtLess> __pair3_;
} __tree<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::allocator<TSTColumnOrRowMap>>;

typedef struct set<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::allocator<TSTColumnOrRowMap>> {
    __tree<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::allocator<TSTColumnOrRowMap>> __tree_;
} set<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::allocator<TSTColumnOrRowMap>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>, std::allocator<std::__hash_value_type<TSUCellCoord, TSUCellCoord>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>, std::allocator<std::__hash_value_type<TSUCellCoord, TSUCellCoord>>>;

typedef struct unordered_map<TSUCellCoord, TSUCellCoord, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, TSUCellCoord>>> {
    __hash_table<std::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>, std::allocator<std::__hash_value_type<TSUCellCoord, TSUCellCoord>>> __table_;
} unordered_map<TSUCellCoord, TSUCellCoord, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, TSUCellCoord>>>;

typedef struct TSTPerformanceLoggingToken {
    id logHandle;
    NSUInteger NSObject<OS_os_log>;
} TSTPerformanceLoggingToken;

typedef struct vector<TSCEGrid, std::allocator<TSCEGrid>> {
} // Error Processing Struct Fields

typedef struct TSCEFunctor {
    id _formula;
    unsigned char TSCEFormulaObject;
} TSCEFunctor;

typedef struct TSTImportWarningSetCellWarningFlags {
    BOOL mCondFormatAboveAvgEqualAverageImportWarning;
    BOOL mCondFormatAboveAvgStdDevImportWarning;
    BOOL mCondFormatComplexFormulaImportWarning;
    BOOL mCondFormatContainsErrorsImportWarning;
    BOOL mCondFormatExprImportWarning;
    BOOL mCondFormatNotContainsErrorsImportWarning;
    BOOL mCondFormatParametersNotAllTheSameTypeImportWarning;
    BOOL mCondFormatStopIfTrueImportWarning;
    BOOL mCondFormatUnsupportedOperatorImportWarning;
    BOOL mCondFormatUnsupportedStylingImportWarning;
    BOOL mCondFormatUnsupportedTimePeriodImportWarning;
    BOOL mUnsupportedConditionalFormatImportWarning;
    BOOL mUnsupportedDataFormatImportWarning;
    BOOL mDurationFormatRangeChangedUpgradeWarning;
} TSTImportWarningSetCellWarningFlags;

typedef struct TSTImportFormulaWarning {
    NSInteger mType;
    id mOriginalFormula;
    id NSString;
} TSTImportFormulaWarning;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>, std::allocator<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>, std::allocator<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>>>;

typedef struct unordered_map<TSCECellRef, TSTImportWarningSet *, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, std::allocator<std::pair<const TSCECellRef, TSTImportWarningSet *>>> {
    __hash_table<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, true>, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>, true>, std::allocator<std::__hash_value_type<TSCECellRef, TSTImportWarningSet *>>> __table_;
} unordered_map<TSCECellRef, TSTImportWarningSet *, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, std::allocator<std::pair<const TSCECellRef, TSTImportWarningSet *>>>;

typedef struct vector<TSCEReferenceValue, std::allocator<TSCEReferenceValue>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>>>;

typedef struct unordered_map<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>>> {
    __hash_table<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>>> __table_;
} unordered_map<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>>>;

typedef struct shared_ptr<TSCEValue> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCEGridCoord, std::__hash_value_type<TSCEGridCoord, TSCEValue>, std::hash<TSCEGridCoord>, std::equal_to<TSCEGridCoord>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCEGridCoord, std::__hash_value_type<TSCEGridCoord, TSCEValue>, std::hash<TSCEGridCoord>, std::equal_to<TSCEGridCoord>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSCEGridCoord, std::__hash_value_type<TSCEGridCoord, TSCEValue>, std::equal_to<TSCEGridCoord>, std::hash<TSCEGridCoord>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSCEGridCoord, std::__hash_value_type<TSCEGridCoord, TSCEValue>, std::equal_to<TSCEGridCoord>, std::hash<TSCEGridCoord>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSCEGridCoord, TSCEValue>, std::__unordered_map_hasher<TSCEGridCoord, std::__hash_value_type<TSCEGridCoord, TSCEValue>, std::hash<TSCEGridCoord>, std::equal_to<TSCEGridCoord>, true>, std::__unordered_map_equal<TSCEGridCoord, std::__hash_value_type<TSCEGridCoord, TSCEValue>, std::equal_to<TSCEGridCoord>, std::hash<TSCEGridCoord>, true>, std::allocator<std::__hash_value_type<TSCEGridCoord, TSCEValue>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCEGridCoord, TSCEValue>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCEGridCoord, std::__hash_value_type<TSCEGridCoord, TSCEValue>, std::hash<TSCEGridCoord>, std::equal_to<TSCEGridCoord>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSCEGridCoord, std::__hash_value_type<TSCEGridCoord, TSCEValue>, std::equal_to<TSCEGridCoord>, std::hash<TSCEGridCoord>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSCEGridCoord, TSCEValue>, std::__unordered_map_hasher<TSCEGridCoord, std::__hash_value_type<TSCEGridCoord, TSCEValue>, std::hash<TSCEGridCoord>, std::equal_to<TSCEGridCoord>, true>, std::__unordered_map_equal<TSCEGridCoord, std::__hash_value_type<TSCEGridCoord, TSCEValue>, std::equal_to<TSCEGridCoord>, std::hash<TSCEGridCoord>, true>, std::allocator<std::__hash_value_type<TSCEGridCoord, TSCEValue>>>;

typedef struct unordered_map<TSCEGridCoord, TSCEValue, std::hash<TSCEGridCoord>, std::equal_to<TSCEGridCoord>, std::allocator<std::pair<const TSCEGridCoord, TSCEValue>>> {
    __hash_table<std::__hash_value_type<TSCEGridCoord, TSCEValue>, std::__unordered_map_hasher<TSCEGridCoord, std::__hash_value_type<TSCEGridCoord, TSCEValue>, std::hash<TSCEGridCoord>, std::equal_to<TSCEGridCoord>, true>, std::__unordered_map_equal<TSCEGridCoord, std::__hash_value_type<TSCEGridCoord, TSCEValue>, std::equal_to<TSCEGridCoord>, std::hash<TSCEGridCoord>, true>, std::allocator<std::__hash_value_type<TSCEGridCoord, TSCEValue>>> __table_;
} unordered_map<TSCEGridCoord, TSCEValue, std::hash<TSCEGridCoord>, std::equal_to<TSCEGridCoord>, std::allocator<std::pair<const TSCEGridCoord, TSCEValue>>>;

