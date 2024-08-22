// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFMYRIADMONITOR_H
#define AFMYRIADMONITOR_H

@class NSString;
@protocol AFNotifyObserverDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AFInstanceContext.h"
#import "AFQueue.h"
#import "AFNotifyObserver.h"
#import "AFWatchdogTimer.h"

@interface AFMyriadMonitor : NSObject <AFNotifyObserverDelegate>

 {
    NSInteger _state;
    AFInstanceContext *_instanceContext;
    AFQueue *_completions;
    AFNotifyObserver *_beginObserver;
    AFNotifyObserver *_wonObserver;
    AFNotifyObserver *_lostObserver;
    AFNotifyObserver *_repostedWonObserver;
    AFWatchdogTimer *_timer;
    AFWatchdogTimer *_fetchRepostedMyriadDecisionTimer;
    NSObject<OS_dispatch_queue> *_myriadMonitorQueue;
    CGFloat _myriadEventMonitorTimeout;
    BOOL _isRegisteredForMyriadEventNotification;
    BOOL _ignoreMyriadEvents;
    BOOL _isMonitoring;
    BOOL _ignoreRepostMyriadNotification;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedMonitor;
-(BOOL)didWin;
-(BOOL)isMonitoring;
-(id)_fetchCurrentMyriadDecisionWithWaitTime:(CGFloat)arg0 ;
-(id)_myriadStateToString:(NSInteger)arg0 ;
-(id)init;
-(void)_cancelRepostedMyriadDecisionTimer;
-(void)_clear;
-(void)_dequeueBlocksWithSignal:(NSInteger)arg0 ;
-(void)_deregisterFromMyriadEventNotifications;
-(void)_deregisterFromRepostedDecisionResultsObservers;
// -(void)_enqueueBlock:(id)arg0 forReason:(unk)arg1  ;
-(void)_flushCompletions:(BOOL)arg0 ;
-(void)_ignoreRepostMyriadNotification:(BOOL)arg0 ;
-(void)_registerForMyriadEvents;
-(void)_resultSeenWithValue:(BOOL)arg0 ;
-(void)_setDecisionIsPending;
-(void)dealloc;
-(void)dequeueBlocksWaitingForMyriadDecision;
-(void)ignoreMyriadEvents:(BOOL)arg0 ;
-(void)notifyObserver:(id)arg0 didChangeStateFrom:(NSUInteger)arg1 to:(NSUInteger)arg2 ;
-(void)notifyObserver:(id)arg0 didReceiveNotificationWithToken:(int)arg1 ;
-(void)startMonitoringWithTimeoutInterval:(CGFloat)arg0 ;
-(void)startMonitoringWithTimeoutInterval:(CGFloat)arg0 instanceContext:(id)arg1 ;
-(void)stopMonitoring;
-(void)waitForMyriadDecisionForReason:(id)arg0 withCompletion:(id)arg1 ;
-(void)waitForMyriadDecisionWithCompletion:(id)arg0 ;


@end


#endif