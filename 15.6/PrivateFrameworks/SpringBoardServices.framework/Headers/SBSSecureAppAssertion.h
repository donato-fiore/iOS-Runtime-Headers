// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSSECUREAPPASSERTION_H
#define SBSSECUREAPPASSERTION_H



#import "SBSLockScreenContentAssertion.h"

@interface SBSSecureAppAssertion : SBSLockScreenContentAssertion

@property (retain, nonatomic) SBSLockScreenContentAssertion *actualAssertion; // ivar: _actualAssertion


+(id)acquireSecureAppAssertionWithType:(NSUInteger)arg0 errorHandler:(id)arg1 ;
+(id)acquireSecureAppAssertionWithType:(NSUInteger)arg0 supportedOrientations:(NSUInteger)arg1 errorHandler:(id)arg2 ;
-(BOOL)_supportsReacquisition;


@end


#endif