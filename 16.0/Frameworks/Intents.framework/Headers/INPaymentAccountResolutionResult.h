// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INPAYMENTACCOUNTRESOLUTIONRESULT_H
#define INPAYMENTACCOUNTRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INPaymentAccountResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithPaymentAccountToConfirm:(id)arg0 ;
+(id)disambiguationWithPaymentAccountsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedPaymentAccount:(id)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif