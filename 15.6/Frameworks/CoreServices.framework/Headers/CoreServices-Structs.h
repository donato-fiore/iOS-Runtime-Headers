typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __CFBundle {
} // Error Processing Struct Fields

typedef struct ? {
    unsigned int val;
} ?;

typedef struct LSContext {
    id db;
} LSContext;

typedef struct Point {
    short field0;
    short field1;
} Point;

typedef struct FileInfo {
    unsigned int field0;
    unsigned int field1;
    unsigned short field2;
    Point field3;
    unsigned short field4;
} FileInfo;

typedef struct Rect {
    short field0;
    short field1;
    short field2;
    short field3;
} Rect;

typedef struct FolderInfo {
    Rect field0;
    unsigned short field1;
    Point field2;
    unsigned short field3;
} FolderInfo;

typedef struct LSPersistentIdentifierData {
    unsigned char field0;
    unsigned char field1;
    unsigned int field2;
    unsigned int field3;
    unsigned char field4;
    char field5;
} LSPersistentIdentifierData;

typedef struct LSBundleBaseFlags {
    BOOL appleInternal;
    BOOL requiresObjCGarbageCollection;
    BOOL builtWithTSan;
    BOOL _reserved;
} LSBundleBaseFlags;

typedef struct LSVersionNumber {
    unsigned char _opaque;
} LSVersionNumber;

typedef struct LSBundleBaseData {
    unsigned int bookmark;
    unsigned int container;
    unsigned int execPath;
    unsigned int exactIdentifier;
    unsigned int teamID;
    unsigned int platform;
    int registrationTime;
    LSVersionNumber version;
    LSVersionNumber execSDKVersion;
    unsigned int machOUUIDs;
    unsigned int dataContainerAlias;
    unsigned int bundleName;
    unsigned int localizedShortDisplayName;
    unsigned int displayName;
    unsigned int localizedDisplayName;
    unsigned int localizedMicrophoneUsageDescription;
    unsigned int codeInfoIdentifier;
    unsigned int signerOrganization;
    unsigned int signerIdentity;
    unsigned int infoDictionary;
    unsigned int entitlements;
    unsigned int groupContainers;
    unsigned char containingDirectoryClass;
    unsigned char profileValidationState;
    unsigned int intentDefinitionURLs;
    unsigned short _sliceMask;
    unsigned int signatureVersion;
    LSBundleBaseFlags flags;
} LSBundleBaseData;

typedef struct LSBundleMoreFlags {
    BOOL isWebBrowser;
    BOOL isMailClient;
    BOOL supportsControllerUserInteraction;
    BOOL supportsSpotlightQueryContinuation;
    BOOL supportsSpotlightActions;
    BOOL isCodeSigningInfoNotAuthoritative;
    BOOL applicationQueriesSchemesTooBig;
    BOOL isUpdateAvailable;
    BOOL isPlaygroundsApp;
    BOOL _reserved;
} LSBundleMoreFlags;

typedef struct LSAppClipFields {
    unsigned int parentAppIDs;
} LSAppClipFields;

typedef struct LSBundleData {
    LSBundleBaseData base;
    unsigned int _clas;
    NSUInteger _bundleFlags;
    unsigned int _plistContentFlags;
    unsigned int _itemFlags;
    unsigned char _iconFlags;
    LSBundleMoreFlags moreFlags;
    unsigned int _hfsType;
    int _mtime;
    unsigned int minSystemVersionPlatform;
    LSVersionNumber _minSystemVersion;
    LSVersionNumber _maxSystemVersion;
    unsigned int appStoreToolsBuildVersion;
    NSUInteger sequenceNumber;
    NSUInteger compatibilityState;
    NSUInteger itemID;
    unsigned int deviceFamilies;
    unsigned int identifier;
    unsigned int counterpartIdentifiers;
    unsigned int filename;
    unsigned int bundleVersion;
    unsigned int shortVersionString;
    unsigned int installType;
    NSUInteger installFailureReason;
    unsigned int vendorName;
    unsigned int appType;
    NSUInteger staticDiskUsage;
    NSUInteger purchaserDSID;
    NSUInteger downloaderDSID;
    NSUInteger familyID;
    unsigned int itemName;
    NSUInteger storefront;
    NSUInteger versionIdentifier;
    unsigned int sourceAppBundleID;
    unsigned int appVariant;
    NSUInteger ratingRank;
    unsigned int ratingLabel;
    NSUInteger genreID;
    unsigned int genre;
    unsigned int primaryIconName;
    unsigned int alternatePrimaryIconName;
    unsigned int iconsDict;
    unsigned int iconFileNames;
    unsigned int libraryPath;
    unsigned int libraryItems;
    unsigned int claims;
    unsigned int types;
    unsigned int plugins;
    unsigned int extensionPoints;
    unsigned int activityTypes;
    unsigned int queriableSchemes;
    unsigned int bgPermittedIDs;
    unsigned int carPlayInstrumentClusterURLSchemes;
    unsigned int appContainerAlias;
    unsigned char revision;
    unsigned char retries;
    unsigned char _reserved4;
    unsigned int sandboxEnvironmentVariables;
    unsigned int localizedNameWithContext;
    unsigned int managedPersonas;
    LSAppClipFields appClipFields;
    int recordModificationTime;
    unsigned int supportedGameControllers;
    unsigned int mobileInstallIDs;
    unsigned int applicationManagementDomain;
    unsigned int stashedAppDict;
    unsigned int linkedParentBundleIdentifier;
    unsigned int _reserved5;
} LSBundleData;

typedef struct LSPluginData {
    LSBundleBaseData field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    LSVersionNumber field6;
    unsigned int field7;
    unsigned int field8;
} LSPluginData;

typedef struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> {
    uint8_t __a_value;
    BOOL field1;
} __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>;

typedef struct atomic<bool> {
    __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> __a_;
} atomic<bool>;

typedef struct Context {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> {
    unsigned int __value_;
} __compressed_pair<unsigned int *, std::allocator<unsigned int>>;

typedef struct vector<unsigned int, std::allocator<unsigned int>> {
    unsigned int __begin_;
    unsigned int __end_;
    __compressed_pair<unsigned int *, std::allocator<unsigned int>> __end_cap_;
} vector<unsigned int, std::allocator<unsigned int>>;

typedef struct optional<audit_token_t> {
    unk ;
    char __null_state_;
    ? __val_;
    BOOL __engaged_;
} optional<audit_token_t>;

typedef struct LSBinding {
} // Error Processing Struct Fields

typedef struct optional<LSBinding> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<LSBundleClass *, std::allocator<LSBundleClass>> {
    unsigned int field0;
} __compressed_pair<LSBundleClass *, std::allocator<LSBundleClass>>;

typedef struct vector<LSBundleClass, std::allocator<LSBundleClass>> {
    unsigned int field0;
    unsigned int field1;
    __compressed_pair<LSBundleClass *, std::allocator<LSBundleClass>> field2;
} vector<LSBundleClass, std::allocator<LSBundleClass>>;

typedef struct BindingEvaluator {
    id field0;
    id field1;
    id field2;
    id field3;
    id field4;
    id field5;
    LSVersionNumber field6;
    id field7;
    BOOL field8;
    BOOL field9;
    NSUInteger field10;
    unsigned int field11;
    unsigned int field12;
    vector<LSBundleClass, std::allocator<LSBundleClass>> field13;
    id field14;
    unk field15;
    id field16;
    id field17;
    unk field18;
    id field19;
} BindingEvaluator;

typedef struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> {
    uint8_t __a_value;
    int field1;
} __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>>;

typedef struct atomic<int> {
    __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> __a_;
} atomic<int>;

typedef struct NotifyToken {
    atomic<int> rawValue;
} NotifyToken;

typedef struct __CSStore {
} // Error Processing Struct Fields

typedef struct CSMapCallbacks {
    unk retainKey;
    unk releaseKey;
    unk getKeyHash;
    unk keyMatchesData;
    unk retainValue;
    unk releaseValue;
} CSMapCallbacks;

typedef struct CSMapContext {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _CSMapHeader {
} // Error Processing Struct Fields

typedef struct CSMap {
    unsigned int table;
    CSMapCallbacks cb;
    CSMapContext context;
    os_unfair_lock_s _lock;
    unsigned int _generation;
    _CSMapHeader _header;
    unsigned int _keys;
    unsigned int _values;
} CSMap;

typedef struct _LSSchemaCache {
} // Error Processing Struct Fields

typedef struct LSSchema {
    unsigned int headerTable;
    unsigned int bundleTable;
    unsigned int claimTable;
    unsigned int serviceTable;
    unsigned int utypeTable;
    ? bindableKeyMap;
    ? bindingMaps;
    unsigned int handlerPrefTable;
    unsigned int containerTable;
    unsigned int aliasTable;
    unsigned int pluginTable;
    unsigned int extensionPointTable;
    unsigned int bindingListTable;
    unsigned int propertyListTable;
    unsigned int localizedStringTable;
    unsigned int canonicalStringTable;
    _LSSchemaCache _cache;
} LSSchema;

typedef struct unfair_lock_mutex {
    unsigned int _os_unfair_lock_opaque;
} unfair_lock_mutex;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct optional<LaunchServices::BindingEvaluator> {
    unk field0;
    char field1;
    BindingEvaluator field2;
    BOOL field3;
} optional<LaunchServices::BindingEvaluator>;

typedef struct LSExtensionPointData {
    int field0;
    unsigned int field1;
    LSVersionNumber field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
} LSExtensionPointData;

typedef struct Flags {
    BOOL field0;
    BOOL field1;
} Flags;

typedef struct LocalizedString {
    unsigned int field0;
    unsigned int field1;
    Flags field2;
} LocalizedString;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct State {
    id field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
} State;

typedef struct LSSliceData {
    int field0;
    int field1;
} LSSliceData;

