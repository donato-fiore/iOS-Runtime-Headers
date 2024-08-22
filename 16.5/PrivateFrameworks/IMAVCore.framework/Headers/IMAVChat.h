// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMAVCHAT_H
#define IMAVCHAT_H

@class NSMutableDictionary, NSDate, IMTimingCollection, NSError, NSString, NSNumber, NSDictionary, NSArray, NSData, IMAccount, NSTimer, IMHandle;
@protocol IMSystemMonitorListener, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "IMAVChatParticipant.h"

@interface IMAVChat : NSObject <IMSystemMonitorListener>

 {
    NSMutableDictionary *_conferenceStateCache;
    NSDate *_dateStartedConnecting;
    NSDate *_dateReceivedRelayInitiate;
    NSDate *_dateReceivedRelayUpdate;
    IMTimingCollection *_timingCollection;
    NSError *_error;
    unsigned int _lastPostedState;
    CGFloat _connectionTimeoutTime;
    CGFloat _invitationTimeoutTime;
    BOOL _hasGatheredInfo;
    BOOL _hasReceivedFirstFrame;
    BOOL _hasPendingAccept;
    BOOL _hasPendingInit;
}


@property (retain, nonatomic, setter=_setGUID:) NSString *GUID; // ivar: _GUID
@property (readonly, nonatomic) BOOL _allParticipantsUsingICE;
@property (retain, nonatomic, setter=_setBackCameraCaptureTime:) NSNumber *_backCameraCaptureTime; // ivar: _backCameraCaptureTime
@property (readonly, nonatomic) NSInteger _bustedCallID;
@property (readonly, nonatomic) NSNumber *_callDuration;
@property (retain, nonatomic, setter=_setCallStatisticsGUID:) NSString *_callStatisticsGUID; // ivar: _callStatisticsGUID
@property (nonatomic, setter=_setConferenceController:) id *_conferenceController; // ivar: _conferenceController
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_conferenceQueue; // ivar: _conferenceQueue
@property (readonly, nonatomic) NSNumber *_connectDuration;
@property (nonatomic, setter=_setConnectionStarted:) BOOL _connectionStarted; // ivar: _connectionStarted
@property (nonatomic, setter=_setConnectionType:) int _connectionType; // ivar: _connectionType
@property (readonly, nonatomic) NSNumber *_currentNatType;
@property (readonly) NSDictionary *_extraServerContext; // ivar: _extraServerContext
@property (retain, nonatomic, setter=_setFrontCameraCaptureTime:) NSNumber *_frontCameraCaptureTime; // ivar: _frontCameraCaptureTime
@property (readonly, nonatomic) NSArray *_imHandles;
@property (retain, nonatomic, setter=_setInterruptionBegan:) NSDate *_interruptionBegan; // ivar: _interruptionBegan
@property (nonatomic, setter=_setIsAudioInterrupted:) BOOL _isAudioInterrupted; // ivar: _isAudioInterrupted
@property (readonly, nonatomic) BOOL _isProxy;
@property (nonatomic, setter=_setIsVideoInterrupted:) BOOL _isVideoInterrupted; // ivar: _isVideoInterrupted
@property (nonatomic, setter=_setLocalNetworkConnectionType:) NSUInteger _localNetworkConnectionType; // ivar: _localNetworkConnectionType
@property (retain, nonatomic, setter=_setNatType:) NSNumber *_natType; // ivar: _natType
@property (nonatomic, setter=_setNeedsAudioRestart:) BOOL _needsAudioRestart; // ivar: _needsAudioRestart
@property (nonatomic, setter=_setNeedsVideoRestart:) BOOL _needsVideoRestart; // ivar: _needsVideoRestart
@property (nonatomic, setter=_setNetworkCheckResult:) NSInteger _networkCheckResult; // ivar: _networkCheckResult
@property (nonatomic, setter=_setPingTestResult:) NSInteger _pingTestResult; // ivar: _pingTestResult
@property (retain, nonatomic, setter=_setPingTestResults:) NSDictionary *_pingTestResults; // ivar: _pingTestResults
@property (readonly, nonatomic) NSNumber *_relayConnectDuration;
@property (retain, nonatomic, setter=_setRelayRemotePrimaryIdentifier:) NSData *_relayRemotePrimaryIdentifier; // ivar: _relayRemotePrimaryIdentifier
@property (readonly, nonatomic) NSNumber *_remoteNatType;
@property (nonatomic, setter=_setRemoteNetworkConnectionType:) NSUInteger _remoteNetworkConnectionType; // ivar: _remoteNetworkConnectionType
@property (readonly, nonatomic) BOOL _usesRelay;
@property (readonly, nonatomic) IMAccount *account;
@property (nonatomic, setter=_setAirplaneModeEnabled:) BOOL airplaneModeEnabled; // ivar: _airplaneModeEnabled
@property (retain, nonatomic, setter=_setCallerProperties:) NSDictionary *callerProperties; // ivar: _callerProperties
@property (nonatomic) unsigned int cameraOrientation;
@property (nonatomic) unsigned int cameraType;
@property (retain, nonatomic, setter=_setConferenceID:) NSString *conferenceID; // ivar: _conferenceID
@property (nonatomic) CGFloat connectionTimeoutTime;
@property (retain, nonatomic, setter=_setConnectionTimeoutTimer:) NSTimer *connectionTimeoutTimer; // ivar: _connectionTimeoutTimer
@property (retain, nonatomic, setter=setDataDownloaded:) NSNumber *dataDownloaded; // ivar: _dataDownloaded
@property (retain, nonatomic, setter=setDataRate:) NSNumber *dataRate; // ivar: _dataRate
@property (retain, nonatomic, setter=setDataUploaded:) NSNumber *dataUploaded; // ivar: _dataUploaded
@property (readonly, nonatomic) NSDate *dateConnected; // ivar: _dateConnected
@property (readonly, nonatomic) NSDate *dateCreated; // ivar: _dateCreated
@property (readonly, nonatomic) NSDate *dateEnded; // ivar: _dateEnded
@property (readonly, nonatomic) BOOL didRemoteMute;
@property (nonatomic, setter=_setDidRemoteMute:) BOOL didRemoteMute; // ivar: _didRemoteMute
@property (readonly, nonatomic) BOOL didRemotePause;
@property (nonatomic, setter=_setDidRemotePause:) BOOL didRemotePause; // ivar: _didRemotePause
@property (readonly, nonatomic) int endedError;
@property (readonly, nonatomic) unsigned int endedReason;
@property (retain, nonatomic, setter=_setFirstFrameTimeoutTimer:) NSTimer *firstFrameTimeoutTimer; // ivar: _firstFrameTimeoutTimer
@property (readonly, nonatomic) BOOL hasReceivedFirstFrame;
@property (readonly, nonatomic) IMHandle *initiatorIMHandle; // ivar: _initiator
@property (readonly, nonatomic) IMAVChatParticipant *initiatorParticipant;
@property (nonatomic) CGFloat invitationTimeoutTime;
@property (retain, nonatomic, setter=_setInviteTimeoutTimer:) NSTimer *inviteTimeoutTimer; // ivar: _inviteTimeoutTimer
@property (retain, nonatomic, setter=_setInviteTimeoutTimerStart:) NSDate *inviteTimeoutTimerStart; // ivar: _inviteTimeoutTimerStart
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isCaller; // ivar: _isCaller
@property (nonatomic, setter=setMute:) BOOL isMute;
@property (nonatomic, setter=setPaused:) BOOL isPaused;
@property (nonatomic, setter=setRemoteMute:) BOOL isRemoteMute;
@property (nonatomic) BOOL isSendingAudio;
@property (nonatomic) BOOL isSendingVideo;
@property (readonly, nonatomic) BOOL isStateFinal;
@property (readonly, nonatomic) BOOL isUsingWifi;
@property (readonly, nonatomic) BOOL isVideo; // ivar: _isVideo
@property (nonatomic, setter=_setLandscapeAspectRatios:) CGSize landscapeAspectRatios; // ivar: _landscapeAspectRatios
@property (readonly, nonatomic) IMAVChatParticipant *localParticipant; // ivar: _localParticipant
@property (nonatomic) *void localVideoBackLayer;
@property (nonatomic) *void localVideoLayer;
@property (nonatomic) BOOL mayRequireBreakBeforeMake; // ivar: _mayRequireBreakBeforeMake
@property (nonatomic, setter=_setMetadataFinalized:) BOOL metadataFinalized; // ivar: _metadataFinalized
@property (readonly, nonatomic) IMHandle *otherIMHandle;
@property (readonly, nonatomic) NSArray *participants; // ivar: _participants
@property (nonatomic, setter=_setPortraitAspectRatios:) CGSize portraitAspectRatios; // ivar: _portraitAspectRatios
@property (nonatomic, getter=isRelayed) BOOL relayed; // ivar: _relayed
@property (readonly, nonatomic) NSArray *remoteParticipants;
@property (readonly, nonatomic) unsigned int sessionID; // ivar: _sessionID
@property (readonly, nonatomic) unsigned int state; // ivar: _localState
@property (nonatomic, getter=isTerminating, setter=_setTerminating:) BOOL terminating; // ivar: _terminating


+(CGFloat)defaultConnectionTimeoutTime;
+(CGFloat)defaultInvitationTimeoutTime;
+(id)_acceptedChats;
+(id)_activeChat;
+(id)_avChatArray;
+(id)_avChatConnectingFromIMHandle:(id)arg0 ;
+(id)_avChatInvitedByIMHandle:(id)arg0 orConferenceID:(id)arg1 ;
+(id)_avChatWaitingForReplyFromIMHandle:(id)arg0 orConferenceID:(id)arg1 ;
+(id)_avChatWithConferenceID:(id)arg0 ;
+(id)_avChatWithGUID:(id)arg0 ;
+(id)_avChatWithMatchingIMHandles:(id)arg0 video:(BOOL)arg1 ;
+(id)_bestGuessAVChatWithIMHandle:(id)arg0 conferenceID:(id)arg1 sessionID:(unsigned int)arg2 properties:(id)arg3 ;
+(id)_chatList;
+(id)_chatListLock;
+(id)_chatWithSessionID:(unsigned int)arg0 ;
+(id)_chatsWithIMAVChatState:(unsigned int)arg0 ;
+(id)_connectedChat;
+(id)_connectedChats;
+(id)_connectingChats;
+(id)_imHandleFromProxyRepresentation:(id)arg0 ;
+(id)_incomingInvitations;
+(id)_nonFinalChat;
+(id)_outgoingInvitations;
+(id)_proxyRepresentationForIMHandle:(id)arg0 ;
+(id)acceptedChats;
+(id)activeChat;
+(id)avChatWithGUID:(id)arg0 ;
+(id)chatList;
+(id)chatsWithIMAVChatState:(unsigned int)arg0 ;
+(id)connectedChat;
+(id)connectedChats;
+(id)connectingChats;
+(id)incomingInvitations;
+(id)nonFinalChat;
+(id)outgoingInvitations;
+(int)systemSupportsNewOutgoingConferenceTo:(id)arg0 isVideo:(BOOL)arg1 ;
+(void)setDefaultConnectionTimeoutTime:(CGFloat)arg0 ;
+(void)setDefaultInvitationTimeoutTime:(CGFloat)arg0 ;
-(BOOL)_cachedBoolForKey:(id)arg0 ;
-(BOOL)_hasCachedBoolForKey:(id)arg0 ;
-(BOOL)_isCallUpgradeTo:(id)arg0 ;
-(BOOL)_isVideoUpgradeTo:(id)arg0 ;
-(BOOL)_moveVCPartyID:(id)arg0 toIndex:(unsigned int)arg1 inCount:(unsigned int)arg2 ;
-(BOOL)_processVCResponseDict:(id)arg0 ;
-(BOOL)isConferenceSilent;
-(BOOL)startPreviewWithError:(*id)arg0 ;
-(BOOL)stopPreview;
-(id)_initOutgoingTo:(id)arg0 isVideo:(BOOL)arg1 isRelayed:(BOOL)arg2 GUID:(id)arg3 ;
-(id)_initWith:(id)arg0 invitedBy:(id)arg1 sessionID:(unsigned int)arg2 GUID:(id)arg3 video:(BOOL)arg4 extraProperties:(id)arg5 ;
-(id)_initWith:(id)arg0 invitedBy:(id)arg1 sessionID:(unsigned int)arg2 isRelayed:(BOOL)arg3 GUID:(id)arg4 video:(BOOL)arg5 extraProperties:(id)arg6 ;
-(id)_participantMatchingVCPartyID:(id)arg0 ;
-(id)_proxyRepresentation;
-(id)_proxyRepresentationForIMAVChatParticipant:(id)arg0 ;
-(id)_timings;
-(id)description;
-(id)initIncomingFrom:(id)arg0 isVideo:(BOOL)arg1 callerProperties:(id)arg2 ;
-(id)initOutgoingTo:(id)arg0 isVideo:(BOOL)arg1 ;
-(id)initOutgoingTo:(id)arg0 isVideo:(BOOL)arg1 isRelayed:(BOOL)arg2 ;
-(id)initOutgoingTo:(id)arg0 isVideo:(BOOL)arg1 isRelayed:(BOOL)arg2 GUID:(id)arg3 ;
-(id)inviteesInfo;
-(id)participantMatchingIMHandle:(id)arg0 ;
-(id)participantWithAVConferenceCallID:(NSInteger)arg0 ;
-(id)participantWithID:(id)arg0 ;
-(id)vcPartyIDForIMHandle:(id)arg0 ;
-(struct CGSize )localAspectRatioForCameraOrientation:(unsigned int)arg0 cameraType:(unsigned int)arg1 ;
-(void)__responseToVCInvite:(id)arg0 ;
-(void)__sendEndCallMetricToAWDWithReason:(unsigned int)arg0 andError:(int)arg1 ;
-(void)__sendEndCallMetricToViceroyWithReason:(unsigned int)arg0 andError:(int)arg1 ;
-(void)_airplaneModeChanged:(id)arg0 ;
-(void)_applicationWillTerminate:(id)arg0 ;
-(void)_cacheBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)_cancelInvitationWithReason:(unsigned int)arg0 error:(int)arg1 ;
-(void)_clearCache;
-(void)_clearConnectionTimeoutTimer;
-(void)_clearFirstFrameTimeoutTimer;
-(void)_clearInvitationTimeoutTimer;
-(void)_conferenceOtherParticipant:(id)arg0 didConnect:(BOOL)arg1 ;
-(void)_connectionTimeout:(id)arg0 ;
-(void)_endChatWithReason:(unsigned int)arg0 andError:(int)arg1 ;
-(void)_entitlementsChanged:(id)arg0 ;
-(void)_firstFrameTimeout:(id)arg0 ;
-(void)_handleAVError:(id)arg0 ;
-(void)_handleGenericAVMessageFromParticipant:(id)arg0 type:(unsigned int)arg1 userInfo:(id)arg2 handled:(BOOL)arg3 ;
-(void)_handleRelayCancel:(id)arg0 fromParticipant:(id)arg1 ;
-(void)_handleRelayInitate:(id)arg0 fromParticipant:(id)arg1 ;
-(void)_handleRelayUpdate:(id)arg0 fromParticipant:(id)arg1 ;
-(void)_initParticipantsWithIMHandles:(id)arg0 ;
-(void)_insertRemoteParticipant:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_invitationTimeout:(id)arg0 ;
-(void)_noteFirstFrame;
-(void)_peerID:(id)arg0 changedTo:(id)arg1 ;
-(void)_postNotificationName:(id)arg0 participant:(id)arg1 userInfo:(id)arg2 ;
-(void)_postNotificationName:(id)arg0 userInfo:(id)arg1 ;
-(void)_postParticipantMediaChangeNotification:(id)arg0 cameraChanged:(BOOL)arg1 orientationChanged:(BOOL)arg2 aspectChanged:(BOOL)arg3 cameraWillSwitch:(BOOL)arg4 camera:(unsigned int)arg5 orientation:(unsigned int)arg6 aspect:(struct CGSize )arg7 ;
-(void)_postStateToDelegateIfNecessary;
-(void)_reduceInvitationTimeoutTime;
-(void)_responseToVCInvite:(id)arg0 ;
-(void)_resumeAudioState;
-(void)_resumeVideoState;
-(void)_saveAudioRestartState;
-(void)_saveVideoRestartState;
-(void)_setActiveConference;
-(void)_setCreationDate;
-(void)_setFirstFrameTimeoutTimer;
-(void)_submitCallConnectedLogging;
-(void)_submitCallEndedLoggingWithReason:(unsigned int)arg0 andError:(int)arg1 ;
-(void)_submitCallInterruptionBeganLogging;
-(void)_submitCallInterruptionEndedLogging;
-(void)_submitCallStartedLoggingWithRecipientID:(id)arg0 isCaller:(BOOL)arg1 isVideo:(BOOL)arg2 ;
-(void)_updateIMHandleInBuddyList:(id)arg0 ;
-(void)_vccInitDidFinish:(id)arg0 ;
-(void)acceptInvitation;
-(void)beginChat;
-(void)cancelInvitation;
-(void)conferenceAVConferenceCallID:(NSInteger)arg0 didConnect:(BOOL)arg1 ;
-(void)conferenceDidPauseAudioWithCallID:(NSInteger)arg0 didPauseAudio:(BOOL)arg1 ;
-(void)conferenceDidStopWithCallID:(NSInteger)arg0 error:(id)arg1 ;
-(void)conferencePersonWithID:(id)arg0 didDegrade:(BOOL)arg1 ;
-(void)conferencePersonWithID:(id)arg0 didMute:(BOOL)arg1 ;
-(void)conferencePersonWithID:(id)arg0 didPause:(BOOL)arg1 ;
-(void)conferencePersonWithID:(id)arg0 localIPDidChange:(id)arg1 ;
-(void)conferencePersonWithID:(id)arg0 mediaDidStall:(BOOL)arg1 ;
-(void)conferencePersonWithID:(id)arg0 sendRelayCancel:(id)arg1 ;
-(void)conferencePersonWithID:(id)arg0 sendRelayRequest:(id)arg1 ;
-(void)conferencePersonWithID:(id)arg0 sendRelayUpdate:(id)arg1 ;
-(void)dealloc;
-(void)declineInvitation;
-(void)declineInvitationWithResponse:(unsigned int)arg0 ;
-(void)endChat;
-(void)endChatWithError:(int)arg0 ;
-(void)endChatWithReason:(unsigned int)arg0 ;
-(void)endChatWithReason:(unsigned int)arg0 error:(int)arg1 ;
-(void)handleGenericAVMessageFromParticipant:(id)arg0 type:(unsigned int)arg1 userInfo:(id)arg2 ;
-(void)invite:(id)arg0 ;
-(void)invite:(id)arg0 additionalPeers:(id)arg1 ;
-(void)invite:(id)arg0 additionalPeers:(id)arg1 excludingPushTokens:(id)arg2 ;
-(void)inviteAll;
-(void)notificationCenterDidDisappear;
-(void)notificationCenterWillAppear;
-(void)participant:(id)arg0 changedFromState:(unsigned int)arg1 toState:(unsigned int)arg2 ;
-(void)setLocalAspectRatio:(struct CGSize )arg0 cameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2 ;
-(void)setMetadataFinalized;
-(void)setRemoteVideoPresentationSize:(struct CGSize )arg0 ;
-(void)setRemoteVideoPresentationState:(unsigned int)arg0 ;
-(void)systemApplicationDidBecomeActive;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationDidResume;
-(void)systemApplicationDidResumeForEventsOnly;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationWillEnterForeground;
-(void)systemDidFastUserSwitchOut;
-(void)systemWillShutdown;
-(void)toggleMute;
-(void)togglePaused;


@end


#endif