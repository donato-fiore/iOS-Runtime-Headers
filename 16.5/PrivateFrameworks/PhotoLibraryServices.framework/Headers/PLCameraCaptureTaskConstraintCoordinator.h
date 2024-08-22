// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCAMERACAPTURETASKCONSTRAINTCOORDINATOR_H
#define PLCAMERACAPTURETASKCONSTRAINTCOORDINATOR_H

@class NSString, PLXPCTransaction, PLDelayedActionTimer, PFCameraViewfinderSessionWatcher;
@protocol PFCameraViewfinderSessionWatcherDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PLCameraCaptureTaskConstraintCoordinator : NSObject <PFCameraViewfinderSessionWatcherDelegate>

 {
    NSString *_name;
    NSString *_creationDateString;
    NSObject<OS_dispatch_queue> *_activationQueue;
    PLXPCTransaction *_transaction;
    BOOL _delayedDeactivationInProgress;
    PLDelayedActionTimer *_failsafeTimer;
    BOOL _failsafeTimerEnabled;
    PFCameraViewfinderSessionWatcher *_cameraWatcher;
    NSObject<OS_dispatch_queue> *_cameraWatcherQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger role; // ivar: _role
@property (readonly) Class superclass;


+(BOOL)_shouldUseFailsafeTimerForRole:(NSInteger)arg0 ;
+(BOOL)_shouldWatchCameraViewfinderForRole:(NSInteger)arg0 ;
+(id)taskConstraintStatus;
-(id)initWithTaskContstraintRole:(NSInteger)arg0 name:(id)arg1 ;
-(id)sessionStatusDescription;
-(void)_activateCameraSessionTaskConstraints;
-(void)_cancelSessionFailsafeTimer;
-(void)_deactivateCameraSessionTaskConstraintsAfterDelay:(CGFloat)arg0 ;
-(void)_invalidateTransactionAndStopConstrainingTasksWithDelayedDeactivation:(BOOL)arg0 ;
-(void)_startSessionFailsafeTimer;
-(void)_startWatchingCameraActivity;
-(void)activateCameraSessionTaskConstraints;
-(void)cameraWatcherDidChangeState:(id)arg0 ;
-(void)deactivateCameraSessionTaskConstraints;
-(void)invalidate;
-(void)updateConstraintsForCameraRollViewVisible:(BOOL)arg0 ;


@end


#endif