// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMAVINTERFACE_H
#define IMAVINTERFACE_H


#import <Foundation/Foundation.h>


@interface IMAVInterface : NSObject

@property (readonly, nonatomic) id *_controller;
@property (readonly, nonatomic) NSUInteger capabilities;
@property (readonly, nonatomic) NSUInteger capabilitiesOfCPU;
@property (readonly, nonatomic) NSUInteger capabilitiesOfNetwork;
@property (readonly, nonatomic) id *controller;
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL isAVInterfaceReady;
@property (nonatomic) *void localVideoBackLayer;
@property (nonatomic) *void localVideoLayer;
@property (nonatomic) unsigned int maxBitrate;
@property (readonly, nonatomic) unsigned int overallChatState;
@property (nonatomic) BOOL shouldKeepCameraRunning;
@property (readonly, nonatomic) BOOL supportsLayers;
@property (readonly, nonatomic) BOOL supportsRelay;
@property (readonly, nonatomic) BOOL systemCanAudioChat;
@property (readonly, nonatomic) BOOL systemCanVideoChat;
@property (readonly, nonatomic) BOOL systemSupportsBackFacingCamera;
@property (readonly, nonatomic) BOOL systemSupportsFrontFacingCamera;


+(id)sharedInstance;
-(BOOL)_submitEndCallMetric:(id)arg0 forCallID:(NSInteger)arg1 ;
-(BOOL)_submitLoggingInformation:(id)arg0 forChat:(id)arg1 ;
-(BOOL)avChat:(id)arg0 generateCallInfoForID:(id)arg1 service:(id)arg2 usingRelay:(BOOL)arg3 callInfo:(id)arg4 ;
-(BOOL)isMuteForAVChat:(id)arg0 ;
-(BOOL)isPausedForAVChat:(id)arg0 ;
-(BOOL)isRemoteMuteForAVChat:(id)arg0 ;
-(BOOL)isSendingAudioForAVChat:(id)arg0 ;
-(BOOL)isSendingVideoForAVChat:(id)arg0 ;
-(BOOL)startPreviewWithError:(*id)arg0 ;
-(BOOL)stopPreview;
-(NSInteger)_checkNetworkForChat:(id)arg0 requiresWifi:(BOOL)arg1 ;
-(NSInteger)_runPingTestForChat:(id)arg0 ;
-(id)avChat:(id)arg0 IPAndPortDataWithCallerIP:(id)arg1 callerSIPPort:(unsigned int)arg2 shouldFindExternalIP:(BOOL)arg3 ;
-(id)avChat:(id)arg0 IPAndPortDataWithCallerIPAndPortData:(id)arg1 shouldFindExternalIP:(BOOL)arg2 ;
-(id)getNatIPFromICEData:(id)arg0 ;
-(id)natTypeForAVChat:(id)arg0 ;
-(int)avChat:(id)arg0 endConferenceForUserID:(id)arg1 ;
-(int)endConferenceForAVChat:(id)arg0 ;
-(void)_avChatDealloc:(id)arg0 ;
-(void)_conferenceEnded:(id)arg0 ;
-(void)_conferenceWillStart:(id)arg0 ;
-(void)_notifyAboutPotentialCallForChat:(id)arg0 ;
-(void)avChat:(id)arg0 prepareConnectionWithCallInfo:(id)arg1 ;
-(void)avChat:(id)arg0 setLocalLandscapeAspectRatio:(struct CGSize )arg1 localPortraitAspectRatio:(struct CGSize )arg2 ;
-(void)avChat:(id)arg0 setMute:(BOOL)arg1 ;
-(void)avChat:(id)arg0 setPaused:(BOOL)arg1 ;
-(void)avChat:(id)arg0 setRemoteMute:(BOOL)arg1 ;
-(void)avChat:(id)arg0 setSendingAudio:(BOOL)arg1 ;
-(void)avChat:(id)arg0 setSendingVideo:(BOOL)arg1 ;
-(void)avChat:(id)arg0 setValidatedIdentity:(struct __SecIdentity *)arg1 ;
-(void)cancelConferenceForAVChat:(id)arg0 ;
-(void)chatRelayedStatusChanged:(id)arg0 ;
-(void)chatStateUpdated;
-(void)cleanupAVInterface;
-(void)dealloc;
-(void)endAVConferenceWithChat:(id)arg0 callID:(NSInteger)arg1 ;
-(void)handleRelayCancel:(id)arg0 fromParticipant:(id)arg1 callInfo:(id)arg2 ;
-(void)handleRelayInitate:(id)arg0 fromParticipant:(id)arg1 callInfo:(id)arg2 ;
-(void)handleRelayUpdate:(id)arg0 fromParticipant:(id)arg1 callInfo:(id)arg2 ;
-(void)initAVInterface;
-(void)persistentProperty:(id)arg0 changedTo:(id)arg1 from:(id)arg2 ;
-(void)processRemoteIPChanged:(id)arg0 fromParticipant:(id)arg1 ;
-(void)setRemoteVideoPresentationSize:(struct CGSize )arg0 forChat:(id)arg1 ;
-(void)setRemoteVideoPresentationState:(unsigned int)arg0 forChat:(id)arg1 ;
-(void)updateAVChat:(id)arg0 withCallMetadata:(id)arg1 isFinalUpdate:(BOOL)arg2 ;


@end


#endif