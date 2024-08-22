// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLETTSPHONEMESEQUENCE_H
#define FTMUTABLETTSPHONEMESEQUENCE_H

@class NSArray;


#import "FTTTSPhonemeSequence.h"

@interface FTMutableTTSPhonemeSequence : FTTTSPhonemeSequence

@property (copy, nonatomic) NSArray *word_phonemes;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif