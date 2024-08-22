// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLETEXTTOSPEECHFEATURE_H
#define FTMUTABLETEXTTOSPEECHFEATURE_H

@class NSArray;


#import "FTTextToSpeechFeature.h"

@interface FTMutableTextToSpeechFeature : FTTextToSpeechFeature

@property (copy, nonatomic) NSArray *neural_phoneme_sequence;
@property (copy, nonatomic) NSArray *normalized_text;
@property (copy, nonatomic) NSArray *phoneme_sequence;
@property (copy, nonatomic) NSArray *prompts;
@property (copy, nonatomic) NSArray *replacement;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif