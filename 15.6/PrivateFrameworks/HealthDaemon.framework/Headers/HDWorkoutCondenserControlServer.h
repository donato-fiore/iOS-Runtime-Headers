// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDWORKOUTCONDENSERCONTROLSERVER_H
#define HDWORKOUTCONDENSERCONTROLSERVER_H

@protocol HKWorkoutCondenserControlServer;


#import "HDStandardTaskServer.h"

@interface HDWorkoutCondenserControlServer : HDStandardTaskServer <HKWorkoutCondenserControlServer>





+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_condensableWorkoutsWithCompletion:(id)arg0 ;
-(void)remote_condenseWorkoutWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)remote_condenseWorkoutsForReason:(NSInteger)arg0 workoutBatchLimit:(NSInteger)arg1 completion:(id)arg2 ;
-(void)remote_condensedWorkoutsWithCompletion:(id)arg0 ;


@end


#endif