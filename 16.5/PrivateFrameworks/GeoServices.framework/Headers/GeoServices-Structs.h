typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct ? {
    CGFloat x;
    CGFloat y;
} ?;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct InternalMetadata {
    void field0;
} InternalMetadata;

typedef struct HasBits<1UL> {
    unsigned int field0;
} HasBits<1UL>;

typedef struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> {
    uint8_t field0;
    int field1;
} __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>>;

typedef struct atomic<int> {
    __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> field0;
} atomic<int>;

typedef struct CachedSize {
    atomic<int> field0;
} CachedSize;

typedef struct Arena {
} // Error Processing Struct Fields

typedef struct Rep {
} // Error Processing Struct Fields

typedef struct RepeatedPtrField<maps::path_codec::geo3::RoutingPathPoint> {
    Arena field0;
    int field1;
    int field2;
    Rep field3;
} RepeatedPtrField<maps::path_codec::geo3::RoutingPathPoint>;

typedef struct TaggedPtr<std::string> {
    void field0;
} TaggedPtr<std::string>;

typedef struct ArenaStringPtr {
    TaggedPtr<std::string> field0;
} ArenaStringPtr;

typedef struct RoutingPathLeg {
    unk field0;
    InternalMetadata field1;
    HasBits<1UL> field2;
    CachedSize field3;
    RepeatedPtrField<maps::path_codec::geo3::RoutingPathPoint> field4;
    ArenaStringPtr field5;
} RoutingPathLeg;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct GEOFlyoverRegion {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    ? field3;
} GEOFlyoverRegion;

typedef struct _GEOStandardTileKey {
    BOOL reserved;
    BOOL z;
    BOOL x;
    BOOL y;
    BOOL type;
    BOOL pixelSize;
    BOOL textScale;
} _GEOStandardTileKey;

typedef struct _GEOGloriaQuadIDTileKey {
    BOOL z;
    BOOL quadKey;
    BOOL type;
    BOOL padding;
    unk typeSpecificInfo;
    ? cellularInfo;
    unsigned int unused;
} _GEOGloriaQuadIDTileKey;

typedef struct _GEORegionalResourceKey {
    BOOL index;
    BOOL scenarios;
    BOOL type;
    BOOL pixelSize;
    BOOL textScale;
    BOOL forceRefetch;
    BOOL padding;
} _GEORegionalResourceKey;

typedef struct _GEOSputnikMetadataKey {
    BOOL part;
    BOOL region;
    BOOL type;
    BOOL pixelSize;
    BOOL padding;
} _GEOSputnikMetadataKey;

typedef struct _GEOFlyoverKey {
    BOOL z;
    BOOL x;
    BOOL y;
    BOOL h;
    BOOL region;
    BOOL type;
    BOOL pixelSize;
    BOOL textScale;
} _GEOFlyoverKey;

typedef struct _GEOTransitLineSelectionKey {
    BOOL z;
    BOOL x;
    BOOL y;
    BOOL muid;
} _GEOTransitLineSelectionKey;

typedef struct _GEOPolygonSelectionKey {
    BOOL z;
    BOOL x;
    BOOL y;
    BOOL polyId;
} _GEOPolygonSelectionKey;

typedef struct _GEOTileOverlayKey {
    BOOL z;
    BOOL x;
    BOOL y;
    BOOL contentScale;
    BOOL providerId;
    BOOL keyframeIndex;
    BOOL padding;
} _GEOTileOverlayKey;

typedef struct _GEOIdentifiedResourceKey {
    NSUInteger identifier;
    unsigned char levelOfDetail;
    unsigned char type;
    BOOL supportsASTC;
    BOOL padding;
} _GEOIdentifiedResourceKey;

typedef struct _GEOMuninMeshKey {
    BOOL pointId;
    BOOL buildId;
    BOOL bucketId;
    BOOL cameraId;
    BOOL lod;
} _GEOMuninMeshKey;

typedef struct _GEOVisualLocalizationTrackKey {
    unsigned short formatVersion;
    unsigned char uncertainty;
    BOOL reserved;
    BOOL z;
    BOOL x;
    BOOL y;
    BOOL padding;
} _GEOVisualLocalizationTrackKey;

typedef struct _GEOVisualLocalizationMetadataKey {
    BOOL maxSupportedOutputVersion;
    BOOL maxSupportedFormatVersion;
    BOOL reserved;
    BOOL z;
    BOOL x;
    BOOL y;
    BOOL padding;
} _GEOVisualLocalizationMetadataKey;

typedef struct _GEOVisualLocalizationDataKey {
    NSUInteger buildID;
    unsigned char uncertainty;
    BOOL z;
    BOOL x;
    BOOL y;
    BOOL padding;
} _GEOVisualLocalizationDataKey;

typedef struct _GEOS2TileKey {
    BOOL z;
    BOOL x;
    BOOL y;
    BOOL f;
    BOOL type;
    BOOL pixelSize;
    BOOL textScale;
    BOOL padding;
} _GEOS2TileKey;

typedef struct _GEOTileKey {
    BOOL provider;
    BOOL expires;
    unk ;
    _GEOStandardTileKey standard;
    _GEOGloriaQuadIDTileKey gloriaQuad;
    _GEORegionalResourceKey regional;
    _GEOSputnikMetadataKey sputnikMetadata;
    _GEOFlyoverKey flyover;
    _GEOTransitLineSelectionKey transitLineSelection;
    _GEOPolygonSelectionKey polygonSelection;
    _GEOTileOverlayKey tileOverlay;
    _GEOIdentifiedResourceKey identifiedResource;
    _GEOMuninMeshKey muninMesh;
    _GEOVisualLocalizationTrackKey visualLocalization;
    _GEOVisualLocalizationMetadataKey visualLocalizationMetadata;
    _GEOVisualLocalizationDataKey visualLocalizationData;
    _GEOS2TileKey s2Tile;
} _GEOTileKey;

typedef struct GEOOnce_s {
    os_unfair_lock_s lock;
    BOOL didRun;
} GEOOnce_s;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *>, std::allocator<std::__hash_node<geo::TransitEdgePiece, void *>>> {
    __hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *>, std::allocator<std::__hash_node<geo::TransitEdgePiece, void *>>>;

typedef struct __compressed_pair<unsigned long, std::hash<geo::TransitEdgePiece>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::hash<geo::TransitEdgePiece>>;

typedef struct __compressed_pair<float, std::equal_to<geo::TransitEdgePiece>> {
    float __value_;
} __compressed_pair<float, std::equal_to<geo::TransitEdgePiece>>;

typedef struct __hash_table<geo::TransitEdgePiece, std::hash<geo::TransitEdgePiece>, std::equal_to<geo::TransitEdgePiece>, std::allocator<geo::TransitEdgePiece>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *>, std::allocator<std::__hash_node<geo::TransitEdgePiece, void *>>> __p1_;
    __compressed_pair<unsigned long, std::hash<geo::TransitEdgePiece>> __p2_;
    __compressed_pair<float, std::equal_to<geo::TransitEdgePiece>> __p3_;
} __hash_table<geo::TransitEdgePiece, std::hash<geo::TransitEdgePiece>, std::equal_to<geo::TransitEdgePiece>, std::allocator<geo::TransitEdgePiece>>;

typedef struct unordered_set<geo::TransitEdgePiece, std::hash<geo::TransitEdgePiece>, std::equal_to<geo::TransitEdgePiece>, std::allocator<geo::TransitEdgePiece>> {
    __hash_table<geo::TransitEdgePiece, std::hash<geo::TransitEdgePiece>, std::equal_to<geo::TransitEdgePiece>, std::allocator<geo::TransitEdgePiece>> __table_;
} unordered_set<geo::TransitEdgePiece, std::hash<geo::TransitEdgePiece>, std::equal_to<geo::TransitEdgePiece>, std::allocator<geo::TransitEdgePiece>>;

typedef struct timeval {
    NSInteger tv_sec;
    int tv_usec;
} timeval;

typedef struct GEOCoarseLocationPoint {
    int field0;
    int field1;
} GEOCoarseLocationPoint;

typedef struct GEOCoarseLocationLatLng {
    CGFloat _lat;
    CGFloat _lng;
} GEOCoarseLocationLatLng;

typedef struct __list_node_base<LoadItem, void *> {
    void __prev_;
    void __next_;
} __list_node_base<LoadItem, void *>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__list_node<LoadItem, void *>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__list_node<LoadItem, void *>>>;

typedef struct list<LoadItem, std::allocator<LoadItem>> {
    __list_node_base<LoadItem, void *> __end_;
    __compressed_pair<unsigned long, std::allocator<std::__list_node<LoadItem, void *>>> __size_alloc_;
} list<LoadItem, std::allocator<LoadItem>>;

typedef struct DispatchTimer {
} // Error Processing Struct Fields

typedef struct __compressed_pair<geo::DispatchTimer *, std::default_delete<geo::DispatchTimer>> {
    DispatchTimer __value_;
} __compressed_pair<geo::DispatchTimer *, std::default_delete<geo::DispatchTimer>>;

typedef struct unique_ptr<geo::DispatchTimer, std::default_delete<geo::DispatchTimer>> {
    __compressed_pair<geo::DispatchTimer *, std::default_delete<geo::DispatchTimer>> __ptr_;
} unique_ptr<geo::DispatchTimer, std::default_delete<geo::DispatchTimer>>;

typedef struct __list_node_base<_CacheRequester<void (^)(unsigned long long)>, void *> {
    void __prev_;
    void __next_;
} __list_node_base<_CacheRequester<void (^)(unsigned long long)>, void *>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__list_node<_CacheRequester<void (^)(unsigned long long)>, void *>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__list_node<_CacheRequester<void (^)(unsigned long long)>, void *>>>;

typedef struct list<_CacheRequester<void (^)(unsigned long long)>, std::allocator<_CacheRequester<void (^)(unsigned long long)>>> {
    __list_node_base<_CacheRequester<void (^)(unsigned long long)>, void *> __end_;
    __compressed_pair<unsigned long, std::allocator<std::__list_node<_CacheRequester<void (^)(unsigned long long)>, void *>>> __size_alloc_;
} list<_CacheRequester<void (^)(unsigned long long)>, std::allocator<_CacheRequester<void (^)(unsigned long long)>>>;

typedef struct ErrorInfo {
} // Error Processing Struct Fields

typedef struct __split_buffer<ErrorInfo *, std::allocator<ErrorInfo *>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<ErrorInfo>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<ErrorInfo>>;

typedef struct deque<ErrorInfo, std::allocator<ErrorInfo>> {
    __split_buffer<ErrorInfo *, std::allocator<ErrorInfo *>> __map_;
    NSUInteger __start_;
    __compressed_pair<unsigned long, std::allocator<ErrorInfo>> __size_;
} deque<ErrorInfo, std::allocator<ErrorInfo>>;

typedef struct GEOTileLoaderAdditionalInfo {
    unsigned int field0;
} GEOTileLoaderAdditionalInfo;

typedef struct os_state_hints_s {
    unsigned int field0;
    char * field1;
    unsigned int field2;
    unsigned int field3;
} os_state_hints_s;

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct Matrix<float, 2, 1> {
    float _e;
} Matrix<float, 2, 1>;

typedef struct Box<float, 2> {
    Matrix<float, 2, 1> field0;
    Matrix<float, 2, 1> field1;
} Box<float, 2>;

typedef struct GEOSessionID {
    NSUInteger _high;
    NSUInteger _low;
} GEOSessionID;

typedef struct GEOTimepoint {
    CGFloat _currentUserTime;
    CGFloat _time;
    int _type;
    ? _has;
} GEOTimepoint;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct mutex {
    _opaque_pthread_mutex_t __m_;
} mutex;

typedef struct __list_node_base<CacheItem, void *> {
    void __prev_;
    void __next_;
} __list_node_base<CacheItem, void *>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__list_node<CacheItem, void *>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__list_node<CacheItem, void *>>>;

typedef struct list<CacheItem, std::allocator<CacheItem>> {
    __list_node_base<CacheItem, void *> __end_;
    __compressed_pair<unsigned long, std::allocator<std::__list_node<CacheItem, void *>>> __size_alloc_;
} list<CacheItem, std::allocator<CacheItem>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, hashkey, eqkey, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, hashkey, eqkey, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, eqkey, hashkey, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, eqkey, hashkey, true>>;

typedef struct __hash_table<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, hashkey, eqkey, true>, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, eqkey, hashkey, true>, std::allocator<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, hashkey, eqkey, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, eqkey, hashkey, true>> __p3_;
} __hash_table<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, hashkey, eqkey, true>, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, eqkey, hashkey, true>, std::allocator<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>>>;

typedef struct unordered_map<_GEOTileKey, std::__list_iterator<CacheItem, void *>, hashkey, eqkey, std::allocator<std::pair<const _GEOTileKey, std::__list_iterator<CacheItem, void *>>>> {
    __hash_table<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, hashkey, eqkey, true>, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, eqkey, hashkey, true>, std::allocator<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>>> __table_;
} unordered_map<_GEOTileKey, std::__list_iterator<CacheItem, void *>, hashkey, eqkey, std::allocator<std::pair<const _GEOTileKey, std::__list_iterator<CacheItem, void *>>>>;

typedef struct GEOProblemDetail {
    int field0;
    int field1;
    ? field2;
} GEOProblemDetail;

typedef struct GeoCodecsVectorTilePoint {
    float field0;
    float field1;
} GeoCodecsVectorTilePoint;

typedef struct Sphere<float, 2, std::enable_if<true>> {
    Matrix<float, 2, 1> field0;
    float field1;
} Sphere<float, 2, std::enable_if<true>>;

typedef struct sqlite3 {
} // Error Processing Struct Fields

typedef struct sqlite3_stmt {
} // Error Processing Struct Fields

typedef struct os_unfair_recursive_lock_s {
    os_unfair_lock_s ourl_lock;
    unsigned int ourl_count;
} os_unfair_recursive_lock_s;

typedef struct atomic_flag {
    uint8_t _Value;
    BOOL field1;
} atomic_flag;

typedef struct GEOPolylineCoordinateRange {
    PolylineCoordinate start;
    PolylineCoordinate end;
} GEOPolylineCoordinateRange;

typedef struct GEOPathMatcherRoadKey {
    NSInteger field0;
    NSUInteger field1;
    CGFloat field2;
    CGFloat field3;
} GEOPathMatcherRoadKey;

typedef struct GEONavigationAudioFeedback {
    BOOL _bTHFPAvailableAtEndOfNav;
    BOOL _bTHFPRoutesAvailable;
    BOOL _currentRouteHFPEnabledAtEndOfNav;
    int _currentRouteTypeAtEndOfNav;
    BOOL _everManuallyChangedRoute;
    BOOL _everManuallyEnabledHFPRoute;
    BOOL _everViewedAudioSheet;
    BOOL _everViewedAudioSheetBTAny;
    BOOL _everViewedAudioSheetBTHFP;
    unsigned int _manuallyChangedRouteCount;
    unsigned int _manuallyDisabledHFPCount;
    unsigned int _manuallyEnabledHFPCount;
    BOOL _pauseSpokenAudioEnabled;
    unsigned int _spokenPromptsCount;
    BOOL _viewedAudioSheet;
    BOOL _viewedAudioSheetBTAny;
    BOOL _viewedAudioSheetBTHFP;
    BOOL _wirelessRoutesAvailable;
    ? _has;
} GEONavigationAudioFeedback;

