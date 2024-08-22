// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPASSISTANTEXPRESSCONTROLLER_H
#define PKPAYMENTSETUPASSISTANTEXPRESSCONTROLLER_H



#import "PKPaymentSetupAssistantController.h"

@interface PKPaymentSetupAssistantExpressController : PKPaymentSetupAssistantController



-(id)_provisioningContextWithProvisioningController:(id)arg0 setupAssistantCredentials:(id)arg1 maximumSelectable:(NSUInteger)arg2 ;
-(id)_setupAssistantCredentialForPaymentCredential:(id)arg0 ;
-(id)_setupAssistantCredentialForPaymentPass:(id)arg0 ;
-(void)expressSetupFlowForSetupProvisioningContext:(id)arg0 withCompletion:(id)arg1 ;
-(void)expressSetupProvisioningContext:(id)arg0 ;


@end


#endif