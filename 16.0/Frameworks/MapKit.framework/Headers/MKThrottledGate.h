// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKTHROTTLEDGATE_H
#define MKTHROTTLEDGATE_H

@class NSMutableArray, VKTimer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MKThrottledGate : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _maxAvailableTickets;
    CGFloat _availableTickets;
    CGFloat _refreshRate;
    NSMutableArray *_waitingJobs;
    VKTimer *_timer;
}




-(BOOL)_dispatchWaitingJobsIfNecessary;
-(BOOL)_replenishAvailableJobsIfNecessary;
-(id)description;
-(id)initWithMax:(int)arg0 refreshRate:(CGFloat)arg1 queue:(id)arg2 ;
-(void)_ensureTimer;
-(void)_timerFired:(id)arg0 ;
-(void)dealloc;
-(void)dispatch:(id)arg0 ;


@end


#endif