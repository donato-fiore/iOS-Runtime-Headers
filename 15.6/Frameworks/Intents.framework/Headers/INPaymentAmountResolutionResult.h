// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INPAYMENTAMOUNTRESOLUTIONRESULT_H
#define INPAYMENTAMOUNTRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INPaymentAmountResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithPaymentAmountToConfirm:(id)arg0 ;
+(id)disambiguationWithPaymentAmountsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedPaymentAmount:(id)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif