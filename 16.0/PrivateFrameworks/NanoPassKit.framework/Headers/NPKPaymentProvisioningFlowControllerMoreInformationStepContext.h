// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPAYMENTPROVISIONINGFLOWCONTROLLERMOREINFORMATIONSTEPCONTEXT_H
#define NPKPAYMENTPROVISIONINGFLOWCONTROLLERMOREINFORMATIONSTEPCONTEXT_H

@class NSArray, PKPaymentPass;


#import "NPKPaymentProvisioningFlowStepContext.h"

@interface NPKPaymentProvisioningFlowControllerMoreInformationStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) NSArray *moreInfoItems; // ivar: _moreInfoItems
@property (retain, nonatomic) PKPaymentPass *paymentPass; // ivar: _paymentPass


-(id)description;
-(id)initWithRequestContext:(id)arg0 ;


@end


#endif