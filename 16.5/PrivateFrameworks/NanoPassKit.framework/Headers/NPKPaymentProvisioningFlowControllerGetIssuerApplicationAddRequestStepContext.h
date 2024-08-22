// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPAYMENTPROVISIONINGFLOWCONTROLLERGETISSUERAPPLICATIONADDREQUESTSTEPCONTEXT_H
#define NPKPAYMENTPROVISIONINGFLOWCONTROLLERGETISSUERAPPLICATIONADDREQUESTSTEPCONTEXT_H

@class NSArray, NSData;


#import "NPKPaymentProvisioningFlowStepContext.h"

@interface NPKPaymentProvisioningFlowControllerGetIssuerApplicationAddRequestStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) NSArray *certificates; // ivar: _certificates
@property (retain, nonatomic) NSData *nonce; // ivar: _nonce
@property (retain, nonatomic) NSData *nonceSignature; // ivar: _nonceSignature


-(id)description;
-(id)initWithRequestContext:(id)arg0 ;


@end


#endif