// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCOUNTDOWNLATCH_H
#define CNCOUNTDOWNLATCH_H

@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "CNUnfairLock.h"

@interface CNCountdownLatch : NSObject {
    NSUInteger _count;
    CNUnfairLock *_lock;
    NSObject<OS_dispatch_semaphore> *_latchedSemaphore;
}




-(BOOL)awaitImmediate;
-(BOOL)awaitOnSemaphoreWithTimeout:(CGFloat)arg0 ;
-(BOOL)awaitWhileSpinningRunloopWithTimeout:(CGFloat)arg0 ;
-(BOOL)awaitWithTimeout:(CGFloat)arg0 ;
-(BOOL)awaitWithTimeout:(CGFloat)arg0 strategy:(NSUInteger)arg1 ;
-(BOOL)hasLatched;
-(id)description;
-(id)init;
-(id)initWithStartingCount:(NSUInteger)arg0 ;
-(void)await;
-(void)countDown;


@end


#endif