// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLINUSEASSERTION_H
#define CLINUSEASSERTION_H



#import "CLAssertion.h"

@interface CLInUseAssertion : CLAssertion



+(id)newAssertionForBundle:(id)arg0 withReason:(id)arg1 ;
+(id)newAssertionForBundle:(id)arg0 withReason:(id)arg1 level:(int)arg2 ;
+(id)newAssertionForBundleIdentifier:(id)arg0 bundlePath:(id)arg1 reason:(id)arg2 level:(int)arg3 ;
+(id)newAssertionForBundleIdentifier:(id)arg0 withReason:(id)arg1 ;
+(id)newAssertionForBundleIdentifier:(id)arg0 withReason:(id)arg1 level:(int)arg2 ;


@end


#endif