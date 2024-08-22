// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCGOALPROGRESSCOORDINATOR_H
#define FCGOALPROGRESSCOORDINATOR_H

@class FCCGoalProgressConfiguration, FCCDateProvider, NSArray, HDProfile, FCCXPCActivityScheduler, NSString;
@protocol HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, FCGoalProgressEvaluationDelegate, FCCXPCActivitySchedulerDelegate, FCGoalProgressDebouncerDelegate, OS_dispatch_queue, FCGoalProgressCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "FCGoalProgressDebouncer.h"
#import "FCGoalProgressStore.h"
#import "FCTypicalDayProvider.h"

@interface FCGoalProgressCoordinator : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, FCGoalProgressEvaluationDelegate, FCCXPCActivitySchedulerDelegate, FCGoalProgressDebouncerDelegate>

 {
    FCCGoalProgressConfiguration *_currentConfiguration;
    FCCDateProvider *_dateProvider;
    FCGoalProgressDebouncer *_debouncer;
    NSArray *_progressEvents;
    HDProfile *_profile;
    FCCXPCActivityScheduler *_scheduler;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    FCGoalProgressStore *_store;
    FCTypicalDayProvider *_typicalDayProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FCGoalProgressCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)currentExperienceType;
-(id)_minimumActiveDaysOverride;
-(id)currentCalendar;
-(id)currentDate;
-(id)initWithDateProvider:(id)arg0 debouncer:(id)arg1 profile:(id)arg2 scheduler:(id)arg3 serviceQueue:(id)arg4 store:(id)arg5 typicalDayProvider:(id)arg6 ;
-(id)lastFiredDateForProgressEventIdentifier:(id)arg0 ;
-(void)_onqueue_handleGoalProgressConfiguration:(id)arg0 ;
-(void)_onqueue_notificationPosted:(id)arg0 ;
-(void)_onqueue_registerGoalProgressConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)_onqueue_rescheduleEvents;
-(void)_onqueue_runEvaluation;
-(void)_todayActivityChanged:(id)arg0 ;
-(void)daemonReady:(id)arg0 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)dealloc;
-(void)debouncerDidFinishDebounce:(id)arg0 ;
-(void)registerGoalProgressConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)scheduler:(id)arg0 performActivityWithName:(id)arg1 completion:(id)arg2 ;


@end


#endif