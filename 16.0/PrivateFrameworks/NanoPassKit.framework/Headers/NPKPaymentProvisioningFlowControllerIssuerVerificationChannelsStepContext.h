// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPAYMENTPROVISIONINGFLOWCONTROLLERISSUERVERIFICATIONCHANNELSSTEPCONTEXT_H
#define NPKPAYMENTPROVISIONINGFLOWCONTROLLERISSUERVERIFICATIONCHANNELSSTEPCONTEXT_H

@class PKPaymentPass, NSArray;


#import "NPKPaymentProvisioningFlowStepContext.h"

@interface NPKPaymentProvisioningFlowControllerIssuerVerificationChannelsStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) PKPaymentPass *paymentPass; // ivar: _paymentPass
@property (retain, nonatomic) NSArray *verificationChannels; // ivar: _verificationChannels


-(id)description;
-(id)initWithRequestContext:(id)arg0 ;


@end


#endif