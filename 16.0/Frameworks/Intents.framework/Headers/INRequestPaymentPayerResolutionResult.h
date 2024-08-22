// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INREQUESTPAYMENTPAYERRESOLUTIONRESULT_H
#define INREQUESTPAYMENTPAYERRESOLUTIONRESULT_H



#import "INPersonResolutionResult.h"

@interface INRequestPaymentPayerResolutionResult : INPersonResolutionResult



+(id)unsupportedForReason:(NSInteger)arg0 ;
-(id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)arg0 ;
-(id)_initWithIntentSlotResolutionResult:(id)arg0 slotDescription:(id)arg1 ;
-(id)initWithPersonResolutionResult:(id)arg0 ;


@end


#endif