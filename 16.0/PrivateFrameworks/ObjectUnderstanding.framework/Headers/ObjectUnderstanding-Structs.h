typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    int field0;
    float field1;
    id field2;
    void field3;
    void field4;
    void field5;
    void field6;
} ?;

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> {
} // Error Processing Struct Fields

typedef struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> {
    __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> __begin_;
} vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>;

typedef struct __compressed_pair<unsigned char * __attribute__((ext_vector_type(4))), std::allocator<unsigned char __attribute__((ext_vector_type(4)))>> {
} // Error Processing Struct Fields

typedef struct vector<unsigned char __attribute__((ext_vector_type(4))), std::allocator<unsigned char __attribute__((ext_vector_type(4)))>> {
    __compressed_pair<unsigned char * __attribute__((ext_vector_type(4))), std::allocator<unsigned char __attribute__((ext_vector_type(4)))>> __begin_;
} vector<unsigned char __attribute__((ext_vector_type(4))), std::allocator<unsigned char __attribute__((ext_vector_type(4)))>>;

typedef struct __compressed_pair<unsigned short * __attribute__((ext_vector_type(4))), std::allocator<unsigned short __attribute__((ext_vector_type(4)))>> {
} // Error Processing Struct Fields

typedef struct vector<unsigned short __attribute__((ext_vector_type(4))), std::allocator<unsigned short __attribute__((ext_vector_type(4)))>> {
    __compressed_pair<unsigned short * __attribute__((ext_vector_type(4))), std::allocator<unsigned short __attribute__((ext_vector_type(4)))>> __begin_;
} vector<unsigned short __attribute__((ext_vector_type(4))), std::allocator<unsigned short __attribute__((ext_vector_type(4)))>>;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct box3d {
} // Error Processing Struct Fields

typedef struct float4x4 {
} // Error Processing Struct Fields

typedef struct __compressed_pair<float *, std::allocator<float>> {
    float field0;
} __compressed_pair<float *, std::allocator<float>>;

typedef struct vector<float, std::allocator<float>> {
    float field0;
    float field1;
    __compressed_pair<float *, std::allocator<float>> field2;
} vector<float, std::allocator<float>>;

typedef struct __compressed_pair<unsigned long, std::allocator<unsigned long>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::allocator<unsigned long>>;

typedef struct vector<bool, std::allocator<bool>> {
    NSUInteger field0;
    NSUInteger field1;
    __compressed_pair<unsigned long, std::allocator<unsigned long>> field2;
} vector<bool, std::allocator<bool>>;

typedef struct OUBox3d {
    box3d field0;
    id field1;
    float field2;
    id field3;
    id field4;
    vector<float, std::allocator<float>> field5;
    vector<bool, std::allocator<bool>> field6;
    id field7;
    short field8;
} OUBox3d;

typedef struct vector<OUBox3d, std::allocator<OUBox3d>> {
} // Error Processing Struct Fields

typedef struct OpaqueVTPixelRotationSession {
} // Error Processing Struct Fields

typedef struct __CVPixelBufferPool {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> {
    NSUInteger field0;
} __compressed_pair<unsigned long *, std::allocator<unsigned long>>;

typedef struct vector<unsigned long, std::allocator<unsigned long>> {
    NSUInteger field0;
    NSUInteger field1;
    __compressed_pair<unsigned long *, std::allocator<unsigned long>> field2;
} vector<unsigned long, std::allocator<unsigned long>>;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<NSString *, short>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<NSString *, short>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<NSString *, std::__value_type<NSString *, short>, CompareNSString, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<NSString *, std::__value_type<NSString *, short>, CompareNSString, true>>;

typedef struct __tree<std::__value_type<NSString *, short>, std::__map_value_compare<NSString *, std::__value_type<NSString *, short>, CompareNSString, true>, std::allocator<std::__value_type<NSString *, short>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<NSString *, short>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<NSString *, std::__value_type<NSString *, short>, CompareNSString, true>> __pair3_;
} __tree<std::__value_type<NSString *, short>, std::__map_value_compare<NSString *, std::__value_type<NSString *, short>, CompareNSString, true>, std::allocator<std::__value_type<NSString *, short>>>;

typedef struct map<NSString *, short, CompareNSString, std::allocator<std::pair<NSString *const, short>>> {
    __tree<std::__value_type<NSString *, short>, std::__map_value_compare<NSString *, std::__value_type<NSString *, short>, CompareNSString, true>, std::allocator<std::__value_type<NSString *, short>>> __tree_;
} map<NSString *, short, CompareNSString, std::allocator<std::pair<NSString *const, short>>>;

typedef struct OU3DObjectRGBSizeRefiner {
} // Error Processing Struct Fields

typedef struct __compressed_pair<OU3DObjectRGBSizeRefiner *, std::default_delete<OU3DObjectRGBSizeRefiner>> {
    OU3DObjectRGBSizeRefiner __value_;
} __compressed_pair<OU3DObjectRGBSizeRefiner *, std::default_delete<OU3DObjectRGBSizeRefiner>>;

typedef struct unique_ptr<OU3DObjectRGBSizeRefiner, std::default_delete<OU3DObjectRGBSizeRefiner>> {
    __compressed_pair<OU3DObjectRGBSizeRefiner *, std::default_delete<OU3DObjectRGBSizeRefiner>> __ptr_;
} unique_ptr<OU3DObjectRGBSizeRefiner, std::default_delete<OU3DObjectRGBSizeRefiner>>;

typedef struct OU3DODInterface {
} // Error Processing Struct Fields

typedef struct __compressed_pair<OU3DODInterface *, std::default_delete<OU3DODInterface>> {
    OU3DODInterface __value_;
} __compressed_pair<OU3DODInterface *, std::default_delete<OU3DODInterface>>;

typedef struct unique_ptr<OU3DODInterface, std::default_delete<OU3DODInterface>> {
    __compressed_pair<OU3DODInterface *, std::default_delete<OU3DODInterface>> __ptr_;
} unique_ptr<OU3DODInterface, std::default_delete<OU3DODInterface>>;

typedef struct OU3DKitchenObject {
} // Error Processing Struct Fields

typedef struct vector<OU3DKitchenObject, std::allocator<OU3DKitchenObject>> {
} // Error Processing Struct Fields

typedef struct OU3DKitchenObjectMerger {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> {
    void __value_;
} __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>>;

typedef struct vector<std::vector<float>, std::allocator<std::vector<float>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> __end_cap_;
} vector<std::vector<float>, std::allocator<std::vector<float>>>;

typedef struct __compressed_pair<int *, std::allocator<int>> {
    int __value_;
} __compressed_pair<int *, std::allocator<int>>;

typedef struct vector<int, std::allocator<int>> {
    int __begin_;
    int __end_;
    __compressed_pair<int *, std::allocator<int>> __end_cap_;
} vector<int, std::allocator<int>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::hash<std::string>, std::equal_to<std::string>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::equal_to<std::string>, std::hash<std::string>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>>>;

typedef struct unordered_map<std::string, unsigned int __attribute__((ext_vector_type(2))), std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned int __attribute__((ext_vector_type(2)))>>> {
    __hash_table<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>>> __table_;
} unordered_map<std::string, unsigned int __attribute__((ext_vector_type(2))), std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned int __attribute__((ext_vector_type(2)))>>>;