typedef struct MapNodeTransit {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<geo::MapNodeTransit> {
    MapNodeTransit __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<geo::MapNodeTransit>;

typedef struct MapAccessPointFeature {
} // Error Processing Struct Fields

typedef struct shared_ptr<geo::MapAccessPointFeature> {
} // Error Processing Struct Fields

typedef struct PolylineCoordinate {
    unsigned int index;
    float offset;
} PolylineCoordinate;

typedef struct MapEdge {
} // Error Processing Struct Fields

typedef struct shared_ptr<geo::MapEdge> {
} // Error Processing Struct Fields

typedef struct vector<GEOLocationCoordinate2D, std::allocator<GEOLocationCoordinate2D>> {
} // Error Processing Struct Fields

typedef struct MapEdgeTransit {
} // Error Processing Struct Fields

typedef struct shared_ptr<geo::MapEdgeTransit> {
} // Error Processing Struct Fields

typedef struct GeoCodecsLaneGeometry {
    float field0;
    float field1;
    float field2;
    float field3;
    float field4;
    float field5;
} GeoCodecsLaneGeometry;

typedef struct GeoCodecsAddressRange {
    unsigned short field0;
    unsigned short field1;
} GeoCodecsAddressRange;

typedef struct GeoCodecsPointFeature {
} // Error Processing Struct Fields

typedef struct GeoCodecsConnectivityJunction {
    unsigned int field0;
    unsigned int field1;
    GeoCodecsPointFeature field2;
    NSUInteger field3;
    NSUInteger field4;
} GeoCodecsConnectivityJunction;

typedef struct GeoCodecsMultiSectionFeature {
} // Error Processing Struct Fields

typedef struct GeoCodecsRoadEdge {
} // Error Processing Struct Fields

typedef struct GeoCodecsRGBAColor8 {
    unsigned char field0;
    unsigned char field1;
    unsigned char field2;
    unsigned char field3;
} GeoCodecsRGBAColor8;

typedef struct GeoCodecsRange {
    NSUInteger field0;
    NSUInteger field1;
} GeoCodecsRange;

typedef struct __CTServerConnection {
} // Error Processing Struct Fields

typedef struct DB {
} // Error Processing Struct Fields

typedef struct __compressed_pair<gloria::DB *, std::default_delete<gloria::DB>> {
    DB __value_;
} __compressed_pair<gloria::DB *, std::default_delete<gloria::DB>>;

typedef struct unique_ptr<gloria::DB, std::default_delete<gloria::DB>> {
    __compressed_pair<gloria::DB *, std::default_delete<gloria::DB>> __ptr_;
} unique_ptr<gloria::DB, std::default_delete<gloria::DB>>;

typedef struct TileId {
    NSUInteger tile_id_;
    unsigned char zoom_;
} TileId;

typedef struct GEOPDLitePlaceResult {
    NSUInteger field0;
    int field1;
    ? field2;
} GEOPDLitePlaceResult;

typedef struct GEOPDLocalTimeRange {
    unsigned int field0;
    unsigned int field1;
    ? field2;
} GEOPDLocalTimeRange;

typedef struct GEOTileSetRegion {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
} GEOTileSetRegion;

typedef struct GEOCoverageException {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    ? field5;
} GEOCoverageException;

typedef struct GEOVersionedTileSet {
    unsigned int field0;
    unsigned int field1;
} GEOVersionedTileSet;

typedef struct GEORegionalResourceIndex {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    ? field3;
} GEORegionalResourceIndex;

typedef struct __CFBinaryHeap {
} // Error Processing Struct Fields

typedef struct GEOJunctionElement {
    int field0;
    int field1;
    int field2;
    ? field3;
} GEOJunctionElement;

typedef struct GEOVLFPositionContextClassification {
    CGFloat _indoorProbability;
    CGFloat _outdoorProbability;
    int _type;
    ? _has;
} GEOVLFPositionContextClassification;

typedef struct vector<geo::PolylineCoordinate, std::allocator<geo::PolylineCoordinate>> {
} // Error Processing Struct Fields

typedef struct vector<GEOPolylineCoordinateRange, std::allocator<GEOPolylineCoordinateRange>> {
} // Error Processing Struct Fields

typedef struct GEOOrientedPosition {
    ? position;
    float yaw;
    float pitch;
    float roll;
} GEOOrientedPosition;

typedef struct GEOLensModel {
    float fovS;
    float fovH;
    float k2;
    float k3;
    float k4;
    float cx;
    float cy;
    float lx;
    float ly;
} GEOLensModel;

typedef struct GEOActiveResourceFilter {
    CGFloat field0;
    int field1;
    int field2;
    ? field3;
} GEOActiveResourceFilter;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned int, unsigned long>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, unsigned long>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned int, unsigned long>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, unsigned long>>>;

typedef struct unordered_map<unsigned int, unsigned long, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>> {
    __hash_table<std::__hash_value_type<unsigned int, unsigned long>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, unsigned long>>> __table_;
} unordered_map<unsigned int, unsigned long, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>>;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct pair<GEOLocationCoordinate3D, geo::PolylineCoordinate> {
    ? field0;
    PolylineCoordinate field1;
} pair<GEOLocationCoordinate3D, geo::PolylineCoordinate>;

typedef struct __compressed_pair<std::pair<GEOLocationCoordinate3D, geo::PolylineCoordinate> *, std::allocator<std::pair<GEOLocationCoordinate3D, geo::PolylineCoordinate>>> {
    void __value_;
} __compressed_pair<std::pair<GEOLocationCoordinate3D, geo::PolylineCoordinate> *, std::allocator<std::pair<GEOLocationCoordinate3D, geo::PolylineCoordinate>>>;

typedef struct vector<std::pair<GEOLocationCoordinate3D, geo::PolylineCoordinate>, std::allocator<std::pair<GEOLocationCoordinate3D, geo::PolylineCoordinate>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::pair<GEOLocationCoordinate3D, geo::PolylineCoordinate> *, std::allocator<std::pair<GEOLocationCoordinate3D, geo::PolylineCoordinate>>> __end_cap_;
} vector<std::pair<GEOLocationCoordinate3D, geo::PolylineCoordinate>, std::allocator<std::pair<GEOLocationCoordinate3D, geo::PolylineCoordinate>>>;

typedef struct CAARiseTransitSetDetails {
    BOOL bRiseValid;
    CGFloat Rise;
    BOOL bTransitValid;
    BOOL bTransitAboveHorizon;
    CGFloat Transit;
    BOOL bSetValid;
    CGFloat Set;
} CAARiseTransitSetDetails;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<_GEOTileKey, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<_GEOTileKey, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *>, std::allocator<std::__hash_node<_GEOTileKey, void *>>> {
    __hash_node_base<std::__hash_node<_GEOTileKey, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *>, std::allocator<std::__hash_node<_GEOTileKey, void *>>>;

typedef struct __compressed_pair<unsigned long, std::hash<GEOTileKey>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::hash<GEOTileKey>>;

typedef struct __compressed_pair<float, std::equal_to<GEOTileKey>> {
    float __value_;
} __compressed_pair<float, std::equal_to<GEOTileKey>>;

typedef struct __hash_table<_GEOTileKey, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, std::allocator<_GEOTileKey>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *>, std::allocator<std::__hash_node<_GEOTileKey, void *>>> __p1_;
    __compressed_pair<unsigned long, std::hash<GEOTileKey>> __p2_;
    __compressed_pair<float, std::equal_to<GEOTileKey>> __p3_;
} __hash_table<_GEOTileKey, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, std::allocator<_GEOTileKey>>;

typedef struct unordered_set<_GEOTileKey, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, std::allocator<_GEOTileKey>> {
    __hash_table<_GEOTileKey, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, std::allocator<_GEOTileKey>> __table_;
} unordered_set<_GEOTileKey, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, std::allocator<_GEOTileKey>>;

typedef struct TransitEdgePiece {
    id field0;
    NSUInteger field1;
    id field2;
    unsigned int field3;
    BOOL field4;
} TransitEdgePiece;

typedef struct __split_buffer<geo::TransitEdgePiece *, std::allocator<geo::TransitEdgePiece *>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<geo::TransitEdgePiece>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<geo::TransitEdgePiece>>;

typedef struct deque<geo::TransitEdgePiece, std::allocator<geo::TransitEdgePiece>> {
    __split_buffer<geo::TransitEdgePiece *, std::allocator<geo::TransitEdgePiece *>> __map_;
    NSUInteger __start_;
    __compressed_pair<unsigned long, std::allocator<geo::TransitEdgePiece>> __size_;
} deque<geo::TransitEdgePiece, std::allocator<geo::TransitEdgePiece>>;

typedef struct GEOWiFiQualityTimeRange {
    unsigned int field0;
    unsigned int field1;
    ? field2;
} GEOWiFiQualityTimeRange;

typedef struct GeoCodecsDaVinciBuildingSection {
    BOOL _needsClosedBottom;
    unsigned char _extrusionType;
    float _topHeight;
    float _terrainElevation;
    unsigned int _loopsOffset;
    unsigned short _innerLoopsCount;
} GeoCodecsDaVinciBuildingSection;

typedef struct MapEdgeRoad {
} // Error Processing Struct Fields

typedef struct shared_ptr<geo::MapEdgeRoad> {
} // Error Processing Struct Fields

typedef struct vector<GeoCodecsVectorTilePoint, std::allocator<GeoCodecsVectorTilePoint>> {
} // Error Processing Struct Fields

typedef struct GEOPDPhotoSizeFilterValue {
    unsigned int field0;
    unsigned int field1;
    ? field2;
} GEOPDPhotoSizeFilterValue;

typedef struct GEOPDTimeRange {
    unsigned int _duration;
    unsigned int _startTime;
    ? _has;
} GEOPDTimeRange;

typedef struct GEOThrottleKey {
    unsigned int field0;
} GEOThrottleKey;

typedef struct Timestamp {
} // Error Processing Struct Fields

typedef struct vector<(anonymous namespace)::Timestamp, std::allocator<(anonymous namespace)::Timestamp>> {
} // Error Processing Struct Fields

typedef struct Message {
} // Error Processing Struct Fields

typedef struct shared_ptr<zilch::Message> {
} // Error Processing Struct Fields

typedef struct _NSProgressFraction {
    NSInteger field0;
    NSInteger field1;
    BOOL field2;
} _NSProgressFraction;

typedef struct _NSProgressFractionTuple {
    _NSProgressFraction field0;
    _NSProgressFraction field1;
} _NSProgressFractionTuple;

typedef struct GeoCodecsFeatureStylePair {
    unsigned int field0;
    int field1;
} GeoCodecsFeatureStylePair;

typedef struct GeoCodecsFeatureStylePairExt {
    unsigned int field0;
    NSUInteger field1;
} GeoCodecsFeatureStylePairExt;

typedef struct FeatureStyleAttributes {
} // Error Processing Struct Fields

typedef struct shared_ptr<const FeatureStyleAttributes> {
} // Error Processing Struct Fields

typedef struct shared_ptr<FeatureStyleAttributes> {
} // Error Processing Struct Fields

typedef struct GEOPBTransitTimeRange {
    unsigned int _duration;
    unsigned int _startTime;
    ? _has;
} GEOPBTransitTimeRange;

typedef struct vector<GEOLocationCoordinate3D, std::allocator<GEOLocationCoordinate3D>> {
} // Error Processing Struct Fields

typedef struct ControlPoint {
    int field0;
    GeoCoordinates field1;
    Angle field2;
    FormOfWay field3;
    FunctionalClass field4;
    int field5;
} ControlPoint;

typedef struct vector<zilch::ControlPoint, std::allocator<zilch::ControlPoint>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<double *, std::allocator<double>> {
    CGFloat __value_;
} __compressed_pair<double *, std::allocator<double>>;

typedef struct vector<double, std::allocator<double>> {
    CGFloat __begin_;
    CGFloat __end_;
    __compressed_pair<double *, std::allocator<double>> __end_cap_;
} vector<double, std::allocator<double>>;

typedef struct Longitude {
    unsigned int field0;
} Longitude;

typedef struct Latitude {
    unsigned int field0;
} Latitude;

typedef struct GeoCoordinates {
    Longitude field0;
    Latitude field1;
    int field2;
} GeoCoordinates;

typedef struct Angle {
    unsigned short field0;
} Angle;

typedef struct FormOfWay {
    int field0;
} FormOfWay;

typedef struct FunctionalClass {
    int field0;
} FunctionalClass;

typedef struct GeoCodecsVenueLevel {
    NSUInteger field0;
    int field1;
    BOOL field2;
    BOOL field3;
    NSUInteger field4;
    char * field5;
    char * field6;
    BOOL field7;
    float field8;
    NSUInteger field9;
    NSUInteger field10;
} GeoCodecsVenueLevel;

typedef struct GeoCodecsVenueComponent {
    NSUInteger field0;
    unsigned char field1;
    NSUInteger field2;
    NSUInteger field3;
    BOOL field4;
    NSUInteger field5;
    NSUInteger field6;
} GeoCodecsVenueComponent;

typedef struct GeoCodecsLabelTextPlacement {
    unsigned char field0;
    unsigned char field1;
    unsigned char field2;
    BOOL field3;
    unsigned char field4;
    BOOL field5;
    GeoCodecsVectorTilePoint field6;
} GeoCodecsLabelTextPlacement;

typedef struct GeoCodecsConnectivityOverpass {
    unsigned short field0;
} GeoCodecsConnectivityOverpass;

typedef struct GeoCodecsLineCrossing {
    unsigned short field0;
    unsigned short field1;
    float field2;
    char field3;
    unsigned char field4;
} GeoCodecsLineCrossing;

typedef struct GeoCodecsConnectivityPointOnRoad {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
} GeoCodecsConnectivityPointOnRoad;

typedef struct GeoCodecsVectorTileLaneInfo {
    unsigned char field0;
    unsigned short field1;
} GeoCodecsVectorTileLaneInfo;

typedef struct GeoCodecsCharacteristic {
    unsigned int field0;
    int field1;
    float field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
    GeoCodecsVectorTileLaneInfo field8;
} GeoCodecsCharacteristic;

typedef struct GeoCodecsCharacteristicPoint {
    GeoCodecsConnectivityPointOnRoad field0;
    GeoCodecsCharacteristic field1;
} GeoCodecsCharacteristicPoint;

typedef struct GeoCodecsStrokeSpecification {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
} GeoCodecsStrokeSpecification;

typedef struct GeoCodecsTileCurveVertex {
} // Error Processing Struct Fields

typedef struct GeoCodecsCurveVertexPool {
} // Error Processing Struct Fields

typedef struct GeoCodecsVertexPool {
} // Error Processing Struct Fields

typedef struct GeoCodecsTileKey {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
} GeoCodecsTileKey;

typedef struct GeoCodecsTransitLinkSection {
    float field0;
    float field1;
} GeoCodecsTransitLinkSection;

typedef struct GeoCodecsSslpmTileInfo {
    unsigned char field0;
    BOOL field1;
    CGFloat field2;
    CGFloat field3;
} GeoCodecsSslpmTileInfo;

typedef struct GeoCodecsLabelLineRange {
    CGFloat field0;
    CGFloat field1;
} GeoCodecsLabelLineRange;

typedef struct GeoCodecsTileLabelLine {
    CGFloat field0;
    GeoCodecsLabelLineRange field1;
    NSUInteger field2;
    unsigned int field3;
    unsigned int field4;
    unsigned short field5;
    unsigned short field6;
} GeoCodecsTileLabelLine;

typedef struct GeoCodecsLabelLineFeatureSection {
    unsigned int field0;
    GeoCodecsLabelLineRange field1;
    unsigned short field2;
    unsigned short field3;
    unsigned short field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
} GeoCodecsLabelLineFeatureSection;

typedef struct GeoCodecsLabelLineAttribute {
    unsigned char field0;
    unsigned char field1;
    GeoCodecsLabelLineRange field2;
} GeoCodecsLabelLineAttribute;

typedef struct GeoCodecsLabelSummaryIcon {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
} GeoCodecsLabelSummaryIcon;

typedef struct GeoCodecsVectorTilePoint3D {
    float field0;
    float field1;
    float field2;
} GeoCodecsVectorTilePoint3D;

typedef struct GeoCodecsDaVinciExplicitTextureMappingData {
} // Error Processing Struct Fields

typedef struct GeoCodecsDaVinciDirectionalXYTextureMappingData {
    unsigned int field0;
    unsigned short field1;
    float field2;
    float field3;
    float field4;
    float field5;
} GeoCodecsDaVinciDirectionalXYTextureMappingData;

typedef struct GeoCodecsDaVinciMesh {
    unsigned char field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    BOOL field6;
    float field7;
    float field8;
    NSUInteger field9;
    unsigned int field10;
} GeoCodecsDaVinciMesh;

typedef struct GeoCodecsDaVinciMaterial {
} // Error Processing Struct Fields

typedef struct GeoCodecsDaVinciMaterialSheet {
} // Error Processing Struct Fields

typedef struct GeoCodecsDaVinciPrimitive {
} // Error Processing Struct Fields

typedef struct GeoCodecsDaVinciSceneMesh {
} // Error Processing Struct Fields

typedef struct GeoCodecsDaVinciSceneNode {
} // Error Processing Struct Fields

typedef struct GeoCodecsDaVinciMaterialMap {
} // Error Processing Struct Fields

typedef struct GeoCodecsDaVinciScene {
    GeoCodecsDaVinciPrimitive field0;
    GeoCodecsDaVinciSceneMesh field1;
    GeoCodecsDaVinciSceneNode field2;
    GeoCodecsDaVinciMaterialMap field3;
    unsigned short field4;
    unsigned short field5;
    unsigned short field6;
    unsigned short field7;
    unsigned short field8;
    unsigned char field9;
} GeoCodecsDaVinciScene;

typedef struct GeoCodecsMatrix4x3 {
} // Error Processing Struct Fields

typedef struct GeoCodecsDaVinciRenderable {
    GeoCodecsMatrix4x3 field0;
    char * field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    unsigned short field5;
    unsigned short field6;
    unsigned char field7;
    BOOL field8;
} GeoCodecsDaVinciRenderable;

typedef struct GeoCodecsPackedElevationRange {
} // Error Processing Struct Fields

typedef struct GeoCodecsDaVinciMetaData {
    float field0;
    float field1;
    unsigned short field2;
    GeoCodecsPackedElevationRange field3;
    unsigned char field4;
} GeoCodecsDaVinciMetaData;

typedef struct GeoCodecsDaVinciLineLoop {
    unsigned int field0;
    unsigned short field1;
} GeoCodecsDaVinciLineLoop;

typedef struct GeoCodecsDaVinciStyleAttributeRaster {
    char * field0;
    unsigned int field1;
    unsigned int field2;
    unsigned char field3;
    unsigned short field4;
    unsigned short field5;
} GeoCodecsDaVinciStyleAttributeRaster;

typedef struct VectorTile {
} // Error Processing Struct Fields

typedef struct shared_ptr<geo::codec::VectorTile> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<GEORoadEdge *, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *>, std::allocator<std::__hash_node<GEORoadEdge *, void *>>> {
    __hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *>, std::allocator<std::__hash_node<GEORoadEdge *, void *>>>;

typedef struct __compressed_pair<unsigned long, std::hash<GEORoadEdge *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::hash<GEORoadEdge *>>;

typedef struct __compressed_pair<float, std::equal_to<GEORoadEdge *>> {
    float __value_;
} __compressed_pair<float, std::equal_to<GEORoadEdge *>>;

typedef struct __hash_table<GEORoadEdge *, std::hash<GEORoadEdge *>, std::equal_to<GEORoadEdge *>, std::allocator<GEORoadEdge *>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *>, std::allocator<std::__hash_node<GEORoadEdge *, void *>>> __p1_;
    __compressed_pair<unsigned long, std::hash<GEORoadEdge *>> __p2_;
    __compressed_pair<float, std::equal_to<GEORoadEdge *>> __p3_;
} __hash_table<GEORoadEdge *, std::hash<GEORoadEdge *>, std::equal_to<GEORoadEdge *>, std::allocator<GEORoadEdge *>>;

typedef struct unordered_set<GEORoadEdge *, std::hash<GEORoadEdge *>, std::equal_to<GEORoadEdge *>, std::allocator<GEORoadEdge *>> {
    __hash_table<GEORoadEdge *, std::hash<GEORoadEdge *>, std::equal_to<GEORoadEdge *>, std::allocator<GEORoadEdge *>> __table_;
} unordered_set<GEORoadEdge *, std::hash<GEORoadEdge *>, std::equal_to<GEORoadEdge *>, std::allocator<GEORoadEdge *>>;

typedef struct GEORPFeatureHandleStyleAttribute {
    int field0;
    int field1;
} GEORPFeatureHandleStyleAttribute;

typedef struct GEORPVisibleTileKey {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    ? field3;
} GEORPVisibleTileKey;

typedef struct GEOHighlight {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    ? field3;
} GEOHighlight;

typedef struct __compressed_pair<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>> *, std::allocator<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>>>> {
    void field0;
} __compressed_pair<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>> *, std::allocator<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>>>>;

typedef struct vector<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>>, std::allocator<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>>>> {
    void field0;
    void field1;
    __compressed_pair<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>> *, std::allocator<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>>>> field2;
} vector<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>>, std::allocator<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>>>>;

typedef struct GeometryPathElement {
} // Error Processing Struct Fields

typedef struct vector<zilch::GeometryPathElement, std::allocator<zilch::GeometryPathElement>> {
} // Error Processing Struct Fields

typedef struct Entry {
} // Error Processing Struct Fields

typedef struct vector<zilch::Path<std::shared_ptr<geo::MapEdge>>::Entry, std::allocator<zilch::Path<std::shared_ptr<geo::MapEdge>>::Entry>> {
} // Error Processing Struct Fields

typedef struct Path<std::shared_ptr<geo::MapEdge>> {
    GeoCoordinates field0;
    GeoCoordinates field1;
    vector<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>>, std::allocator<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>>>> field2;
    vector<zilch::GeometryPathElement, std::allocator<zilch::GeometryPathElement>> field3;
    vector<zilch::Path<std::shared_ptr<geo::MapEdge>>::Entry, std::allocator<zilch::Path<std::shared_ptr<geo::MapEdge>>::Entry>> field4;
} Path<std::shared_ptr<geo::MapEdge>>;

typedef struct ZilchMapModel {
} // Error Processing Struct Fields

typedef struct __compressed_pair<geo::ZilchMapModel *, std::default_delete<geo::ZilchMapModel>> {
    ZilchMapModel __value_;
} __compressed_pair<geo::ZilchMapModel *, std::default_delete<geo::ZilchMapModel>>;

typedef struct unique_ptr<geo::ZilchMapModel, std::default_delete<geo::ZilchMapModel>> {
    __compressed_pair<geo::ZilchMapModel *, std::default_delete<geo::ZilchMapModel>> __ptr_;
} unique_ptr<geo::ZilchMapModel, std::default_delete<geo::ZilchMapModel>>;

typedef struct Matrix<float, 4, 1> {
    float _e;
} Matrix<float, 4, 1>;

typedef struct Color<float, 4, geo::ColorSpace::Linear> {
    Matrix<float, 4, 1> _backing;
} Color<float, 4, geo::ColorSpace::Linear>;

typedef struct vector<GEOPathMatcherRoadKey, std::allocator<GEOPathMatcherRoadKey>> {
} // Error Processing Struct Fields

typedef struct RoadNetworkPath<GEOPathMatcherRoadKey> {
    CGFloat field0;
    CGFloat field1;
    vector<GEOPathMatcherRoadKey, std::allocator<GEOPathMatcherRoadKey>> field2;
} RoadNetworkPath<GEOPathMatcherRoadKey>;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, _GEOAltitudeTriggerData>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, _GEOAltitudeTriggerData>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, _GEOAltitudeTriggerData>, std::less<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, _GEOAltitudeTriggerData>, std::less<unsigned int>, true>>;

typedef struct __tree<std::__value_type<unsigned int, _GEOAltitudeTriggerData>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, _GEOAltitudeTriggerData>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, _GEOAltitudeTriggerData>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, _GEOAltitudeTriggerData>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, _GEOAltitudeTriggerData>, std::less<unsigned int>, true>> __pair3_;
} __tree<std::__value_type<unsigned int, _GEOAltitudeTriggerData>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, _GEOAltitudeTriggerData>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, _GEOAltitudeTriggerData>>>;

