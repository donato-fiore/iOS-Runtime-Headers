// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVALEXSPEECHSYNTHESISVOICE_H
#define AVALEXSPEECHSYNTHESISVOICE_H

@class AVSpeechSynthesisVoice;
@protocol AXAlternativeSpeechSynthesisVoice;



@interface AVAlexSpeechSynthesisVoice : AVSpeechSynthesisVoice <AXAlternativeSpeechSynthesisVoice>





-(NSInteger)quality;
-(id)identifier;
-(id)language;
-(id)name;
-(id)nameWithoutQuality;


@end


#endif