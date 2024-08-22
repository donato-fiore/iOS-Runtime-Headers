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

typedef struct TSKUIDStruct {
    NSUInteger _lower;
    NSUInteger _upper;
} TSKUIDStruct;

typedef struct TSKUIDStructVectorTemplate<TSKUIDStruct> {
} // Error Processing Struct Fields

typedef struct TSUPreserveFlags {
    unsigned char _flags;
} TSUPreserveFlags;

typedef struct TSUIndexRange {
    NSInteger _begin;
    NSInteger _end;
} TSUIndexRange;

typedef struct ? {
    BOOL unarchiverSourceType;
    BOOL isTransientObject;
} ?;

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

typedef struct TSCERangeCoordinate {
    TSUCellCoord _topLeft;
    TSUCellCoord _bottomRight;
} TSCERangeCoordinate;

typedef struct TSCERangeRef {
    TSCERangeCoordinate range;
    TSKUIDStruct _tableUID;
} TSCERangeRef;

typedef struct RefTypeHolder<TSCERangeRef, 0> {
    TSCERangeRef field0;
} RefTypeHolder<TSCERangeRef, 0>;

typedef struct TSCECellRef {
    TSUCellCoord coordinate;
    TSKUIDStruct _tableUID;
} TSCECellRef;

typedef struct TSUChromeCellCoord {
    TSUCellCoord field0;
} TSUChromeCellCoord;

typedef struct TSCETableResolver {
    unk field0;
} TSCETableResolver;

typedef struct RefTypeHolder<TSCERangeRef, 2> {
    TSCERangeRef _ref;
} RefTypeHolder<TSCERangeRef, 2>;

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

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

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

typedef struct InternalMetadata {
    void field0;
} InternalMetadata;

typedef struct Message {
    unk field0;
    InternalMetadata field1;
} Message;

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

typedef struct vector<TSUCellRect, std::allocator<TSUCellRect>> {
} // Error Processing Struct Fields

typedef struct TSUViewCellCoord {
    TSUCellCoord _coord;
} TSUViewCellCoord;

typedef struct vector<TSKUIDStructCoord, std::allocator<TSKUIDStructCoord>> {
} // Error Processing Struct Fields

typedef struct TSUViewColumnIndex {
    unsigned short field0;
} TSUViewColumnIndex;

typedef struct __compressed_pair<RefTypeHolder<TSCERangeRef, 1> *, std::allocator<RefTypeHolder<TSCERangeRef, 1>>> {
    void field0;
} __compressed_pair<RefTypeHolder<TSCERangeRef, 1> *, std::allocator<RefTypeHolder<TSCERangeRef, 1>>>;

typedef struct vector<RefTypeHolder<TSCERangeRef, 1>, std::allocator<RefTypeHolder<TSCERangeRef, 1>>> {
    void field0;
    void field1;
    __compressed_pair<RefTypeHolder<TSCERangeRef, 1> *, std::allocator<RefTypeHolder<TSCERangeRef, 1>>> field2;
} vector<RefTypeHolder<TSCERangeRef, 1>, std::allocator<RefTypeHolder<TSCERangeRef, 1>>>;

typedef struct __compressed_pair<RefTypeHolder<TSCERangeRef, 0> *, std::allocator<RefTypeHolder<TSCERangeRef, 0>>> {
    void field0;
} __compressed_pair<RefTypeHolder<TSCERangeRef, 0> *, std::allocator<RefTypeHolder<TSCERangeRef, 0>>>;

typedef struct vector<RefTypeHolder<TSCERangeRef, 0>, std::allocator<RefTypeHolder<TSCERangeRef, 0>>> {
    void field0;
    void field1;
    __compressed_pair<RefTypeHolder<TSCERangeRef, 0> *, std::allocator<RefTypeHolder<TSCERangeRef, 0>>> field2;
} vector<RefTypeHolder<TSCERangeRef, 0>, std::allocator<RefTypeHolder<TSCERangeRef, 0>>>;

typedef struct RefTypeHolder<TSCERangeRef, 1> {
    TSCERangeRef field0;
} RefTypeHolder<TSCERangeRef, 1>;

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

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSTExpressionNode *, std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, std::hash<TSTExpressionNode *>, std::equal_to<TSTExpressionNode *>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSTExpressionNode *, std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, std::hash<TSTExpressionNode *>, std::equal_to<TSTExpressionNode *>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSTExpressionNode *, std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, std::equal_to<TSTExpressionNode *>, std::hash<TSTExpressionNode *>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSTExpressionNode *, std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, std::equal_to<TSTExpressionNode *>, std::hash<TSTExpressionNode *>, true>>;

typedef struct __hash_table<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, std::__unordered_map_hasher<TSTExpressionNode *, std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, std::hash<TSTExpressionNode *>, std::equal_to<TSTExpressionNode *>, true>, std::__unordered_map_equal<TSTExpressionNode *, std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, std::equal_to<TSTExpressionNode *>, std::hash<TSTExpressionNode *>, true>, std::allocator<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSTExpressionNode *, std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, std::hash<TSTExpressionNode *>, std::equal_to<TSTExpressionNode *>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSTExpressionNode *, std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, std::equal_to<TSTExpressionNode *>, std::hash<TSTExpressionNode *>, true>> __p3_;
} __hash_table<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, std::__unordered_map_hasher<TSTExpressionNode *, std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, std::hash<TSTExpressionNode *>, std::equal_to<TSTExpressionNode *>, true>, std::__unordered_map_equal<TSTExpressionNode *, std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, std::equal_to<TSTExpressionNode *>, std::hash<TSTExpressionNode *>, true>, std::allocator<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>>>;

typedef struct unordered_map<TSTExpressionNode *, TSTCSENodeData, std::hash<TSTExpressionNode *>, std::equal_to<TSTExpressionNode *>, std::allocator<std::pair<TSTExpressionNode *const, TSTCSENodeData>>> {
    __hash_table<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, std::__unordered_map_hasher<TSTExpressionNode *, std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, std::hash<TSTExpressionNode *>, std::equal_to<TSTExpressionNode *>, true>, std::__unordered_map_equal<TSTExpressionNode *, std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, std::equal_to<TSTExpressionNode *>, std::hash<TSTExpressionNode *>, true>, std::allocator<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>>> __table_;
} unordered_map<TSTExpressionNode *, TSTCSENodeData, std::hash<TSTExpressionNode *>, std::equal_to<TSTExpressionNode *>, std::allocator<std::pair<TSTExpressionNode *const, TSTCSENodeData>>>;

typedef struct TSUViewRowIndex {
    unsigned int field0;
} TSUViewRowIndex;

typedef struct TSUViewCellRect {
    TSUCellRect _rect;
} TSUViewCellRect;

typedef struct RefTypeHolder<TSCECellRef, 0> {
    TSCECellRef _ref;
} RefTypeHolder<TSCECellRef, 0>;

typedef struct RefTypeHolder<TSCECellRef, 2> {
    TSCECellRef field0;
} RefTypeHolder<TSCECellRef, 2>;

typedef struct RefTypeHolder<TSCECellRef, 1> {
    TSCECellRef field0;
} RefTypeHolder<TSCECellRef, 1>;

typedef struct vector<TSUViewCellRect, std::allocator<TSUViewCellRect>> {
} // Error Processing Struct Fields

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

typedef struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long *, std::allocator<unsigned long>>;

typedef struct vector<unsigned long, std::allocator<unsigned long>> {
    NSUInteger __begin_;
    NSUInteger __end_;
    __compressed_pair<unsigned long *, std::allocator<unsigned long>> __end_cap_;
} vector<unsigned long, std::allocator<unsigned long>>;

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

typedef struct UIEdgeInsets {
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
} UIEdgeInsets;

typedef struct TSUDecimal {
    ? _decimal;
} TSUDecimal;

