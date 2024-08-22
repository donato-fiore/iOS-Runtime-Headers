typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct TSUCellCoord {
    unsigned int row;
    unsigned short column;
    BOOL _preserveRow;
    BOOL _preserveColumn;
} TSUCellCoord;

typedef struct TSKUIDStruct {
    NSUInteger _lower;
    NSUInteger _upper;
} TSKUIDStruct;

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

typedef struct TSCEWarningReportingContext {
    BOOL field0;
    BOOL field1;
    id field2;
} TSCEWarningReportingContext;

typedef struct TSCEReplaceFormulaOptions {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    TSKUIDStruct field4;
    id field5;
} TSCEReplaceFormulaOptions;

typedef struct TSCEFunctionArgSpec {
} // Error Processing Struct Fields

typedef struct vector<TSCEFunctionArgSpec, std::allocator<TSCEFunctionArgSpec>> {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL unarchiverSourceType;
    BOOL isTransientObject;
} ?;

typedef struct TSUDecimal {
    ? _decimal;
} TSUDecimal;

typedef struct TSCEInternalCellReference {
    TSUCellCoord coordinate;
    unsigned short tableID;
    unsigned short reserved;
} TSCEInternalCellReference;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

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

typedef struct TSCEGrid {
    unk field0;
    id field1;
    TSCEFormat field2;
} TSCEGrid;

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

typedef struct TSCEInternalRangeReference {
    TSCERangeCoordinate field0;
    unsigned short field1;
} TSCEInternalRangeReference;

typedef struct TSUIndexRange {
    NSInteger _begin;
    NSInteger _end;
} TSUIndexRange;

typedef struct TSUIndexSet {
} // Error Processing Struct Fields

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

typedef struct vector<TSCEInternalRangeReference, std::allocator<TSCEInternalRangeReference>> {
} // Error Processing Struct Fields

typedef struct TSKUIDStructVectorTemplate<TSKUIDStruct> {
} // Error Processing Struct Fields

typedef struct TSUPreserveFlags {
    unsigned char _flags;
} TSUPreserveFlags;

typedef struct TSCEASTNodeArray {
    char * field0;
    NSUInteger field1;
    NSUInteger field2;
    BOOL field3;
} TSCEASTNodeArray;

typedef struct TSCERegionNode {
    NSUInteger field0;
    TSCERegionNode field1;
    void field2;
} TSCERegionNode;

typedef struct vector<TSCEASTNodeArray *, std::allocator<TSCEASTNodeArray *>> {
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

typedef struct TSUModelRowIndex {
    unsigned int field0;
} TSUModelRowIndex;

typedef struct TSUViewRowIndex {
    unsigned int field0;
} TSUViewRowIndex;

typedef struct TSUModelCellCoord {
    TSUCellCoord field0;
} TSUModelCellCoord;

typedef struct TSUChromeCellCoord {
    TSUCellCoord field0;
} TSUChromeCellCoord;

typedef struct TSUViewColumnIndex {
    unsigned short field0;
} TSUViewColumnIndex;

typedef struct TSUModelColumnIndex {
    unsigned short field0;
} TSUModelColumnIndex;

typedef struct TSUChromeColumnIndex {
    unsigned short field0;
} TSUChromeColumnIndex;

typedef struct TSUChromeRowIndex {
    unsigned int field0;
} TSUChromeRowIndex;

typedef struct TSUViewCellCoord {
    TSUCellCoord field0;
} TSUViewCellCoord;

typedef struct RefTypeHolder<TSCECellRef, 0> {
    TSCECellRef field0;
} RefTypeHolder<TSCECellRef, 0>;

typedef struct RefTypeHolder<TSCECellRef, 2> {
    TSCECellRef field0;
} RefTypeHolder<TSCECellRef, 2>;

typedef struct RefTypeHolder<TSCECellRef, 1> {
    TSCECellRef field0;
} RefTypeHolder<TSCECellRef, 1>;

typedef struct RefTypeHolder<TSCERangeRef, 2> {
    TSCERangeRef field0;
} RefTypeHolder<TSCERangeRef, 2>;

typedef struct RefTypeHolder<TSCERangeRef, 1> {
    TSCERangeRef field0;
} RefTypeHolder<TSCERangeRef, 1>;

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

typedef struct TSCEValue {
    unk ;
    ? DONT_USE_fakeTSCENumberValueStandIn;
    NSUInteger _buff;
    unsigned char _type;
} TSCEValue;

typedef struct TSCEGridDimensions {
    unsigned int width;
    unsigned int height;
} TSCEGridDimensions;

typedef struct TSCEGridAccessContext {
} // Error Processing Struct Fields

typedef struct TSCEGridCoord {
    unsigned int column;
    unsigned int row;
} TSCEGridCoord;

typedef struct TSCENumberValue {
    unk _vptr$TSCEAbstractValue;
    TSUDecimal _decimal;
    TSCEFormat _format;
    unsigned short _baseUnit;
    BOOL _isUnitlessZero;
} TSCENumberValue;

typedef struct TSCEReferenceValue {
    unk field0;
    id field1;
    TSUCellCoord field2;
    TSUPreserveFlags field3;
    BOOL field4;
    BOOL field5;
} TSCEReferenceValue;

typedef struct vector<TSCEGrid, std::allocator<TSCEGrid>> {
} // Error Processing Struct Fields

typedef struct TSCECellTractRefCore {
} // Error Processing Struct Fields

typedef struct vector<TSCEReferenceValue, std::allocator<TSCEReferenceValue>> {
} // Error Processing Struct Fields

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

typedef struct UUIDData<TSP::UUIDData> {
    unk ;
    unsigned char _uuid;
    ? _cfuuid;
    ? ;
} UUIDData<TSP::UUIDData>;

typedef struct TSCELexer {
} // Error Processing Struct Fields

typedef struct TSCEParser {
} // Error Processing Struct Fields

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

typedef struct vector<TSUCellCoord, std::allocator<TSUCellCoord>> {
} // Error Processing Struct Fields

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

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct __compressed_pair<NSString *__strong *, std::allocator<NSString *>> {
    id __value_;
} __compressed_pair<NSString *__strong *, std::allocator<NSString *>>;

typedef struct vector<NSString *, std::allocator<NSString *>> {
    id __begin_;
    id __end_;
    __compressed_pair<NSString *__strong *, std::allocator<NSString *>> __end_cap_;
} vector<NSString *, std::allocator<NSString *>>;

typedef struct vector<TSCEValue, std::allocator<TSCEValue>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<unsigned long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<unsigned long>>;

typedef struct vector<bool, std::allocator<bool>> {
    NSUInteger __begin_;
    NSUInteger __size_;
    __compressed_pair<unsigned long, std::allocator<unsigned long>> __cap_alloc_;
} vector<bool, std::allocator<bool>>;

typedef struct TSUCellRect {
    TSUCellCoord origin;
    ? size;
} TSUCellRect;

typedef struct TSCERelativeCellCoordinate {
    int field0;
    short field1;
    BOOL field2;
    BOOL field3;
} TSCERelativeCellCoordinate;

typedef struct TSUColumnRowOffset {
    int field0;
    int field1;
} TSUColumnRowOffset;

typedef struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::allocator<TSU::UUIDData<TSP::UUIDData>>> {
    void field0;
} __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::allocator<TSU::UUIDData<TSP::UUIDData>>>;

typedef struct vector<TSU::UUIDData<TSP::UUIDData>, std::allocator<TSU::UUIDData<TSP::UUIDData>>> {
    void field0;
    void field1;
    __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::allocator<TSU::UUIDData<TSP::UUIDData>>> field2;
} vector<TSU::UUIDData<TSP::UUIDData>, std::allocator<TSU::UUIDData<TSP::UUIDData>>>;

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

typedef struct TSCETableResolver {
    unk field0;
} TSCETableResolver;

typedef struct shared_ptr<TSCEValue> {
} // Error Processing Struct Fields

typedef struct TSCERecalculationState {
    unsigned char field0;
} TSCERecalculationState;

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

typedef struct TSWPAttributeArray {
    unk field0;
    TSWPAttributeRecord field1;
    id field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
} TSWPAttributeArray;

typedef struct TSWPParagraphAttributeArray {
    unk field0;
    TSWPAttributeRecord field1;
    id field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
} TSWPParagraphAttributeArray;

typedef struct __CTFont {
} // Error Processing Struct Fields

typedef struct TSWPParagraphData {
    unk field0;
    ? field1;
    ? field2;
    ? field3;
    ? field4;
    ? field5;
    ? field6;
} TSWPParagraphData;

typedef struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> {
    NSUInteger field0;
} __compressed_pair<unsigned long *, std::allocator<unsigned long>>;

typedef struct vector<unsigned long, std::allocator<unsigned long>> {
    NSUInteger field0;
    NSUInteger field1;
    __compressed_pair<unsigned long *, std::allocator<unsigned long>> field2;
} vector<unsigned long, std::allocator<unsigned long>>;

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

typedef struct __compressed_pair<TSCECategoryRef *__strong *, std::allocator<TSCECategoryRef *>> {
    id field0;
} __compressed_pair<TSCECategoryRef *__strong *, std::allocator<TSCECategoryRef *>>;

typedef struct vector<TSCECategoryRef *, std::allocator<TSCECategoryRef *>> {
    id field0;
    id field1;
    __compressed_pair<TSCECategoryRef *__strong *, std::allocator<TSCECategoryRef *>> field2;
} vector<TSCECategoryRef *, std::allocator<TSCECategoryRef *>>;

typedef struct vector<TSCECellRef, std::allocator<TSCECellRef>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned short, TSUIndexSet>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> field0;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned short, TSUIndexSet>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>, true>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>, true>>;

typedef struct __tree<std::__value_type<unsigned short, TSUIndexSet>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>, true>, std::allocator<std::__value_type<unsigned short, TSUIndexSet>>> {
    void field0;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned short, TSUIndexSet>, void *>>> field1;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>, true>> field2;
} __tree<std::__value_type<unsigned short, TSUIndexSet>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>, true>, std::allocator<std::__value_type<unsigned short, TSUIndexSet>>>;

typedef struct map<unsigned short, TSUIndexSet, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, TSUIndexSet>>> {
    __tree<std::__value_type<unsigned short, TSUIndexSet>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>, true>, std::allocator<std::__value_type<unsigned short, TSUIndexSet>>> field0;
} map<unsigned short, TSUIndexSet, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, TSUIndexSet>>>;

typedef struct TSCECellCoordSet {
    map<unsigned short, TSUIndexSet, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, TSUIndexSet>>> field0;
} TSCECellCoordSet;

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

typedef struct TSCEDateValue {
    unk field0;
    id field1;
    TSCEFormat field2;
} TSCEDateValue;

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

typedef struct TSCEFormulaTranslationFlags {
    unsigned char _flags;
} TSCEFormulaTranslationFlags;

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

typedef struct TSCEFormulaCreator {
    id field0;
    unk field1;
} TSCEFormulaCreator;

typedef struct TSCEASTNodeArgInfo {
    int field0;
    int field1;
    TSKUIDStruct field2;
    TSUCellCoord field3;
} TSCEASTNodeArgInfo;

typedef struct TSKUIDStructTract {
} // Error Processing Struct Fields

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

typedef struct TSCEErrorValue {
    unk field0;
    id field1;
} TSCEErrorValue;

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

typedef struct TSCEGroupingColumnChange {
} // Error Processing Struct Fields

typedef struct vector<TSCEGroupingColumnChange, std::allocator<TSCEGroupingColumnChange>> {
} // Error Processing Struct Fields

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

typedef struct TSCEStringValue {
    unk field0;
    id field1;
    TSCEFormat field2;
    BOOL field3;
    BOOL field4;
} TSCEStringValue;

typedef struct TSCEBooleanValue {
    unk field0;
    BOOL field1;
    TSCEFormat field2;
} TSCEBooleanValue;

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

