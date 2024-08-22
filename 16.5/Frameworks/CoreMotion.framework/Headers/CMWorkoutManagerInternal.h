// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMWORKOUTMANAGERINTERNAL_H
#define CMWORKOUTMANAGERINTERNAL_H

@protocol OS_dispatch_queue, CMWorkoutManagerDelegate;

#import <Foundation/Foundation.h>

#import "CMWorkoutManager.h"
#import "CMWorkout.h"
#import "CMWorkoutOverview.h"

@interface CMWorkoutManagerInternal : NSObject {
    *void fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    id<CMWorkoutManagerDelegate> *fDelegate;
    CMWorkoutManager *fSender;
    CMWorkout *fLastNonTransitionWorkout;
    CMWorkout *fWorkout;
    CMWorkoutOverview *fWorkoutOverview;
    BOOL fEnableWorkoutChangeDetection;
    NSInteger fSessionState;
}




-(BOOL)_shouldAllowMotionCalibrationPromptsForWorkoutType:(NSInteger)arg0 ;
-(id)init;
-(void)_beginWorkoutSession:(id)arg0 withWorkout:(id)arg1 enableWorkoutChangeDetection:(BOOL)arg2 ;
-(void)_checkWorkout:(id)arg0 ;
-(void)_endWorkoutSession:(id)arg0 ;
-(void)_getPromptsNeededForWorkoutType:(NSInteger)arg0 handler:(id)arg1 ;
-(void)_handleDaemonEvent:(id)arg0 ;
-(void)_handleDaemonResponse:(id)arg0 ;
-(void)_pauseWorkout:(id)arg0 ;
-(void)_registerForWorkoutEvents;
-(void)_resumeWorkout:(id)arg0 ;
-(void)_setCurrentWorkoutType:(id)arg0 isManualTransition:(BOOL)arg1 ;
-(void)_setMode:(NSUInteger)arg0 forWorkout:(id)arg1 ;
-(void)_setSuggestedStopTimeout:(CGFloat)arg0 ;
-(void)_setWorkout:(id)arg0 ;
-(void)_startWorkout:(id)arg0 ;
-(void)_stopWorkout:(id)arg0 ;
-(void)_teardown;
-(void)_triggerWorkoutLocationUpdateForTesting:(NSInteger)arg0 ;
-(void)_unregisterForWorkoutEvents;
-(void)_userDismissedWorkoutAlert;
-(void)dealloc;


@end


#endif