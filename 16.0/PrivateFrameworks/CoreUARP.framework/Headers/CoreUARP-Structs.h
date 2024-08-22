typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct pcap_dumper {
} // Error Processing Struct Fields

typedef struct pcap {
} // Error Processing Struct Fields

typedef struct UARPVersion {
    unsigned int major;
    unsigned int minor;
    unsigned int release;
    unsigned int build;
} UARPVersion;

typedef struct UARPSuperBinaryHeader {
    unsigned int superBinaryFormatVersion;
    unsigned int superBinaryHeaderLength;
    unsigned int superBinaryLength;
    UARPVersion superBinaryVersion;
    unsigned int superBinaryMetadataOffset;
    unsigned int superBinaryMetadataLength;
    unsigned int payloadHeadersOffset;
    unsigned int payloadHeadersLength;
} UARPSuperBinaryHeader;

typedef struct uarpPlatformAssetCallbacks {
    unk fAssetReady;
    unk fAssetMetaDataTLV;
    unk fAssetMetaDataComplete;
    unk fAssetMetaDataProcessingError;
    unk fPayloadReady;
    unk fPayloadMetaDataTLV;
    unk fPayloadMetaDataComplete;
    unk fPayloadMetaDataProcessingError;
    unk fPayloadData;
    unk fPayloadDataComplete;
    unk fPayloadDataComplete2;
    unk fAssetGetBytesAtOffset2;
    unk fAssetSetBytesAtOffset2;
    unk fAssetRescinded;
    unk fAssetRescindedAck;
    unk fAssetCorrupt;
    unk fAssetOrphaned;
    unk fAssetReleased2;
    unk fAssetProcessingNotification2;
    unk fAssetProcessingNotificationAck;
    unk fAssetPreProcessingNotification;
    unk fAssetPreProcessingNotificationAck;
    unk fAssetAllHeadersAndMetaDataComplete;
} uarpPlatformAssetCallbacks;

typedef struct UARP4ccTag {
    unsigned char char1;
    unsigned char char2;
    unsigned char char3;
    unsigned char char4;
} UARP4ccTag;

typedef struct UARPCompressedHeader {
    unsigned short field0;
    unsigned int field1;
    unsigned short field2;
    unsigned short field3;
} UARPCompressedHeader;

typedef struct uarpDataRequestObj {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    char * field3;
    unsigned int field4;
    char * field5;
    unsigned int field6;
    unsigned char field7;
    UARPCompressedHeader field8;
    unsigned int field9;
    unk field10;
    unk field11;
    unsigned char field12;
    unsigned int field13;
    unsigned int field14;
    unsigned int field15;
    unsigned int field16;
    unsigned int field17;
    int field18;
    unsigned int field19;
    char * field20;
    unsigned int field21;
    char * field22;
} uarpDataRequestObj;

typedef struct UARPPayloadHeader2 {
    unsigned int field0;
    UARP4ccTag field1;
    UARPVersion field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
} UARPPayloadHeader2;

typedef struct uarpPayloadObj {
    UARPPayloadHeader2 field0;
    unsigned char field1;
    unsigned int field2;
    unsigned int field3;
    unsigned char field4;
    int field5;
    int field6;
} uarpPayloadObj;

typedef struct uarpProcessedPayloadObj {
} // Error Processing Struct Fields

typedef struct uarpPlatformRemoteEndpoint {
} // Error Processing Struct Fields

typedef struct uarpPlatformAsset {
    UARPSuperBinaryHeader field0;
    unsigned short field1;
    unsigned short field2;
    UARP4ccTag field3;
    UARPVersion field4;
    unsigned int field5;
    unsigned char field6;
    unsigned char field7;
    uarpPlatformAssetCallbacks field8;
    int field9;
    uarpDataRequestObj field10;
    int field11;
    int field12;
    unsigned char field13;
    uarpPayloadObj field14;
    uarpProcessedPayloadObj field15;
    char * field16;
    unsigned int field17;
    char * field18;
    unsigned int field19;
    char * field20;
    unsigned int field21;
    unsigned int field22;
    uarpPlatformRemoteEndpoint field23;
    void field24;
    uarpPlatformAsset field25;
    uarpProcessedTLV field26;
} uarpPlatformAsset;

typedef struct uarpProcessedTLV {
} // Error Processing Struct Fields

typedef struct UARPStatistics {
    unsigned int packetsNoVersionAgreement;
    unsigned int packetsMissed;
    unsigned int packetsDuplicate;
    unsigned int packetsOutOfOrder;
} UARPStatistics;

typedef struct uarpPlatformOptionsObj {
    unsigned int maxTxPayloadLength;
    unsigned int maxRxPayloadLength;
    unsigned int payloadWindowLength;
    unsigned short protocolVersion;
    unsigned char reofferFirmwareOnSync;
} uarpPlatformOptionsObj;

typedef struct uarpPayloadVersionInfo {
    UARP4ccTag tag;
    UARPVersion activeVersion;
    UARPVersion stagedVersion;
} uarpPayloadVersionInfo;

typedef struct UARPPayloadHeader {
    unsigned int payloadHeaderLength;
    unsigned int payloadTag;
    UARPVersion payloadVersion;
    unsigned int payloadMetadataOffset;
    unsigned int payloadMetadataLength;
    unsigned int payloadOffset;
    unsigned int payloadLength;
} UARPPayloadHeader;

typedef struct uarpPlatformEndpointCallbacks {
    unk fRequestBuffer;
    unk fReturnBuffer;
    unk fRequestTransmitMsgBuffer;
    unk fReturnTransmitMsgBuffer;
    unk fSendMessage;
    unk fDataTransferPause;
    unk fDataTransferPauseAck;
    unk fDataTransferResume;
    unk fDataTransferResumeAck;
    unk fSuperBinaryOffered;
    unk fDynamicAssetOffered;
    unk fApplyStagedAssets;
    unk fApplyStagedAssetsResponse;
    unk fManufacturerName;
    unk fManufacturerNameResponse;
    unk fModelName;
    unk fModelNameResponse;
    unk fSerialNumber;
    unk fSerialNumberResponse;
    unk fHardwareVersion;
    unk fHardwareVersionResponse;
    unk fActiveFirmwareVersion2;
    unk fActiveFirmwareVersionResponse;
    unk fStagedFirmwareVersion2;
    unk fStagedFirmwareVersionResponse;
    unk fLastError;
    unk fLastErrorResponse;
    unk fStatisticsResponse;
    unk fAssetSolicitation;
    unk fRescindAllAssets;
    unk fRescindAllAssetsAck;
    unk fTxWatchdogSet;
    unk fTxWatchdogCancel;
    unk fProtocolVersion;
    unk fFriendlyName;
    unk fFriendlyNameResponse;
    unk fDecompressBuffer;
    unk fCompressBuffer;
    unk fHashInfo;
    unk fHashInit;
    unk fHashUpdate;
    unk fHashFinal;
    unk fHashLog;
} uarpPlatformEndpointCallbacks;

typedef struct uarpPlatformEndpoint {
} // Error Processing Struct Fields

typedef struct uarpPlatformEndpointAppleCallbacks {
    unk fAppleModelNumber;
    unk fAppleModelNumberResponse;
    unk fHwFusingType;
    unk fHwFusingTypeResponse;
} uarpPlatformEndpointAppleCallbacks;

typedef struct uarpPlatformEndpointApple {
    unsigned char supportsPersonalization;
    unsigned char supportsHeySiri;
    unsigned char supportsVoiceAssist;
    uarpPlatformEndpointAppleCallbacks callbacks;
} uarpPlatformEndpointApple;

