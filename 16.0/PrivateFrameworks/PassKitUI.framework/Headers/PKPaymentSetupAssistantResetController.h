// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPASSISTANTRESETCONTROLLER_H
#define PKPAYMENTSETUPASSISTANTRESETCONTROLLER_H

@class PKPaymentSetupAssistantCoreController;



@interface PKPaymentSetupAssistantResetController : PKPaymentSetupAssistantCoreController



-(id)_provisioningContextWithProvisioningController:(id)arg0 setupAssistantCredentials:(id)arg1 maximumSelectable:(NSUInteger)arg2 ;
-(id)_setupAssistantCredentialForPaymentCredential:(id)arg0 ;
-(id)_setupAssistantCredentialForPaymentPass:(id)arg0 ;
-(void)expressResetCardsWithCompletion:(id)arg0 ;


@end


#endif