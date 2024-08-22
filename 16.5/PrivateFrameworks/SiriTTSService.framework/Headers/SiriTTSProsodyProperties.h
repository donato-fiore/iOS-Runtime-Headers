// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRITTSPROSODYPROPERTIES_H
#define SIRITTSPROSODYPROPERTIES_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SiriTTSProsodyProperties : NSObject <NSSecureCoding>



@property (nonatomic) float neuralSentenceDuration; // ivar: neuralSentenceDuration
@property (nonatomic) float neuralSentenceEnergy; // ivar: neuralSentenceEnergy
@property (nonatomic) float neuralSentencePitch; // ivar: neuralSentencePitch
@property (nonatomic) float neuralSentencePitchRange; // ivar: neuralSentencePitchRange
@property (nonatomic) float neuralSentenceTilt; // ivar: neuralSentenceTilt


+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif