// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPAYMENTPROVISIONINGFLOWCONTROLLERISSUERVERIFICATIONFIELDSSTEPCONTEXT_H
#define NPKPAYMENTPROVISIONINGFLOWCONTROLLERISSUERVERIFICATIONFIELDSSTEPCONTEXT_H

@class PKPaymentPass, NSArray;


#import "NPKPaymentProvisioningFlowStepContext.h"

@interface NPKPaymentProvisioningFlowControllerIssuerVerificationFieldsStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) PKPaymentPass *paymentPass; // ivar: _paymentPass
@property (retain, nonatomic) NSArray *verificationFields; // ivar: _verificationFields


-(id)description;
-(id)initWithRequestContext:(id)arg0 ;


@end


#endif