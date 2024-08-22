// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWREFRESHSCHEDULER_H
#define FLOWREFRESHSCHEDULER_H

@class NSMutableDictionary, NSMutableArray, NSString;
@protocol ManagedEventInfoProtocol, OS_dispatch_source, FlowImmediateRefreshDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FlowRefreshScheduler : NSObject <ManagedEventInfoProtocol>

 {
    CGFloat _lastRefresh;
    CGFloat _lastScheduledExpiry;
    CGFloat _scheduledExpiry;
    CGFloat _currentDutyCycle;
    CGFloat _minimumDutyCycle;
    BOOL _inProgressRepeatingPoll;
    BOOL _inProgressSingleShotPoll;
    NSInteger _seqno;
    NSMutableDictionary *_requests;
    NSInteger _delegateSeqno;
    NSMutableDictionary *_delegates;
    NSMutableArray *_recentSingleShots;
    NSUInteger _numSingleShotCalls;
    NSUInteger _numSingleShotImmediateCallbacks;
    NSUInteger _numSingleShotNoDelay;
    NSUInteger _numSingleShotWaitExistingTimer;
    NSUInteger _numSingleShotPossNewTimer;
    NSUInteger _numSingleShotNoExistingTimer;
    NSUInteger _numPeriodicCalls;
    NSUInteger _numPeriodicCancels;
    NSUInteger _numInvalidCancels;
    NSUInteger _numTimerExpiries;
    NSUInteger _numDidPollFlows;
    NSUInteger _numImmediateTimerSpeedups;
    NSUInteger _numImmediateTimerCancellations;
    NSUInteger _numDelayedTimerSlowdowns;
    NSUInteger _numDelayedTimerCancellationsScheduled;
    NSUInteger _numDelayedTimerCancellationsRun;
    NSObject<OS_dispatch_source> *_timer;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FlowImmediateRefreshDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)dumpState;
+(void)refreshDataUsageFor:(id)arg0 maxStale:(CGFloat)arg1 maxDelay:(CGFloat)arg2 logAs:(id)arg3 callback:(id)arg4 ;
-(NSInteger)periodicRefreshDataUsageFor:(id)arg0 interval:(CGFloat)arg1 maxStale:(CGFloat)arg2 maxDelay:(CGFloat)arg3 logAs:(id)arg4 ;
-(id)getState;
-(id)initWithQueue:(id)arg0 ;
-(void)_generateInfoForId:(NSUInteger)arg0 context:(char *)arg1 uuid:(id)arg2 completionBlock:(id)arg3 ;
-(void)_refreshTimer;
-(void)addDelegate:(id)arg0 ;
-(void)cancelRefresh:(NSInteger)arg0 ;
-(void)cancelTimer;
-(void)didPollFlowsAt:(CGFloat)arg0 ;
-(void)dumpState;
-(void)generateInfoForId:(NSUInteger)arg0 context:(char *)arg1 uuid:(id)arg2 completionBlock:(id)arg3 ;
-(void)recalculateTimer;
-(void)refreshDataUsageFor:(id)arg0 maxStale:(CGFloat)arg1 maxDelay:(CGFloat)arg2 logAs:(id)arg3 callback:(id)arg4 ;
-(void)removeDelegate:(id)arg0 ;
-(void)setRepeatingTimer:(CGFloat)arg0 initialDelay:(CGFloat)arg1 ;


@end


#endif