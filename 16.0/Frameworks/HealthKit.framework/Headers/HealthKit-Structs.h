typedef struct ? {
    NSInteger majorVersion;
    NSInteger minorVersion;
    NSInteger patchVersion;
} ?;

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct HKObjectValidationConfiguration {
    NSUInteger field0;
    unsigned int field1;
} HKObjectValidationConfiguration;

typedef struct atomic_flag {
    uint8_t _Value;
    BOOL field1;
} atomic_flag;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _xmlSchema {
} // Error Processing Struct Fields

typedef struct archive {
} // Error Processing Struct Fields

typedef struct archive_entry {
} // Error Processing Struct Fields

typedef struct __SecTask {
} // Error Processing Struct Fields

typedef struct __SecCertificate {
} // Error Processing Struct Fields

typedef struct __compressed_pair<HKIntervalTree<double> *, std::default_delete<HKIntervalTree<double>>> {
    void __value_;
} __compressed_pair<HKIntervalTree<double> *, std::default_delete<HKIntervalTree<double>>>;

typedef struct unique_ptr<HKIntervalTree<double>, std::default_delete<HKIntervalTree<double>>> {
    __compressed_pair<HKIntervalTree<double> *, std::default_delete<HKIntervalTree<double>>> __ptr_;
} unique_ptr<HKIntervalTree<double>, std::default_delete<HKIntervalTree<double>>>;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<binarysample::ElectrocardiogramLead_Name, std::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, std::less<binarysample::ElectrocardiogramLead_Name>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<binarysample::ElectrocardiogramLead_Name, std::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, std::less<binarysample::ElectrocardiogramLead_Name>, true>>;

typedef struct __tree<std::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, std::__map_value_compare<binarysample::ElectrocardiogramLead_Name, std::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, std::less<binarysample::ElectrocardiogramLead_Name>, true>, std::allocator<std::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<binarysample::ElectrocardiogramLead_Name, std::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, std::less<binarysample::ElectrocardiogramLead_Name>, true>> __pair3_;
} __tree<std::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, std::__map_value_compare<binarysample::ElectrocardiogramLead_Name, std::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, std::less<binarysample::ElectrocardiogramLead_Name>, true>, std::allocator<std::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>>>;

typedef struct map<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead, std::less<binarysample::ElectrocardiogramLead_Name>, std::allocator<std::pair<const binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>>> {
    __tree<std::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, std::__map_value_compare<binarysample::ElectrocardiogramLead_Name, std::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, std::less<binarysample::ElectrocardiogramLead_Name>, true>, std::allocator<std::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>>> __tree_;
} map<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead, std::less<binarysample::ElectrocardiogramLead_Name>, std::allocator<std::pair<const binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>>>;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct __SecKey {
} // Error Processing Struct Fields

typedef struct _CCCryptor {
} // Error Processing Struct Fields

typedef struct CC_SHA256state_st {
    unsigned int count;
    unsigned int hash;
    unsigned int wbuf;
} CC_SHA256state_st;

typedef struct __CFSet {
} // Error Processing Struct Fields

typedef struct _xsltStylesheet {
} // Error Processing Struct Fields

typedef struct _HKLazyLoader<bool> {
    BOOL _value;
    BOOL _hasLoaded;
    os_unfair_lock_s _loadLock;
} _HKLazyLoader<bool>;

typedef struct _HKLazyLoader<_HKFeatureFlags *> {
    id _value;
    BOOL _HKFeatureFlags;
    os_unfair_lock_s _hasLoaded;
} _HKLazyLoader<_HKFeatureFlags *>;

typedef struct __CTServerConnection {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::unique_ptr<binarysample::ElectrocardiogramLead> *, std::allocator<std::unique_ptr<binarysample::ElectrocardiogramLead>>> {
    void __value_;
} __compressed_pair<std::unique_ptr<binarysample::ElectrocardiogramLead> *, std::allocator<std::unique_ptr<binarysample::ElectrocardiogramLead>>>;

typedef struct vector<std::unique_ptr<binarysample::ElectrocardiogramLead>, std::allocator<std::unique_ptr<binarysample::ElectrocardiogramLead>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::unique_ptr<binarysample::ElectrocardiogramLead> *, std::allocator<std::unique_ptr<binarysample::ElectrocardiogramLead>>> __end_cap_;
} vector<std::unique_ptr<binarysample::ElectrocardiogramLead>, std::allocator<std::unique_ptr<binarysample::ElectrocardiogramLead>>>;

typedef struct PtrVector<binarysample::ElectrocardiogramLead> {
    vector<std::unique_ptr<binarysample::ElectrocardiogramLead>, std::allocator<std::unique_ptr<binarysample::ElectrocardiogramLead>>> _v;
} PtrVector<binarysample::ElectrocardiogramLead>;

typedef struct Electrocardiogram {
    unk _vptr$Base;
    CGFloat _frequency;
    PtrVector<binarysample::ElectrocardiogramLead> _leads;
    ? _has;
} Electrocardiogram;

typedef struct __wrap_iter<const float *> {
    float __i;
} __wrap_iter<const float *>;

