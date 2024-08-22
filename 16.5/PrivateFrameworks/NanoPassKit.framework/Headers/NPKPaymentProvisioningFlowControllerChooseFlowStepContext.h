// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPAYMENTPROVISIONINGFLOWCONTROLLERCHOOSEFLOWSTEPCONTEXT_H
#define NPKPAYMENTPROVISIONINGFLOWCONTROLLERCHOOSEFLOWSTEPCONTEXT_H

@class NSArray;


#import "NPKPaymentProvisioningFlowStepContext.h"

@interface NPKPaymentProvisioningFlowControllerChooseFlowStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) NSArray *sections; // ivar: _sections


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif