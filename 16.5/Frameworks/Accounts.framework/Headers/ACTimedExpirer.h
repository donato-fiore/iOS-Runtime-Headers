// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACTIMEDEXPIRER_H
#define ACTIMEDEXPIRER_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface ACTimedExpirer : NSObject {
    NSUInteger _invalidationInterval;
    NSObject<OS_dispatch_source> *_invalidationTimer;
    os_unfair_lock_s _invalidationTimerLock;
}




+(id)expirerWithTimeout:(NSUInteger)arg0 ;
-(id)init;
-(void)_cancelTimer;
-(void)_unsafeCancelTimer;
-(void)dealloc;
-(void)scheduleExpiration:(id)arg0 ;


@end


#endif