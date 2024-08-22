// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDWORKOUTLOCATIONSMOOTHER_H
#define HDWORKOUTLOCATIONSMOOTHER_H

@class CLLocationSmoother, NSMutableArray, NSString;
@protocol CLLocationSmootherDelegate, HDDatabaseProtectedDataObserver, HDForegroundClientProcessObserver, HDDataObserver, HDHealthDaemonReadyObserver, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDSmoothingTask.h"

@interface HDWorkoutLocationSmoother : NSObject <CLLocationSmootherDelegate, HDDatabaseProtectedDataObserver, HDForegroundClientProcessObserver, HDDataObserver, HDHealthDaemonReadyObserver>

 {
    CLLocationSmoother *_smoother;
    NSObject<OS_dispatch_queue> *_queue;
    HDProfile *_profile;
    NSMutableArray *_pendingSmoothingTasks;
    HDSmoothingTask *_currentSmoothingTask;
    NSObject<OS_dispatch_source> *_timeoutSource;
    CGFloat _smoothingTaskTimeout;
    BOOL _needToCheckForLocationSeriesOnUnlock;
    BOOL _isFirstLaunchAndNotYetSmoothed;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didCompleteAllPendingSmoothingTasksHandler; // ivar: _didCompleteAllPendingSmoothingTasksHandler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *unitTest_wilTriggerSmoothing; // ivar: _unitTest_wilTriggerSmoothing


-(id)initWithProfile:(id)arg0 ;
-(void)_associationsSyncedForWorkout:(id)arg0 ;
-(void)daemonReady:(id)arg0 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)dealloc;
-(void)foregroundClientProcessesDidChange:(id)arg0 previouslyForegroundBundleIdentifiers:(id)arg1 ;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;
-(void)smoothRouteWithWorkoutUUID:(id)arg0 completion:(id)arg1 ;
-(void)unitTest_smoothRouteSample:(id)arg0 withSmoother:(id)arg1 completion:(id)arg2 ;


@end


#endif