// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRITTSDAEMONSESSION_H
#define SIRITTSDAEMONSESSION_H


#import <Foundation/Foundation.h>


@interface SiriTTSDaemonSession : NSObject {
    ? $__lazy_storage_$_sessionConnection;
    ? requests;
    ? accessoryId;
    ? _keepActive;
    ? _clientId;
}


@property (nonatomic) BOOL keepActive;


-(id)init;
-(id)initWithAccessoryId:(id)arg0 ;
-(void)cancelWithRequest:(id)arg0 ;
-(void)estimateDurationWithSynthesisRequest:(id)arg0 didFinish:(id)arg1 ;
-(void)forwardWithStreamObject:(id)arg0 ;
-(void)getAudioPower:(id)arg0 ;
-(void)isSpeaking:(id)arg0 ;
-(void)prewarmWithRequest:(id)arg0 didFinish:(id)arg1 ;
-(void)signalWithInlineStreaming:(id)arg0 ;
-(void)speakWithAudioRequest:(id)arg0 didFinish:(id)arg1 ;
-(void)speakWithSpeechRequest:(id)arg0 didFinish:(id)arg1 ;
-(void)synthesizeWithRequest:(id)arg0 didFinish:(id)arg1 ;
-(void)textToPhonemeWithRequest:(id)arg0 didFinish:(id)arg1 ;


@end


#endif