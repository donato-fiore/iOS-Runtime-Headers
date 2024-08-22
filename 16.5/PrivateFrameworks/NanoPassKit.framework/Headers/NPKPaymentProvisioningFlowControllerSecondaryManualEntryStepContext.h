// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPAYMENTPROVISIONINGFLOWCONTROLLERSECONDARYMANUALENTRYSTEPCONTEXT_H
#define NPKPAYMENTPROVISIONINGFLOWCONTROLLERSECONDARYMANUALENTRYSTEPCONTEXT_H

@class PKPaymentCredential;


#import "NPKPaymentProvisioningFlowControllerManualEntryStepContext.h"

@interface NPKPaymentProvisioningFlowControllerSecondaryManualEntryStepContext : NPKPaymentProvisioningFlowControllerManualEntryStepContext

@property (nonatomic) BOOL allowsAddingDifferentCard; // ivar: _allowsAddingDifferentCard
@property (retain, nonatomic) PKPaymentCredential *credential; // ivar: _credential


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif