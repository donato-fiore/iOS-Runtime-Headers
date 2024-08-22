// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCSESSION_H
#define VCSESSION_H

@class NSMutableDictionary, NSMutableArray, NSError, NSString, NSDate, NSDictionary, NSArray;
@protocol VCSessionParticipantStreamDelegate, AVCRateControllerDelegate, VCRateControlMediaControllerDelegate, VCMediaStreamNotification, RTCPReportProvider, VCSecurityEventHandler, VCSessionParticipantDelegate, VCNetworkFeedbackControllerDelegate, VCSessionStatsControllerDelegate, VCConnectionChangedHandler, VCMomentTransportDelegate, OS_dispatch_queue, VCSessionDelegate, OS_nw_activity, VCConnectionProtocol;


#import "VCObject.h"
#import "VCControlChannelMultiWay.h"
#import "VCSessionConfiguration.h"
#import "VCNetworkFeedbackController.h"
#import "VCSecurityKeyManager.h"
#import "AVCRateController.h"
#import "VCRateControlMediaController.h"
#import "VCSessionDownlinkBandwidthAllocator.h"
#import "VCSessionPresentationInfo.h"
#import "VCSessionBitrateArbiter.h"
#import "VCSwitchManager.h"
#import "VCSessionParticipant.h"
#import "VCSessionParticipantRemote.h"
#import "VCSessionMessaging.h"
#import "VCSessionStatsController.h"
#import "VCTransportSession.h"

@interface VCSession : VCObject <VCSessionParticipantStreamDelegate, AVCRateControllerDelegate, VCRateControlMediaControllerDelegate, VCMediaStreamNotification, RTCPReportProvider, VCSecurityEventHandler, VCSessionParticipantDelegate, VCNetworkFeedbackControllerDelegate, VCSessionStatsControllerDelegate, VCConnectionChangedHandler, VCMomentTransportDelegate>

 {
    unsigned int _state;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id<VCSessionDelegate> *_delegate;
    VCControlChannelMultiWay *_controlChannel;
    VCSessionConfiguration *_configuration;
    NSMutableDictionary *_remoteParticipantsMapByUUID;
    int _reportUpdateInterval;
    int _reportReportFrequency;
    VCNetworkFeedbackController *_feedbackController;
    NSMutableArray *_startingParticipants;
    NSMutableArray *_stoppingParticipants;
    NSMutableArray *_initializingParticipants;
    VCSecurityKeyManager *_securityKeyManager;
    BOOL _localSourceNeedsReset;
    _VCSessionOneToOneSettings _oneToOneSettings;
    BOOL oneToOneModeEnabled;
    BOOL _useReducedSizeRTCP;
    AVCRateController *_uplinkRateController;
    unsigned int _uplinkTargetBitrate;
    unsigned int _downlinkTargetBitrate;
    VCRateControlMediaController *_uplinkMediaController;
    unsigned int _basebandFlushTransactionID;
    VCSessionDownlinkBandwidthAllocator *_downlinkBandwidthAllocator;
    CGFloat _sessionStartTime;
    BOOL _forceDisableMediaPriority;
    NSError *_stopError;
    *void _spatialMetadata;
    BOOL _isGKVoiceChat;
    CGFloat _remoteMediaStallDisconnectTimeout;
    int _reportingModuleID;
    NSObject<OS_nw_activity> *_nwActivityActiveSession;
    BOOL _isReconnectPending;
    VCSessionPresentationInfo *_presentationInfo;
    VCSessionBitrateArbiter *_bitrateArbiter;
    CGFloat _remoteMediaStallReconnectTimeout;
    unsigned short _maxConnectionMTU;
    NSString *_conversationID;
    NSDate *_conversationTimeBase;
    NSDate *_conversationTimeBaseTruncated;
    BOOL _forceFixedEncryptionLabel;
    BOOL _isOneToOneInitiator;
    VCSwitchManager *_switchManager;
    int _currentConnectionType;
    CGFloat _oneToOneSwitchStartTime;
}


@property (readonly, nonatomic) NSDictionary *capabilities;
@property (retain, nonatomic) NSObject<VCConnectionProtocol> *currentActiveConnection; // ivar: _currentActiveConnection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<VCSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVCRateController *downlinkRateController; // ivar: _downlinkRateController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *idsDestination; // ivar: _idsDestination
@property (nonatomic) BOOL isOneToOneRemoteMediaStalling; // ivar: _isOneToOneRemoteMediaStalling
@property (readonly, nonatomic) VCSessionParticipant *localParticipant; // ivar: _localParticipant
@property (nonatomic) *tagVCMediaQueue mediaQueue; // ivar: _mediaQueue
@property (retain, nonatomic) NSObject<OS_nw_activity> *nwActivity; // ivar: _nwActivity
@property (nonatomic) BOOL oneToOneModeEnabled; // ivar: _oneToOneModeEnabled
@property (readonly, nonatomic) VCSessionParticipantRemote *oneToOneRemoteParticipant;
@property (retain) NSMutableDictionary *optInDictionary; // ivar: _optInDictionary
@property (nonatomic, setter=setParentNWActivity:) NSObject<OS_nw_activity> *parentNWActivity; // ivar: _parentNWActivity
@property (readonly, nonatomic) NSArray *remoteParticipants;
@property (retain, nonatomic) NSMutableDictionary *remoteParticipantsMapByServerID; // ivar: _remoteParticipantsMapByServerID
@property (retain, nonatomic) VCSessionMessaging *sessionMessaging; // ivar: _sessionMessaging
@property (readonly, nonatomic) VCSessionStatsController *sessionStatsController; // ivar: _sessionStatsController
@property (nonatomic) BOOL sharingEnabled; // ivar: _sharingEnabled
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *transportMetadata;
@property (readonly, nonatomic) VCTransportSession *transportSession; // ivar: _transportSession
@property (readonly, nonatomic) unsigned int transportSessionID; // ivar: _transportSessionID
@property (readonly, nonatomic) NSString *uuid; // ivar: _uuid


+(void)addUUIDToMutableData:(id)arg0 fromUUIDString:(id)arg1 ;
+(void)cleanupControlChannelParticipantConfig:(struct ? *)arg0 ;
-(BOOL)addOneToOneParticipant:(id)arg0 withConfig:(id)arg1 ;
-(BOOL)composeControlChannelParticipantConfig:(struct ? *)arg0 withRemoteParticipant:(id)arg1 ;
-(BOOL)configureRemoteParticipant:(id)arg0 withConfig:(id)arg1 ;
-(BOOL)detectSSRCCollision:(id)arg0 resetNeeded:(*BOOL)arg1 ;
-(BOOL)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT *)arg0 reportCount:(char *)arg1 ;
-(BOOL)handleEncryptionInfoChange:(id)arg0 ;
-(BOOL)isOneToOneUsingVideo;
-(BOOL)registerRemoteParticipantToSession:(id)arg0 ;
-(BOOL)validateStreamGroup:(id)arg0 state:(id)arg1 ;
-(char *)sessionStateToString:(unsigned int)arg0 ;
-(id)computeConversationTimeBaseTruncated;
-(id)initWithIDSDestination:(id)arg0 configurationDict:(id)arg1 negotiationData:(id)arg2 delegate:(id)arg3 processId:(int)arg4 isGKVoiceChat:(BOOL)arg5 ;
-(id)newEncryptionLabelWithLocalUUID:(id)arg0 remoteUUID:(id)arg1 ;
-(id)newNetworkBitrateString:(struct ? *)arg0 ;
-(id)newParticipantOneToOneConfigWithIDSParticipantID:(NSUInteger)arg0 isLocal:(BOOL)arg1 config:(id)arg2 ;
-(id)participantForID:(id)arg0 ;
-(id)participantsToString;
-(id)vcrcServerBagWithOperatingMode:(int)arg0 ;
-(int)flushBasebandWithPayloads:(id)arg0 ;
-(int)learntBitrateForSegment:(id)arg0 defaultValue:(int)arg1 ;
-(int)maxRemoteParticipants30fps;
-(int)setupOneToOne;
-(int)setupOneToOneMediaControlInfoGenerators;
-(int)setupOneToOneMediaQueue;
-(int)setupRateControllerOneToOne;
-(int)setupSpatialAudio;
-(struct __CFDictionary *)getClientSpecificUserInfo;
-(unsigned int)calculateExpectedTotalNetworkBitrateDownlink;
-(unsigned int)calculateExpectedTotalNetworkBitrateUplink;
-(unsigned int)vcrcServerBagProfileNumber;
-(void)addParticipantConfigurations:(id)arg0 ;
-(void)additionalFlushCountToOneToOneRateController:(unsigned int)arg0 ;
-(void)applyLinkConstrains:(id)arg0 ;
-(void)applyNegotiatedOneToOneFaceTimeSettings;
-(void)applyRemoteLinkConstrains:(id)arg0 ;
-(void)applySpatialMetadata;
-(void)broadcastInitialMediaState;
-(void)broadcastMessage:(id)arg0 withTopic:(id)arg1 ;
-(void)broadcastMessageDictionary:(id)arg0 withTopic:(id)arg1 ;
-(void)broadcastMessageDictionary:(id)arg0 withTopic:(id)arg1 toVersion:(int)arg2 ;
-(void)broadcastSingleStateMessage:(id)arg0 withTopic:(id)arg1 ;
-(void)broadcastStreamGroupStateUpdateMessage;
-(void)cleanUpOneToOneVideoStreamDelegate;
-(void)cleanupNwActivity;
-(void)cleanupOneToOne;
-(void)cleanupOneToOneMediaQueue;
-(void)cleanupOneToOneVideoReceiverDelegate;
-(void)cleanupRateControllerOneToOne;
-(void)cleanupSpatialAudio;
-(void)cleanupVCRC;
-(void)cleaupMediaControlInfoGeneratorsOneToOne;
-(void)collectSessionEventKeyFields:(struct __CFDictionary *)arg0 eventType:(unsigned short)arg1 withParticipant:(id)arg2 keyChangeReason:(id)arg3 newMKI:(id)arg4 withStreamID:(unsigned short)arg5 ;
-(void)configureOneToOneRateController:(id)arg0 isUsingVideo:(BOOL)arg1 ;
-(void)createMediaQueue;
-(void)createSessionMessaging;
-(void)dealloc;
-(void)destroySessionMessaging;
// -(void)didReceiveCustomReportPacket:(struct tagRTCPPACKET *)arg0 arrivalNTPTime:(unk)arg1  ;
-(void)didReceiveMomentsRequest:(id)arg0 ;
-(void)didReceiveRTCPPackets:(struct _RTCPPacketList *)arg0 ;
// -(void)didReceiveReportPacket:(struct tagRTCPPACKET *)arg0 arrivalNTPTime:(unk)arg1  ;
-(void)didReceivedSessionStatsAtTime:(CGFloat)arg0 ;
-(void)didRemoveSpatialMetadataEntry;
-(void)didSendOneToOneEnabledMessage:(id)arg0 didSucceed:(BOOL)arg1 ;
-(void)dispatchedAddParticipantConfigurations:(id)arg0 ;
-(void)dispatchedAddParticipantWithConfig:(id)arg0 ;
-(void)dispatchedHandleActiveConnectionChange:(id)arg0 ;
-(void)dispatchedParticipant:(id)arg0 didStart:(BOOL)arg1 error:(id)arg2 ;
-(void)dispatchedParticipant:(id)arg0 didStopWithError:(id)arg1 ;
-(void)dispatchedRemoveParticipant:(id)arg0 ;
-(void)dispatchedSetOneToOneModeEnabled:(BOOL)arg0 isLocal:(BOOL)arg1 ;
-(void)dispatchedStart;
-(void)dispatchedStopWithError:(id)arg0 ;
-(void)dispatchedStopWithError:(id)arg0 didRemoteCancel:(BOOL)arg1 ;
-(void)dispatchedUpdateConfiguration:(id)arg0 ;
-(void)distributeBitrateAndOptInToStreamIDsWithSeamlessTransition:(BOOL)arg0 ;
-(void)generateKeyFrameWithReceivedMessage:(id)arg0 ;
-(void)handleActiveConnectionChange:(id)arg0 ;
-(void)handleActiveConnectionChangeForMultiway:(id)arg0 ;
-(void)handleActiveConnectionChangeForOneToOne:(id)arg0 ;
-(void)handleCellTechChange:(int)arg0 connection:(id)arg1 ;
-(void)handleCellularMTUChanged:(unsigned short)arg0 connection:(id)arg1 ;
-(void)handleEncryptionInfoEvent:(id)arg0 ;
-(void)handleMembershipChangeInfoEvent:(id)arg0 ;
-(void)handlePreferredInterfaceForDuplicationUpdate:(unsigned char)arg0 notifyPeer:(BOOL)arg1 enableDuplication:(BOOL)arg2 isMediaUnrecoverableSignal:(BOOL)arg3 ;
-(void)handlePrimaryConnectionChanged:(id)arg0 ;
-(void)initWithRelevantStorebagEntries;
-(void)mediaController:(*void)arg0 mediaSuggestionDidChange:(struct VCRateControlMediaSuggestion )arg1 ;
-(void)mediaStateChangedForParticipant:(id)arg0 ;
-(void)mediaStream:(id)arg0 didReceiveFlushRequestWithPayloads:(id)arg1 ;
-(void)mediaStream:(id)arg0 didReceiveNewMediaKeyIndex:(id)arg1 ;
-(void)messageMediaInitialStateToParticipant:(id)arg0 ;
-(void)moments:(id)arg0 shouldProcessRequest:(id)arg1 recipientID:(id)arg2 ;
-(void)notifyDelegateActiveConnectionDidChange;
-(void)notifyRemoteOfCellTechChange:(id)arg0 remoteParticipant:(id)arg1 ;
-(void)optInStreamWithIDSStreamIDs:(id)arg0 ;
-(void)optOutStreamWithIDSStreamIDs:(id)arg0 ;
-(void)preWarmStateChanged:(BOOL)arg0 ;
-(void)processDidStop;
-(void)processSymptomFromMessage:(id)arg0 participantID:(id)arg1 isLocalInitiated:(BOOL)arg2 isLocalSideOnly:(BOOL)arg3 ;
-(void)rateController:(id)arg0 targetBitrateDidChange:(unsigned int)arg1 rateChangeCounter:(unsigned int)arg2 ;
-(void)recommendedSettingsChanged:(id)arg0 ;
-(void)registerMediaStreamNotificationDelegateForParticipant:(id)arg0 ;
-(void)registerReportingTask;
-(void)remoteCellTechStateUpdate:(int)arg0 maxRemoteBitrate:(unsigned int)arg1 ;
-(void)removeDelegatesForRemoteParticipant:(id)arg0 ;
-(void)removeParticipant:(id)arg0 ;
-(void)reportActiveConnectionOneToOne;
-(void)reportingIntervalChanged:(CGFloat)arg0 ;
-(void)reportingMomentsWithRequest:(id)arg0 recipientID:(id)arg1 ;
-(void)reportingSessionDownlinkOptInEvent:(id)arg0 selectedMediaEntriesForParticipants:(id)arg1 ;
-(void)reportingSessionParticipantEvent:(unsigned short)arg0 keyChangeReason:(id)arg1 newMKI:(id)arg2 ;
-(void)reportingSessionParticipantEvent:(unsigned short)arg0 withParticipant:(id)arg1 ;
-(void)reportingSessionParticipantEvent:(unsigned short)arg0 withParticipant:(id)arg1 keyChangeReason:(id)arg2 newMKI:(id)arg3 ;
-(void)reportingSessionParticipantEvent:(unsigned short)arg0 withParticipant:(id)arg1 keyChangeReason:(id)arg2 newMKI:(id)arg3 withStreamID:(unsigned short)arg4 ;
-(void)reportingSessionParticipantEvent:(unsigned short)arg0 withStreamID:(unsigned short)arg1 ;
-(void)reportingSessionRemoteParticipantEvent:(unsigned short)arg0 withParticipant:(id)arg1 value:(id)arg2 ;
-(void)reportingSessionStopEventWithError:(id)arg0 ;
-(void)reportingSetUserInfo;
-(void)resetDecryptionTimeout;
-(void)sendSymptomsToRemoteParticipants:(id)arg0 symptom:(id)arg1 groupID:(id)arg2 ;
-(void)setSessionInfoSynchronizerCallbacks;
-(void)setSessionInfoSynchronizerErrorResponseCallback;
-(void)setSessionInfoSynchronizerPeerSubscribedStreamsCallback;
-(void)setState:(unsigned int)arg0 ;
-(void)setTransportConnectionSelectionVersion;
-(void)setupAudioEnabledMessages;
-(void)setupAudioPausedMessages;
-(void)setupCellTechChangeMessages;
-(void)setupDisconnectMessage;
-(void)setupKeyFrameGenerationMessages;
-(void)setupLinkConstrainsChangedMessages;
-(void)setupMomentsMessages;
-(void)setupMultiwayABTesting;
-(void)setupOneToOneABTesting;
-(void)setupOneToOneAdaptiveLearning;
-(void)setupOneToOneEnabledMessages;
-(void)setupOneToOneVideoReceiverDelegate;
-(void)setupOneToOneVideoStreamDelegate;
-(void)setupPiPStateChangeMessage;
-(void)setupPreferredInterfaceMessage;
-(void)setupRateControllersMultiway;
-(void)setupStreamGroupStateUpdateMessage;
-(void)setupSymptomEnabledMessages;
-(void)setupTransportSessionWithDestination:(id)arg0 ;
-(void)setupUplinkBitrateCaps;
-(void)setupVideoEnabledMessages;
-(void)setupVideoPausedMessages;
-(void)setupVideoRedundancyMessages;
-(void)setupWRMAlertUpdateMessage;
-(void)start;
-(void)startOneToOne;
-(void)startRateControllerOneToOne;
-(void)startRateControllers;
-(void)startReportingForOneToOneEnabled:(BOOL)arg0 ;
-(void)startSessionMessaging;
-(void)stopAllParticipants;
-(void)stopRateControllerOneToOne;
-(void)stopSessionMessaging;
-(void)stopWithError:(id)arg0 ;
-(void)switchFromOneToOneToMultiway;
-(void)tearDown;
-(void)unregisterMediaStreamNotificationDelegateForParticipant:(id)arg0 ;
-(void)unregisterRemoteParticipantFromSession:(id)arg0 ;
-(void)unregisterReportingTask;
-(void)updateConfiguration:(id)arg0 ;
-(void)updateLocalStreamConfiguration;
-(void)updateLocalVideoCaptureFrameRate;
-(void)updateMultiwayRateControllerWithActiveConnection:(id)arg0 isScreenEnabled:(BOOL)arg1 isLocal:(BOOL)arg2 ;
-(void)updateNetworkFeedbackControllerReport:(struct ? *)arg0 ;
-(void)updateOneToOneRateControllerForVideoEnabled:(BOOL)arg0 ;
-(void)updateParticipantConfigurations:(id)arg0 ;
-(void)updateParticipantWindowState;
-(void)updatePresentationInfo:(id)arg0 ;
-(void)vcSessionParticipant:(id)arg0 audioEnabled:(BOOL)arg1 didSucceed:(BOOL)arg2 error:(id)arg3 ;
-(void)vcSessionParticipant:(id)arg0 audioPaused:(BOOL)arg1 didSucceed:(BOOL)arg2 error:(id)arg3 ;
-(void)vcSessionParticipant:(id)arg0 didChangeActualNetworkBitrateForStreamGroupID:(unsigned int)arg1 ;
-(void)vcSessionParticipant:(id)arg0 didChangeMediaPriority:(unsigned char)arg1 description:(id)arg2 ;
-(void)vcSessionParticipant:(id)arg0 didDetectError:(id)arg1 ;
-(void)vcSessionParticipant:(id)arg0 didRequestVideoRedundancy:(BOOL)arg1 ;
-(void)vcSessionParticipant:(id)arg0 didStart:(BOOL)arg1 error:(id)arg2 ;
-(void)vcSessionParticipant:(id)arg0 didStopWithError:(id)arg1 ;
-(void)vcSessionParticipant:(id)arg0 didSwitchFromStreamID:(unsigned short)arg1 toStreamID:(unsigned short)arg2 ;
-(void)vcSessionParticipant:(id)arg0 oneToOneModeDidChange:(BOOL)arg1 ;
-(void)vcSessionParticipant:(id)arg0 remoteAudioEnabledDidChange:(BOOL)arg1 ;
-(void)vcSessionParticipant:(id)arg0 remoteAudioPausedDidChange:(BOOL)arg1 ;
-(void)vcSessionParticipant:(id)arg0 remoteScreenEnabledDidChange:(BOOL)arg1 ;
-(void)vcSessionParticipant:(id)arg0 remoteVideoEnabledDidChange:(BOOL)arg1 ;
-(void)vcSessionParticipant:(id)arg0 remoteVideoPausedDidChange:(BOOL)arg1 ;
-(void)vcSessionParticipant:(id)arg0 requestKeyFrameGenerationWithStreamID:(unsigned short)arg1 firType:(int)arg2 ;
-(void)vcSessionParticipant:(id)arg0 screenEnabled:(BOOL)arg1 didSucceed:(BOOL)arg2 error:(id)arg3 ;
-(void)vcSessionParticipant:(id)arg0 streamGroupID:(unsigned int)arg1 stateDidChange:(unsigned int)arg2 ;
-(void)vcSessionParticipant:(id)arg0 videoEnabled:(BOOL)arg1 didSucceed:(BOOL)arg2 error:(id)arg3 ;
-(void)vcSessionParticipant:(id)arg0 videoPaused:(BOOL)arg1 didSucceed:(BOOL)arg2 error:(id)arg3 ;
-(void)vcSessionParticipantDidChangeReceivingStreams:(id)arg0 ;
-(void)vcSessionParticipantDidChangeSendingStreams:(id)arg0 ;
-(void)vcSessionParticipantDidMediaDecryptionTimeOut:(id)arg0 ;
-(void)vcSessionParticipantDidMediaDecryptionTimeOutForMKMRecovery:(id)arg0 ;
-(void)vcSessionParticipantDidRemoteMediaStallTimeout:(id)arg0 duration:(CGFloat)arg1 ;


@end


#endif