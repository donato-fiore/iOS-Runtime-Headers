// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRITTSSYNTHESISENGINEREQUEST_H
#define SIRITTSSYNTHESISENGINEREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SiriTTSSynthesisEngineRequest : NSObject

@property (copy, nonatomic) id *audioHandler; // ivar: _audioHandler
@property (copy, nonatomic) id *neuralFallbackHandler; // ivar: _neuralFallbackHandler
@property (nonatomic) float neuralSentenceDuration; // ivar: _neuralSentenceDuration
@property (nonatomic) float neuralSentenceEnergy; // ivar: _neuralSentenceEnergy
@property (nonatomic) float neuralSentencePitch; // ivar: _neuralSentencePitch
@property (nonatomic) float neuralSentencePitchRange; // ivar: _neuralSentencePitchRange
@property (nonatomic) float neuralSentenceTilt; // ivar: _neuralSentenceTilt
@property (nonatomic) float pitch; // ivar: _pitch
@property (nonatomic) BOOL privacySensitive; // ivar: _privacySensitive
@property (nonatomic) NSUInteger profile; // ivar: _profile
@property (copy, nonatomic) id *promptHandler; // ivar: _promptHandler
@property (nonatomic) float rate; // ivar: _rate
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) float volume; // ivar: _volume
@property (copy, nonatomic) id *wordTimingsHandler; // ivar: _wordTimingsHandler




@end


#endif