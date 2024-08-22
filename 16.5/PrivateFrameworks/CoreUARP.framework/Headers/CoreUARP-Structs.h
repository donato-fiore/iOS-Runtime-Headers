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
    unk fAssetStore;
    unk fAssetGetBytesAtOffset;
    unk fAssetSetBytesAtOffset;
    unk fAssetReleased;
    unk fAssetProcessingNotification;
} uarpPlatformAssetCallbacks;

typedef struct UARP4ccTag {
    unsigned char char1;
    unsigned char char2;
    unsigned char char3;
    unsigned char char4;
} UARP4ccTag;

typedef struct uarpAssetCoreObj {
    unsigned short field0;
    unsigned short field1;
    UARP4ccTag field2;
    UARPVersion field3;
    unsigned int field4;
    unsigned int field5;
    unsigned short field6;
} uarpAssetCoreObj;

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

typedef struct UARPPayloadHeader {
    unsigned int payloadHeaderLength;
    unsigned int payloadTag;
    UARPVersion payloadVersion;
    unsigned int payloadMetadataOffset;
    unsigned int payloadMetadataLength;
    unsigned int payloadOffset;
    unsigned int payloadLength;
} UARPPayloadHeader;

typedef struct uarpPayloadObj {
    UARPPayloadHeader2 field0;
    unsigned char field1;
    unsigned int field2;
    unsigned int field3;
    unsigned char field4;
    int field5;
    char * field6;
    unsigned int field7;
    int field8;
    char * field9;
    unsigned int field10;
    char * field11;
    unsigned int field12;
    char * field13;
    unsigned int field14;
    int field15;
    UARPPayloadHeader field16;
    unsigned char field17;
    UARP4ccTag field18;
    unsigned char field19;
    unsigned short field20;
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
    uarpAssetCoreObj field6;
    unsigned char field7;
    unsigned char field8;
    uarpPlatformAssetCallbacks field9;
    int field10;
    uarpDataRequestObj field11;
    int field12;
    int field13;
    unsigned char field14;
    uarpPayloadObj field15;
    uarpProcessedPayloadObj field16;
    char * field17;
    unsigned int field18;
    char * field19;
    unsigned int field20;
    char * field21;
    unsigned int field22;
    unsigned int field23;
    uarpPlatformRemoteEndpoint field24;
    void field25;
    uarpPlatformAsset field26;
    uarpProcessedTLV field27;
    unsigned char field28;
    unsigned char field29;
    unsigned int field30;
    unsigned int field31;
    unsigned int field32;
    unsigned short field33;
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
    unsigned short responseTimeout;
    unsigned short retryLimit;
} uarpPlatformOptionsObj;

typedef struct uarpPlatformStreamingBuffer {
} // Error Processing Struct Fields

typedef struct uarpPayloadVersionInfo {
    UARP4ccTag tag;
    UARPVersion activeVersion;
    UARPVersion stagedVersion;
} uarpPayloadVersionInfo;

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
    unk fLayer2WatchdogSet;
    unk fLayer2WatchdogCancel;
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
    unk fLogPacket;
    unk fActiveFirmwareVersion;
    unk fStagedFirmwareVersion;
    unk fAssetRescinded;
    unk fAssetCorrupt;
    unk fAssetOrphaned;
    unk fAssetReleased;
    unk fAssetReady;
    unk fAssetStore;
    unk fAssetMetaDataTLV;
    unk fAssetMetaDataComplete;
    unk fPayloadReady;
    unk fPayloadMetaDataTLV;
    unk fPayloadMetaDataComplete;
    unk fPayloadData;
    unk fPayloadDataComplete;
    unk fTxWatchdogSet;
    unk fTxWatchdogCancel;
} uarpPlatformEndpointCallbacks;

typedef struct uarpPlatformEndpoint {
} // Error Processing Struct Fields

typedef struct uarpPlatformEndpointAppleCallbacks {
    unk fAppleModelNumber;
    unk fAppleModelNumberResponse;
    unk fHwFusingType;
    unk fHwFusingTypeResponse;
    unk fManifestPrefix;
    unk fManifestPrefixResponse;
    unk fBoardID;
    unk fBoardIDResponse;
    unk fChipID;
    unk fChipIDResponse;
    unk fChipRevision;
    unk fChipRevisionResponse;
    unk fECID;
    unk fECIDResponse;
    unk fSecurityDomain;
    unk fSecurityDomainResponse;
    unk fSecurityMode;
    unk fSecurityModeResponse;
    unk fProductionMode;
    unk fProductionModeResponse;
    unk fChipEpoch;
    unk fChipEpochResponse;
    unk fEnableMixMatch;
    unk fEnableMixMatchResponse;
    unk fSoCLiveNonce;
    unk fSoCLiveNonceResponse;
    unk fPrefixNeedsLogicalUnitNumber;
    unk fPrefixNeedsLogicalUnitNumberResponse;
    unk fSuffixNeedsLogicalUnitNumber;
    unk fSuffixNeedsLogicalUnitNumberResponse;
    unk fLogicalUnitNumber;
    unk fLogicalUnitNumberResponse;
    unk fTicketLongName;
    unk fTicketLongNameResponse;
    unk fRequiresPersonalization;
    unk fRequiresPersonalizationResponse;
    unk fApBoardID;
    unk fApBoardIDResponse;
    unk fApChipID;
    unk fApChipIDResponse;
    unk fApProductionMode;
    unk fApProductionModeResponse;
    unk fApSecurityMode;
    unk fApSecurityModeResponse;
    unk fHardwareSpecific;
    unk fHardwareSpecificResponse;
} uarpPlatformEndpointAppleCallbacks;

typedef struct uarpPlatformEndpointApple {
    unsigned char supportsPersonalization;
    unsigned char supportsHeySiri;
    unsigned char supportsVoiceAssist;
    uarpPlatformEndpointAppleCallbacks callbacks;
} uarpPlatformEndpointApple;

