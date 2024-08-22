// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTSETUPASSISTANTREGISTRATIONUTILITIES_H
#define PKPAYMENTSETUPASSISTANTREGISTRATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface PKPaymentSetupAssistantRegistrationUtilities : NSObject



+(BOOL)_bridgeNeedsToRun:(*NSUInteger)arg0 ;
+(BOOL)_macNeedsToRun:(*NSUInteger)arg0 ;
+(BOOL)_phoneNeedsToRun:(*NSUInteger)arg0 ;
+(BOOL)setupAssistantNeedsToRun:(NSUInteger)arg0 returningRequirements:(*NSUInteger)arg1 ;
+(void)preflightPaymentSetupProvisioningController:(id)arg0 forSetupAssistant:(NSUInteger)arg1 withCompletion:(id)arg2 ;


@end


#endif