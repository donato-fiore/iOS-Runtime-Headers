// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMAVCHATPARTICIPANT_H
#define IMAVCHATPARTICIPANT_H

@class NSString, NSTimer, NSMutableArray, NSArray, IMHandle, NSData, NSDictionary;

#import <Foundation/Foundation.h>

#import "IMAVChat.h"

@interface IMAVChatParticipant : NSObject

@property (readonly, nonatomic) NSInteger _activeCallID;
@property (retain, nonatomic, setter=_setConferenceID:) NSString *_conferenceID; // ivar: _conferenceID
@property (retain, setter=_setConnectTimeoutTimer:) NSTimer *_connectTimeoutTimer; // ivar: _connectTimeoutTimer
@property (setter=_setInviteDelivered:) BOOL _inviteDelivered; // ivar: _inviteDelivered
@property (retain, nonatomic) NSMutableArray *_participantsCallInfo; // ivar: _participantsCallInfo
@property (nonatomic, setter=_setRemoteLandscapeContentRect:) CGRect _remoteLandscapeContentRect; // ivar: _remoteLandscapeContentRect
@property (nonatomic, setter=_setRemoteLandscapeOrientation:) CGSize _remoteLandscapeOrientation; // ivar: _remoteLandscapeOrientation
@property (nonatomic, setter=_setRemotePIPLandscapeOrientation:) CGSize _remotePIPLandscapeOrientation; // ivar: _remotePIPLandscapeOrientation
@property (nonatomic, setter=_setRemotePIPPortraitOrientation:) CGSize _remotePIPPortraitOrientation; // ivar: _remotePIPPortraitOrientation
@property (nonatomic, setter=_setRemotePortraitContentRect:) CGRect _remotePortraitContentRect; // ivar: _remotePortraitContentRect
@property (nonatomic, setter=_setRemotePortraitOrientation:) CGSize _remotePortraitOrientation; // ivar: _remotePortraitOrientation
@property (nonatomic, setter=_setScreenOrientation:) unsigned int _screenOrientation; // ivar: _screenOrientation
@property (retain, nonatomic) NSArray *additionalPeers; // ivar: _additionalPeers
@property (nonatomic, setter=setAVChat:) IMAVChat *avChat; // ivar: _avChat
@property (setter=_setCameraOrientation:) unsigned int cameraOrientation; // ivar: _cameraOrientation
@property (setter=_setCameraType:) unsigned int cameraType; // ivar: _cameraType
@property (nonatomic, setter=_setChatError:) int error; // ivar: _chatError
@property (retain, nonatomic) NSArray *excludingPushTokens; // ivar: _excludingPushTokens
@property (readonly, nonatomic) BOOL hasConnectingSessions;
@property (nonatomic) BOOL hasReinitiateCapability; // ivar: _hasReinitiateCapability
@property (readonly, nonatomic) BOOL hasUnfinishedSessions;
@property (readonly, nonatomic) IMHandle *imHandle; // ivar: _imHandle
@property (retain, nonatomic) NSData *inFrequencyLevel; // ivar: _inFrequencyLevel
@property (readonly, nonatomic) IMHandle *invitedBy; // ivar: _inviter
@property (nonatomic, setter=setAudioMuted:) BOOL isAudioMuted;
@property (nonatomic, setter=setAudioMuted:) BOOL isAudioMuted; // ivar: _audioMuted
@property (readonly, nonatomic) BOOL isInitiator; // ivar: _isInitiator
@property (readonly, nonatomic) BOOL isLocalParticipant;
@property (readonly, nonatomic) BOOL isMediaStalled;
@property (setter=setMediaStalled:) BOOL isMediaStalled; // ivar: _mediaStalled
@property (readonly, nonatomic) BOOL isSendingAudio;
@property (readonly, nonatomic) BOOL isSendingAudio; // ivar: _sendingAudio
@property (readonly, nonatomic) BOOL isSendingVideo;
@property (readonly, nonatomic) BOOL isSendingVideo; // ivar: _sendingVideo
@property (readonly, nonatomic) BOOL isVideoDegraded;
@property (setter=setVideoDegraded:) BOOL isVideoDegraded; // ivar: _videoDegraded
@property (nonatomic, setter=setVideoPaused:) BOOL isVideoPaused;
@property (nonatomic, setter=setVideoPaused:) BOOL isVideoPaused; // ivar: _videoPaused
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSData *outFrequencyLevel; // ivar: _outFrequencyLevel
@property (retain, nonatomic) NSDictionary *properties; // ivar: _properties
@property (readonly, nonatomic) unsigned int reasonChatEnded; // ivar: _chatEndedReason
@property (nonatomic) unsigned int state; // ivar: _state
@property (retain, setter=setVCPartyID:) NSString *vcPartyID; // ivar: _vcPartyID
@property (nonatomic) *void videoBackLayer;
@property (nonatomic) *void videoLayer;


-(BOOL)_generateCallInfo:(id)arg0 ;
-(BOOL)_processResponseDictionary:(id)arg0 allowSecondConnection:(BOOL)arg1 ;
-(BOOL)matchesAVConferenceCallID:(NSInteger)arg0 ;
-(NSInteger)bestCallID;
-(id)_callInfoForCallID:(NSInteger)arg0 ;
-(id)_callInfoForReinitiate;
-(id)_callInfoWithState:(NSInteger)arg0 ;
-(id)_callInfosWaitingForAcceptAction;
-(id)_callInfosWaitingForResponse;
-(id)_initAs:(id)arg0 invitedBy:(id)arg1 sendingAudio:(BOOL)arg2 sendingVideo:(BOOL)arg3 usingICE:(BOOL)arg4 toChat:(id)arg5 inState:(unsigned int)arg6 withError:(int)arg7 andReason:(unsigned int)arg8 andVCPartyID:(id)arg9 account:(id)arg10 ;
-(id)_natType;
-(id)_processIncomingCallProperties:(id)arg0 ;
-(id)_proxyRepresentation;
-(id)callInfoBeingHandedOff;
-(id)description;
-(id)init;
-(id)initAs:(id)arg0 invitedBy:(id)arg1 toChat:(id)arg2 account:(id)arg3 ;
-(struct CGRect )contentRectForCameraOrientation:(unsigned int)arg0 cameraType:(unsigned int)arg1 ;
-(struct CGSize )aspectRatioForCameraOrientation:(unsigned int)arg0 cameraType:(unsigned int)arg1 ;
-(struct CGSize )localAspectRatioForCameraOrientation:(unsigned int)arg0 cameraType:(unsigned int)arg1 ;
-(void)_cancelInvitationWithReason:(unsigned int)arg0 response:(id)arg1 ;
-(void)_cleanupOrphanedCallInfos;
-(void)_connectTimeout:(id)arg0 ;
-(void)_handleIMAVResponse:(unsigned int)arg0 ;
-(void)_hangupCallLaterIfReinitiateFailsForCallInfo:(id)arg0 ;
-(void)_noteInviteDelivered:(BOOL)arg0 ;
-(void)_processPropertyUpdate:(id)arg0 ;
-(void)_reInitiateWithCallInfo:(id)arg0 ;
-(void)_registerCallInfo:(id)arg0 ;
-(void)_sendResponse:(unsigned int)arg0 callInfo:(id)arg1 ;
-(void)_switchToUseNewIMHandle:(id)arg0 ;
-(void)_updateProperties:(id)arg0 ;
-(void)cancelInvitation;
-(void)cancelInvitationWithReason:(unsigned int)arg0 ;
-(void)cancelInvitationWithResponse:(unsigned int)arg0 ;
-(void)dealloc;
-(void)disconnectFromAVChat;
-(void)reinitializeCallForCallID:(unsigned int)arg0 ;
-(void)requestIconIfNecessary;
-(void)resetWaitingToConnectTimer;
-(void)sendAVMessage:(unsigned int)arg0 userInfo:(id)arg1 ;
-(void)sendInvitation;
-(void)sendResponse:(unsigned int)arg0 ;
-(void)setWaitingToConnect:(BOOL)arg0 ;


@end


#endif