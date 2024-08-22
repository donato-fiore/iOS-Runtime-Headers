// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPAYMENTPROVISIONINGFLOWCONTROLLERPRECONDITIONSSTEPCONTEXT_H
#define NPKPAYMENTPROVISIONINGFLOWCONTROLLERPRECONDITIONSSTEPCONTEXT_H



#import "NPKPaymentProvisioningFlowStepContext.h"

@interface NPKPaymentProvisioningFlowControllerPreconditionsStepContext : NPKPaymentProvisioningFlowStepContext

@property (nonatomic) NSUInteger preconditionsState; // ivar: _preconditionsState


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif