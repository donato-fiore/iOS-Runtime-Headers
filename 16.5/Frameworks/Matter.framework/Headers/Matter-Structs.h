typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct OperationalDataset {
    unsigned char mData;
    unsigned char mLength;
} OperationalDataset;

typedef struct MTRPersistentStorageDelegateBridge {
    unk field0;
    id field1;
    id field2;
} MTRPersistentStorageDelegateBridge;

typedef struct GroupListener {
} // Error Processing Struct Fields

typedef struct GroupDataProvider {
    unk field0;
    unsigned short field1;
    unsigned short field2;
    GroupListener field3;
} GroupDataProvider;

typedef struct DeviceAttestationVerifier {
    unk field0;
    BOOL field1;
} DeviceAttestationVerifier;

typedef struct DeviceControllerSystemState {
} // Error Processing Struct Fields

typedef struct PersistentStorageDelegate {
} // Error Processing Struct Fields

typedef struct OperationalKeystore {
    unk field0;
} OperationalKeystore;

typedef struct OperationalCertificateStore {
} // Error Processing Struct Fields

typedef struct DeviceControllerFactory {
    unsigned short field0;
    DeviceControllerSystemState field1;
    PersistentStorageDelegate field2;
    OperationalKeystore field3;
    OperationalCertificateStore field4;
    BOOL field5;
} DeviceControllerFactory;

typedef struct MTRAttestationTrustStoreBridge {
    unk field0;
    id field1;
} MTRAttestationTrustStoreBridge;

typedef struct MTROTAProviderDelegateBridge {
    unk field0;
    id field1;
    id field2;
} MTROTAProviderDelegateBridge;

typedef struct RawKeySessionKeystore {
    unk field0;
} RawKeySessionKeystore;

typedef struct PersistentStorageOperationalKeystore {
} // Error Processing Struct Fields

typedef struct _DNSServiceRef_t {
} // Error Processing Struct Fields

typedef struct MTROperationalBrowser {
    id field0;
    id field1;
    _DNSServiceRef_t field2;
    BOOL field3;
    BOOL field4;
} MTROperationalBrowser;

typedef struct FabricInfo {
} // Error Processing Struct Fields

typedef struct PeerId {
    NSUInteger field0;
    NSUInteger field1;
} PeerId;

typedef struct AttributePathParams {
    unsigned int field0;
    unsigned int field1;
    unsigned short field2;
    unsigned short field3;
} AttributePathParams;

typedef struct EventPathParams {
    unsigned int field0;
    unsigned int field1;
    unsigned short field2;
    BOOL field3;
} EventPathParams;

typedef struct ConcreteClusterPath {
    unsigned short field0;
    BOOL field1;
    unsigned int field2;
} ConcreteClusterPath;

typedef struct ConcreteEventPath {
    unsigned short field0;
    BOOL field1;
    unsigned int field2;
    unsigned int field3;
} ConcreteEventPath;

typedef struct ConcreteCommandPath {
    unsigned short field0;
    BOOL field1;
    unsigned int field2;
    unsigned int field3;
} ConcreteCommandPath;

typedef struct Timestamp {
    unsigned char field0;
    NSUInteger field1;
} Timestamp;

typedef struct MTRDeviceControllerDelegateBridge {
    unk field0;
    id field1;
    id field2;
    id field3;
} MTRDeviceControllerDelegateBridge;

typedef struct P256PublicKey {
    unk _vptr$ECPKey;
    unsigned char bytes;
} P256PublicKey;

typedef struct P256KeypairContext {
    unsigned char mBytes;
} P256KeypairContext;

typedef struct MTRP256KeypairBridge {
    unk _vptr$ECPKeypair;
    P256PublicKey mPublicKey;
    P256KeypairContext mKeypair;
    BOOL mInitialized;
    id mKeypair;
    P256PublicKey <MTRKeypair>;
} MTRP256KeypairBridge;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct ChipError {
    unsigned int mError;
    char * mFile;
    unsigned int mLine;
} ChipError;

typedef struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> {
    uint8_t __a_value;
    unsigned char field1;
} __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>>;

typedef struct atomic<unsigned char> {
    __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> __a_;
} atomic<unsigned char>;

typedef struct Span<const unsigned char> {
    char * mDataBuf;
    NSUInteger mDataLen;
} Span<const unsigned char>;

typedef struct Span<const char> {
    char * mDataBuf;
    NSUInteger mDataLen;
} Span<const char>;

typedef struct Optional<unsigned char> {
    BOOL mHasValue;
    long mValue;
    unsigned char mData;
} Optional<unsigned char>;

typedef struct __SecKey {
} // Error Processing Struct Fields

typedef struct ChipRDN {
    Span<const char> mString;
    NSUInteger mChipVal;
    unsigned short mAttrOID;
    BOOL mAttrIsPrintableString;
} ChipRDN;

typedef struct ChipDN {
    ChipRDN rdn;
} ChipDN;

typedef struct FixedSpan<const unsigned char, 20UL> {
    char * mDataBuf;
} FixedSpan<const unsigned char, 20UL>;

typedef struct FixedSpan<const unsigned char, 65UL> {
    char * mDataBuf;
} FixedSpan<const unsigned char, 65UL>;

typedef struct BitFlags<chip::Credentials::CertFlags, unsigned short> {
    unsigned short mValue;
} BitFlags<chip::Credentials::CertFlags, unsigned short>;

typedef struct BitFlags<chip::Credentials::KeyUsageFlags, unsigned short> {
    unsigned short mValue;
} BitFlags<chip::Credentials::KeyUsageFlags, unsigned short>;

typedef struct BitFlags<chip::Credentials::KeyPurposeFlags, unsigned char> {
    unsigned char mValue;
} BitFlags<chip::Credentials::KeyPurposeFlags, unsigned char>;

typedef struct FixedSpan<const unsigned char, 64UL> {
    char * mDataBuf;
} FixedSpan<const unsigned char, 64UL>;

typedef struct ChipCertificateData {
    Span<const unsigned char> mCertificate;
    ChipDN mSubjectDN;
    ChipDN mIssuerDN;
    FixedSpan<const unsigned char, 20UL> mSubjectKeyId;
    FixedSpan<const unsigned char, 20UL> mAuthKeyId;
    unsigned int mNotBeforeTime;
    unsigned int mNotAfterTime;
    FixedSpan<const unsigned char, 65UL> mPublicKey;
    unsigned short mPubKeyCurveOID;
    unsigned short mPubKeyAlgoOID;
    unsigned short mSigAlgoOID;
    BitFlags<chip::Credentials::CertFlags, unsigned short> mCertFlags;
    BitFlags<chip::Credentials::KeyUsageFlags, unsigned short> mKeyUsageFlags;
    BitFlags<chip::Credentials::KeyPurposeFlags, unsigned char> mKeyPurposeFlags;
    unsigned char mPathLenConstraint;
    FixedSpan<const unsigned char, 64UL> mSignature;
    unsigned char mTBSHash;
} ChipCertificateData;

typedef struct BitFlags<chip::RendezvousInformationFlag, unsigned char> {
    unsigned char mValue;
} BitFlags<chip::RendezvousInformationFlag, unsigned char>;

typedef struct Optional<chip::BitFlags<chip::RendezvousInformationFlag, unsigned char>> {
    BOOL mHasValue;
    long mValue;
    BitFlags<chip::RendezvousInformationFlag, unsigned char> mData;
} Optional<chip::BitFlags<chip::RendezvousInformationFlag, unsigned char>>;

typedef struct SetupDiscriminator {
    BOOL mDiscriminator;
    BOOL mIsShortDiscriminator;
} SetupDiscriminator;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned char, std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, std::less<unsigned char>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned char, std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, std::less<unsigned char>, true>>;

typedef struct __tree<std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, std::__map_value_compare<unsigned char, std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, std::less<unsigned char>, true>, std::allocator<std::__value_type<unsigned char, chip::OptionalQRCodeInfo>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned char, std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, std::less<unsigned char>, true>> __pair3_;
} __tree<std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, std::__map_value_compare<unsigned char, std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, std::less<unsigned char>, true>, std::allocator<std::__value_type<unsigned char, chip::OptionalQRCodeInfo>>>;

typedef struct map<unsigned char, chip::OptionalQRCodeInfo, std::less<unsigned char>, std::allocator<std::pair<const unsigned char, chip::OptionalQRCodeInfo>>> {
    __tree<std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, std::__map_value_compare<unsigned char, std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, std::less<unsigned char>, true>, std::allocator<std::__value_type<unsigned char, chip::OptionalQRCodeInfo>>> __tree_;
} map<unsigned char, chip::OptionalQRCodeInfo, std::less<unsigned char>, std::allocator<std::pair<const unsigned char, chip::OptionalQRCodeInfo>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned char, chip::OptionalQRCodeInfoExtension>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned char, chip::OptionalQRCodeInfoExtension>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned char, std::__value_type<unsigned char, chip::OptionalQRCodeInfoExtension>, std::less<unsigned char>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned char, std::__value_type<unsigned char, chip::OptionalQRCodeInfoExtension>, std::less<unsigned char>, true>>;

typedef struct __tree<std::__value_type<unsigned char, chip::OptionalQRCodeInfoExtension>, std::__map_value_compare<unsigned char, std::__value_type<unsigned char, chip::OptionalQRCodeInfoExtension>, std::less<unsigned char>, true>, std::allocator<std::__value_type<unsigned char, chip::OptionalQRCodeInfoExtension>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned char, chip::OptionalQRCodeInfoExtension>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned char, std::__value_type<unsigned char, chip::OptionalQRCodeInfoExtension>, std::less<unsigned char>, true>> __pair3_;
} __tree<std::__value_type<unsigned char, chip::OptionalQRCodeInfoExtension>, std::__map_value_compare<unsigned char, std::__value_type<unsigned char, chip::OptionalQRCodeInfoExtension>, std::less<unsigned char>, true>, std::allocator<std::__value_type<unsigned char, chip::OptionalQRCodeInfoExtension>>>;

typedef struct map<unsigned char, chip::OptionalQRCodeInfoExtension, std::less<unsigned char>, std::allocator<std::pair<const unsigned char, chip::OptionalQRCodeInfoExtension>>> {
    __tree<std::__value_type<unsigned char, chip::OptionalQRCodeInfoExtension>, std::__map_value_compare<unsigned char, std::__value_type<unsigned char, chip::OptionalQRCodeInfoExtension>, std::less<unsigned char>, true>, std::allocator<std::__value_type<unsigned char, chip::OptionalQRCodeInfoExtension>>> __tree_;
} map<unsigned char, chip::OptionalQRCodeInfoExtension, std::less<unsigned char>, std::allocator<std::pair<const unsigned char, chip::OptionalQRCodeInfoExtension>>>;

typedef struct SetupPayload {
    unsigned char version;
    unsigned short vendorID;
    unsigned short productID;
    unsigned char commissioningFlow;
    Optional<chip::BitFlags<chip::RendezvousInformationFlag, unsigned char>> rendezvousInformation;
    SetupDiscriminator discriminator;
    unsigned int setUpPINCode;
    map<unsigned char, chip::OptionalQRCodeInfo, std::less<unsigned char>, std::allocator<std::pair<const unsigned char, chip::OptionalQRCodeInfo>>> optionalVendorData;
    map<unsigned char, chip::OptionalQRCodeInfoExtension, std::less<unsigned char>, std::allocator<std::pair<const unsigned char, chip::OptionalQRCodeInfoExtension>>> optionalExtensionData;
} SetupPayload;

typedef struct BleScannerDelegate {
    unk field0;
} BleScannerDelegate;

typedef struct BleLayerDelegate {
} // Error Processing Struct Fields

typedef struct BleConnectionDelegate {
} // Error Processing Struct Fields

typedef struct BlePlatformDelegate {
} // Error Processing Struct Fields

typedef struct BleApplicationDelegate {
} // Error Processing Struct Fields

typedef struct Layer {
} // Error Processing Struct Fields

typedef struct BleLayer {
    int field0;
    void field1;
    BleLayerDelegate field2;
    unk field3;
    BleConnectionDelegate field4;
    BlePlatformDelegate field5;
    BleApplicationDelegate field6;
    Layer field7;
} BleLayer;

typedef struct ChipBleUUID {
    unsigned char field0;
} ChipBleUUID;