typedef struct map<unsigned int, _GEOAltitudeTriggerData, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, _GEOAltitudeTriggerData>>> {
    __tree<std::__value_type<unsigned int, _GEOAltitudeTriggerData>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, _GEOAltitudeTriggerData>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, _GEOAltitudeTriggerData>>> __tree_;
} map<unsigned int, _GEOAltitudeTriggerData, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, _GEOAltitudeTriggerData>>>;

typedef struct RequesterTileKeys {
} // Error Processing Struct Fields

typedef struct __wrap_iter<(anonymous namespace)::RequesterTileKeys *> {
    RequesterTileKeys field0;
} __wrap_iter<(anonymous namespace)::RequesterTileKeys *>;

typedef struct GEOScreenResolution {
    CGFloat _height;
    CGFloat _width;
    ? _has;
} GEOScreenResolution;

typedef struct __list_node_base<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *> {
    void __prev_;
    void __next_;
} __list_node_base<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__list_node<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__list_node<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>>;

typedef struct list<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, std::allocator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>>> {
    __list_node_base<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *> __end_;
    __compressed_pair<unsigned long, std::allocator<std::__list_node<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>> __size_alloc_;
} list<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, std::allocator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::equal_to<GEOTileKey>, std::hash<GEOTileKey>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::equal_to<GEOTileKey>, std::hash<GEOTileKey>, true>>;

typedef struct __hash_table<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, true>, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::equal_to<GEOTileKey>, std::hash<GEOTileKey>, true>, std::allocator<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::equal_to<GEOTileKey>, std::hash<GEOTileKey>, true>> __p3_;
} __hash_table<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, true>, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::equal_to<GEOTileKey>, std::hash<GEOTileKey>, true>, std::allocator<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>>>;

typedef struct unordered_map<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, std::allocator<std::pair<const _GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>>> {
    __hash_table<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, true>, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::equal_to<GEOTileKey>, std::hash<GEOTileKey>, true>, std::allocator<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>>> __table_;
} unordered_map<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, std::allocator<std::pair<const _GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>>>;

typedef struct _GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0UL, 0UL, geo::GEOGenericContainerLockingTag, geo::detail::_default_pointer_type> {
    mutex _lock;
    list<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, std::allocator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>>> _list;
    unordered_map<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, std::allocator<std::pair<const _GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>>> _map;
    NSUInteger _maxCapacity;
    NSUInteger _maxCost;
    NSUInteger _currentCost;
    NSUInteger _currentCount;
} _GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0UL, 0UL, geo::GEOGenericContainerLockingTag, geo::detail::_default_pointer_type>;

typedef struct __list_node_base<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *> {
    void __prev_;
    void __next_;
} __list_node_base<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__list_node<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__list_node<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>>;

typedef struct list<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, std::allocator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>>> {
    __list_node_base<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *> __end_;
    __compressed_pair<unsigned long, std::allocator<std::__list_node<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>> __size_alloc_;
} list<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, std::allocator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::equal_to<GEOTileKey>, std::hash<GEOTileKey>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::equal_to<GEOTileKey>, std::hash<GEOTileKey>, true>>;

typedef struct __hash_table<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, true>, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::equal_to<GEOTileKey>, std::hash<GEOTileKey>, true>, std::allocator<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::equal_to<GEOTileKey>, std::hash<GEOTileKey>, true>> __p3_;
} __hash_table<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, true>, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::equal_to<GEOTileKey>, std::hash<GEOTileKey>, true>, std::allocator<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>>>;

typedef struct unordered_map<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, std::allocator<std::pair<const _GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>>> {
    __hash_table<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, true>, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::equal_to<GEOTileKey>, std::hash<GEOTileKey>, true>, std::allocator<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>>> __table_;
} unordered_map<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, std::allocator<std::pair<const _GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>>>;

typedef struct _GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0UL, 0UL, geo::GEOGenericContainerLockingTag, geo::detail::_default_pointer_type> {
    mutex _lock;
    list<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, std::allocator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>>> _list;
    unordered_map<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, std::allocator<std::pair<const _GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>>> _map;
    NSUInteger _maxCapacity;
    NSUInteger _maxCost;
    NSUInteger _currentCost;
    NSUInteger _currentCount;
} _GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0UL, 0UL, geo::GEOGenericContainerLockingTag, geo::detail::_default_pointer_type>;

typedef struct GEOPixelPoint {
    CGFloat _x;
    CGFloat _y;
    int _z;
    ? _has;
} GEOPixelPoint;

typedef struct GEOPDCameraPathFrame {
    float field0;
    float field1;
    float field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
    CGFloat field6;
    CGFloat field7;
    CGFloat field8;
    CGFloat field9;
    CGFloat field10;
    ? field11;
} GEOPDCameraPathFrame;

typedef struct GEOPDLabelFrame {
    float field0;
    unsigned int field1;
    float field2;
    ? field3;
} GEOPDLabelFrame;

typedef struct _GEORiseTransitSetEvent {
    CGFloat JD;
    unsigned int type;
} _GEORiseTransitSetEvent;

typedef struct _GEOProbeCrumbsLocation {
} // Error Processing Struct Fields

typedef struct __split_buffer<_GEOProbeCrumbsLocation *, std::allocator<_GEOProbeCrumbsLocation *>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<_GEOProbeCrumbsLocation>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<_GEOProbeCrumbsLocation>>;

typedef struct deque<_GEOProbeCrumbsLocation, std::allocator<_GEOProbeCrumbsLocation>> {
    __split_buffer<_GEOProbeCrumbsLocation *, std::allocator<_GEOProbeCrumbsLocation *>> __map_;
    NSUInteger __start_;
    __compressed_pair<unsigned long, std::allocator<_GEOProbeCrumbsLocation>> __size_;
} deque<_GEOProbeCrumbsLocation, std::allocator<_GEOProbeCrumbsLocation>>;

typedef struct __compressed_pair<GEORoadEdge *__strong **, std::allocator<GEORoadEdge *__strong *>> {
    id __value_;
} __compressed_pair<GEORoadEdge *__strong **, std::allocator<GEORoadEdge *__strong *>>;

typedef struct __split_buffer<GEORoadEdge *__strong *, std::allocator<GEORoadEdge *__strong *>> {
    id __first_;
    id __begin_;
    id __end_;
    __compressed_pair<GEORoadEdge *__strong **, std::allocator<GEORoadEdge *__strong *>> __end_cap_;
} __split_buffer<GEORoadEdge *__strong *, std::allocator<GEORoadEdge *__strong *>>;

typedef struct __compressed_pair<unsigned long, std::allocator<GEORoadEdge *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<GEORoadEdge *>>;

typedef struct deque<GEORoadEdge *, std::allocator<GEORoadEdge *>> {
    __split_buffer<GEORoadEdge *__strong *, std::allocator<GEORoadEdge *__strong *>> __map_;
    NSUInteger __start_;
    __compressed_pair<unsigned long, std::allocator<GEORoadEdge *>> __size_;
} deque<GEORoadEdge *, std::allocator<GEORoadEdge *>>;

typedef struct RouteMapMatchingSection {
    unk field0;
} RouteMapMatchingSection;

typedef struct __CFSet {
} // Error Processing Struct Fields

typedef struct __compressed_pair<geo::RouteMapMatchingSection *, std::default_delete<geo::RouteMapMatchingSection>> {
} // Error Processing Struct Fields

typedef struct unique_ptr<geo::RouteMapMatchingSection, std::default_delete<geo::RouteMapMatchingSection>> {
    __compressed_pair<geo::RouteMapMatchingSection *, std::default_delete<geo::RouteMapMatchingSection>> __ptr_;
} unique_ptr<geo::RouteMapMatchingSection, std::default_delete<geo::RouteMapMatchingSection>>;

typedef struct AddressObject {
} // Error Processing Struct Fields

typedef struct shared_ptr<addr_obj::AddressObject> {
} // Error Processing Struct Fields

typedef struct GEOGenericTile {
    unsigned int field0;
    unsigned int field1;
    int field2;
    ? field3;
} GEOGenericTile;

typedef struct IONotificationPort {
} // Error Processing Struct Fields

typedef struct sqlite3_module {
    int field0;
    unk field1;
    unk field2;
    unk field3;
    unk field4;
    unk field5;
    unk field6;
    unk field7;
    unk field8;
    unk field9;
    unk field10;
    unk field11;
    unk field12;
    unk field13;
    unk field14;
    unk field15;
    unk field16;
    unk field17;
    unk field18;
    unk field19;
    unk field20;
    unk field21;
    unk field22;
    unk field23;
} sqlite3_module;

typedef struct sqlite3_context {
} // Error Processing Struct Fields

typedef struct GEOECEFCoordinate {
    CGFloat _x;
    CGFloat _y;
    CGFloat _z;
    ? _has;
} GEOECEFCoordinate;

