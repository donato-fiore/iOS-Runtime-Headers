// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSPEECHSYNTHESIZER_H
#define WFSPEECHSYNTHESIZER_H

@class AVSpeechSynthesizer, NSMapTable, NSString, VSSpeechSynthesizer;
@protocol AVSpeechSynthesizerDelegate, VSSpeechSynthesizerDelegate, WFSpeechSynthesizerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFSpeechSynthesizer : NSObject <AVSpeechSynthesizerDelegate, VSSpeechSynthesizerDelegate>



@property (readonly, nonatomic) AVSpeechSynthesizer *avSynthesizer; // ivar: _avSynthesizer
@property (readonly, nonatomic) NSMapTable *avUtteranceOutputTable; // ivar: _avUtteranceOutputTable
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<WFSpeechSynthesizerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, nonatomic) VSSpeechSynthesizer *vsSynthesizer; // ivar: _vsSynthesizer


-(NSUInteger)audioFormatForSettings:(id)arg0 ;
-(id)avSpeechUtteranceForVoice:(id)arg0 utterance:(id)arg1 rate:(CGFloat)arg2 pitch:(CGFloat)arg3 ;
-(id)init;
-(id)invalidAudioBufferError;
-(id)outputFileURLForUtterance:(id)arg0 ;
-(id)vsSpeechRequestForVoice:(id)arg0 utterance:(id)arg1 rate:(CGFloat)arg2 pitch:(CGFloat)arg3 intoFile:(BOOL)arg4 ;
-(void)failSpeakingAVUtterance:(id)arg0 withError:(id)arg1 ;
-(void)failSpeakingUtterance:(id)arg0 withError:(id)arg1 ;
-(void)speakUtterance:(id)arg0 usingVoice:(id)arg1 rate:(CGFloat)arg2 pitch:(CGFloat)arg3 ;
-(void)speakUtteranceIntoFile:(id)arg0 usingVoice:(id)arg1 rate:(CGFloat)arg2 pitch:(CGFloat)arg3 ;
-(void)speechSynthesizer:(id)arg0 didCancelSpeechUtterance:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 didFinishSpeakingRequest:(id)arg1 successfully:(BOOL)arg2 phonemesSpoken:(id)arg3 withError:(id)arg4 ;
-(void)speechSynthesizer:(id)arg0 didFinishSpeechUtterance:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 didFinishSynthesisRequest:(id)arg1 withInstrumentMetrics:(id)arg2 error:(id)arg3 ;
-(void)speechSynthesizer:(id)arg0 willSpeakRangeOfSpeechString:(struct _NSRange )arg1 forRequest:(id)arg2 ;
-(void)speechSynthesizer:(id)arg0 willSpeakRangeOfSpeechString:(struct _NSRange )arg1 utterance:(id)arg2 ;
-(void)stop;


@end


#endif