// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPAYMENTPROVISIONINGFLOWCONTROLLERPROVISIONINGRESULTSTEPCONTEXT_H
#define NPKPAYMENTPROVISIONINGFLOWCONTROLLERPROVISIONINGRESULTSTEPCONTEXT_H

@class NSError, PKPaymentPass;


#import "NPKPaymentProvisioningFlowStepContext.h"

@interface NPKPaymentProvisioningFlowControllerProvisioningResultStepContext : NPKPaymentProvisioningFlowStepContext

@property (nonatomic) BOOL cardAdded; // ivar: _cardAdded
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) PKPaymentPass *provisionedPass; // ivar: _provisionedPass


-(id)description;
-(id)initWithRequestContext:(id)arg0 ;


@end


#endif