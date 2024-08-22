// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCCALLSESSION_H
#define VCCALLSESSION_H

@class NSMutableArray, NSDictionary, NSMutableDictionary, TimingCollection, NSNumber, NSString, NSArray, NSData;
@protocol VCSecureDataChannelDelegate, AVTelephonyInterfaceDelegate, VCCaptionsReceiverDelegate, VCTransportSessionLegacyDelegate, AVCRateControllerDelegate, VCAudioIOSink, VCRedundancyControllerDelegate, VCConnectionProtocol, OS_dispatch_queue, OS_dispatch_source, VideoConferenceChannelQualityDelegate, VCCallSessionDelegate;

#import <Foundation/Foundation.h>

#import "VCCallInfo.h"
#import "VCMediaNegotiator.h"
#import "VCSwitchManager.h"
#import "VCAudioPayload.h"
#import "VCVideoRule.h"
#import "VCCapabilities.h"
#import "AVCRateController.h"
#import "VCRateControlMediaController.h"
#import "VCCallLinkCongestionDetector.h"
#import "VCSessionMessaging.h"
#import "VCControlChannel.h"
#import "VCControlChannelMultiWay.h"
#import "VCBitrateArbiter.h"
#import "VCAudioTransmitter.h"
#import "VCCaptionsReceiver.h"
#import "VCDisplayLink.h"
#import "VCRedundancyControllerVideo.h"
#import "VCWCMClient.h"
#import "WRMClient.h"
#import "VCSecureDataChannel.h"
#import "AVTelephonyInterface.h"
#import "VCTransportSession.h"
#import "VCConnectionManager.h"
#import "VCImageAttributeRules.h"
#import "VideoAttributes.h"
#import "GKRingBuffer.h"

@interface VCCallSession : NSObject <VCSecureDataChannelDelegate, AVTelephonyInterfaceDelegate, VCCaptionsReceiverDelegate, VCTransportSessionLegacyDelegate, AVCRateControllerDelegate, VCAudioIOSink, VCRedundancyControllerDelegate>

 {
    VCCallInfo *remoteCallInfo;
    NSInteger packetMultiplexMode;
    *tagHANDLE rtpVideo;
    *void videoMediaControlInfoGenerator;
    *void audioMediaControlInfoGenerator;
    id<VCConnectionProtocol> *toBeChangedPrimaryConnection;
    VCMediaNegotiator *_mediaNegotiator;
    VCSwitchManager *_switchManager;
    NSObject<OS_dispatch_queue> *connectionChangeQueue;
    NSMutableArray *negotiatedAudioPayloads;
    VCAudioPayload *currentAudioPayload;
    VCAudioPayload *currentDTXPayload;
    int _currentRedPayloadType;
    VCVideoRule *_currentEncodeRule;
    BOOL _isRedEnabled;
    NSInteger screenPayload;
    *tagHANDLE hSIP;
    _opaque_pthread_mutex_t mutex;
    int iRemoteRTPPort;
    int iRemoteRTCPPort;
    VCCapabilities *caps;
    AVCRateController *_rateController;
    VCRateControlMediaController *_mediaController;
    BOOL useSBR;
    NSDictionary *_allPayloadsLocalFeaturesString;
    NSMutableDictionary *featureListStringDict;
    _opaque_pthread_mutex_t pauseLock;
    NSObject<OS_dispatch_queue> *videoQueue;
    NSObject<OS_dispatch_queue> *videoAsyncQueue;
    NSObject<OS_dispatch_queue> *audioQueue;
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;
    BOOL allowAudioRecording;
    int aacBlockSize;
    BOOL _isUseCaseWatchContinuity;
    int carrierBitrateCap;
    tagVCAudioFrameFormat _vpioFormat;
    BOOL allowAudioSwitching;
    BOOL shouldUpdateLastReceivedPacketTimestamp;
    CGFloat lastReceivedPacketTimestamp;
    unsigned int _mediaStallCount;
    CGFloat _mediaStallTotalTime;
    CGFloat _maxMediaStallTime;
    CGFloat _lastMediaStallStartTime;
    BOOL _isRemoteMediaStalledShort;
    int packetsSinceStall;
    int packetsSinceShortMediaStall;
    NSObject<OS_dispatch_source> *pausedAudioHeartBeat;
    TimingCollection *perfTimers;
    CGFloat timeLastCheckedNetworkConditions;
    CGFloat packetLossRateAccum;
    CGFloat packetLossRateCount;
    CGFloat timeLastPLR5Secs;
    CGFloat timeLastKnowGoodNetworkPLR;
    CGFloat timeLastKnowGoodNetworkRTT;
    int abnormalOWRDCount;
    int sampleLogCount;
    CGFloat timeSinceLastReportedNoPackets;
    CGFloat noRemotePacketsTimeout;
    CGFloat _remoteMediaStallTimeout;
    BOOL previousNoRemoteInProgress;
    BOOL didAttemptSIPInvite;
    NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;
    _opaque_pthread_mutex_t qualityDelegateLock;
    NSObject<OS_dispatch_queue> *qualityQueue;
    _opaque_pthread_mutex_t srtpLock;
    BOOL didPrepareSRTP;
    BOOL useAFRC;
    BOOL useVCRC;
    VCCallLinkCongestionDetector *congestionDetector;
    BOOL isGKVoiceChat;
    BOOL bBWEstOperatingModeInitialized;
    BOOL bBWEstNewBWEstModeEnabled;
    BOOL bBWEstFakeLargeFrameModeEnabled;
    BOOL bBWEstActiveProbingSenderLog;
    CGSize remoteScreenPortraitAspectRatio;
    CGSize remoteScreenLandscapeAspectRatio;
    CGSize remoteExpectedPortraitAspectRatio;
    CGSize remoteExpectedLandscapeAspectRatio;
    BOOL isInitiator;
    BOOL sentClientSuccessfulDidStart;
    CGFloat videoThrottlingTimeout;
    unsigned int awdCallNonce;
    VCSessionMessaging *messaging;
    VCControlChannel *controlChannel;
    VCControlChannelMultiWay *secureControlChannel;
    BOOL isCurrentNetworkBad;
    unsigned int callSessionBitrate;
    NSObject<OS_dispatch_queue> *cellTechQueue;
    NSObject<OS_dispatch_source> *cellTechChangeSource;
    TimingCollection *cameraTimers;
    VCBitrateArbiter *callSessionBitrateArbiter;
    NSObject<OS_dispatch_source> *connectionTimeoutSource;
    NSObject<OS_dispatch_source> *firstRemoteFrameTimemoutSource;
    NSInteger initialSentBytes;
    NSInteger initialReceivedBytes;
    VCAudioTransmitter *audioTransmitter;
    VCCaptionsReceiver *_captionsReceiver;
    *tagHANDLE hVideoReceiver;
    *tagHANDLE hVideoTransmitter;
    VCDisplayLink *_displayLink;
    VCRedundancyControllerVideo *_videoRedundancyController;
    BOOL remoteSupportsVisibleRect;
    BOOL remoteSupportsExpectedAspectRatio;
    BOOL canLocalResizePIP;
    BOOL canRemoteResizePIP;
    BOOL receivedFirstRemoteFrame;
    int fecMode;
    NSObject<OS_dispatch_source> *sessionHealthMonitor;
    CGFloat lastVideoQualityNotificationUpdate;
    CGFloat lastVideoCallAlarmTime;
    VCWCMClient *vcWCMClient;
    WRMClient *vcWRMClient;
    BOOL iRATSuggestionEnabled;
    *OpaqueVTPixelTransferSession hdTransferSession;
    *__CVPixelBufferPool hdBufferPool;
    CGSize expectedDecodeSize;
    *opaqueRTCReporting reportingAgent;
    int reportingModuleID;
    BOOL didReportNoRemotePackets;
    BOOL didReportLongConnectionTime;
    BOOL didReportAudioStall;
    BOOL enableRateControlDump;
    unsigned int _targetBitrate;
    unsigned int _rateChangeCounter;
    unsigned int awdTime;
    *SKEStateOpaque skeState;
    *__CFData secretKey;
    VCSecureDataChannel *secureDataChannel;
    AVTelephonyInterface *telephonyInterface;
    unsigned int dwRTT_ice;
    NSObject<OS_dispatch_queue> *timestampQueue;
    BOOL shouldSendBlackFrame;
    unsigned int _peerProtocolVersion;
    *tagWRMMetricsInfo wrmInfo;
    BOOL _shouldReportWRMMetrics;
    BOOL _inviteDataRequested;
    unsigned int _transportType;
    VCTransportSession *_transportSession;
    BOOL _cleanupDone;
    BOOL _isLocalCellular_LowestConnectionQuality;
    BOOL _isRemoteCellular_LowestConnectionQuality;
    BOOL _isConnectedOnIPv6_LowestConnectionQuality;
    *void _callLogFile;
    BOOL _isWRMNotificationPending;
    ? _savedWRMNotification;
}


@property (readonly) BOOL audioIsPaused; // ivar: audioIsPaused
@property (readonly) *tagVCAudioReceiver audioReceiver; // ivar: audioReceiver
@property (readonly, nonatomic) int audioTierAudioCodecBitrate;
@property (readonly, nonatomic) int audioTierNetworkBitrate;
@property (readonly, nonatomic) int audioTierPacketsPerBundle;
@property (readonly, nonatomic) int audioTierPayload;
@property (readonly, nonatomic) int audioTierRedNumPayloads;
@property int bandwidthDownstream; // ivar: bandwidthDownstream
@property int bandwidthUpstream; // ivar: bandwidthUpstream
@property (retain, nonatomic) NSNumber *basebandCodecSampleRate; // ivar: basebandCodecSampleRate
@property (copy, nonatomic) NSString *basebandCodecType; // ivar: basebandCodecType
@property (readonly) int bundledPackets;
@property (retain) VCCapabilities *capabilities;
@property NSInteger connectionChangeState; // ivar: connectionChangeState
@property (retain) VCConnectionManager *connectionManager; // ivar: connectionManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSObject<VCCallSessionDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property int deviceRole; // ivar: _deviceRole
@property BOOL didSend200OK; // ivar: didSend200OK
@property (readonly, nonatomic) NSDictionary *dtxMetrics;
@property *tagHANDLE hAFRC; // ivar: hAFRC
@property *tagHANDLE hMediaQueue; // ivar: hMediaQueue
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VCImageAttributeRules *imageAttributeRules; // ivar: imageAttributeRules
@property unsigned char inputMeter;
@property (readonly) BOOL isAudioRunning; // ivar: isAudioRunning
@property (readonly, nonatomic) BOOL isCaller;
@property (readonly) BOOL isCurrentPayloadTypeValid;
@property BOOL isGKVoiceChat;
@property (nonatomic) BOOL isRTCPFBEnabled; // ivar: isRTCPFBEnabled
@property (readonly) BOOL isRemoteMediaStalled; // ivar: isRemoteMediaStalled
@property (readonly) BOOL isSKEOptimizationEnabled;
@property (nonatomic) BOOL isStarted; // ivar: isStarted
@property (readonly) BOOL isVideoRunning;
@property BOOL isWaitingForICEResult; // ivar: isWaitingForICEResult
@property CGFloat lastDecodedFrameTime; // ivar: _lastDecodedFrameTime
@property unsigned int lastReceived; // ivar: lastReceived
@property (readonly) unsigned int lastSentAudioSampleTime;
@property (readonly) VCCallInfo *localCallInfo; // ivar: localCallInfo
@property unsigned short maxPacketLength; // ivar: maxPacketLength
@property (retain, nonatomic) NSArray *mutedPeers; // ivar: mutedPeers
@property (nonatomic) int natType; // ivar: natType
@property (nonatomic) CGFloat networkConditionsTimeoutInSeconds; // ivar: networkConditionsTimeoutInSeconds
@property (readonly) CGFloat networkQuality;
@property (readonly) int numBufferBytesAvailable;
@property (nonatomic) int operatingMode; // ivar: operatingMode
@property (nonatomic) float packetLateAndMissingRatio; // ivar: packetLateAndMissingRatio
@property (nonatomic) CGFloat packetLossRate; // ivar: packetLossRate
@property (nonatomic) CGFloat packetLossRate5Secs; // ivar: packetLossRate5Secs
@property int packetsPerBundle;
@property (copy, nonatomic) NSString *peerCN; // ivar: peerCN
@property (copy, nonatomic) NSString *peerReportingID; // ivar: peerReportingID
@property int preferredAudioCodec; // ivar: preferredAudioCodec
@property NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;
@property BOOL receivedSIPInvite; // ivar: receivedSIPInvite
@property unsigned int remoteFrameHeight; // ivar: remoteFrameHeight
@property unsigned int remoteFrameWidth; // ivar: remoteFrameWidth
@property (retain, nonatomic) VideoAttributes *remoteVideoAttributes; // ivar: remoteVideoAttributes
@property (readonly, nonatomic) *opaqueRTCReporting reportingAgent;
@property (nonatomic) BOOL requiresWifi;
@property (retain, nonatomic) GKRingBuffer *ringBuf; // ivar: ringBuf
@property (nonatomic) CGFloat roundTripTime; // ivar: roundTripTime
@property *tagHANDLE rtpHandle; // ivar: rtpHandle
@property NSInteger sampleRate; // ivar: sampleRate
@property (copy, nonatomic) NSString *sessionID; // ivar: sessionID
@property (nonatomic) BOOL shouldSendAudio; // ivar: shouldSendAudio
@property BOOL shouldTimeoutPackets; // ivar: shouldTimeoutPackets
@property (nonatomic) int signalStrengthBars; // ivar: _signalStrengthBars
@property (nonatomic) int signalStrengthDisplayBars; // ivar: _signalStrengthDisplayBars
@property (nonatomic) int signalStrengthMaxDisplayBars; // ivar: _signalStrengthMaxDisplayBars
@property NSInteger sipState; // ivar: _sipState
@property (retain) NSData *srtpKeyBytes; // ivar: srtpKeyBytes
@property NSInteger state; // ivar: state
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useCompressedConnectionData;
@property BOOL useControlByte; // ivar: useControlByte
@property (nonatomic) BOOL useRateControl; // ivar: useRateControl
@property BOOL useUEP; // ivar: useUEP
@property (readonly) BOOL videoIsPaused;
@property NSInteger videoPayload; // ivar: videoPayload


+(id)getDecodePayloadTypes:(int)arg0 secondaryPayloadTypes:(id)arg1 ;
+(id)keyPathsForValuesAffectingNetworkQuality;
+(int)setRxPayloadList:(struct tagHANDLE *)arg0 withPayloadTypes:(id)arg1 ;
+(int)setRxPayloadList:(struct tagHANDLE *)arg0 withPayloadTypes:(id)arg1 isRedEnabled:(BOOL)arg2 ;
+(void)stopSecureControlChannel:(id)arg0 ;
-(?)createSDP:(?)arg0 audioPayloadCount:(?)arg1 secondaryPayloadTypes:(?)arg2 secondaryPayloadCount:(?)arg3 videoPayloadTypes:(?)arg4 videoPayloadCount:(?)arg5 localFeatureList:(?)arg6 answerBandwidth:(?)arg7 maxBandwidth:(?)arg8 imageSizesSend:(?)arg9 imageSendCount:(?)arg10 imageSizesRecv:(?)arg11 imageRecvCount:(?)arg12 sdp:(?)arg13 numSDPByteserror;
-(?)updateVCRateControlWRMMetrics;
-(BOOL)applyNegotiatedAudioSettings:(*id)arg0 ;
-(BOOL)applyNegotiatedVideoSettings:(*id)arg0 ;
-(BOOL)canNegotiateVideoPayload:(int)arg0 supportedPayloads:(id)arg1 isLocalOnCellular:(BOOL)arg2 isRemoteOnCellular:(BOOL)arg3 ;
-(BOOL)canSendSIPInviteWithError:(*id)arg0 ;
-(BOOL)cancel:(id)arg0 ;
-(BOOL)chooseDTXPayloads:(id)arg0 ;
-(BOOL)choosePayload:(id)arg0 ;
-(BOOL)chooseSecondaryPayloads:(id)arg0 ;
-(BOOL)chooseVideoPayload:(id)arg0 operatingMode:(int)arg1 isLocalOnCellular:(BOOL)arg2 isRemoteOnCellular:(BOOL)arg3 ;
-(BOOL)chooseVideoPayloadForInterface:(int)arg0 ;
-(BOOL)configureLegacyTransportWithInviteInfo:(id)arg0 error:(*id)arg1 ;
-(BOOL)createAudioTransmitter:(*id)arg0 ;
-(BOOL)createMediaQueueHandle:(*id)arg0 ;
-(BOOL)createRTPHandles:(*id)arg0 ;
-(BOOL)createVideoReceiverWithReportingAgent:(struct opaqueRTCReporting *)arg0 fecHeaderV1Enabled:(BOOL)arg1 videoJBEnabled:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)disconnect:(id)arg0 didRemoteCancel:(BOOL)arg1 ;
-(BOOL)disconnectInternal:(BOOL)arg0 disconnectError:(id)arg1 didRemoteCancel:(BOOL)arg2 ;
-(BOOL)doesVideoPayloadMatchRemoteImageAttributeRules:(id)arg0 ;
-(BOOL)establishSIPDialogWithSDP:(id)arg0 error:(*id)arg1 ;
-(BOOL)evaluateEnableRRx:(*int)arg0 ;
-(BOOL)getVideoSettings:(int)arg0 forInterface:(int)arg1 payload:(int)arg2 width:(*int)arg3 height:(*int)arg4 framerate:(*int)arg5 bitRate:(*int)arg6 ;
-(BOOL)initializeDisplayLinkWithError:(*id)arg0 ;
-(BOOL)initializeVideoReceiver:(*id)arg0 reportingAgent:(struct opaqueRTCReporting *)arg1 fecHeaderV1Enabled:(BOOL)arg2 videoJBEnabled:(BOOL)arg3 ;
-(BOOL)initializeVideoTransmitter:(*id)arg0 videoRules:(struct VCCSVideoTransmitterVideoRules_t *)arg1 unpausing:(BOOL)arg2 reportingAgent:(struct opaqueRTCReporting *)arg3 fecHeaderV1Enabled:(BOOL)arg4 isFECGeneratorEnabled:(BOOL)arg5 ;
-(BOOL)isBetterForSIPInviteWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg0 thanSession:(id)arg1 ;
-(BOOL)isCallOngoing;
-(BOOL)isFECGeneratorEnabled;
-(BOOL)isLocalOrRemoteOnCellular;
-(BOOL)isLowBitrateCodecPreferred:(id)arg0 ;
-(BOOL)isSIPEnabled;
-(BOOL)isSecureMessagingRequired;
-(BOOL)isValidVideoPayloadOverride:(id)arg0 ;
-(BOOL)negotiateMaxBandwidth:(*int)arg0 ;
-(BOOL)negotiatePayloads:(*id)arg0 withError:(*id)arg1 ;
-(BOOL)onCaptureFrame:(struct opaqueCMSampleBuffer *)arg0 audioTS:(unsigned int)arg1 audioHT:(CGFloat)arg2 videoHT:(struct ? )arg3 cameraBits:(unsigned char)arg4 ;
-(BOOL)prepareSRTPWithError:(*id)arg0 ;
-(BOOL)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg0 rtpTimestamp:(*unsigned int)arg1 lastReceivedAudioTime:(*CGFloat)arg2 padding:(char *)arg3 paddingLength:(char *)arg4 silence:(*int)arg5 ;
-(BOOL)sendSIPInviteWithError:(*id)arg0 ;
-(BOOL)setMatchedFeaturesString:(char *)arg0 localFeaturesString:(id)arg1 remoteFeaturesString:(id)arg2 ;
-(BOOL)setMediaQueueStreamSettings;
-(BOOL)setPauseAudio:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setPauseAudio:(BOOL)arg0 force:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)setPauseVideo:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setPauseVideo:(BOOL)arg0 force:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)setRTPPayloads:(id)arg0 withError:(*id)arg1 ;
-(BOOL)setupAudioCodecWithPayload:(int)arg0 ;
-(BOOL)setupAudioCookies;
-(BOOL)setupCallerRTPChannelWithError:(*id)arg0 ;
-(BOOL)setupIDSConnectionForCallID:(unsigned int)arg0 destination:(id)arg1 socket:(int)arg2 error:(*id)arg3 ;
-(BOOL)shouldNotifyDelegateDidStartBeforeAudioSetup;
-(BOOL)sipConnectWithError:(*id)arg0 ;
-(BOOL)startAFRC:(*id)arg0 ;
-(BOOL)startConnectionWithParticipantID:(id)arg0 callID:(unsigned int)arg1 usingInviteData:(id)arg2 isCaller:(BOOL)arg3 capabilities:(id)arg4 idsSocket:(int)arg5 destination:(id)arg6 error:(*id)arg7 ;
-(BOOL)startMediaQueue:(*id)arg0 ;
-(BOOL)startMediaWithPreNegotiatedSettings:(*id)arg0 ;
-(BOOL)startRateControl:(*id)arg0 ;
-(BOOL)startVCRC:(*id)arg0 ;
-(BOOL)startVideo:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)startVideoReceive:(*id)arg0 ;
-(BOOL)startVideoSend:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)stillWantsToRelay;
-(BOOL)stopMediaQueue:(*id)arg0 ;
-(BOOL)stopRateControl:(*id)arg0 ;
-(BOOL)stopVideo:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)stopVideoReceive:(*id)arg0 isPausing:(BOOL)arg1 ;
-(BOOL)stopVideoSend:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)treatAsCellular;
-(BOOL)videoReceiverInitializationError:(*id)arg0 withDescription:(id)arg1 ;
-(CGFloat)audioReceivingBitrateKbps;
-(CGFloat)audioTransmittingBitrateKbps;
-(CGFloat)sessionReceivingBitrate;
-(CGFloat)sessionReceivingFramerate;
-(CGFloat)sessionTransmittingBitrate;
-(CGFloat)sessionTransmittingFramerate;
-(NSInteger)calculateSIPEndAction:(BOOL)arg0 currentState:(NSInteger)arg1 error:(id)arg2 ;
-(char *)matchedFeaturesStringForPayload:(int)arg0 ;
-(id)activeControlChannel;
-(id)addAudioPayload:(int)arg0 ;
-(id)allPayloadsLocalFeaturesString;
-(id)callMetadata;
-(id)createInviteSDPWithError:(*id)arg0 ;
-(id)getCompatibleLocalFeatureListForPayloads:(*int)arg0 count:(int)arg1 ;
-(id)getFeatureListStringForPayload:(int)arg0 ;
-(id)getVideoRuleForVideoMode:(NSUInteger)arg0 interface:(int)arg1 sessionBitrate:(*int)arg2 ;
-(id)init;
-(id)initWithDeviceRole:(int)arg0 transportType:(unsigned int)arg1 isGKVoiceChat:(BOOL)arg2 reportingHierarchyToken:(id)arg3 ;
-(id)inviteDataForParticipantID:(id)arg0 callID:(*unsigned int)arg1 remoteInviteData:(id)arg2 nonCellularCandidateTimeout:(CGFloat)arg3 error:(*id)arg4 ;
-(id)localParticipantID;
-(id)negotiatedAudioPayloadTypes;
-(id)newConfigForPayloadType:(int)arg0 ;
-(id)newMediaBlobWithRemoteMediaBlob:(id)arg0 localCallID:(unsigned int)arg1 isLowBitrateCodecPreferred:(BOOL)arg2 ;
-(id)newMediaNegotiatorAudioConfigurationWithAllowAudioSwitching:(BOOL)arg0 useSBR:(BOOL)arg1 aacBlockSize:(unsigned int)arg2 ;
-(id)newRemoteScreenAttributesForOrientation:(int)arg0 ;
-(id)newSKEBlobWithRemoteSKEBlob:(id)arg0 ;
-(id)pickFeaturesStringForPayload:(int)arg0 featureListDict:(id)arg1 remote:(BOOL)arg2 ;
-(id)remoteParticipantID;
-(id)vcrcServerBag;
-(int)Conference_SetBWEstMode:(BOOL)arg0 bFakeLargeFrameMode:(BOOL)arg1 ;
-(int)applyFeatureListStringForPayload:(int)arg0 ;
-(int)fillMediaControlInfo:(*void)arg0 ;
-(int)flushBasebandQueueWithPayloads:(id)arg0 flushCount:(*unsigned int)arg1 ;
-(int)getAllCompatibleVideoPayloads:(**int)arg0 forMediaType:(int)arg1 ;
-(int)getAudioTxBitrate;
-(int)handleIncomingWithCallID:(unsigned int)arg0 msgIn:(char *)arg1 msgOut:(char *)arg2 optional:(*void)arg3 confIndex:(*int)arg4 error:(*id)arg5 ;
-(int)interfaceForCurrentCall;
-(int)learntBitrateForSegment:(id)arg0 defaultValue:(int)arg1 ;
-(int)mapPacketMultiplexModeToRTPMode:(NSInteger)arg0 ;
-(int)mapPacketMultiplexModeToSIPMode:(NSInteger)arg0 ;
-(int)negotiatedReceivingFramerate;
-(int)processMediaControlInfo:(*void)arg0 isAudio:(BOOL)arg1 ;
-(int)setSKEBlobOnTransportSession;
-(int)setupEncryptionWithKey:(struct __CFData **)arg0 confIndex:(*int)arg1 ;
-(int)sipCallback:(int)arg0 callID:(unsigned int)arg1 msgIn:(char *)arg2 msgOut:(char *)arg3 optional:(*void)arg4 confIndex:(*int)arg5 ;
-(struct CGSize )computeVisibleAspectRatioWithRemoteScreenAspectRatio:(struct CGSize )arg0 remoteExpectedAspectRatio:(struct CGSize )arg1 encodeWidth:(int)arg2 encodeHeight:(int)arg3 ;
-(struct __SecIdentity *)retrieveIdentity;
-(unsigned char)defaultMediaControlInfoFECFeedbackVersion;
-(unsigned char)mediaControlInfoFECFeedbackVersion;
-(unsigned int)audioRTPID;
-(unsigned int)callID;
-(unsigned int)codecBitmapForPayloads:(id)arg0 ;
-(unsigned int)currentAudioCap;
-(unsigned int)maxBitrateForConnectionType;
-(unsigned int)parameterSetForPayload:(int)arg0 ;
-(unsigned int)primaryConnectionType;
-(unsigned int)vcrcServerBagProfileNumber;
-(unsigned int)videoRTPID;
-(void)addLocalCallInfoToInviteDictionary:(id)arg0 ;
-(void)addScreenConfigToSDP:(id)arg0 ;
-(void)adjustBitrateForConnectionType;
-(void)applyNegotiatedCaptionsSettings;
-(void)applyNegotiatedFaceTimeSettings;
-(void)applyNegotiatedMomentsSettings;
-(void)applyNegotiatedSettings;
-(void)avTelephonyInterface:(id)arg0 vocoderInfoChangedToType:(id)arg1 sampleRate:(id)arg2 ;
-(void)callAlarmsWithRTPTimeStamp:(struct ? *)arg0 ;
-(void)cancelConnectionTimeoutTimer;
-(void)cancelFirstRemoteFrameTimer;
-(void)checkAbnormalOWRDAndResetLagReference;
-(void)cleanUpDisplayLink;
-(void)cleanUpVideoRTP;
-(void)cleanUpVideoReceiver;
-(void)cleanUpVideoTransmitter;
-(void)cleanupMedia;
-(void)cleanupWCMClient;
-(void)cleanupWRMClient;
-(void)configureRateController;
-(void)controlChannel:(id)arg0 receivedData:(id)arg1 transactionID:(unsigned int)arg2 fromParticipant:(id)arg3 ;
-(void)dealloc;
-(void)didReceiveCaptions:(id)arg0 ;
-(void)disableSessionHealthMonitor;
-(void)disconnectWithNoRemotePackets:(NSInteger)arg0 ;
-(void)disconnectWithNoRemotePackets:(NSInteger)arg0 timeoutUsed:(CGFloat)arg1 ;
-(void)doSipEndAction:(int)arg0 callID:(unsigned int)arg1 error:(id)arg2 ;
-(void)doSipEndProc:(id)arg0 ;
-(void)enableAudio:(BOOL)arg0 ;
-(void)enableSessionHealthMonitor;
-(void)gatherRealtimeStats:(struct __CFDictionary *)arg0 ;
-(void)getAllPayloadsForAudio:(**int)arg0 count:(*int)arg1 secondaryPayloads:(**int)arg2 secondaryCount:(*int)arg3 ;
-(void)getAllPayloadsForScreen:(**int)arg0 count:(*int)arg1 ;
-(void)getAllPayloadsForVideo:(**int)arg0 count:(*int)arg1 ;
-(void)getFrontCaptureTime:(*float)arg0 backCaptureTime:(*float)arg1 ;
-(void)handleCellTechChange:(int)arg0 ;
-(void)handleCellularMTUChanged:(unsigned short)arg0 ;
-(void)handleDuplicationEnabled:(BOOL)arg0 activeConnection:(id)arg1 ;
-(void)handleFirstConnectionSetup:(id)arg0 ;
-(void)handleKeyExchangeCompleted;
-(void)handleMediaReceivedOverPeerToPeerLinkWithConnectionId:(int)arg0 ;
-(void)handleMediaReceivedOverRelayLinkWithConnectionId:(int)arg0 ;
-(void)handleNewConnectionSetup:(id)arg0 isInitialConnection:(BOOL)arg1 ;
-(void)handlePendingPrimaryConnectionChange;
-(void)handlePrimaryConnectionChanged:(id)arg0 oldPrimaryConnection:(id)arg1 ;
-(void)handleReceivedPiggybackBlobIDS:(id)arg0 ;
-(void)handleReceivedPiggybackBlobLegacy:(id)arg0 ;
-(void)handleVideoReceiverInitializationFailed;
-(void)initWithRelevantStorebagEntries;
-(void)localCameraSwitchedFrom:(int)arg0 to:(int)arg1 ;
-(void)lock;
-(void)logConnectionSuccess;
-(void)logDetailedNetworkInformation;
-(void)logIdentity:(struct __SecIdentity *)arg0 ;
-(void)logPerfTimings;
-(void)mediaController:(*void)arg0 mediaSuggestionDidChange:(struct VCRateControlMediaSuggestion )arg1 ;
-(void)messageVCMomentsRequest:(id)arg0 ;
-(void)negotiateFeaturesString:(id)arg0 forPayload:(int)arg1 ;
-(void)negotiateMediaMaxBandwidth;
-(void)nofityDelegateReceivedRemoteFrame:(struct __CVBuffer *)arg0 frameTime:(struct ? )arg1 cameraStatusBits:(unsigned char)arg2 newRemoteVideoAttributes:(id)arg3 remoteScreenAttributes:(id)arg4 ;
-(void)notifyDelegateActiveConnectionDidChange;
-(void)notifyDelegateAndEndCall:(NSInteger)arg0 didRemoteCancel:(BOOL)arg1 error:(id)arg2 ;
-(void)notifyDelegateSessionStarted;
-(void)onPlayVideo:(struct __CVBuffer *)arg0 frameTime:(struct ? )arg1 cameraStatusBits:(unsigned char)arg2 ;
-(void)packMeters:(char *)arg0 withLength:(char *)arg1 ;
-(void)primaryConnectionDidChangeTo:(id)arg0 oldConnection:(id)arg1 ;
-(void)processBlackFrame:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)processCancelRelayRequest:(id)arg0 didOriginateRequest:(BOOL)arg1 ;
-(void)processRelayRequestResponseDict:(id)arg0 didOriginateRequest:(BOOL)arg1 ;
-(void)processRelayUpdateDict:(id)arg0 didOriginateRequest:(BOOL)arg1 ;
-(void)processRemoteIPChange:(id)arg0 callID:(unsigned int)arg1 ;
-(void)processResolutionChangeToVideoRule:(id)arg0 captureRule:(id)arg1 featureListString:(id)arg2 ;
-(void)processSIPMessage:(char *)arg0 msgOut:(char *)arg1 optional:(*void)arg2 confIndex:(*int)arg3 ;
-(void)processSymptomFromMessage:(id)arg0 participantID:(id)arg1 isLocalInitiated:(BOOL)arg2 isLocalSideOnly:(BOOL)arg3 ;
-(void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg0 ;
-(void)rateController:(id)arg0 targetBitrateDidChange:(unsigned int)arg1 rateChangeCounter:(unsigned int)arg2 ;
-(void)rcvdFirstRemoteFrame;
-(void)redundancyController:(id)arg0 redundancyIntervalDidChange:(CGFloat)arg1 ;
-(void)redundancyController:(id)arg0 redundancyPercentageDidChange:(unsigned int)arg1 ;
-(void)redundancyController:(id)arg0 redundancyVectorDidChange:(struct ? )arg1 ;
-(void)releaseRTPHandles;
-(void)remoteCellTechStateUpdate:(int)arg0 maxRemoteBitrate:(unsigned int)arg1 ;
-(void)remotePauseDidChangeToState:(BOOL)arg0 forVideo:(BOOL)arg1 ;
-(void)reportDashboardEndResult:(BOOL)arg0 ;
-(void)reportHandoverResultsWithDictionary:(id)arg0 localBitrateCap:(int)arg1 remoteBitrateCap:(int)arg2 ;
-(void)reportImmediateWRMMetric:(int)arg0 value:(NSUInteger)arg1 ;
-(void)reportOperatingMode;
-(void)reportSymptom:(unsigned int)arg0 ;
-(void)reportWRMMetrics:(struct ? *)arg0 ;
-(void)reportingMomentsWithRequest:(id)arg0 ;
-(void)requestWRMNotification;
-(void)resetVideoRulesForInterface:(int)arg0 videoReportingDictionary:(id)arg1 ;
-(void)schedulePrimaryConnectionChange:(id)arg0 oldConnection:(id)arg1 ;
-(void)sendARPLData:(id)arg0 toCallID:(unsigned int)arg1 ;
-(void)sendBasebandCodecMessage;
-(void)sendCallingModeMessage;
-(void)sendData:(id)arg0 messageType:(unsigned int)arg1 encrypted:(BOOL)arg2 ;
-(void)sendSymptomToRemote:(id)arg0 groupID:(id)arg1 ;
-(void)sendTimings;
-(void)sendWRMStatusUpdate:(struct ? *)arg0 ;
-(void)setCurrentEncodeRule:(id)arg0 ;
-(void)setDuplicationFlag:(BOOL)arg0 withPreferredLocalLinkTypeForDuplication:(int)arg1 notifyPeer:(BOOL)arg2 ;
-(void)setLocalIdentityForKeyExchange;
-(void)setPeerProtocolVersion:(unsigned int)arg0 ;
-(void)setPreWarmState:(BOOL)arg0 ;
-(void)setRemoteCallInfoFromInviteDictionary:(id)arg0 ;
-(void)setResumeAudio;
-(void)setResumeVideo;
-(void)setSessionConferenceState:(unsigned int)arg0 callID:(unsigned int)arg1 ;
-(void)setSessionConferenceVisualRectangle:(struct CGRect )arg0 callID:(unsigned int)arg1 ;
-(void)setSuspendAudio;
-(void)setSuspendVideo;
-(void)setUpFirstRemoteFrameTimer;
-(void)setWRMCoexMetrics:(id)arg0 ;
-(void)setWRMMetricConfig:(struct ? *)arg0 ;
-(void)setWRMNotification:(struct ? *)arg0 ;
-(void)setupAACELDPayload:(int)arg0 ;
-(void)setupABTesting;
-(void)setupAudioOnOffStateMessages;
-(void)setupAudioPauseMessages;
-(void)setupAudioPausedHBMessages;
-(void)setupBasebandCodecInfoMessages;
-(void)setupBitrateNegotiation;
-(void)setupCalleeSIPStartTimeout:(float)arg0 ;
-(void)setupCallingModeMessages;
-(void)setupCellTechChangeMessages;
-(void)setupConnectionTimeoutTimerWithErrorCode:(int)arg0 detailedCode:(int)arg1 description:(id)arg2 reason:(id)arg3 ;
-(void)setupDTLSDefaults;
-(void)setupDisconnectMessage;
-(void)setupHandoverCandidateChangeMessage;
-(void)setupMessaging;
-(void)setupMomentsMessages;
-(void)setupPeerInfo:(id)arg0 usingInviteData:(id)arg1 isCaller:(BOOL)arg2 capabilities:(id)arg3 ;
-(void)setupPiPStateChangeMessage;
-(void)setupPreferredInterfaceMessage;
-(void)setupSecureDataChannel;
-(void)setupSymptomEnabledMessage;
-(void)setupVideoPauseMessages;
-(void)setupWCMClient;
-(void)setupWRMAlertStateUpdateMessage;
-(void)setupWRMClient;
-(void)setupWRMCoexMetricsMessage;
-(void)shouldSendBlackFrame:(BOOL)arg0 ;
-(void)shutdownVoiceChatFromRemoteSIPSignal:(int)arg0 withReason:(char *)arg1 ;
-(void)sipConnectThreadProc:(id)arg0 ;
-(void)startAWDStats;
-(void)startAudioIOWithCompletionHandler:(id)arg0 ;
-(void)startAudioWithCompletionHandler:(id)arg0 ;
-(void)startPausedHeartbeat;
-(void)stopAudioIO:(id)arg0 ;
-(void)stopAudioWithCompletionHandler:(id)arg0 ;
-(void)stopPausedHeartbeat;
-(void)thermalLevelDidChange:(int)arg0 ;
-(void)timeoutUnfinishedConnection;
-(void)transportSession:(id)arg0 cancelRelayRequest:(id)arg1 ;
-(void)transportSession:(id)arg0 connectionSetupDataDidChange:(id)arg1 ;
-(void)transportSession:(id)arg0 initiateRelayRequest:(id)arg1 ;
-(void)transportSession:(id)arg0 sendRelayResponse:(id)arg1 ;
-(void)triggerInterfaceChange;
-(void)unlock;
-(void)updateCachedConnectionState;
-(void)updateDeviceRole:(int)arg0 ;
-(void)updateLastReceivedAudioTime;
-(void)updateLastReceivedPacket:(BOOL)arg0 packetType:(int)arg1 ;
-(void)updateLastReceivedPacketWithTimestamp:(CGFloat)arg0 packetType:(int)arg1 ;
-(void)updateMaxPktLength;
-(void)updateNetworkCheckHint:(CGFloat)arg0 ;
-(void)updateRemoteMediaStallState:(CGFloat)arg0 ;
-(void)updateRemoteMediaStallStateReporting:(CGFloat)arg0 ;
-(void)updateStatistics:(struct ? )arg0 ;
-(void)updateVideoQualityNotification:(CGFloat)arg0 ;
-(void)updateVideoQualityStatusWithTime:(CGFloat)arg0 isRemote:(BOOL)arg1 ;
-(void)vcSecureDataChannel:(id)arg0 messageType:(unsigned int)arg1 receivedData:(id)arg2 ;
-(void)wcmGetCallConfig:(*unsigned int)arg0 targetBitrate:(*unsigned int)arg1 ;
-(void)wcmSetCallConfig:(unsigned int)arg0 interferenceLevel:(unsigned int)arg1 ;


@end


#endif