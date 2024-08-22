// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDWORKOUTOBSERVERSERVER_H
#define HDWORKOUTOBSERVERSERVER_H

@class NSLock, NSString;
@protocol _HKWorkoutObserverServerInterface, HDCurrentWorkoutObserver, HDWorkoutDataAccumulatorObserver;


#import "HDStandardTaskServer.h"
#import "HDWorkoutSessionServer.h"

@interface HDWorkoutObserverServer : HDStandardTaskServer <_HKWorkoutObserverServerInterface, HDCurrentWorkoutObserver, HDWorkoutDataAccumulatorObserver>

 {
    BOOL _registered;
    HDWorkoutSessionServer *_currentWorkout;
    NSLock *_lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)dealloc;
-(void)remote_startTaskServerIfNeeded;
-(void)remote_waitForAutomaticWorkoutRecoveryWithCompletion:(id)arg0 ;
-(void)workoutDataAccumulator:(id)arg0 didUpdateEvents:(id)arg1 ;
-(void)workoutDataAccumulator:(id)arg0 didUpdateStartDate:(id)arg1 ;
-(void)workoutManager:(id)arg0 currentWorkout:(id)arg1 didChangeToState:(NSInteger)arg2 ;
-(void)workoutManager:(id)arg0 currentWorkout:(id)arg1 didUpdateDataAccumulator:(id)arg2 ;
-(void)workoutManager:(id)arg0 didUpdateCurrentWorkout:(id)arg1 ;


@end


#endif