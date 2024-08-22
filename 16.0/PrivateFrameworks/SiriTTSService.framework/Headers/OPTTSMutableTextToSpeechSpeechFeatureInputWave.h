// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OPTTSMUTABLETEXTTOSPEECHSPEECHFEATUREINPUTWAVE_H
#define OPTTSMUTABLETEXTTOSPEECHSPEECHFEATUREINPUTWAVE_H

@class NSData;


#import "OPTTSTextToSpeechSpeechFeatureInputWave.h"

@interface OPTTSMutableTextToSpeechSpeechFeatureInputWave : OPTTSTextToSpeechSpeechFeatureInputWave

@property (copy, nonatomic) NSData *pcm_data;
@property (nonatomic) int sample_rate;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)pcm_data:(id)arg0 ;


@end


#endif