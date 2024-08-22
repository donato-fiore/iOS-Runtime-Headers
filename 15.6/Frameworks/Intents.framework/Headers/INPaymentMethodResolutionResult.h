// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INPAYMENTMETHODRESOLUTIONRESULT_H
#define INPAYMENTMETHODRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INPaymentMethodResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithPaymentMethodToConfirm:(id)arg0 ;
+(id)disambiguationWithPaymentMethodsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedPaymentMethod:(id)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif