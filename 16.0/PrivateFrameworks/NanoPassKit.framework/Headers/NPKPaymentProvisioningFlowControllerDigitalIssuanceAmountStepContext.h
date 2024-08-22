// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPAYMENTPROVISIONINGFLOWCONTROLLERDIGITALISSUANCEAMOUNTSTEPCONTEXT_H
#define NPKPAYMENTPROVISIONINGFLOWCONTROLLERDIGITALISSUANCEAMOUNTSTEPCONTEXT_H

@class PKPaymentSetupProduct;


#import "NPKPaymentProvisioningFlowStepContext.h"

@interface NPKPaymentProvisioningFlowControllerDigitalIssuanceAmountStepContext : NPKPaymentProvisioningFlowStepContext

@property (nonatomic) BOOL allowsReaderModeEntry; // ivar: _allowsReaderModeEntry
@property (retain, nonatomic) PKPaymentSetupProduct *product; // ivar: _product


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif