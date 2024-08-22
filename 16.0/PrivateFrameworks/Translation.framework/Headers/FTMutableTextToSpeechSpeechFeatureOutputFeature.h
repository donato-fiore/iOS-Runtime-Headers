// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLETEXTTOSPEECHSPEECHFEATUREOUTPUTFEATURE_H
#define FTMUTABLETEXTTOSPEECHSPEECHFEATUREOUTPUTFEATURE_H

@class NSString;


#import "FTTextToSpeechSpeechFeatureOutputFeature.h"

@interface FTMutableTextToSpeechSpeechFeatureOutputFeature : FTTextToSpeechSpeechFeatureOutputFeature

@property (nonatomic) float begin_time;
@property (nonatomic) float duration;
@property (nonatomic) float end_time;
@property (nonatomic) float energy;
@property (copy, nonatomic) NSString *phone_name;
@property (nonatomic) float pitch;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif