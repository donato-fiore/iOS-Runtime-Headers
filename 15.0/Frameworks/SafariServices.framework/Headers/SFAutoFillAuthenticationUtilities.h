// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFAUTOFILLAUTHENTICATIONUTILITIES_H
#define SFAUTOFILLAUTHENTICATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface SFAutoFillAuthenticationUtilities : NSObject



+(id)customAuthenticationTitleForFillingCreditCard;
+(id)customAuthenticationTitleForFillingSavedPassword;
+(id)customAuthenticationTitleForFillingTimeBasedOneTimeCode;
+(id)customAuthenticationTitleForLoggingInWithSavedPasswordOnWebsite:(id)arg0 ;
+(id)customAuthenticationTitleForViewingSavedPasswords;
+(id)passcodePromptForFillingCreditCard;
+(id)passcodePromptForFillingSavedPassword;
+(id)passcodePromptForFillingTimeBasedOneTimeCode;
+(id)passcodePromptForLoggingInWithSavedPasswordOnWebsite:(id)arg0 ;
+(id)passcodePromptForViewingSavedPasswords;


@end


#endif