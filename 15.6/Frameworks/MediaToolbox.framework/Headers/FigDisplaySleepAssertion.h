// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGDISPLAYSLEEPASSERTION_H
#define FIGDISPLAYSLEEPASSERTION_H

@class NSString;
@protocol OS_dispatch_source, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface FigDisplaySleepAssertion : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    NSString *_reason;
    id<BSInvalidatable> *_idleTimerAssertion;
    NSInteger _lastIdleTimerResetTime;
}




-(id)initWithReason:(id)arg0 queue:(id)arg1 expirationHandler:(id)arg2 ;
-(unsigned char)resetIdleTimer;
-(void)dealloc;


@end


#endif