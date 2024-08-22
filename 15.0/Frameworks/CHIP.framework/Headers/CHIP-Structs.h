typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CHIPDevicePairingDelegateBridge {
    unk field0;
    unk field1;
    id field2;
    id field3;
} CHIPDevicePairingDelegateBridge;

typedef struct CHIPPersistentStorageDelegateBridge {
    unk field0;
    id field1;
    id field2;
    id field3;
} CHIPPersistentStorageDelegateBridge;

typedef struct Device {
} // Error Processing Struct Fields

typedef struct ClusterBase {
    unk field0;
    unsigned short field1;
    Device field2;
    unsigned char field3;
} ClusterBase;

typedef struct AccountLoginCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} AccountLoginCluster;

typedef struct ApplicationBasicCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} ApplicationBasicCluster;

typedef struct ApplicationLauncherCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} ApplicationLauncherCluster;

typedef struct AudioOutputCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} AudioOutputCluster;

typedef struct BarrierControlCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} BarrierControlCluster;

typedef struct BasicCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} BasicCluster;

typedef struct BinaryInputBasicCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} BinaryInputBasicCluster;

typedef struct BindingCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} BindingCluster;

typedef struct BridgedDeviceBasicCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} BridgedDeviceBasicCluster;

typedef struct ColorControlCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} ColorControlCluster;

typedef struct ContentLaunchCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} ContentLaunchCluster;

typedef struct DescriptorCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} DescriptorCluster;

typedef struct DoorLockCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} DoorLockCluster;

typedef struct EthernetNetworkDiagnosticsCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} EthernetNetworkDiagnosticsCluster;

typedef struct FixedLabelCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} FixedLabelCluster;

typedef struct GeneralCommissioningCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} GeneralCommissioningCluster;

typedef struct GeneralDiagnosticsCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} GeneralDiagnosticsCluster;

typedef struct GroupKeyManagementCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} GroupKeyManagementCluster;

typedef struct GroupsCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} GroupsCluster;

typedef struct IdentifyCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} IdentifyCluster;

typedef struct KeypadInputCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} KeypadInputCluster;

typedef struct LevelControlCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} LevelControlCluster;

typedef struct LowPowerCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} LowPowerCluster;

typedef struct MediaInputCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} MediaInputCluster;

typedef struct MediaPlaybackCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} MediaPlaybackCluster;

typedef struct NetworkCommissioningCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} NetworkCommissioningCluster;

typedef struct OnOffCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} OnOffCluster;

typedef struct OperationalCredentialsCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} OperationalCredentialsCluster;

typedef struct PumpConfigurationAndControlCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} PumpConfigurationAndControlCluster;

typedef struct RelativeHumidityMeasurementCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} RelativeHumidityMeasurementCluster;

typedef struct ScenesCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} ScenesCluster;

typedef struct SoftwareDiagnosticsCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} SoftwareDiagnosticsCluster;

typedef struct SwitchCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} SwitchCluster;

typedef struct TvChannelCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} TvChannelCluster;

typedef struct TargetNavigatorCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} TargetNavigatorCluster;

typedef struct TemperatureMeasurementCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} TemperatureMeasurementCluster;

typedef struct TestClusterCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} TestClusterCluster;

typedef struct ThermostatCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} ThermostatCluster;

typedef struct TrustedRootCertificatesCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} TrustedRootCertificatesCluster;

typedef struct WakeOnLanCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} WakeOnLanCluster;

typedef struct WindowCoveringCluster {
    unk _vptr$ClusterBase;
    unsigned short mClusterId;
    Device mDevice;
    unsigned char mEndpoint;
} WindowCoveringCluster;

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

