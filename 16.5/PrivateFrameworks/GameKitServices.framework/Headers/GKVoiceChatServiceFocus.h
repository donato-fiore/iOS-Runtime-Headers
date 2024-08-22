// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKVOICECHATSERVICEFOCUS_H
#define GKVOICECHATSERVICEFOCUS_H

@class NSMutableArray, NSString;


#import "GKVoiceChatServicePrivate.h"

@interface GKVoiceChatServiceFocus : GKVoiceChatServicePrivate {
    NSMutableArray *outgoingCallDictList;
    NSMutableArray *incomingCallDictList;
    NSInteger incomingUID;
    int packetsPerBundle;
}


@property (copy, nonatomic) NSString *currentFocus; // ivar: currentFocus
@property BOOL hasMic; // ivar: hasMic
@property int packetsPerBundle;


+(id)defaultVoiceChatService;
-(*void)localVideoLayer;
-(*void)remoteVideoLayer;
-(BOOL)acceptCallID:(unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)isAudioPausedToParticipantID:(id)arg0 ;
-(BOOL)processCancelDict:(id)arg0 ;
-(BOOL)processFocusChange:(id)arg0 fromParticipantID:(id)arg1 ;
-(BOOL)processFocusDict:(id)arg0 fromParticipantID:(id)arg1 ;
-(BOOL)processInviteDictionary:(id)arg0 fromParticipantID:(id)arg1 ;
-(BOOL)processInviteDictionaryForTie:(id)arg0 fromParticipantID:(id)arg1 ;
-(BOOL)processReplyDict:(id)arg0 ;
-(BOOL)startVoiceChatWithParticipantID:(id)arg0 error:(*id)arg1 ;
-(CGFloat)localBitrate;
-(CGFloat)localFramerate;
-(CGFloat)remoteBitrate;
-(CGFloat)remoteFramerate;
-(id)dictionaryForCallID:(unsigned int)arg0 isIncomingDictonary:(BOOL)arg1 ;
-(id)dictionaryForNonce:(NSInteger)arg0 participantID:(id)arg1 isIncomingDictonary:(BOOL)arg2 ;
-(id)dictionaryForParticipantID:(id)arg0 isIncomingDictonary:(BOOL)arg1 ;
-(id)incomingDictionaryMatchingOriginalCallID:(unsigned int)arg0 participantID:(id)arg1 ;
-(id)init;
-(id)localDisplayNameForCallID:(unsigned int)arg0 ;
-(id)openOutgoingDictionaryForParticipantID:(id)arg0 ;
-(id)remoteDisplayNameForCallID:(unsigned int)arg0 ;
-(void)dealloc;
-(void)denyCallID:(unsigned int)arg0 ;
-(void)pauseAudio:(BOOL)arg0 toParticipantID:(id)arg1 ;
-(void)receivedData:(id)arg0 fromParticipantID:(id)arg1 ;
-(void)remoteCancelled:(id)arg0 ;
-(void)remoteCancelledProc:(id)arg0 ;
-(void)sendFocusChange:(BOOL)arg0 ;
-(void)setChatMode:(int)arg0 ;
-(void)setFocus:(BOOL)arg0 ;
-(void)setIsUsingSuppression:(BOOL)arg0 ;
-(void)setLocalVideoLayer:(*void)arg0 ;
-(void)setQualityDelegate:(id)arg0 ;
-(void)setRemoteVideoLayer:(*void)arg0 ;
-(void)setShouldTimeoutPackets:(BOOL)arg0 ;
-(void)setSpeakingDelegate:(id)arg0 ;
-(void)setTalkingPeersLimit:(unsigned int)arg0 ;
-(void)stopVoiceChatProc:(id)arg0 ;
-(void)stopVoiceChatProc:(id)arg0 participantDidCancel:(BOOL)arg1 ;
-(void)updatedConnectedPeers:(id)arg0 ;
-(void)updatedMutedPeers:(id)arg0 forParticipantID:(id)arg1 ;
-(void)videoConference:(id)arg0 didStartSession:(BOOL)arg1 withCallID:(unsigned int)arg2 error:(id)arg3 ;
-(void)videoConference:(id)arg0 didStopWithCallID:(unsigned int)arg1 error:(id)arg2 ;


@end


#endif