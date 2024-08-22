// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPAYMENTPROVISIONINGFLOWCONTROLLERPROVISIONINGPROGRESSSTEPCONTEXT_H
#define NPKPAYMENTPROVISIONINGFLOWCONTROLLERPROVISIONINGPROGRESSSTEPCONTEXT_H

@class NSString, PKPaymentSetupProduct;


#import "NPKPaymentProvisioningFlowStepContext.h"

@interface NPKPaymentProvisioningFlowControllerProvisioningProgressStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) NSString *localizedProgressDescription; // ivar: _localizedProgressDescription
@property (retain, nonatomic) PKPaymentSetupProduct *product; // ivar: _product


-(id)initWithRequestContext:(id)arg0 ;


@end


#endif