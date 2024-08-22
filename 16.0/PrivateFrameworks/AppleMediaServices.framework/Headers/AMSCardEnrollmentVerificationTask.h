// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSCARDENROLLMENTVERIFICATIONTASK_H
#define AMSCARDENROLLMENTVERIFICATIONTASK_H



#import "AMSTask.h"

@interface AMSCardEnrollmentVerificationTask : AMSTask



+(id)_performSilentEnrollmentPaymentSessionWithContext:(id)arg0 ;
+(id)performPaymentVerificationForPayment:(id)arg0 isDefault:(BOOL)arg1 ;
+(id)performPaymentVerificationForPayment:(id)arg0 isDefault:(BOOL)arg1 bag:(id)arg2 ;
+(void)verifyPayment:(id)arg0 isDefault:(BOOL)arg1 bag:(id)arg2 completion:(id)arg3 ;
+(void)verifyPayment:(id)arg0 isDefault:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif