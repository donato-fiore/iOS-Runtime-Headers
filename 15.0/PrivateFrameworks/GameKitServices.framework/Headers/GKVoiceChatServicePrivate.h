// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKVOICECHATSERVICEPRIVATE_H
#define GKVOICECHATSERVICEPRIVATE_H

@class NSRecursiveLock, NSLock, VideoConference, GKVoiceChatService;
@protocol VideoConferenceDelegate;

#import <Foundation/Foundation.h>

#import "GKVoiceChatDictionary.h"

@interface GKVoiceChatServicePrivate : NSObject <VideoConferenceDelegate>

 {
    BOOL microphoneMuted;
    unsigned int curCallID;
    GKVoiceChatDictionary *incomingCallDict;
    GKVoiceChatDictionary *outgoingCallDict;
    tagCONNRESULT currentConnResult;
    NSRecursiveLock *stateLock;
    NSLock *clientLock;
    BOOL forceNoICE;
    VideoConference *conf;
}


@property int chatMode; // ivar: chatMode
@property (nonatomic) id *client; // ivar: client
@property (getter=isFocus) BOOL focus; // ivar: focus
@property (readonly, nonatomic) float inputMeterLevel;
@property (getter=isInputMeteringEnabled) BOOL inputMeteringEnabled; // ivar: inputMeteringEnabled
@property (readonly) CGFloat localBitrate;
@property (readonly) CGFloat localFramerate;
@property (nonatomic) *void localVideoLayer;
@property (getter=isMicrophoneMuted) BOOL microphoneMuted;
@property (readonly, nonatomic) NSInteger outputAudioPowerSpectrumToken;
@property (readonly, nonatomic) float outputMeterLevel;
@property (getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled; // ivar: outputMeteringEnabled
@property (readonly) CGFloat remoteBitrate;
@property (readonly) CGFloat remoteFramerate;
@property float remoteParticipantVolume;
@property (nonatomic) *void remoteVideoLayer;
@property int state; // ivar: state
@property GKVoiceChatService *wrapperService; // ivar: wrapperService


+(id)defaultVoiceChatService;
-(BOOL)acceptCallID:(unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)getNSError:(*id)arg0 code:(NSInteger)arg1 description:(id)arg2 hResult:(int)arg3 ;
-(BOOL)getNSError:(*id)arg0 code:(NSInteger)arg1 description:(id)arg2 reason:(id)arg3 ;
-(BOOL)inviteIsValid:(id)arg0 ;
-(BOOL)startVoiceChatWithParticipantID:(id)arg0 error:(*id)arg1 ;
-(id)createInvite:(*id)arg0 toParticipant:(id)arg1 callID:(*unsigned int)arg2 ;
-(id)createReplyUsingDictionary:(id)arg0 replyCode:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)init;
-(id)localDisplayNameForCallID:(unsigned int)arg0 ;
-(id)remoteDisplayNameForCallID:(unsigned int)arg0 ;
-(int)startICEConnectionCheck:(id)arg0 isCaller:(BOOL)arg1 ;
-(int)startICEConnectionCheck:(id)arg0 isCaller:(BOOL)arg1 withCallID:(unsigned int)arg2 ;
-(void)cleanup;
-(void)dealloc;
-(void)denyCallID:(unsigned int)arg0 ;
-(void)forceNoICE:(BOOL)arg0 ;
-(void)informClientOfInviteFromParticipant:(id)arg0 ;
-(void)informClientVoiceChatDidNotStart:(id)arg0 ;
-(void)informClientVoiceChatDidNotStartMainSelector:(id)arg0 ;
-(void)informClientVoiceChatDidStart:(id)arg0 ;
-(void)informClientVoiceChatDidStartMainSelector:(id)arg0 ;
-(void)informClientVoiceChatDidStop:(id)arg0 ;
-(void)receivedData:(id)arg0 fromParticipantID:(id)arg1 ;
-(void)stopVoiceChatProc:(id)arg0 ;
-(void)stopVoiceChatWithParticipantID:(id)arg0 ;
-(void)videoConference:(id)arg0 didStartSession:(BOOL)arg1 withCallID:(unsigned int)arg2 error:(id)arg3 ;
-(void)videoConference:(id)arg0 didStopWithCallID:(unsigned int)arg1 error:(id)arg2 ;


@end


#endif