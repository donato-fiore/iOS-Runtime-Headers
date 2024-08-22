// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SATTSSPEECHSYNTHESISSTREAMINGBEGIN_H
#define SATTSSPEECHSYNTHESISSTREAMINGBEGIN_H

@class NSString;


#import "SATTSSpeechSynthesisStreaming.h"
#import "SAUIAudioDescription.h"
#import "SATTSSpeechSynthesisResource.h"
#import "SATTSSpeechSynthesisVoice.h"

@interface SATTSSpeechSynthesisStreamingBegin : SATTSSpeechSynthesisStreaming

@property (retain, nonatomic) SAUIAudioDescription *decoderStreamDescription;
@property (retain, nonatomic) SAUIAudioDescription *playerStreamDescription;
@property (retain, nonatomic) SATTSSpeechSynthesisResource *speechSynthesisResource;
@property (retain, nonatomic) SATTSSpeechSynthesisVoice *speechSynthesisVoice;
@property (nonatomic) float streamingPlaybackBufferSize;
@property (copy, nonatomic) NSString *text;


+(id)speechSynthesisStreamingBegin;
+(id)speechSynthesisStreamingBeginWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif