// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLETEXTTOSPEECHSPEECHFEATUREINPUTWORD_H
#define QSSMUTABLETEXTTOSPEECHSPEECHFEATUREINPUTWORD_H

@class NSArray, NSString;


#import "QSSTextToSpeechSpeechFeatureInputWord.h"

@interface QSSMutableTextToSpeechSpeechFeatureInputWord : QSSTextToSpeechSpeechFeatureInputWord

@property (copy, nonatomic) NSArray *phonemes;
@property (copy, nonatomic) NSString *word;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif