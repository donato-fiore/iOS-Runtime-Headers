// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHCYRILLICRECOVERCONFUSABLEWORDSSTEP_H
#define CHCYRILLICRECOVERCONFUSABLEWORDSSTEP_H



#import "CHPostprocessingStep.h"

@interface CHCyrillicRecoverConfusableWordsStep : CHPostprocessingStep



-(id)process:(id)arg0 options:(id)arg1 ;
-(void)checkCharactersInString:(id)arg0 outHasLatin:(*BOOL)arg1 outHasCyrillic:(*BOOL)arg2 ;
-(void)checkCharactersInTokenRow:(id)arg0 outHasLatin:(*BOOL)arg1 outHasCyrillic:(*BOOL)arg2 ;


@end


#endif