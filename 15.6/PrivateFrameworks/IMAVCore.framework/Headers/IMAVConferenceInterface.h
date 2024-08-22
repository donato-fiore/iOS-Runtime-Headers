// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMAVCONFERENCEINTERFACE_H
#define IMAVCONFERENCEINTERFACE_H

@class NSMutableArray, NSMutableDictionary, NSLock, AVConference, NSNumber;
@protocol AVConferenceDelegate;


#import "IMAVInterface.h"

@interface IMAVConferenceInterface : IMAVInterface <AVConferenceDelegate>

 {
    NSMutableArray *_avConferencesToCleanup;
    NSMutableDictionary *_avConferences;
    NSLock *_avConferencesLock;
    BOOL _duringInit;
    BOOL _pendingCleanup;
}


@property (readonly, nonatomic) AVConference *controller;
@property (retain, nonatomic, getter=isSendingVideoExpected) NSNumber *sendingVideoExpected; // ivar: _sendingVideoExpected


+(BOOL)_useMultipleAVConference;
+(void)_postParticipantMediaChangeNotification:(id)arg0 cameraChanged:(BOOL)arg1 orientationChanged:(BOOL)arg2 aspectChanged:(BOOL)arg3 contentRectChanged:(BOOL)arg4 cameraWillSwitch:(BOOL)arg5 camera:(unsigned int)arg6 orentation:(unsigned int)arg7 aspect:(struct CGSize )arg8 contentRect:(struct CGRect )arg9 ;
+(void)_postParticipantScreenAttributesChangeNotification:(id)arg0 cameraChanged:(BOOL)arg1 orientationChanged:(BOOL)arg2 aspectChanged:(BOOL)arg3 cameraWillSwitch:(BOOL)arg4 camera:(unsigned int)arg5 orentation:(unsigned int)arg6 aspect:(struct CGSize )arg7 ;
-(*void)localVideoBackLayer;
-(*void)localVideoLayer;
-(BOOL)_hasAVConferenceObjectsForChatsOtherThan:(id)arg0 ;
-(BOOL)_submitEndCallMetric:(id)arg0 forCallID:(NSInteger)arg1 ;
-(BOOL)_submitLoggingInformation:(id)arg0 forChat:(id)arg1 ;
-(BOOL)avChat:(id)arg0 generateCallInfoForID:(id)arg1 service:(id)arg2 usingRelay:(BOOL)arg3 callInfo:(id)arg4 ;
-(BOOL)isAVInterfaceReady;
-(BOOL)isMuteForAVChat:(id)arg0 ;
-(BOOL)isPausedForAVChat:(id)arg0 ;
-(BOOL)isSendingAudioForAVChat:(id)arg0 ;
-(BOOL)isSendingVideoForAVChat:(id)arg0 ;
-(BOOL)startPreviewWithError:(*id)arg0 ;
-(BOOL)stopPreview;
-(BOOL)supportsLayers;
-(BOOL)supportsRelay;
-(NSUInteger)capabilities;
-(NSUInteger)capabilitiesOfCPU;
-(NSUInteger)capabilitiesOfNetwork;
-(id)_avChatForConference:(id)arg0 ;
-(id)_avChatForConference:(id)arg0 callID:(NSInteger)arg1 errorString:(id)arg2 ;
-(id)_conferenceForAVChat:(id)arg0 ;
-(id)_existingConferenceForAVChat:(id)arg0 ;
-(id)_existingConferenceForAVChatGUID:(id)arg0 ;
-(id)_faceTimeUUID;
-(id)_imAVChatParticipantForConference:(id)arg0 callID:(NSInteger)arg1 errorString:(id)arg2 ;
-(id)getNatIPFromICEData:(id)arg0 ;
-(id)init;
-(id)natTypeForAVChat:(id)arg0 ;
-(int)_deviceRoleForAVChat:(id)arg0 ;
-(int)avChat:(id)arg0 endConferenceForUserID:(id)arg1 ;
-(int)endConferenceForAVChat:(id)arg0 ;
-(void)_avChatDealloc:(id)arg0 ;
-(void)_cleanupAVInterface;
-(void)_conferenceEnded:(id)arg0 ;
-(void)_configureAVConference:(id)arg0 forChat:(id)arg1 ;
-(void)_notifyAboutPotentialCallForChat:(id)arg0 ;
-(void)_queueAVConferenceForCleanup:(id)arg0 ;
-(void)avChat:(id)arg0 prepareConnectionWithCallInfo:(id)arg1 ;
-(void)avChat:(id)arg0 setLocalLandscapeAspectRatio:(struct CGSize )arg1 localPortraitAspectRatio:(struct CGSize )arg2 ;
-(void)avChat:(id)arg0 setMute:(BOOL)arg1 ;
-(void)avChat:(id)arg0 setPaused:(BOOL)arg1 ;
-(void)avChat:(id)arg0 setSendingAudio:(BOOL)arg1 ;
-(void)avChat:(id)arg0 setSendingVideo:(BOOL)arg1 ;
-(void)cancelConferenceForAVChat:(id)arg0 ;
-(void)chatRelayedStatusChanged:(id)arg0 ;
-(void)chatStateUpdated;
-(void)conference:(id)arg0 callID:(NSInteger)arg1 setPauseVideo:(BOOL)arg2 ;
-(void)conference:(id)arg0 cancelRelayRequest:(NSInteger)arg1 requestDict:(id)arg2 ;
-(void)conference:(id)arg0 didChangeLocalVariablesForCallID:(NSInteger)arg1 ;
-(void)conference:(id)arg0 didStartSession:(BOOL)arg1 withUserInfo:(id)arg2 ;
-(void)conference:(id)arg0 didStopWithCallID:(NSInteger)arg1 error:(id)arg2 ;
-(void)conference:(id)arg0 didStopWithCallID:(NSInteger)arg1 error:(id)arg2 callMetadata:(id)arg3 ;
-(void)conference:(id)arg0 inititiateRelayRequest:(NSInteger)arg1 requestDict:(id)arg2 ;
-(void)conference:(id)arg0 localIPChange:(id)arg1 withCallID:(NSInteger)arg2 ;
-(void)conference:(id)arg0 receivedFirstRemoteFrameForCallID:(NSInteger)arg1 ;
-(void)conference:(id)arg0 reinitializeCallForCallID:(unsigned int)arg1 ;
-(void)conference:(id)arg0 remoteAudioPaused:(BOOL)arg1 callID:(NSInteger)arg2 ;
-(void)conference:(id)arg0 remoteScreenAttributesChanged:(id)arg1 callID:(NSInteger)arg2 ;
-(void)conference:(id)arg0 remoteVideoAttributesChanged:(id)arg1 callID:(NSInteger)arg2 ;
-(void)conference:(id)arg0 remoteVideoPaused:(BOOL)arg1 callID:(NSInteger)arg2 ;
-(void)conference:(id)arg0 sendRelayUpdate:(NSInteger)arg1 updateDict:(id)arg2 ;
-(void)conference:(id)arg0 updateInputFrequencyLevel:(id)arg1 ;
-(void)conference:(id)arg0 updateOutputFrequencyLevel:(id)arg1 ;
-(void)conference:(id)arg0 videoQualityNotificationForCallID:(NSInteger)arg1 isDegraded:(BOOL)arg2 isRemote:(BOOL)arg3 ;
-(void)conference:(id)arg0 withCallID:(NSInteger)arg1 didPauseAudio:(BOOL)arg2 error:(id)arg3 ;
-(void)conference:(id)arg0 withCallID:(NSInteger)arg1 networkHint:(BOOL)arg2 ;
-(void)conference:(id)arg0 withCallID:(NSInteger)arg1 remoteMediaStalled:(BOOL)arg2 ;
-(void)dealloc;
-(void)endAVConferenceWithChat:(id)arg0 callID:(NSInteger)arg1 ;
-(void)handleRelayCancel:(id)arg0 fromParticipant:(id)arg1 callInfo:(id)arg2 ;
-(void)handleRelayInitate:(id)arg0 fromParticipant:(id)arg1 callInfo:(id)arg2 ;
-(void)handleRelayUpdate:(id)arg0 fromParticipant:(id)arg1 callInfo:(id)arg2 ;
-(void)initAVInterface;
-(void)processRemoteIPChanged:(id)arg0 fromParticipant:(id)arg1 ;
-(void)serverDiedForConference:(id)arg0 ;
-(void)setLocalVideoBackLayer:(*void)arg0 ;
-(void)setLocalVideoLayer:(*void)arg0 ;
-(void)setRemoteVideoPresentationSize:(struct CGSize )arg0 forChat:(id)arg1 ;
-(void)setRemoteVideoPresentationState:(unsigned int)arg0 forChat:(id)arg1 ;
-(void)updateAVChat:(id)arg0 withCallMetadata:(id)arg1 isFinalUpdate:(BOOL)arg2 ;


@end


#endif