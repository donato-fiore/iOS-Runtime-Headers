// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTINFORMATIONEVENTEXTENSIONCONTEXT_H
#define PKPAYMENTINFORMATIONEVENTEXTENSIONCONTEXT_H

@protocol PKPaymentInformationEventExtensionVendorContextProtocol;


#import "PKPaymentInformationEventExtensionBaseContext.h"

@interface PKPaymentInformationEventExtensionContext : PKPaymentInformationEventExtensionBaseContext <PKPaymentInformationEventExtensionVendorContextProtocol>





-(void)handleConfigurationRequest:(id)arg0 completion:(id)arg1 ;
-(void)handleInformationRequest:(id)arg0 completion:(id)arg1 ;
-(void)handleSignatureRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif