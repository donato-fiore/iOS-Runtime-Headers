// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLETTSPHONEMESEQUENCE_H
#define QSSMUTABLETTSPHONEMESEQUENCE_H

@class NSArray;


#import "QSSTTSPhonemeSequence.h"

@interface QSSMutableTTSPhonemeSequence : QSSTTSPhonemeSequence

@property (copy, nonatomic) NSArray *word_phonemes;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif