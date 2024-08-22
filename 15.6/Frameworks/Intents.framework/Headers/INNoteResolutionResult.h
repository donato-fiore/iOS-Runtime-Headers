// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INNOTERESOLUTIONRESULT_H
#define INNOTERESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INNoteResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithNoteToConfirm:(id)arg0 ;
+(id)disambiguationWithNotesToDisambiguate:(id)arg0 ;
+(id)successWithResolvedNote:(id)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif