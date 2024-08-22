// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSCARDENROLLMENTPAYMENTSESSIONTASK_H
#define AMSCARDENROLLMENTPAYMENTSESSIONTASK_H



#import "AMSTask.h"

@interface AMSCardEnrollmentPaymentSessionTask : AMSTask



+(id)_paymentServiceURLStringForMerchantURL:(id)arg0 ;
+(id)_performSilentEnrollmentPaymentSessionWithContext:(id)arg0 ;
+(id)performPaymentSessionEnrollmentWithBag:(id)arg0 ;
+(void)paymentSessionWithBag:(id)arg0 completion:(id)arg1 ;


@end


#endif