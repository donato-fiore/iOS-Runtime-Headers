// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTREGISTRATIONUTILITIES_H
#define PKPAYMENTREGISTRATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface PKPaymentRegistrationUtilities : NSObject



+(BOOL)_isPaymentSetupSupportedForWebService:(id)arg0 ;
+(void)_shouldShowAddCardFlowForWebService:(id)arg0 completion:(id)arg1 ;
+(void)configureWebServiceIfNecessary:(id)arg0 completion:(id)arg1 ;
+(void)registrationIsSupportedInCurrentRegionWithWebService:(id)arg0 completion:(id)arg1 ;
+(void)shouldShowPasscodeAccessibilityOverride:(id)arg0 completion:(id)arg1 ;
+(void)shouldShowWalletInBuddy:(id)arg0 completion:(id)arg1 ;
+(void)shouldShowWalletInSettings:(id)arg0 completion:(id)arg1 ;
+(void)shouldShowWalletInSettingsWithApplePaySupportInformation:(id)arg0 completion:(id)arg1 ;


@end


#endif