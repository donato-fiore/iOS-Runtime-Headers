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

typedef struct PersistentStorageOperationalKeystore {
} // Error Processing Struct Fields

typedef struct FabricInfo {
} // Error Processing Struct Fields

typedef struct AttributePathParams {
    unsigned int field0;
    unsigned int field1;
    unsigned short field2;
    unsigned short field3;
} AttributePathParams;

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

typedef struct MTRDevicePairingDelegateBridge {
    unk field0;
    id field1;
    id field2;
} MTRDevicePairingDelegateBridge;

typedef struct P256Keypair {
} // Error Processing Struct Fields

typedef struct AesCcm128Key {
    unsigned char field0;
} AesCcm128Key;

typedef struct MTROperationalCredentialsDelegate {
} // Error Processing Struct Fields

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

typedef struct ChipError {
    unsigned int mError;
    char * mFile;
    unsigned int mLine;
} ChipError;

typedef struct Span<const unsigned char> {
    char * field0;
    NSUInteger field1;
} Span<const unsigned char>;

typedef struct Span<const char> {
    char * field0;
    NSUInteger field1;
} Span<const char>;

typedef struct IdentifyCluster {
} // Error Processing Struct Fields

typedef struct GroupsCluster {
} // Error Processing Struct Fields

typedef struct ScenesCluster {
} // Error Processing Struct Fields

typedef struct OnOffCluster {
} // Error Processing Struct Fields

typedef struct OnOffSwitchConfigurationCluster {
} // Error Processing Struct Fields

typedef struct LevelControlCluster {
} // Error Processing Struct Fields

typedef struct BinaryInputBasicCluster {
} // Error Processing Struct Fields

typedef struct DescriptorCluster {
} // Error Processing Struct Fields

typedef struct BindingCluster {
} // Error Processing Struct Fields

typedef struct AccessControlCluster {
} // Error Processing Struct Fields

typedef struct BridgedActionsCluster {
} // Error Processing Struct Fields

typedef struct BasicCluster {
} // Error Processing Struct Fields

typedef struct OtaSoftwareUpdateProviderCluster {
} // Error Processing Struct Fields

typedef struct OtaSoftwareUpdateRequestorCluster {
} // Error Processing Struct Fields

typedef struct LocalizationConfigurationCluster {
} // Error Processing Struct Fields

typedef struct TimeFormatLocalizationCluster {
} // Error Processing Struct Fields

typedef struct UnitLocalizationCluster {
} // Error Processing Struct Fields

typedef struct PowerSourceConfigurationCluster {
} // Error Processing Struct Fields

typedef struct PowerSourceCluster {
} // Error Processing Struct Fields

typedef struct GeneralCommissioningCluster {
} // Error Processing Struct Fields

typedef struct NetworkCommissioningCluster {
} // Error Processing Struct Fields

typedef struct DiagnosticLogsCluster {
} // Error Processing Struct Fields

typedef struct GeneralDiagnosticsCluster {
} // Error Processing Struct Fields

typedef struct SoftwareDiagnosticsCluster {
} // Error Processing Struct Fields

typedef struct ThreadNetworkDiagnosticsCluster {
} // Error Processing Struct Fields

typedef struct WiFiNetworkDiagnosticsCluster {
} // Error Processing Struct Fields

typedef struct EthernetNetworkDiagnosticsCluster {
} // Error Processing Struct Fields

typedef struct BridgedDeviceBasicCluster {
} // Error Processing Struct Fields

typedef struct SwitchCluster {
} // Error Processing Struct Fields

typedef struct AdministratorCommissioningCluster {
} // Error Processing Struct Fields

typedef struct OperationalCredentialsCluster {
} // Error Processing Struct Fields

typedef struct GroupKeyManagementCluster {
} // Error Processing Struct Fields

typedef struct FixedLabelCluster {
} // Error Processing Struct Fields

typedef struct UserLabelCluster {
} // Error Processing Struct Fields

typedef struct BooleanStateCluster {
} // Error Processing Struct Fields

typedef struct ModeSelectCluster {
} // Error Processing Struct Fields

typedef struct DoorLockCluster {
} // Error Processing Struct Fields

typedef struct WindowCoveringCluster {
} // Error Processing Struct Fields

typedef struct BarrierControlCluster {
} // Error Processing Struct Fields

typedef struct PumpConfigurationAndControlCluster {
} // Error Processing Struct Fields

typedef struct ThermostatCluster {
} // Error Processing Struct Fields

typedef struct FanControlCluster {
} // Error Processing Struct Fields

typedef struct ThermostatUserInterfaceConfigurationCluster {
} // Error Processing Struct Fields

typedef struct ColorControlCluster {
} // Error Processing Struct Fields

typedef struct IlluminanceMeasurementCluster {
} // Error Processing Struct Fields

typedef struct TemperatureMeasurementCluster {
} // Error Processing Struct Fields

typedef struct PressureMeasurementCluster {
} // Error Processing Struct Fields

typedef struct FlowMeasurementCluster {
} // Error Processing Struct Fields

typedef struct RelativeHumidityMeasurementCluster {
} // Error Processing Struct Fields

typedef struct OccupancySensingCluster {
} // Error Processing Struct Fields

typedef struct WakeOnLanCluster {
} // Error Processing Struct Fields

typedef struct ChannelCluster {
} // Error Processing Struct Fields

typedef struct TargetNavigatorCluster {
} // Error Processing Struct Fields

typedef struct MediaPlaybackCluster {
} // Error Processing Struct Fields

typedef struct MediaInputCluster {
} // Error Processing Struct Fields

typedef struct LowPowerCluster {
} // Error Processing Struct Fields

typedef struct KeypadInputCluster {
} // Error Processing Struct Fields

typedef struct ContentLauncherCluster {
} // Error Processing Struct Fields

typedef struct AudioOutputCluster {
} // Error Processing Struct Fields

typedef struct ApplicationLauncherCluster {
} // Error Processing Struct Fields

typedef struct ApplicationBasicCluster {
} // Error Processing Struct Fields

typedef struct AccountLoginCluster {
} // Error Processing Struct Fields

typedef struct ElectricalMeasurementCluster {
} // Error Processing Struct Fields

typedef struct TestClusterCluster {
} // Error Processing Struct Fields

typedef struct Optional<unsigned char> {
    BOOL mHasValue;
    long mValue;
    unsigned char mData;
} Optional<unsigned char>;

typedef struct __SecKey {
} // Error Processing Struct Fields

typedef struct BitFlags<chip::RendezvousInformationFlag, unsigned char> {
    unsigned char mValue;
} BitFlags<chip::RendezvousInformationFlag, unsigned char>;

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
    BitFlags<chip::RendezvousInformationFlag, unsigned char> rendezvousInformation;
    unsigned short discriminator;
    unsigned int setUpPINCode;
    BOOL isShortDiscriminator;
    map<unsigned char, chip::OptionalQRCodeInfo, std::less<unsigned char>, std::allocator<std::pair<const unsigned char, chip::OptionalQRCodeInfo>>> optionalVendorData;
    map<unsigned char, chip::OptionalQRCodeInfoExtension, std::less<unsigned char>, std::allocator<std::pair<const unsigned char, chip::OptionalQRCodeInfoExtension>>> optionalExtensionData;
} SetupPayload;

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

