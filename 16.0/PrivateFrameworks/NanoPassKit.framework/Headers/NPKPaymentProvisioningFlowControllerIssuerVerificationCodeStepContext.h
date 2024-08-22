// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPAYMENTPROVISIONINGFLOWCONTROLLERISSUERVERIFICATIONCODESTEPCONTEXT_H
#define NPKPAYMENTPROVISIONINGFLOWCONTROLLERISSUERVERIFICATIONCODESTEPCONTEXT_H

@class PKPaymentPass, PKVerificationChannel;


#import "NPKPaymentProvisioningFlowStepContext.h"

@interface NPKPaymentProvisioningFlowControllerIssuerVerificationCodeStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) PKPaymentPass *paymentPass; // ivar: _paymentPass
@property (retain, nonatomic) PKVerificationChannel *verificationChannel; // ivar: _verificationChannel


-(id)description;
-(id)initWithRequestContext:(id)arg0 ;


@end


#endif