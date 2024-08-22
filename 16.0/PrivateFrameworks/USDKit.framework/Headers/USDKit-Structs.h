typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct SdfTimeCode {
    CGFloat _time;
} SdfTimeCode;

typedef struct ArAsset {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<pxrInternal_v0_21__aapl__pxrReserved__::ArAsset> {
    ArAsset __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<pxrInternal_v0_21__aapl__pxrReserved__::ArAsset>;

typedef struct shared_ptr<const char> {
} // Error Processing Struct Fields

typedef struct SdfLayerOffset {
    CGFloat _offset;
    CGFloat _scale;
} SdfLayerOffset;

typedef struct type {
    unsigned char __lx;
} type;

typedef struct _TypeInfo {
} // Error Processing Struct Fields

typedef struct TfPointerAndBits<const pxrInternal_v0_21__aapl__pxrReserved__::VtValue::_TypeInfo> {
    _TypeInfo _ptrAndBits;
} TfPointerAndBits<const pxrInternal_v0_21__aapl__pxrReserved__::VtValue::_TypeInfo>;

typedef struct VtValue {
    type _storage;
    TfPointerAndBits<const pxrInternal_v0_21__aapl__pxrReserved__::VtValue::_TypeInfo> _info;
} VtValue;

typedef struct ? {
    unsigned char __size_;
} ?;

typedef struct _Rep {
} // Error Processing Struct Fields

typedef struct TfPointerAndBits<const pxrInternal_v0_21__aapl__pxrReserved__::TfToken::_Rep> {
    _Rep _ptrAndBits;
} TfPointerAndBits<const pxrInternal_v0_21__aapl__pxrReserved__::TfToken::_Rep>;

typedef struct TfToken {
    TfPointerAndBits<const pxrInternal_v0_21__aapl__pxrReserved__::TfToken::_Rep> _rep;
} TfToken;

typedef struct Handle {
    unsigned int value;
} Handle;

typedef struct Sdf_PathNodeHandleImpl<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathNode> {
    Handle _poolHandle;
} Sdf_PathNodeHandleImpl<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathNode>;

typedef struct Sdf_PathNodeHandleImpl<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathNode> {
    Handle _poolHandle;
} Sdf_PathNodeHandleImpl<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathNode>;

typedef struct SdfPath {
    Sdf_PathNodeHandleImpl<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathNode> _primPart;
    Sdf_PathNodeHandleImpl<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathNode> _propPart;
} SdfPath;

typedef struct TfRefBase {
} // Error Processing Struct Fields

typedef struct TfRefPtr<pxrInternal_v0_21__aapl__pxrReserved__::UsdStage> {
    TfRefBase _refBase;
} TfRefPtr<pxrInternal_v0_21__aapl__pxrReserved__::UsdStage>;

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

typedef struct SdfAssetPath {
    basic_string<char, std::char_traits<char>, std::allocator<char>> _assetPath;
    basic_string<char, std::char_traits<char>, std::allocator<char>> _resolvedPath;
} SdfAssetPath;

typedef struct Usd_PrimData {
} // Error Processing Struct Fields

typedef struct intrusive_ptr<const pxrInternal_v0_21__aapl__pxrReserved__::Usd_PrimData> {
    Usd_PrimData px;
} intrusive_ptr<const pxrInternal_v0_21__aapl__pxrReserved__::Usd_PrimData>;

typedef struct Usd_PrimDataHandle {
    intrusive_ptr<const pxrInternal_v0_21__aapl__pxrReserved__::Usd_PrimData> _p;
} Usd_PrimDataHandle;

typedef struct UsdProperty {
    int _type;
    Usd_PrimDataHandle _prim;
    SdfPath _proxyPrimPath;
    TfToken _propName;
} UsdProperty;

typedef struct UsdPrim {
    int _type;
    Usd_PrimDataHandle _prim;
    SdfPath _proxyPrimPath;
    TfToken _propName;
} UsdPrim;

typedef struct bitset<14UL> {
    NSUInteger field0;
} bitset<14UL>;

typedef struct Usd_PrimFlagsPredicate {
    bitset<14UL> field0;
    bitset<14UL> field1;
    BOOL field2;
} Usd_PrimFlagsPredicate;

typedef struct UsdPrimSiblingIterator {
} // Error Processing Struct Fields

typedef struct iterator_range<pxrInternal_v0_21__aapl__pxrReserved__::UsdPrimSiblingIterator> {
} // Error Processing Struct Fields

typedef struct UsdPrimRange {
} // Error Processing Struct Fields

typedef struct iterator {
} // Error Processing Struct Fields

typedef struct vector<pxrInternal_v0_21__aapl__pxrReserved__::UsdProperty, std::allocator<pxrInternal_v0_21__aapl__pxrReserved__::UsdProperty>> {
} // Error Processing Struct Fields

typedef struct __wrap_iter<pxrInternal_v0_21__aapl__pxrReserved__::UsdProperty *> {
} // Error Processing Struct Fields

