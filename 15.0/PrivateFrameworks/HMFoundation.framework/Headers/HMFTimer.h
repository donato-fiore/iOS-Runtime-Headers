// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMFTIMER_H
#define HMFTIMER_H

@class NSDate;
@protocol OS_dispatch_queue, HMFTimerDelegate, OS_dispatch_source;


#import "HMFObject.h"

@interface HMFTimer : HMFObject {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSInteger _leeway;
    BOOL _running;
}


@property (weak) NSObject<HMFTimerDelegate> *delegate; // ivar: _delegate
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSDate *fireDate; // ivar: _fireDate
@property (readonly, nonatomic) NSUInteger leeway;
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, getter=isRunning) BOOL running;
@property (readonly, nonatomic) CGFloat timeInterval; // ivar: _timeInterval
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer


+(id)shortDescription;
-(id)attributeDescriptions;
-(id)init;
-(id)initWithTimeInterval:(CGFloat)arg0 options:(NSUInteger)arg1 ;
-(void)__fire;
-(void)__handleExpiration;
-(void)dealloc;
-(void)fire;
-(void)kick;
-(void)resume;
-(void)suspend;


@end


#endif