typedef struct TSCEDurationFormat {
    BOOL useAutomaticUnits;
    BOOL durationUnitSmallest;
    BOOL durationUnitLargest;
    BOOL durationStyle;
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

typedef struct TSCENumberValue {
    unk _vptr$TSCEAbstractValue;
    TSUDecimal _decimal;
    TSCEFormat _format;
    unsigned short _baseUnit;
    BOOL _isUnitlessZero;
} TSCENumberValue;

typedef struct TSCEDateValue {
    unk _vptr$TSCEAbstractValue;
    id mDate;
    TSCEFormat NSDate;
} TSCEDateValue;

typedef struct vector<_NSRange, std::allocator<_NSRange>> {
} // Error Processing Struct Fields

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

typedef struct vector<TSCECellRef, std::allocator<TSCECellRef>> {
} // Error Processing Struct Fields

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

typedef struct vector<TSUCellCoord, std::allocator<TSUCellCoord>> {
} // Error Processing Struct Fields

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

typedef struct TSCERelativeCellCoordinate {
    int row;
    short column;
    BOOL _preserveRow;
    BOOL _preserveColumn;
} TSCERelativeCellCoordinate;

typedef struct TSCECrossTableReference {
    TSKUIDStruct field0;
    TSCERelativeCellCoordinate field1;
} TSCECrossTableReference;

typedef struct TSCERelativeCellRef {
    TSCERelativeCellCoordinate relativeCoord;
    TSKUIDStruct tableUID;
    BOOL preserveColumn;
    BOOL preserveRow;
    BOOL isSpanningColumn;
    BOOL isSpanningRow;
} TSCERelativeCellRef;

typedef struct TSCEFormulaCreator {
    id field0;
    unk field1;
} TSCEFormulaCreator;

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

typedef struct TSCEUidCellRef {
    TSKUIDStruct _columnUid;
    TSKUIDStruct _rowUid;
    TSKUIDStruct _tableUid;
} TSCEUidCellRef;

typedef struct TSCEGridDimensions {
    unsigned int width;
    unsigned int height;
} TSCEGridDimensions;

typedef struct __CFLocale {
} // Error Processing Struct Fields

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct CGPath {
} // Error Processing Struct Fields

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

typedef struct __compressed_pair<TSCECategoryRef *__strong *, std::allocator<TSCECategoryRef *>> {
    id field0;
} __compressed_pair<TSCECategoryRef *__strong *, std::allocator<TSCECategoryRef *>>;

typedef struct vector<TSCECategoryRef *, std::allocator<TSCECategoryRef *>> {
    id field0;
    id field1;
    __compressed_pair<TSCECategoryRef *__strong *, std::allocator<TSCECategoryRef *>> field2;
} vector<TSCECategoryRef *, std::allocator<TSCECategoryRef *>>;

typedef struct __compressed_pair<TSCECategoryLevel *, std::allocator<TSCECategoryLevel>> {
    unsigned char field0;
} __compressed_pair<TSCECategoryLevel *, std::allocator<TSCECategoryLevel>>;

typedef struct vector<TSCECategoryLevel, std::allocator<TSCECategoryLevel>> {
    unsigned char field0;
    unsigned char field1;
    __compressed_pair<TSCECategoryLevel *, std::allocator<TSCECategoryLevel>> field2;
} vector<TSCECategoryLevel, std::allocator<TSCECategoryLevel>>;

typedef struct vector<TSCEValue, std::allocator<TSCEValue>> {
} // Error Processing Struct Fields

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

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

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

typedef struct TSCESpanningRangeRef {
    TSCERangeRef field0;
    unsigned char field1;
} TSCESpanningRangeRef;

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

typedef struct __compressed_pair<NSString *__strong *, std::allocator<NSString *>> {
    id field0;
} __compressed_pair<NSString *__strong *, std::allocator<NSString *>>;

typedef struct vector<NSString *, std::allocator<NSString *>> {
    id field0;
    id field1;
    __compressed_pair<NSString *__strong *, std::allocator<NSString *>> field2;
} vector<NSString *, std::allocator<NSString *>>;

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

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSUCellCoord, TSTCell *>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSUCellCoord, TSTCell *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, TSTCell *>, std::less<TSUCellCoord>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, TSTCell *>, std::less<TSUCellCoord>, true>>;

typedef struct __tree<std::__value_type<TSUCellCoord, TSTCell *>, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, TSTCell *>, std::less<TSUCellCoord>, true>, std::allocator<std::__value_type<TSUCellCoord, TSTCell *>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSUCellCoord, TSTCell *>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, TSTCell *>, std::less<TSUCellCoord>, true>> __pair3_;
} __tree<std::__value_type<TSUCellCoord, TSTCell *>, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, TSTCell *>, std::less<TSUCellCoord>, true>, std::allocator<std::__value_type<TSUCellCoord, TSTCell *>>>;

typedef struct map<TSUCellCoord, TSTCell *, std::less<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, TSTCell *>>> {
    __tree<std::__value_type<TSUCellCoord, TSTCell *>, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, TSTCell *>, std::less<TSUCellCoord>, true>, std::allocator<std::__value_type<TSUCellCoord, TSTCell *>>> __tree_;
} map<TSUCellCoord, TSTCell *, std::less<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, TSTCell *>>>;

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

