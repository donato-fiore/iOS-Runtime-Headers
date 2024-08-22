typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ControlPoint {
    float field0;
} ControlPoint;

typedef struct PatchInfo {
} // Error Processing Struct Fields

typedef struct ? {
} // Error Processing Struct Fields

typedef struct InstanceInfo {
    ? field0;
} InstanceInfo;

typedef struct AxisAngle {
    float field0;
} AxisAngle;

typedef struct vector<ControlPoint, std::allocator<ControlPoint>> {
} // Error Processing Struct Fields

typedef struct vector<PatchInfo, std::allocator<PatchInfo>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> {
    unsigned short __value_;
} __compressed_pair<unsigned short *, std::allocator<unsigned short>>;

typedef struct vector<unsigned short, std::allocator<unsigned short>> {
    unsigned short __begin_;
    unsigned short __end_;
    __compressed_pair<unsigned short *, std::allocator<unsigned short>> __end_cap_;
} vector<unsigned short, std::allocator<unsigned short>>;

typedef struct vector<InstanceInfo, std::allocator<InstanceInfo>> {
} // Error Processing Struct Fields

typedef struct vector<simd_float4x4, std::allocator<simd_float4x4>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> {
} // Error Processing Struct Fields

typedef struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> {
    __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> __begin_;
} vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>;

