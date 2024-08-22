// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFAUTOFILLAUTHENTICATIONUTILITIES_H
#define SFAUTOFILLAUTHENTICATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface SFAutoFillAuthenticationUtilities : NSObject



+(id)customAuthenticationTitleForFillingCreditCard;
+(id)customAuthenticationTitleForFillingSavedAccount;
+(id)customAuthenticationTitleForFillingTimeBasedOneTimeCode;
+(id)customAuthenticationTitleForLoggingInWithSavedAccountOnWebsite:(id)arg0 ;
+(id)customAuthenticationTitleForViewingSavedAccounts;
+(id)passcodePromptForFillingCreditCard;
+(id)passcodePromptForFillingSavedAccount;
+(id)passcodePromptForFillingTimeBasedOneTimeCode;
+(id)passcodePromptForLoggingInWithSavedAccountOnWebsite:(id)arg0 ;
+(id)passcodePromptForViewingSavedAccounts;


@end


#endif