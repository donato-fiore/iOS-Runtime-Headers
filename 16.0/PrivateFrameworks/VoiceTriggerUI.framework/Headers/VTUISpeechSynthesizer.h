// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VTUISPEECHSYNTHESIZER_H
#define VTUISPEECHSYNTHESIZER_H

@class NSString, VSSpeechSynthesizer;
@protocol VSSpeechSynthesizerDelegate;

#import <Foundation/Foundation.h>


@interface VTUISpeechSynthesizer : NSObject <VSSpeechSynthesizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *playAudioFileCompletion; // ivar: _playAudioFileCompletion
@property (copy, nonatomic) id *speakStringCompletion; // ivar: _speakStringCompletion
@property (readonly) Class superclass;
@property (retain, nonatomic) VSSpeechSynthesizer *synthesizer; // ivar: _synthesizer


-(BOOL)isSpeaking;
-(id)init;
-(void)playAudioFileAtPath:(id)arg0 completion:(id)arg1 ;
-(void)speak:(id)arg0 language:(id)arg1 completion:(id)arg2 ;
-(void)speechSynthesizer:(id)arg0 didFinishSpeakingRequest:(id)arg1 successfully:(BOOL)arg2 phonemesSpoken:(id)arg3 withError:(id)arg4 ;
-(void)speechSynthesizer:(id)arg0 didFinishSpeakingRequest:(id)arg1 withInstrumentMetrics:(id)arg2 ;
-(void)speechSynthesizer:(id)arg0 didStartPresynthesizedAudioRequest:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 didStartSpeakingRequest:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 didStopPresynthesizedAudioRequest:(id)arg1 atEnd:(BOOL)arg2 error:(id)arg3 ;
-(void)stopSpeaking;


@end


#endif