// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLETEXTTOSPEECHSPEECHFEATUREINPUTWAVE_H
#define QSSMUTABLETEXTTOSPEECHSPEECHFEATUREINPUTWAVE_H

@class NSData;


#import "QSSTextToSpeechSpeechFeatureInputWave.h"

@interface QSSMutableTextToSpeechSpeechFeatureInputWave : QSSTextToSpeechSpeechFeatureInputWave

@property (copy, nonatomic) NSData *pcm_data;
@property (nonatomic) int sample_rate;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)pcm_data:(id)arg0 ;


@end


#endif