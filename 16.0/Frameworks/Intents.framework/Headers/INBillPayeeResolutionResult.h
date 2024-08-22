// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INBILLPAYEERESOLUTIONRESULT_H
#define INBILLPAYEERESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INBillPayeeResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithBillPayeeToConfirm:(id)arg0 ;
+(id)disambiguationWithBillPayeesToDisambiguate:(id)arg0 ;
+(id)successWithResolvedBillPayee:(id)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif