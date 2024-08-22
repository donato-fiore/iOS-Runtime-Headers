// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLEMERGENCYENABLEMENTASSERTION_H
#define CLEMERGENCYENABLEMENTASSERTION_H



#import "CLAssertion.h"

@interface CLEmergencyEnablementAssertion : CLAssertion



+(id)newAssertionForBundle:(id)arg0 withReason:(id)arg1 ;
+(id)newAssertionForBundleIdentifier:(id)arg0 withReason:(id)arg1 ;
+(id)newAssertionWithBundleId:(id)arg0 bundlePath:(id)arg1 reason:(id)arg2 overrideDeauthorizationForBeneficiary:(BOOL)arg3 ;
+(id)newAssertionWithReason:(id)arg0 ;


@end


#endif