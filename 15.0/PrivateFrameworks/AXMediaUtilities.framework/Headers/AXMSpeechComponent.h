// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMSPEECHCOMPONENT_H
#define AXMSPEECHCOMPONENT_H

@class NSString, AVSpeechSynthesizer;
@protocol AVSpeechSynthesizerDelegate;


#import "AXMOutputComponent.h"

@interface AXMSpeechComponent : AXMOutputComponent <AVSpeechSynthesizerDelegate>



@property (copy, nonatomic) id *currentRequestCompletionBlock; // ivar: _currentRequestCompletionBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) AVSpeechSynthesizer *synthesizer; // ivar: _synthesizer


+(BOOL)isSupported;
-(BOOL)canHandleRequest:(id)arg0 ;
-(id)init;
-(void)handleRequest:(id)arg0 completion:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 didCancelSpeechUtterance:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 didContinueSpeechUtterance:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 didFinishSpeechUtterance:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 didPauseSpeechUtterance:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 didStartSpeechUtterance:(id)arg1 ;
-(void)stopSpeakingAtNextWord;
-(void)stopSpeakingImmediately;


@end


#endif