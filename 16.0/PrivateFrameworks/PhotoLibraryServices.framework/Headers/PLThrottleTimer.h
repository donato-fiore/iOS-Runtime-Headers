// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLTHROTTLETIMER_H
#define PLTHROTTLETIMER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PLThrottleTimer : NSObject {
    id *_target;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_invocationQueue;
    NSUInteger _timeoutId;
    NSUInteger _maxTimeoutId;
    BOOL _isPingedSinceLastFire;
    BOOL _isPaused;
    BOOL _isInvalid;
}


@property (readonly, nonatomic) SEL action; // ivar: _action
@property (readonly, nonatomic) CGFloat maxTimeout; // ivar: _maxTimeout
@property (readonly, weak, nonatomic) id *target;
@property (readonly, nonatomic) CGFloat timeout; // ivar: _timeout


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 invocationQueue:(id)arg2 timeout:(CGFloat)arg3 maxTimeout:(CGFloat)arg4 ;
-(void)_inqFireWithTimeout:(BOOL)arg0 timeoutId:(NSUInteger)arg1 maxTimeout:(BOOL)arg2 maxTimeoutId:(NSUInteger)arg3 ;
-(void)_inqScheduleTimeout:(BOOL)arg0 maxTimeout:(BOOL)arg1 ;
-(void)invalidate;
-(void)ping;
-(void)setPaused:(BOOL)arg0 ;


@end


#endif