// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPAYMENTPROVISIONINGFLOWCONTROLLERWELCOMESTEPCONTEXT_H
#define NPKPAYMENTPROVISIONINGFLOWCONTROLLERWELCOMESTEPCONTEXT_H

@class NSArray;


#import "NPKPaymentProvisioningFlowStepContext.h"

@interface NPKPaymentProvisioningFlowControllerWelcomeStepContext : NPKPaymentProvisioningFlowStepContext

@property (nonatomic) BOOL defaultImagesUsed; // ivar: _defaultImagesUsed
@property (retain, nonatomic) NSArray *heroImages; // ivar: _heroImages


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif