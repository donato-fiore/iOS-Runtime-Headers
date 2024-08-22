// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRITTSDAEMONSESSION_H
#define SIRITTSDAEMONSESSION_H


#import <Foundation/Foundation.h>


@interface SiriTTSDaemonSession : NSObject {
    ? $__lazy_storage_$__sessionConnection;
    ? _connectionLock;
    ? requestsLock;
    ? requests;
    ? accessoryId;
    ? _keepActive;
    ? _clientId;
}


@property (nonatomic) BOOL keepActive;


-(id)init;
-(id)initWithAccessoryId:(id)arg0 ;
-(void)cancelWithRequest:(id)arg0 ;
-(void)dealloc;
-(void)downloadedVoicesMatching:(id)arg0 reply:(id)arg1 ;
-(void)estimateDurationWithRequest:(id)arg0 didFinish:(id)arg1 ;
-(void)forwardWithStreamObject:(id)arg0 ;
-(void)getAudioPower:(id)arg0 ;
-(void)getSynthesisVoiceMatching:(id)arg0 reply:(id)arg1 ;
-(void)isANEModelCompiledMatching:(id)arg0 reply:(id)arg1 ;
-(void)isSpeaking:(id)arg0 ;
-(void)killDaemon;
-(void)prewarmWithRequest:(id)arg0 didFinish:(id)arg1 ;
-(void)queryPhaticCapabilityWithVoice:(id)arg0 reply:(id)arg1 ;
-(void)signalWithInlineStreaming:(id)arg0 ;
-(void)speakWithAudioRequest:(id)arg0 didFinish:(id)arg1 ;
-(void)speakWithSpeechRequest:(id)arg0 didFinish:(id)arg1 ;
-(void)subscribeWithVoices:(id)arg0 reply:(id)arg1 ;
-(void)subscribedVoicesWithClientId:(id)arg0 reply:(id)arg1 ;
-(void)subscribedVoicesWithReply:(id)arg0 ;
-(void)synthesizeWithRequest:(id)arg0 didFinish:(id)arg1 ;
-(void)textToPhonemeWithRequest:(id)arg0 didFinish:(id)arg1 ;


@end


#endif