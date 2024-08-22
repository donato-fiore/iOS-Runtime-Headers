// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPAYMENTPROVISIONINGFLOWCONTROLLERAPPLEBALANCEACCOUNTDETAILSSTEPCONTEXT_H
#define NPKPAYMENTPROVISIONINGFLOWCONTROLLERAPPLEBALANCEACCOUNTDETAILSSTEPCONTEXT_H

@class NSString, PKCurrencyAmount;


#import "NPKPaymentProvisioningFlowStepContext.h"

@interface NPKPaymentProvisioningFlowControllerAppleBalanceAccountDetailsStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) NSString *appleID; // ivar: _appleID
@property (retain, nonatomic) PKCurrencyAmount *balance; // ivar: _balance


-(id)description;
-(id)initWithRequestContext:(id)arg0 ;


@end


#endif