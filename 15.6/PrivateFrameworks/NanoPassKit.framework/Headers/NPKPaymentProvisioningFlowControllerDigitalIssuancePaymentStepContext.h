// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPAYMENTPROVISIONINGFLOWCONTROLLERDIGITALISSUANCEPAYMENTSTEPCONTEXT_H
#define NPKPAYMENTPROVISIONINGFLOWCONTROLLERDIGITALISSUANCEPAYMENTSTEPCONTEXT_H

@class PKPaymentSetupProduct;


#import "NPKPaymentProvisioningFlowStepContext.h"

@interface NPKPaymentProvisioningFlowControllerDigitalIssuancePaymentStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) PKPaymentSetupProduct *product; // ivar: _product


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif