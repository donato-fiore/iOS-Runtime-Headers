// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPAYMENTPROVISIONINGFLOWCONTROLLERREADERMODEENTRYSTEPCONTEXT_H
#define NPKPAYMENTPROVISIONINGFLOWCONTROLLERREADERMODEENTRYSTEPCONTEXT_H

@class PKPaymentSetupProduct, NSArray, NSString;


#import "NPKPaymentProvisioningFlowStepContext.h"

@interface NPKPaymentProvisioningFlowControllerReaderModeEntryStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) PKPaymentSetupProduct *product; // ivar: _product
@property (retain, nonatomic) NSArray *setupFields; // ivar: _setupFields
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif