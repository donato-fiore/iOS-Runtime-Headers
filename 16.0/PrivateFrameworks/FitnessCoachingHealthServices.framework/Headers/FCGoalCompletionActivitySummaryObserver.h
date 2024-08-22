// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCGOALCOMPLETIONACTIVITYSUMMARYOBSERVER_H
#define FCGOALCOMPLETIONACTIVITYSUMMARYOBSERVER_H

@class HKActivitySummary, HDProfile, NSString;
@protocol HDCurrentActivitySummaryHelperObserver, HDHealthDaemonReadyObserver, OS_dispatch_queue, FCDailyActivityGoalDetectionDelegate;

#import <Foundation/Foundation.h>


@interface FCGoalCompletionActivitySummaryObserver : NSObject <HDCurrentActivitySummaryHelperObserver, HDHealthDaemonReadyObserver>

 {
    HKActivitySummary *_currentActivitySummary;
    HKActivitySummary *_previousActivitySummary;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_serviceQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FCDailyActivityGoalDetectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_runGoalCompletionForExerciseWithNewActivitySummary:(id)arg0 ;
-(BOOL)_runGoalCompletionForMoveWithNewActivitySummary:(id)arg0 ;
-(BOOL)_runGoalCompletionForStandWithNewActivitySummary:(id)arg0 ;
-(id)initWithProfile:(id)arg0 serviceQueue:(id)arg1 ;
-(void)_runGoalCompletionsForNewActivitySummary:(id)arg0 forChangedFields:(NSUInteger)arg1 ;
-(void)currentActivitySummaryHelper:(id)arg0 didUpdateTodayActivitySummary:(id)arg1 changedFields:(NSUInteger)arg2 ;
-(void)currentActivitySummaryHelper:(id)arg0 didUpdateYesterdayActivitySummary:(id)arg1 changedFields:(NSUInteger)arg2 ;
-(void)daemonReady:(id)arg0 ;
-(void)dealloc;


@end


#endif