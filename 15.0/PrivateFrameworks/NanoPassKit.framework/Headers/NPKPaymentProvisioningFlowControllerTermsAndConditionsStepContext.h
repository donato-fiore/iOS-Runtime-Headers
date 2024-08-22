// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPAYMENTPROVISIONINGFLOWCONTROLLERTERMSANDCONDITIONSSTEPCONTEXT_H
#define NPKPAYMENTPROVISIONINGFLOWCONTROLLERTERMSANDCONDITIONSSTEPCONTEXT_H

@class PKPaymentSetupProduct, NSURL;


#import "NPKPaymentProvisioningFlowStepContext.h"

@interface NPKPaymentProvisioningFlowControllerTermsAndConditionsStepContext : NPKPaymentProvisioningFlowStepContext

@property (nonatomic) BOOL allowNonSecureHTTP; // ivar: _allowNonSecureHTTP
@property (retain, nonatomic) PKPaymentSetupProduct *product; // ivar: _product
@property (retain, nonatomic) NSURL *termsURL; // ivar: _termsURL


-(id)description;
-(id)initWithRequestContext:(id)arg0 ;


@end


#endif