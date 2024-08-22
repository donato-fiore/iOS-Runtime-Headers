typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL maxMediaBitrate;
    BOOL maxNetworkBitrate;
    BOOL maxPacketsPerSecond;
    BOOL metadata;
    BOOL repairedMaxNetworkBitrate;
    BOOL repairedStreamID;
} ?;

typedef struct _VCSingleLinkedListEntry {
} // Error Processing Struct Fields

typedef struct _VCSingleLinkedList {
    _VCSingleLinkedListEntry head;
    BOOL initialized;
    unk compare;
    NSUInteger countEntries;
} _VCSingleLinkedList;

typedef struct opaqueCMSimpleQueue {
} // Error Processing Struct Fields

typedef struct opaqueVCAudioLimiter {
} // Error Processing Struct Fields

typedef struct opaqueVCAudioBufferList {
} // Error Processing Struct Fields

typedef struct _VCAudioIOControllerIOState {
} // Error Processing Struct Fields

typedef struct _VCRemoteCodecInfo {
    unsigned int codecType;
    CGFloat sampleRate;
} _VCRemoteCodecInfo;

typedef struct _VCAudioIOControllerClientIO {
} // Error Processing Struct Fields

typedef struct AudioStreamBasicDescription {
    CGFloat mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
} AudioStreamBasicDescription;

typedef struct OpaqueCMBlockBuffer {
} // Error Processing Struct Fields

typedef struct tagHANDLE {
    int field0;
} tagHANDLE;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct AVCRateControlConfig {
    unsigned int mode;
    unsigned int localRadioAccessTechnology;
    unsigned int remoteRadioAccessTechnology;
    unsigned int maxBitrate;
    unsigned int minBitrate;
    unsigned int initialBitrate;
    BOOL isTrafficBursty;
    unsigned int featureFlags;
} AVCRateControlConfig;

typedef struct AVCRateControlParams_t {
    id field0;
    BOOL field1;
    BOOL field2;
    id field3;
    id field4;
    BOOL field5;
    id field6;
    BOOL field7;
} AVCRateControlParams_t;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct VCRateControlAlgorithmConfig {
    unsigned int serverBagProfileNumber;
    unsigned int tierBitrates;
    int initialTierIndex;
    int maxTierIndex;
    int minTierIndex;
    int lowestNonEmergencyTierIndex;
    int lowestNonEmergencyTierIndexWiFi;
    int lowestEffectiveBWETierIndex;
    int lowestTierIndexReactToNoServerActivity;
    int rampUpTierNumber;
    int rampDownTierNumber;
    int rampUpAdditionalTierAtInitial;
    int rampDownAdditionalTierAtInitial;
    int rampDownBurstyLossThreshold;
    int lowestTierForBurstyLossRampDown;
    int lowestTierToDisableRateLimited;
    CGFloat rampDownNOWRDThreshold;
    CGFloat rampDownNOWRDAccThreshold;
    CGFloat rampDownAggressiveNOWRDThreshold;
    CGFloat rampDownAggressiveNOWRDAccThreshold;
    CGFloat rampDownConstantOWRDDuration;
    CGFloat rampDownOvershootDuration;
    CGFloat rampDownOvershootNextTierRatio;
    CGFloat rampUpFrozenDuration;
    CGFloat rampUpSettleDuration;
    CGFloat rampUpOWRDThreshold;
    CGFloat rampUpNOWRDThreshold;
    CGFloat rampUpNOWRDAccThreshold;
    CGFloat rampUpOverBandwidthCalmDuration;
    CGFloat rampUpBlockedTimeout;
    int rampUpOverBandwidthTierNumber;
    int rampDownLossEventThreshold;
    CGFloat rampDownLossEventNOWRDThreshold;
    CGFloat rampUpFrozenPLRThreshold;
    CGFloat rampUpRateLimitedRatio;
    CGFloat unstableRateLimitedDuration;
    CGFloat congestionWaitDuration;
    CGFloat owrdWindowDuration;
    CGFloat owrdShortWindowDuration;
    CGFloat minimumNOWRDTimeDifference;
    CGFloat owrdInitialRampUpReadyDuration;
    unsigned int owrdHistorySize;
    unsigned int owrdMininumHistorySize;
    unsigned int fastRampDownBitrateRange;
    unsigned int fastRampUpBitrateRange;
    unsigned int consecutiveRampDownThresholdForCongestion;
    BOOL receivedBandwidthEstimationEnabled;
    BOOL basebandAdaptationEnabled;
    BOOL rateLimitedEnabled;
    BOOL randomRampUpFrozenDurationEnabled;
    BOOL oscillationAvoidanceEnabled;
    BOOL fastRampUpEnabled;
    BOOL blockRampUpInSaturatedNetworkEnabled;
    BOOL blockRampUpInBluetoothCoexEnabled;
    BOOL wifiEmergencyTiersEnabled;
    BOOL burstyTrafficEnabled;
    BOOL rampDownToActualSendBitrate;
    int rampDownToActualSendBitrateMinTier;
    BOOL rampDownSuppressionEnabled;
    CGFloat rampDownSuppressionMinRTT;
    CGFloat rampDownSuppressionFactor;
    int fastRampUpHighestTier;
    CGFloat fastRampUpRTTRatio;
    int fastRampUpTierGap;
    CGFloat fastRampUpNetworkStableDuration;
    CGFloat networkSaturatedRTTToMinRTTRatio;
    CGFloat networkSaturatedOWRDToMinRTTRatio;
    int networkSaturatedPersistFeedbackNumber;
    CGFloat networkSaturatedRTTDecreasingThreshold;
    int oscillationAvoidanceTierChangeThreshold;
    int oscillationAvoidanceTiersHitThreshold;
    CGFloat oscillationAvoidanceDurationRatio;
    CGFloat oscillationAvoidanceDurationRatioAggressive;
    int stabilizationScheme;
    CGFloat rampDownNBDCDThreshold;
    CGFloat rampDownAggressiveNBDCDThreshold;
    CGFloat rampDownNormalizedQueuingDelayThreshold;
    CGFloat rampDownMediumQueuingDelayThreshold;
    CGFloat rampDownHighQueuingDelayThreshold;
    CGFloat rampDownEmergencyTierCoolDownTime;
    CGFloat rampDownWiFiEmergencyTierCoolDownTime;
    CGFloat rampUpNBDCDThreshold;
    CGFloat rampUpQueuingDelayThreshold;
    CGFloat rampUpNBDCDCoolDownTime;
    CGFloat rampUpAudioFractionCoolDownTime;
    CGFloat basebandRATSwitchCoolDownTime;
    CGFloat basebandAdaptationCrossTrafficRatio;
    CGFloat rampUpNetworkUnstableCoolDownTime;
    CGFloat autoResumeDurationAfterPaused;
    CGFloat pauseOffChannelHighRatio;
    CGFloat unpauseOffChannelLowRatio;
    BOOL oscillationDetectionEnabled;
    CGFloat oscillationCoolDownTime;
    int oscillationDeviationTierNumber;
    int oscillationDeviationCountThreshold;
    BOOL preventBasebandRampDownCloseToKeyFrame;
    int basebandRampDownSlowDownFactor;
    CGFloat networkUnstableRTTThreshold;
    CGFloat networkUnstablePLRThreshold;
} VCRateControlAlgorithmConfig;

typedef struct OpaqueFigCFWeakReference {
} // Error Processing Struct Fields

typedef struct opaqueRTCReporting {
} // Error Processing Struct Fields

typedef struct ifnet_interface_advisory {
    unsigned char field0;
    unsigned char field1;
    unsigned short field2;
    int field3;
    NSUInteger field4;
    NSUInteger field5;
    NSUInteger field6;
    NSUInteger field7;
    unsigned int field8;
    unsigned int field9;
    unsigned int field10;
    unsigned char field11;
    unsigned char field12;
    unsigned short field13;
    unsigned short field14;
    unsigned char field15;
    unsigned char field16;
    unsigned char field17;
    unsigned char field18;
} ifnet_interface_advisory;

typedef struct packet_id {
    unsigned char field0;
    unsigned char field1;
    unsigned short field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
} packet_id;

typedef struct tagAFRCFB {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
    unsigned int field9;
    unsigned int field10;
    unsigned int field11;
} tagAFRCFB;

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

typedef struct _VCRange {
    float min;
    float max;
} _VCRange;

typedef struct _VCAudioPowerSpectrumRealtimeContext {
} // Error Processing Struct Fields

typedef struct tagVCStatisticsCollection {
    ? field0;
    ? field1;
    ? field2;
    ? field3;
    ? field4;
    ? field5;
    ? field6;
} tagVCStatisticsCollection;

typedef struct _opaque_pthread_rwlock_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_rwlock_t;

typedef struct tagIPPORT {
    int iFlags;
    char szIfName;
    unk IP;
    unsigned int dwIPv4;
    unsigned char abIPv6;
    unsigned short wPort;
} tagIPPORT;

typedef struct tagCommNATInfo {
    unsigned int field0;
    unsigned int field1;
    unsigned short field2;
    unsigned int field3;
} tagCommNATInfo;

typedef struct __SCDynamicStore {
} // Error Processing Struct Fields

typedef struct tagRTCPPACKET {
    tagRTCPCOMMON field0;
    unk field1;
    tagSR_RTCP field2;
    tagRR_RTCP field3;
    tagSDES_RTCP field4;
    tagBYE_RTCP field5;
    tagRTCP_APP field6;
    tagRTCP_APP_LTRP field7;
    tagFIR_RTCP field8;
    tagNACK_RTCP field9;
    tagRTCP_PSFB_PLI field10;
    tagRTCP_PSFB_SLI field11;
    tagRTCP_PSFB_FIR field12;
    tagRTCP_PSFB_TST field13;
    tagRTCP_PSFB_TST field14;
    tagRTCP_RTPFB_GNACK field15;
    tagRTCP_RTPFB_TMMB field16;
    tagRTCP_RTPFB_TMMB field17;
    tagRTCP_CUSTOM_SR field18;
    tagRTCP_CUSTOM_RR field19;
    tagRTCP_CUSTOM_RCTL field20;
} tagRTCPPACKET;

typedef struct _RTCPPacketList {
} // Error Processing Struct Fields

typedef struct tagVCJBTargetEstimatorSynchronizer {
} // Error Processing Struct Fields

typedef struct tagVCAudioStreamGroupPriorityInfo {
    BOOL isAudioActive;
    unsigned int audioActiveProbabilityThreshold;
    unsigned int audioInactiveProbabilityThreshold;
    unsigned int audioActiveAccumulationThreshold;
    unsigned int audioInactiveAccumulationThreshold;
    unsigned int audioActiveCount;
    unsigned int lastAudioPriority;
    unsigned int refreshCounter;
} tagVCAudioStreamGroupPriorityInfo;

typedef struct OpaqueAudioConverter {
} // Error Processing Struct Fields

typedef struct tagVCAudioRelayIOInfo {
    id relayIO;
    _opaque_pthread_mutex_t VCAudioRelayIO;
    id lock;
    id ioFriendlyName;
} tagVCAudioRelayIOInfo;

typedef struct timespec {
    NSInteger field0;
    NSInteger field1;
} timespec;

typedef struct OpaqueFigThread {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct tagRTCPCOMMON {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    unsigned short field4;
} tagRTCPCOMMON;

typedef struct tagRTCP_RRB {
    unsigned int field0;
    BOOL field1;
    BOOL field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
} tagRTCP_RRB;

typedef struct tagSR_RTCP {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    tagRTCP_RRB field6;
} tagSR_RTCP;

typedef struct tagRR_RTCP {
    unsigned int field0;
    tagRTCP_RRB field1;
} tagRR_RTCP;

typedef struct tagRTCPSDES {
    unsigned char field0;
    unsigned char field1;
    char field2;
} tagRTCPSDES;

typedef struct tagSDES_RTCP {
    unsigned int field0;
    tagRTCPSDES field1;
} tagSDES_RTCP;

typedef struct tagBYE_RTCP {
    unsigned int field0;
} tagBYE_RTCP;

typedef struct tagRTCP_APP {
    unsigned int field0;
    unsigned int field1;
} tagRTCP_APP;

typedef struct tagRTCP_APP_LTRP {
    tagRTCP_APP field0;
    unsigned int field1;
} tagRTCP_APP_LTRP;

typedef struct tagFIR_RTCP {
    unsigned int field0;
    unsigned short field1;
} tagFIR_RTCP;

typedef struct tagNACK_RTCP {
    unsigned int field0;
    unsigned short field1;
    unsigned short field2;
} tagNACK_RTCP;

typedef struct tagRTCP_FBCOMMON {
    unsigned int field0;
    unsigned int field1;
} tagRTCP_FBCOMMON;

typedef struct tagRTCP_PSFB_PLI {
    tagRTCP_FBCOMMON field0;
} tagRTCP_PSFB_PLI;

typedef struct tagRTCP_PSFB_SLI {
    tagRTCP_FBCOMMON field0;
    unsigned int field1;
} tagRTCP_PSFB_SLI;

typedef struct tagRTCP_PSFB_FIR {
    tagRTCP_FBCOMMON field0;
    unsigned int field1;
    unsigned char field2;
    unsigned char field3;
} tagRTCP_PSFB_FIR;

typedef struct tagRTCP_PSFB_TST {
    tagRTCP_FBCOMMON field0;
    unsigned int field1;
    unsigned int field2;
} tagRTCP_PSFB_TST;

typedef struct tagRTCP_RTPFB_GNACK {
    tagRTCP_FBCOMMON field0;
    unsigned short field1;
    unsigned short field2;
} tagRTCP_RTPFB_GNACK;

typedef struct tagRTCP_RTPFB_TMMB {
    tagRTCP_FBCOMMON field0;
    unsigned int field1;
    unsigned int field2;
} tagRTCP_RTPFB_TMMB;

typedef struct tagRTCP_CUSTOM_SENDER_INFO {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    BOOL field4;
    BOOL field5;
} tagRTCP_CUSTOM_SENDER_INFO;

typedef struct tagRTCP_CUSTOM_RECEPTION_REPORT {
    unsigned int field0;
    BOOL field1;
    BOOL field2;
    unsigned short field3;
    unsigned short field4;
    unsigned char field5;
    unsigned char field6;
} tagRTCP_CUSTOM_RECEPTION_REPORT;

typedef struct tagRTCP_CUSTOM_SR {
    tagRTCP_APP field0;
    unsigned int field1;
    tagRTCP_CUSTOM_SENDER_INFO field2;
    tagRTCP_CUSTOM_RECEPTION_REPORT field3;
} tagRTCP_CUSTOM_SR;

typedef struct tagRTCP_CUSTOM_RECEIVER_INFO {
    BOOL field0;
    BOOL field1;
} tagRTCP_CUSTOM_RECEIVER_INFO;

typedef struct tagRTCP_CUSTOM_RR {
    tagRTCP_APP field0;
    unsigned int field1;
    tagRTCP_CUSTOM_RECEIVER_INFO field2;
    tagRTCP_CUSTOM_RECEPTION_REPORT field3;
} tagRTCP_CUSTOM_RR;

typedef struct tagRTCP_CUSTOM_RATE_CONTROL_INFO {
    unsigned char field0;
} tagRTCP_CUSTOM_RATE_CONTROL_INFO;

typedef struct tagRTCP_CUSTOM_RCTL {
    tagRTCP_APP field0;
    tagRTCP_CUSTOM_RATE_CONTROL_INFO field1;
} tagRTCP_CUSTOM_RCTL;

typedef struct _VCAudioPowerSpectrumSourceRealtimeContext {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct OpaqueVCFECFeedbackAnalyzer {
} // Error Processing Struct Fields

typedef struct OWRDList {
    CGFloat time;
    CGFloat owrd;
    int frontIndex;
    int rearIndex;
    int size;
} OWRDList;

typedef struct OpaqueVCTransportStream {
} // Error Processing Struct Fields

typedef struct tagVCNWConnectionMonitor {
} // Error Processing Struct Fields

typedef struct tagVCAudioStreamGroupStream {
    tagVCAudioStreamGroupStream field0;
    BOOL field1;
    BOOL field2;
    void field3;
    unk field4;
    unsigned short field5;
    id field6;
    unsigned int field7;
    unsigned int field8;
} tagVCAudioStreamGroupStream;

typedef struct tagVCAudioStreamGroupSyncDestination {
} // Error Processing Struct Fields

typedef struct VCAudioStreamGroupSyncDestinationList {
    tagVCAudioStreamGroupSyncDestination slh_first;
} VCAudioStreamGroupSyncDestinationList;

typedef struct tagVCMemoryPool {
    ? field0;
    NSUInteger field1;
} tagVCMemoryPool;

typedef struct tagCONNRESULT {
} // Error Processing Struct Fields

typedef struct opaqueCMSampleBuffer {
} // Error Processing Struct Fields

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct __CVPixelBufferPool {
} // Error Processing Struct Fields

typedef struct OpaqueVTPixelTransferSession {
} // Error Processing Struct Fields

typedef struct __CFAllocator {
} // Error Processing Struct Fields

typedef struct tagVCMediaQueue {
} // Error Processing Struct Fields

typedef struct _RTCP_RECEPTION_REPORT {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    unsigned char field8;
} _RTCP_RECEPTION_REPORT;

typedef struct _RTCP_SEND_CONTROL_PARAMETERS {
} // Error Processing Struct Fields

typedef struct _VCMediaStreamTransportSetupInfo {
    unsigned char setupType;
    unk ;
    ? socketInfo;
    ? ipInfo;
    ? transportStreamInfo;
    id nwConnection;
    unsigned int NSObject<OS_nw_connection>;
    unsigned int sourceRate;
    BOOL datagramChannelToken;
} _VCMediaStreamTransportSetupInfo;

typedef struct in_addr {
    unsigned int s_addr;
} in_addr;

typedef struct sockaddr_in {
    unsigned char sin_len;
    unsigned char sin_family;
    unsigned short sin_port;
    in_addr sin_addr;
    char sin_zero;
} sockaddr_in;

typedef struct VCRedundancyControllerVideoParameters_t {
    id field0;
    unsigned int field1;
} VCRedundancyControllerVideoParameters_t;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _CCCryptor {
} // Error Processing Struct Fields

typedef struct tagSRTPCryptContext {
    _CCCryptor ccCryptorRef;
} tagSRTPCryptContext;

typedef struct tagSRTPTransformPolicy {
    int cipherMode;
    int mediaKeyLength;
    int sessionKeyLength;
    int sessionSaltLength;
    int authenticationMode;
    int sessionAuthenticationKeyLength;
    int sessionAuthenticationTagLength;
} tagSRTPTransformPolicy;

typedef struct tagSRTPINFO {
    int fSRTPInitialized;
    int fCancelled;
    _opaque_pthread_mutex_t xWait;
    _opaque_pthread_cond_t cWait;
    unsigned int dwSSRC;
    unsigned int dwRTPROC;
    unsigned short wFirstRTPSeq;
    unsigned short wHighestRTPSeq;
    unsigned int dwFirstRTCPSeq;
    unsigned int dwHighestRTCPSeq;
    NSUInteger SRTPIndex;
    int mediaKeyLength;
    int sessionKeyLength;
    unsigned char MediaKey;
    unsigned char MasterSalt;
    unsigned char SessionKey;
    unsigned char SessionSalt;
    unsigned char SessionAuthenticationKey;
    _opaque_pthread_mutex_t MKIAccess;
    void mediaKeyIndex;
    void mediaKeyIndexInPacket;
    unsigned int SRTCPIndex;
    unsigned int dwDerivationRate;
    os_unfair_lock_s cryptContextLock;
    tagSRTPCryptContext cryptContext;
    tagSRTPTransformPolicy policy;
    unsigned int operatingMode;
    BOOL enableEncryptionDebug;
} tagSRTPINFO;

typedef struct VCRateControlMediaSuggestion {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
} VCRateControlMediaSuggestion;

typedef struct tagVCRealTimeThread {
} // Error Processing Struct Fields

typedef struct opaqueCMBufferQueue {
} // Error Processing Struct Fields

typedef struct FigRemoteOperation {
} // Error Processing Struct Fields

typedef struct opaqueVCRemoteImageQueue {
} // Error Processing Struct Fields

typedef struct tagVCSecurityKeyHolder {
} // Error Processing Struct Fields

typedef struct tagVCAudioFrameFormat {
    AudioStreamBasicDescription format;
    unsigned int samplesPerFrame;
} tagVCAudioFrameFormat;

typedef struct tagVCAudioReceiverStream {
} // Error Processing Struct Fields

typedef struct tagVCAudioReceiverConfig {
} // Error Processing Struct Fields

typedef struct opaqueVCFFTMeter {
} // Error Processing Struct Fields

typedef struct _METER_INFO {
    BOOL frequencyMeteringEnabled;
    opaqueVCFFTMeter fftMeter;
} _METER_INFO;

typedef struct _VCAudioStreamSinkContext {
    _METER_INFO soundMeter;
} _VCAudioStreamSinkContext;

typedef struct tagVCAudioReceiver {
} // Error Processing Struct Fields

typedef struct tagWRMMetricsInfo {
} // Error Processing Struct Fields

typedef struct _VCAudioStreamSourceContext {
} // Error Processing Struct Fields

typedef struct __CFBoolean {
} // Error Processing Struct Fields

typedef struct _VCVideoSourceToken {
    unk ;
    ? ;
    unsigned int bits;
} _VCVideoSourceToken;

typedef struct OpaqueFigVirtualDisplaySession {
} // Error Processing Struct Fields

typedef struct OpaqueVTImageRotationSession {
} // Error Processing Struct Fields

typedef struct __darwin_pthread_handler_rec {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_t {
    NSInteger field0;
    __darwin_pthread_handler_rec field1;
    char field2;
} _opaque_pthread_t;

typedef struct tagVCSourceDestinationInfo {
    int field0;
    unk field1;
    ? field2;
    ? field3;
    ? field4;
    ? field5;
    tagVCSourceDestinationInfo field6;
    void field7;
} tagVCSourceDestinationInfo;

typedef struct tagCANDIDATE {
    int field0;
    int field1;
    unsigned int field2;
    unsigned char field3;
    unsigned short field4;
    unsigned short field5;
    tagIPPORT field6;
    tagIPPORT field7;
    tagIPPORT field8;
    unsigned int field9;
} tagCANDIDATE;

typedef struct tagCANDIDATEPARIR {
} // Error Processing Struct Fields

typedef struct tagCANDIDATEPAIR {
    tagCANDIDATE field0;
    tagCANDIDATE field1;
    int field2;
    unsigned short field3;
    unsigned short field4;
    unsigned char field5;
    tagIPPORT field6;
    unsigned int field7;
    int field8;
    int field9;
    int field10;
    int field11;
    int field12;
    int field13;
    int field14;
    int field15;
    tagCANDIDATEPARIR field16;
} tagCANDIDATEPAIR;

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct tagSRTPExchangeInfo {
    char field0;
    char field1;
    void field2;
} tagSRTPExchangeInfo;

typedef struct tagVCAudioRedPayload {
    int payloadType;
    char * buffer;
    int bufferLength;
    unsigned int timestamp;
    BOOL isRedAudio;
    unsigned char redCount;
    unsigned char sequenceOffset;
    unsigned char priority;
} tagVCAudioRedPayload;

typedef struct imageTag {
    int field0;
    int field1;
    int field2;
    int field3;
    int field4;
    int field5;
    int field6;
    float field7;
    int field8;
} imageTag;

typedef struct VCRCMediaPLPFromRemoteInfo {
    unsigned short field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    CGFloat field5;
    CGFloat field6;
    CGFloat field7;
} VCRCMediaPLPFromRemoteInfo;

typedef struct _VCAudioPowerSpectrumMeterRealtimeContext {
} // Error Processing Struct Fields

typedef struct opaqueCMSession {
} // Error Processing Struct Fields

typedef struct tagVCVideoStreamReceiverConfig {
} // Error Processing Struct Fields

typedef struct VCVideoReceiverSampleBuffer_t {
} // Error Processing Struct Fields

typedef struct tagVCVideoPacketBufferConfig {
} // Error Processing Struct Fields

typedef struct VCBlockBuffer_t {
} // Error Processing Struct Fields

typedef struct _RTPMediaPacket {
} // Error Processing Struct Fields

typedef struct opaqueCMFormatDescription {
} // Error Processing Struct Fields

typedef struct OpaqueCMMemoryPool {
} // Error Processing Struct Fields

typedef struct OpaqueVTDecompressionSession {
} // Error Processing Struct Fields

typedef struct VideoPacketBuffer_t {
} // Error Processing Struct Fields

typedef struct OpaqueVCTransportStreamRunLoop {
} // Error Processing Struct Fields

typedef struct _VCSessionParticipantCapabilities {
    BOOL isPeace;
    BOOL isWebRTC;
    int controlChannelVersion;
} _VCSessionParticipantCapabilities;

typedef struct tagVCSpatialAudioMetadataPositionalInfo {
    float positionX;
    float positionY;
    float positionZ;
    unsigned int prominence;
    unsigned int isVisible;
    unsigned int isInCanvas;
} tagVCSpatialAudioMetadataPositionalInfo;

typedef struct _VCSessionParticipantSourceIO {
} // Error Processing Struct Fields

typedef struct tagVCAudioRelayIOContext {
} // Error Processing Struct Fields

typedef struct PacketThread_s {
} // Error Processing Struct Fields

typedef struct tagVCVideoReceiverStreamIDInfo {
    unsigned short streamID;
    unsigned short repairStreamID;
    unsigned short baseStreamID;
    unsigned int subStreamCount;
    unsigned short subStreamIDs;
    unsigned short subStreamRepairIDs;
} tagVCVideoReceiverStreamIDInfo;

typedef struct tagVCVideoReceiverStreamConfig {
} // Error Processing Struct Fields

typedef struct tagVCVideoReceiverConfig {
} // Error Processing Struct Fields

typedef struct _CAImageQueue {
} // Error Processing Struct Fields

typedef struct OpaqueFigImageQueue {
} // Error Processing Struct Fields

typedef struct VCAudioClientSettings {
    BOOL isValid;
    BOOL enableAudioPreWarming;
    int operatingMode;
    int deviceRole;
} VCAudioClientSettings;

typedef struct opaqueVCVoiceDetector {
} // Error Processing Struct Fields

typedef struct tagBufferNode {
    char * field0;
    int field1;
    int field2;
    tagBufferNode field3;
} tagBufferNode;

typedef struct __CFData {
} // Error Processing Struct Fields

typedef struct __SecIdentity {
} // Error Processing Struct Fields

typedef struct VCCSVideoTransmitterVideoRules_t {
    id field0;
    id field1;
    id field2;
} VCCSVideoTransmitterVideoRules_t;

typedef struct SKEStateOpaque {
} // Error Processing Struct Fields

typedef struct VoiceIOFarEndVersionInfo {
    unsigned char farEndHwModel;
    unsigned char farEndOSVersion;
    unsigned int farEndAUVersion;
} VoiceIOFarEndVersionInfo;

typedef struct _VCTextReceiverConfiguration {
} // Error Processing Struct Fields

typedef struct tagAudioFrame {
} // Error Processing Struct Fields

typedef struct tagDecoderSettings {
} // Error Processing Struct Fields

typedef struct tagAudioPacket {
    int field0;
    int field1;
    int field2;
    BOOL field3;
    unsigned short field4;
    unsigned int field5;
    int field6;
    int field7;
    CGFloat field8;
    int field9;
    unsigned char field10;
    int field11;
    unsigned char field12;
    unsigned char field13;
    tagAudioFrame field14;
    int field15;
    CGFloat field16;
    int field17;
    tagDecoderSettings field18;
    BOOL field19;
    unsigned int field20;
    unsigned char field21;
    unsigned short field22;
} tagAudioPacket;

typedef struct tagAudioPacketArray {
} // Error Processing Struct Fields

typedef struct tagVCRealTimeThreadParameters {
    int field0;
} tagVCRealTimeThreadParameters;

typedef struct OpaqueCMClock {
} // Error Processing Struct Fields

typedef struct tagBWEOPTION {
    int field0;
    int field1;
    int field2;
    int field3;
} tagBWEOPTION;

typedef struct _VCSessionOneToOneSettings {
} // Error Processing Struct Fields

typedef struct AudioEventQueue_t {
} // Error Processing Struct Fields

typedef struct _VCTextTransmitterConfiguration {
} // Error Processing Struct Fields

typedef struct _VCSessionParticipantLocalOneToOneSettings {
} // Error Processing Struct Fields

typedef struct tagVCNetworkStreamIdentifiers {
    unsigned int field0;
    unsigned short field1;
    unsigned short field2;
} tagVCNetworkStreamIdentifiers;

typedef struct sockaddr_storage {
    unsigned char ss_len;
    unsigned char ss_family;
    char __ss_pad1;
    NSInteger __ss_align;
    char __ss_pad2;
} sockaddr_storage;

typedef struct _VCAudioIOInitConfiguration {
    unsigned int field0;
    unsigned int field1;
    int field2;
    int field3;
    unsigned int field4;
    unsigned char field5;
    BOOL field6;
    id field7;
    int field8;
    id field9;
    unk field10;
    void field11;
    id field12;
    unk field13;
    void field14;
    unsigned int field15;
    unsigned int field16;
    BOOL field17;
    NSUInteger field18;
    unsigned int field19;
} _VCAudioIOInitConfiguration;

typedef struct SoundDec_t {
} // Error Processing Struct Fields

typedef struct _VCAudioEndpointData {
} // Error Processing Struct Fields

typedef struct tagAVCPositionalInfo {
    unsigned int field0;
    CGSize field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
} tagAVCPositionalInfo;

typedef struct tagVCVideoTransmitterStreamConfig {
} // Error Processing Struct Fields

typedef struct tagVCCryptor {
} // Error Processing Struct Fields

typedef struct _VCAudioPowerSpectrumEntry {
    _VCRange field0;
    float field1;
} _VCAudioPowerSpectrumEntry;

typedef struct tagVideoDecoderConfig {
} // Error Processing Struct Fields

typedef struct CVAViewpointCorrection {
} // Error Processing Struct Fields

typedef struct _VCBitrateConfiguration {
    unsigned short field0;
    unsigned short field1;
    unsigned short field2;
    unsigned short field3;
    unsigned short field4;
} _VCBitrateConfiguration;

typedef struct ConnectionStatsHistory {
    unsigned char latestConnectionStatsIndex;
    unsigned char totalPacketsReceived;
    unsigned char connectionStats;
    unsigned char connectionStatsRatio;
} ConnectionStatsHistory;

typedef struct ConnectionStats {
    unsigned char totalPacketsReceived;
    unsigned char connectionStats;
    unsigned char currentIndex;
    CGFloat startTime;
} ConnectionStats;

typedef struct ConnectionStatsSequenceNumberData {
    unsigned short seqNumber;
    CGFloat receivedTimestamp;
} ConnectionStatsSequenceNumberData;

typedef struct _VCMediaStreamConfigurationProviderVideo {
    NSInteger field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    int field6;
    unsigned int field7;
    BOOL field8;
    unsigned int field9;
} _VCMediaStreamConfigurationProviderVideo;

typedef struct _VCMediaStreamConfigurationProviderAudio {
    unsigned int field0;
    unsigned int field1;
    _VCMediaStreamConfigurationProviderAudioBitrateInfo field2;
    unsigned int field3;
    _VCMediaStreamConfigurationProviderAudioPayload field4;
    unsigned int field5;
    unsigned int field6;
    int field7;
    BOOL field8;
    unsigned int field9;
    unsigned int field10;
} _VCMediaStreamConfigurationProviderAudio;

typedef struct _VCMediaStreamConfigurationProviderAudioBitrateInfo {
    int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
} _VCMediaStreamConfigurationProviderAudioBitrateInfo;

typedef struct _VCMediaStreamConfigurationProviderAudioPayload {
    NSInteger field0;
    int field1;
} _VCMediaStreamConfigurationProviderAudioPayload;

typedef struct VCInfoDetails {
} // Error Processing Struct Fields

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct OpaqueFigCFWeakReferenceHolder {
} // Error Processing Struct Fields

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct _VCVideoFormat {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
} _VCVideoFormat;

typedef struct _VCHardwareConfiguration {
} // Error Processing Struct Fields

typedef struct tagVCIDSChannelDataFormat {
    unsigned short streamIDs;
    unsigned char numOfStreamIDs;
    BOOL probingGroupIDIsSet;
    unsigned short probingGroupID;
    unsigned char priority;
    BOOL pktCountingFlag;
    BOOL participantIDIsSet;
    NSUInteger participantID;
    BOOL participantGenerationCounterIsSet;
    BOOL ignorePriority;
    BOOL statsIDIsSet;
    unsigned short statsID;
    ? statsPayload;
    BOOL isTransitionPacket;
    BOOL isHopByHopEncrypted;
    BOOL encryptionSequenceNumberIDIsSet;
    NSUInteger encryptionSequenceNumber;
} tagVCIDSChannelDataFormat;

typedef struct tagVCTextJitterBufferConfiguration {
    unsigned int sampleRate;
    id delegate;
} tagVCTextJitterBufferConfiguration;

typedef struct JitterPreloadQueue_t {
} // Error Processing Struct Fields

typedef struct JitterQueue_t {
} // Error Processing Struct Fields

typedef struct tagAccessUnitHeaderInfo {
    unsigned short accessUnitCount;
    unsigned short accessUnitSize;
} tagAccessUnitHeaderInfo;

typedef struct _VCMockIDSDatagramChannelPacket {
    _VCSingleLinkedListEntry field0;
    unsigned char field1;
    NSUInteger field2;
    BOOL field3;
    ? field4;
    NSUInteger field5;
} _VCMockIDSDatagramChannelPacket;

typedef struct _tls_record_s {
} // Error Processing Struct Fields

typedef struct sockaddr {
    unsigned char sa_len;
    unsigned char sa_family;
    char sa_data;
} sockaddr;

typedef struct tagVCMediaStreamSyncTime {
    CGFloat ntpTime;
    NSInteger sampleRate;
    unsigned int rtpTimestampOfNTP;
} tagVCMediaStreamSyncTime;

typedef struct __sbuf {
    char * field0;
    int field1;
} __sbuf;

typedef struct __sFILEX {
} // Error Processing Struct Fields

typedef struct __sFILE {
    char * field0;
    int field1;
    int field2;
    short field3;
    short field4;
    __sbuf field5;
    int field6;
    void field7;
    unk field8;
    unk field9;
    unk field10;
    unk field11;
    __sbuf field12;
    __sFILEX field13;
    int field14;
    unsigned char field15;
    unsigned char field16;
    __sbuf field17;
    int field18;
    NSInteger field19;
} __sFILE;

typedef struct tagStreamGroupPayload {
    unsigned char field0;
    unsigned char field1;
    unsigned char field2;
    unsigned char field3;
    unsigned char field4;
    unk field5;
    ? field6;
    ? field7;
} tagStreamGroupPayload;

typedef struct CannedVideoCapturePrivate {
} // Error Processing Struct Fields

typedef struct _VCAudioStreamTransportRealtimeContext {
} // Error Processing Struct Fields

typedef struct OpaqueAudioQueue {
} // Error Processing Struct Fields

typedef struct AudioQueueBuffer {
} // Error Processing Struct Fields

typedef struct _AVCAudioPowerSpectrumMeterConfig {
    NSInteger field0;
    unsigned int field1;
    unsigned short field2;
    CGFloat field3;
} _AVCAudioPowerSpectrumMeterConfig;

typedef struct opaqueVCCaptionsDecoder {
} // Error Processing Struct Fields

typedef struct OpaqueVTCompressionSession {
} // Error Processing Struct Fields

typedef struct OpaqueFigAssetWriter {
} // Error Processing Struct Fields

typedef struct VCStatisticsStatsHistoryElement {
    unsigned char linkID;
    CGFloat statsUpdateTime;
    unsigned int statsTimestamp;
    unsigned int totalPacketSent;
    unsigned int totalPacketReceived;
    NSUInteger totalByteSent;
    NSUInteger totalByteReceived;
    NSUInteger totalByteServerStatsUsed;
    unsigned int maxBurstyLoss;
} VCStatisticsStatsHistoryElement;

typedef struct VCStatisticsSendHistoryElement {
} // Error Processing Struct Fields

typedef struct tagAVCSessionPresentationInfo {
    CGRect field0;
    unsigned int field1;
    unsigned int field2;
    unsigned char field3;
} tagAVCSessionPresentationInfo;

typedef struct tagVCSpatialAudioMetadataGlobalInfo {
    unsigned int displayID;
    float displayWidth;
    float displayHeight;
    float appWindowWidth;
    float appWindowHeight;
    float appWindowPositionX;
    float appWindowPositionY;
    unsigned int uiLayout;
    unsigned int uiState;
} tagVCSpatialAudioMetadataGlobalInfo;

typedef struct tagStreamGroupStreamOptionalPackedPayload {
    unsigned short field0;
    unsigned short field1;
    unsigned char field2;
} tagStreamGroupStreamOptionalPackedPayload;

typedef struct tagAudioHeaderData {
    int field0;
    unsigned int field1;
    unsigned char field2;
    unsigned char field3;
    float field4;
    int field5;
    int field6;
    int field7;
    unsigned char field8;
} tagAudioHeaderData;

typedef struct tagAudioPacketData {
    tagAudioHeaderData field0;
    char * field1;
    int field2;
} tagAudioPacketData;

typedef struct __CTServerConnection {
} // Error Processing Struct Fields

typedef struct tagPKT_TAG {
    NSUInteger field0;
} tagPKT_TAG;

typedef struct tagVPKTFLAG {
    int field0;
    unsigned int field1;
    unsigned int field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
    int field7;
    int field8;
    tagVCSourceDestinationInfo field9;
    int field10;
    int field11;
    int field12;
    int field13;
    int field14;
    BOOL field15;
    BOOL field16;
    BOOL field17;
    tagVCIDSChannelDataFormat field18;
    tagPKT_TAG field19;
    unsigned int field20;
    unsigned char field21;
    BOOL field22;
} tagVPKTFLAG;

typedef struct _VTPPacket {
} // Error Processing Struct Fields

typedef struct fd_set {
    int fds_bits;
} fd_set;

