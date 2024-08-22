// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLETEXTTOSPEECHSPEECHFEATUREINPUTWORD_H
#define FTMUTABLETEXTTOSPEECHSPEECHFEATUREINPUTWORD_H

@class NSArray, NSString;


#import "FTTextToSpeechSpeechFeatureInputWord.h"

@interface FTMutableTextToSpeechSpeechFeatureInputWord : FTTextToSpeechSpeechFeatureInputWord

@property (copy, nonatomic) NSArray *phonemes;
@property (copy, nonatomic) NSString *word;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif