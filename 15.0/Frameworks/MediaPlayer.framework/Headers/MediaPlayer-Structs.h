typedef struct ITColor {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} ITColor;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL initialized;
    BOOL itemType;
    BOOL detailedItemType;
    BOOL artist;
    BOOL album;
    BOOL curator;
    BOOL episode;
    BOOL movie;
    BOOL playlist;
    BOOL radioStation;
    BOOL socialPerson;
    BOOL song;
    BOOL season;
    BOOL show;
    BOOL showCreator;
    BOOL aucType;
    BOOL recordLabel;
} ?;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

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

typedef struct DeviceLibraryView {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<mlcore::DeviceLibraryView> {
    DeviceLibraryView __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<mlcore::DeviceLibraryView>;

typedef struct QueryResult {
} // Error Processing Struct Fields

typedef struct shared_ptr<mlcore::QueryResult> {
} // Error Processing Struct Fields

typedef struct Query {
} // Error Processing Struct Fields

typedef struct shared_ptr<mlcore::Query> {
} // Error Processing Struct Fields

typedef struct LocalizedSearchQuery {
} // Error Processing Struct Fields

typedef struct shared_ptr<mlcore::LocalizedSearchQuery> {
} // Error Processing Struct Fields

typedef struct Predicate {
} // Error Processing Struct Fields

typedef struct shared_ptr<mlcore::Predicate> {
} // Error Processing Struct Fields

typedef struct LibraryView {
} // Error Processing Struct Fields

typedef struct shared_ptr<mlcore::LibraryView> {
} // Error Processing Struct Fields

typedef struct MPLibraryAddStatusObserverConfiguration {
    BOOL isValidContentType;
    BOOL isLibraryAdded;
    BOOL hasCleanContent;
    BOOL hasExplicitContent;
    BOOL isLibraryAddEligible;
} MPLibraryAddStatusObserverConfiguration;

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct __GSEvent {
} // Error Processing Struct Fields

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
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
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

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct CAFrameRateRange {
    float field0;
    float field1;
    float field2;
} CAFrameRateRange;

typedef struct OpaqueCMTimebase {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __CFRunLoopTimer {
} // Error Processing Struct Fields

typedef struct _MRSystemAppPlaybackQueue {
} // Error Processing Struct Fields

typedef struct LocalizedSearchScope {
} // Error Processing Struct Fields

typedef struct shared_ptr<mlcore::LocalizedSearchScope> {
} // Error Processing Struct Fields

typedef struct EntityQuery {
} // Error Processing Struct Fields

typedef struct shared_ptr<mlcore::EntityQuery> {
} // Error Processing Struct Fields

typedef struct shared_ptr<std::vector<std::shared_ptr<mlcore::Entity>>> {
} // Error Processing Struct Fields

typedef struct EntityQueryResult {
} // Error Processing Struct Fields

typedef struct shared_ptr<mlcore::EntityQueryResult> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<long long *, std::allocator<long long>> {
    NSInteger __value_;
} __compressed_pair<long long *, std::allocator<long long>>;

typedef struct vector<long long, std::allocator<long long>> {
    NSInteger __begin_;
    NSInteger __end_;
    __compressed_pair<long long *, std::allocator<long long>> __end_cap_;
} vector<long long, std::allocator<long long>>;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long long, unsigned long>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long long, unsigned long>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<long long, std::__value_type<long long, unsigned long>, std::less<long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<long long, std::__value_type<long long, unsigned long>, std::less<long long>, true>>;

typedef struct __tree<std::__value_type<long long, unsigned long>, std::__map_value_compare<long long, std::__value_type<long long, unsigned long>, std::less<long long>, true>, std::allocator<std::__value_type<long long, unsigned long>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long long, unsigned long>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<long long, std::__value_type<long long, unsigned long>, std::less<long long>, true>> __pair3_;
} __tree<std::__value_type<long long, unsigned long>, std::__map_value_compare<long long, std::__value_type<long long, unsigned long>, std::less<long long>, true>, std::allocator<std::__value_type<long long, unsigned long>>>;

typedef struct map<long long, unsigned long, std::less<long long>, std::allocator<std::pair<const long long, unsigned long>>> {
    __tree<std::__value_type<long long, unsigned long>, std::__map_value_compare<long long, std::__value_type<long long, unsigned long>, std::less<long long>, true>, std::allocator<std::__value_type<long long, unsigned long>>> __tree_;
} map<long long, unsigned long, std::less<long long>, std::allocator<std::pair<const long long, unsigned long>>>;

typedef struct DeviceLibrary {
} // Error Processing Struct Fields

typedef struct shared_ptr<mlcore::DeviceLibrary> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<MPModelStoreBrowseDetailedContentItemType, std::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::less<MPModelStoreBrowseDetailedContentItemType>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<MPModelStoreBrowseDetailedContentItemType, std::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::less<MPModelStoreBrowseDetailedContentItemType>, true>>;

typedef struct __tree<std::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::__map_value_compare<MPModelStoreBrowseDetailedContentItemType, std::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::less<MPModelStoreBrowseDetailedContentItemType>, true>, std::allocator<std::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<MPModelStoreBrowseDetailedContentItemType, std::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::less<MPModelStoreBrowseDetailedContentItemType>, true>> __pair3_;
} __tree<std::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::__map_value_compare<MPModelStoreBrowseDetailedContentItemType, std::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::less<MPModelStoreBrowseDetailedContentItemType>, true>, std::allocator<std::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>>>;

typedef struct map<MPModelStoreBrowseDetailedContentItemType, unsigned long, std::less<MPModelStoreBrowseDetailedContentItemType>, std::allocator<std::pair<const MPModelStoreBrowseDetailedContentItemType, unsigned long>>> {
    __tree<std::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::__map_value_compare<MPModelStoreBrowseDetailedContentItemType, std::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::less<MPModelStoreBrowseDetailedContentItemType>, true>, std::allocator<std::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>>> __tree_;
} map<MPModelStoreBrowseDetailedContentItemType, unsigned long, std::less<MPModelStoreBrowseDetailedContentItemType>, std::allocator<std::pair<const MPModelStoreBrowseDetailedContentItemType, unsigned long>>>;

typedef struct MPAddKeepLocalControlStatus {
    NSInteger statusType;
    CGFloat downloadProgress;
} MPAddKeepLocalControlStatus;

typedef struct MPLibraryActiveKeepLocalStatus {
    NSInteger statusType;
    CGFloat downloadProgress;
} MPLibraryActiveKeepLocalStatus;

typedef struct __compressed_pair<long *, std::allocator<long>> {
    NSInteger __value_;
} __compressed_pair<long *, std::allocator<long>>;

typedef struct vector<long, std::allocator<long>> {
    NSInteger __begin_;
    NSInteger __end_;
    __compressed_pair<long *, std::allocator<long>> __end_cap_;
} vector<long, std::allocator<long>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long, MPIdentifierSet *>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long, MPIdentifierSet *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, MPIdentifierSet *>, std::less<long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, MPIdentifierSet *>, std::less<long>, true>>;

typedef struct __tree<std::__value_type<long, MPIdentifierSet *>, std::__map_value_compare<long, std::__value_type<long, MPIdentifierSet *>, std::less<long>, true>, std::allocator<std::__value_type<long, MPIdentifierSet *>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long, MPIdentifierSet *>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, MPIdentifierSet *>, std::less<long>, true>> __pair3_;
} __tree<std::__value_type<long, MPIdentifierSet *>, std::__map_value_compare<long, std::__value_type<long, MPIdentifierSet *>, std::less<long>, true>, std::allocator<std::__value_type<long, MPIdentifierSet *>>>;

typedef struct map<long, MPIdentifierSet *, std::less<long>, std::allocator<std::pair<const long, MPIdentifierSet *>>> {
    __tree<std::__value_type<long, MPIdentifierSet *>, std::__map_value_compare<long, std::__value_type<long, MPIdentifierSet *>, std::less<long>, true>, std::allocator<std::__value_type<long, MPIdentifierSet *>>> __tree_;
} map<long, MPIdentifierSet *, std::less<long>, std::allocator<std::pair<const long, MPIdentifierSet *>>>;

typedef struct __CFRuntimeBase {
    NSUInteger field0;
    uint8_t field1;
    NSUInteger field2;
} __CFRuntimeBase;

typedef struct __CFCachedURLResponse {
} // Error Processing Struct Fields

typedef struct _CFCachedURLResponse {
    __CFRuntimeBase field0;
    __CFCachedURLResponse field1;
} _CFCachedURLResponse;

typedef struct _CFURLRequest {
} // Error Processing Struct Fields

typedef struct shared_ptr<std::map<long long, std::shared_ptr<mlcore::EntityQueryResult>>> {
} // Error Processing Struct Fields

typedef struct EntityCache {
} // Error Processing Struct Fields

typedef struct shared_ptr<mlcore::EntityCache> {
} // Error Processing Struct Fields

typedef struct ModelPropertyBase {
} // Error Processing Struct Fields

typedef struct vector<mlcore::ModelPropertyBase *, std::allocator<mlcore::ModelPropertyBase *>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::shared_ptr<mlcore::EntityCache> *, std::allocator<std::shared_ptr<mlcore::EntityCache>>> {
    void __value_;
} __compressed_pair<std::shared_ptr<mlcore::EntityCache> *, std::allocator<std::shared_ptr<mlcore::EntityCache>>>;

typedef struct vector<std::shared_ptr<mlcore::EntityCache>, std::allocator<std::shared_ptr<mlcore::EntityCache>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::shared_ptr<mlcore::EntityCache> *, std::allocator<std::shared_ptr<mlcore::EntityCache>>> __end_cap_;
} vector<std::shared_ptr<mlcore::EntityCache>, std::allocator<std::shared_ptr<mlcore::EntityCache>>>;

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

typedef struct _UITableViewVisibleCellsUpdateRanges {
    _NSRange field0;
    _NSRange field1;
    _NSRange field2;
    _NSRange field3;
    _NSRange field4;
    BOOL field5;
} _UITableViewVisibleCellsUpdateRanges;

typedef struct Arc4State {
    unsigned int field0;
    unsigned int field1;
    char * field2;
} Arc4State;

typedef struct _MSVSignedRange {
    NSInteger location;
    NSInteger length;
} _MSVSignedRange;

typedef struct CGVector {
    CGFloat dx;
    CGFloat dy;
} CGVector;

typedef struct os_unfair_recursive_lock_s {
    os_unfair_lock_s ourl_lock;
    unsigned int ourl_count;
} os_unfair_recursive_lock_s;

typedef struct __CFUserNotification {
} // Error Processing Struct Fields

typedef struct __CFRunLoopSource {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_rwlock_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_rwlock_t;

typedef struct shared_ptr<std::map<std::string, mlcore::ModelPropertyBase *>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, mlcore::ModelPropertyBase *>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> field0;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, mlcore::ModelPropertyBase *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, mlcore::ModelPropertyBase *>, std::less<std::string>, true>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, mlcore::ModelPropertyBase *>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, mlcore::ModelPropertyBase *>, std::__map_value_compare<std::string, std::__value_type<std::string, mlcore::ModelPropertyBase *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, mlcore::ModelPropertyBase *>>> {
    void field0;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, mlcore::ModelPropertyBase *>, void *>>> field1;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, mlcore::ModelPropertyBase *>, std::less<std::string>, true>> field2;
} __tree<std::__value_type<std::string, mlcore::ModelPropertyBase *>, std::__map_value_compare<std::string, std::__value_type<std::string, mlcore::ModelPropertyBase *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, mlcore::ModelPropertyBase *>>>;

typedef struct map<std::string, mlcore::ModelPropertyBase *, std::less<std::string>, std::allocator<std::pair<const std::string, mlcore::ModelPropertyBase *>>> {
    __tree<std::__value_type<std::string, mlcore::ModelPropertyBase *>, std::__map_value_compare<std::string, std::__value_type<std::string, mlcore::ModelPropertyBase *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, mlcore::ModelPropertyBase *>>> field0;
} map<std::string, mlcore::ModelPropertyBase *, std::less<std::string>, std::allocator<std::pair<const std::string, mlcore::ModelPropertyBase *>>>;

typedef struct PropertiesQuery {
} // Error Processing Struct Fields

typedef struct shared_ptr<mlcore::PropertiesQuery> {
} // Error Processing Struct Fields

typedef struct SortDescriptor {
} // Error Processing Struct Fields

typedef struct vector<mlcore::SortDescriptor, std::allocator<mlcore::SortDescriptor>> {
} // Error Processing Struct Fields

typedef struct Entity {
} // Error Processing Struct Fields

typedef struct shared_ptr<mlcore::Entity> {
} // Error Processing Struct Fields

