// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INNUMBERRESOLUTIONRESULT_H
#define INNUMBERRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INNumberResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithNumberToConfirm:(id)arg0 ;
+(id)disambiguationWithNumbersToDisambiguate:(id)arg0 ;
+(id)successWithResolvedNumber:(id)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif