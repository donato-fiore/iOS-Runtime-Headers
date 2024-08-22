// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSTIMER_H
#define BSTIMER_H

@class NSString;
@protocol BSTimer, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BSDispatchSource.h"

@interface BSTimer : NSObject <BSTimer>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    id *_handler;
    BSDispatchSource *_source;
    CGFloat _leewayInterval;
    BOOL _oneShot;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger fireCount; // ivar: _fireCount
@property (readonly, nonatomic) CGFloat fireInterval; // ivar: _fireInterval
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat repeatInterval; // ivar: _repeatInterval
@property (readonly, nonatomic, getter=isScheduled) BOOL scheduled; // ivar: _scheduled
@property (readonly, nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly) Class superclass;


+(id)scheduledTimerWithFireInterval:(CGFloat)arg0 queue:(id)arg1 handler:(id)arg2 ;
-(id)initWithFireInterval:(CGFloat)arg0 queue:(id)arg1 handler:(id)arg2 ;
-(id)initWithFireInterval:(CGFloat)arg0 repeatInterval:(CGFloat)arg1 leewayInterval:(CGFloat)arg2 queue:(id)arg3 handler:(id)arg4 ;
-(void)cancel;
-(void)dealloc;
-(void)schedule;


@end


#endif