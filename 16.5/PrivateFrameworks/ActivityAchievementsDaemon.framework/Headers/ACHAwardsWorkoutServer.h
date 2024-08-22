// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHAWARDSWORKOUTSERVER_H
#define ACHAWARDSWORKOUTSERVER_H

@class HDStandardTaskServer, NSString;
@protocol ACHAwardsWorkoutServerInterface, OS_dispatch_queue;


#import "ACHWorkoutUtility.h"

@interface ACHAwardsWorkoutServer : HDStandardTaskServer <ACHAwardsWorkoutServerInterface>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (retain, nonatomic) ACHWorkoutUtility *workoutUtility; // ivar: _workoutUtility


+(id)taskIdentifier;
-(id)_protectedDataAvailabilityError;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)remote_bestDistanceForFirstPartyWorkoutsWithType:(NSUInteger)arg0 endingBeforeDate:(id)arg1 completion:(id)arg2 ;
-(void)remote_bestEnergyBurnedForFirstPartyWorkoutsWithType:(NSUInteger)arg0 endingBeforeDate:(id)arg1 completion:(id)arg2 ;
-(void)remote_numberOfFirstPartyWorkoutsWithDuration:(CGFloat)arg0 containedInInterval:(id)arg1 completion:(id)arg2 ;
-(void)remote_numberOfFirstPartyWorkoutsWithDuration:(CGFloat)arg0 type:(NSUInteger)arg1 andLocation:(NSUInteger)arg2 containedInInterval:(id)arg3 completion:(id)arg4 ;
-(void)remote_numberOfFirstPartyWorkoutsWithDuration:(CGFloat)arg0 type:(NSUInteger)arg1 endingOnOrBeforeDate:(id)arg2 completion:(id)arg3 ;
-(void)remote_numberOfWorkoutsWithDuration:(CGFloat)arg0 containedInInterval:(id)arg1 completion:(id)arg2 ;
-(void)remote_workoutsInDateInterval:(id)arg0 completion:(id)arg1 ;


@end


#endif