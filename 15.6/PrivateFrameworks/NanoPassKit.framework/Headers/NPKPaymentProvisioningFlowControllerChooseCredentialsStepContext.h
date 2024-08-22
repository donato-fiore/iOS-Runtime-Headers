// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPAYMENTPROVISIONINGFLOWCONTROLLERCHOOSECREDENTIALSSTEPCONTEXT_H
#define NPKPAYMENTPROVISIONINGFLOWCONTROLLERCHOOSECREDENTIALSSTEPCONTEXT_H

@class NSArray, NSDictionary, PKPaymentSetupProduct;


#import "NPKPaymentProvisioningFlowStepContext.h"

@interface NPKPaymentProvisioningFlowControllerChooseCredentialsStepContext : NPKPaymentProvisioningFlowStepContext

@property (nonatomic) BOOL allowsManualEntry; // ivar: _allowsManualEntry
@property (copy, nonatomic) NSArray *credentials; // ivar: _credentials
@property (retain, nonatomic) NSDictionary *flowIdentifierToCredential; // ivar: _flowIdentifierToCredential
@property (retain, nonatomic) NSArray *flowIdentifiers; // ivar: _flowIdentifiers
@property (retain, nonatomic) PKPaymentSetupProduct *product; // ivar: _product


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif