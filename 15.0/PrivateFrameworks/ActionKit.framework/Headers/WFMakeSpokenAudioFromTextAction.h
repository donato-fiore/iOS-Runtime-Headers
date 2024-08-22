// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMAKESPOKENAUDIOFROMTEXTACTION_H
#define WFMAKESPOKENAUDIOFROMTEXTACTION_H

@class WFAction, NSString;
@protocol WFSpeechSynthesizerDelegate;


#import "WFSpeechSynthesizer.h"

@interface WFMakeSpokenAudioFromTextAction : WFAction <WFSpeechSynthesizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WFSpeechSynthesizer *synthesizer; // ivar: _synthesizer


-(id)voicePickerParameter;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)speechSynthesizer:(id)arg0 didFailSpeakingUtterance:(id)arg1 error:(id)arg2 ;
-(void)speechSynthesizer:(id)arg0 didFinishSpeakingUtterance:(id)arg1 intoFile:(id)arg2 ;


@end


#endif