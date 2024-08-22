// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPOWERASSERTION_H
#define PLPOWERASSERTION_H


#import <Foundation/Foundation.h>


@interface PLPowerAssertion : NSObject



+(unsigned int)takePowerAssertionWithName:(id)arg0 humanReadableReason:(id)arg1 timeout:(CGFloat)arg2 timeoutAction:(struct __CFString *)arg3 ;
+(void)performNoTimeoutPowerAssertionTaskWithName:(id)arg0 humanReadableReason:(id)arg1 block:(id)arg2 ;
+(void)performPowerAssertionTaskWithName:(id)arg0 humanReadableReason:(id)arg1 timeout:(CGFloat)arg2 timeoutAction:(struct __CFString *)arg3 block:(id)arg4 ;
+(void)removePowerAssertionForAssertionID:(unsigned int)arg0 ;


@end


#endif