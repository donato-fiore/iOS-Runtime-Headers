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

typedef struct UARPStatistics {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
} UARPStatistics;

typedef struct UARPPayloadHeader {
    unsigned int payloadHeaderLength;
    unsigned int payloadTag;
    UARPVersion payloadVersion;
    unsigned int payloadMetadataOffset;
    unsigned int payloadMetadataLength;
    unsigned int payloadOffset;
    unsigned int payloadLength;
} UARPPayloadHeader;

typedef struct AppleUARPPersonalizationRequired {
    unsigned short field0;
    unsigned int field1;
} AppleUARPPersonalizationRequired;

typedef struct AppleUARPPersonalizationInfoResponse {
    unsigned int field0;
    unsigned int field1;
} AppleUARPPersonalizationInfoResponse;

typedef struct UARPMsgAccessoryAppleInformationResponse {
    unsigned int field0;
} UARPMsgAccessoryAppleInformationResponse;

typedef struct UARPOUI {
    unsigned char field0;
    unsigned char field1;
    unsigned char field2;
} UARPOUI;

typedef struct UARP4ccTag {
    unsigned char field0;
    unsigned char field1;
    unsigned char field2;
    unsigned char field3;
} UARP4ccTag;

typedef struct uarpAssetCoreObj {
    unsigned short field0;
    unsigned short field1;
    unsigned int field2;
    UARP4ccTag field3;
    UARPVersion field4;
    unsigned int field5;
    unsigned short field6;
} uarpAssetCoreObj;

typedef struct uarpRemoteAccessoryObj {
} // Error Processing Struct Fields

typedef struct uarpControllerAssetObj {
    uarpAssetCoreObj field0;
    unsigned short field1;
    void field2;
    void field3;
    uarpRemoteAccessoryObj field4;
    uarpControllerAssetObj field5;
} uarpControllerAssetObj;

typedef struct uarpPlatformOptionsObj {
    unsigned int maxTxPayloadLength;
    unsigned int maxRxPayloadLength;
    unsigned int payloadWindowLength;
    unsigned short protocolVersion;
} uarpPlatformOptionsObj;

typedef struct uarpControllerCallbacksObj {
    unk fRequestBuffer;
    unk fReturnBuffer;
    unk fRequestTransmitMsgBuffer;
    unk fReturnTransmitMsgBuffer;
    unk fSendMessage;
    unk fAssetProcessingComplete;
    unk fUpdateInformationTLV;
    unk fRequestBytesFromAsset;
    unk fApplyStagedAssetsStatus;
    unk fAssetAvailableAck;
    unk fAssetDataTransferAck;
    unk fAssetRescindAck;
    unk fSyncAck;
    unk fVersionDiscoveryResponse;
    unk fVendorSpecific;
    unk fDynamicAssetOffer;
    unk fUnsolicitedDynamicAssetOffer;
    unk fAssetDataResponse;
    unk fAssetTransferred;
    unk fAssetProcessingAck;
    unk fSetTxWatchdog;
    unk fCancelTxWatchdog;
    unk fAssetRelease;
} uarpControllerCallbacksObj;

typedef struct uarpControllerObj {
} // Error Processing Struct Fields

typedef struct uarpControllerAppleCallbacksObj {
    unk fPreparePersonalizationAsset;
    unk fPersonalizeAsset;
} uarpControllerAppleCallbacksObj;

typedef struct uarpControllerAppleObj {
    uarpControllerAppleCallbacksObj callbacks;
} uarpControllerAppleObj;

