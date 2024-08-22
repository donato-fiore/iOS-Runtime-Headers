// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKVOICECHATSERVICE_H
#define GKVOICECHATSERVICE_H

@protocol GKVoiceChatClient;

#import <Foundation/Foundation.h>


@interface GKVoiceChatService : NSObject

@property NSObject<GKVoiceChatClient> *client;
@property (readonly) float inputMeterLevel;
@property (nonatomic, getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property (nonatomic, getter=isMicrophoneMuted) BOOL microphoneMuted;
@property (readonly) float outputMeterLevel;
@property (nonatomic, getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property (nonatomic) float remoteParticipantVolume;
@property (retain, nonatomic) id *voiceChatService; // ivar: _voiceChatService


+(BOOL)isVoIPAllowed;
+(id)defaultVoiceChatService;
+(void)initialize;
-(BOOL)acceptCallID:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)startVoiceChatWithParticipantID:(id)arg0 error:(*id)arg1 ;
-(void)denyCallID:(NSInteger)arg0 ;
-(void)receivedData:(id)arg0 fromParticipantID:(id)arg1 ;
-(void)receivedRealTimeData:(id)arg0 fromParticipantID:(id)arg1 ;
-(void)stopVoiceChatWithParticipantID:(id)arg0 ;


@end


#endif