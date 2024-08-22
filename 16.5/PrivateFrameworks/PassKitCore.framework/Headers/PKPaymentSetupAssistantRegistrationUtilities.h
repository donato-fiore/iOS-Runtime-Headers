// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSETUPASSISTANTREGISTRATIONUTILITIES_H
#define PKPAYMENTSETUPASSISTANTREGISTRATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface PKPaymentSetupAssistantRegistrationUtilities : NSObject



+(BOOL)setupAssistantNeedsToRun:(NSUInteger)arg0 returningRequirements:(*NSUInteger)arg1 ;
+(void)preflightPaymentSetupProvisioningController:(id)arg0 forSetupAssistant:(NSUInteger)arg1 withCompletion:(id)arg2 ;


@end


#endif