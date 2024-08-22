// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDWORKOUTCLUSTERSERVER_H
#define HDWORKOUTCLUSTERSERVER_H

@class NSString;
@protocol HKWorkoutClusterStoreServer;


#import "HDStandardTaskServer.h"
#import "HDRaceRouteClusterManager.h"
#import "HDWorkoutClusterManager.h"

@interface HDWorkoutClusterServer : HDStandardTaskServer <HKWorkoutClusterStoreServer>

 {
    HDRaceRouteClusterManager *_raceRouteClusterManager;
    HDWorkoutClusterManager *_workoutClusterManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maxRouteCoordinateBatchSize; // ivar: _maxRouteCoordinateBatchSize
@property (nonatomic) NSUInteger maxWorkoutBatchSize; // ivar: _maxWorkoutBatchSize
@property (readonly) Class superclass;


+(id)createTaskServerWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 error:(*id)arg4 ;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_createWorkoutCluster:(id)arg0 completion:(id)arg1 ;
-(void)remote_deleteWorkoutClusterWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)remote_fetchRouteCoordinatesForWorkoutUUID:(id)arg0 dateInterval:(id)arg1 limit:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)remote_fetchRouteCoordinatesForWorkoutUUID:(id)arg0 startDate:(id)arg1 limit:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)remote_fetchWorkoutClusterContainingWorkoutUUID:(id)arg0 completion:(id)arg1 ;
-(void)remote_fetchWorkoutClustersContainingWorkoutUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)remote_fetchWorkoutClustersWithCompletion:(id)arg0 ;
-(void)remote_fetchWorkoutCountWithFilter:(id)arg0 completion:(id)arg1 ;
-(void)remote_fetchWorkoutRouteSnapshotForClusterUUID:(id)arg0 completion:(id)arg1 ;
-(void)remote_fetchWorkoutUUIDsForClusterUUID:(id)arg0 completion:(id)arg1 ;
-(void)remote_fetchWorkoutsWithFilter:(id)arg0 anchor:(id)arg1 limit:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)remote_fetchWorkoutsWithFilter:(id)arg0 limit:(NSUInteger)arg1 sortDescriptors:(id)arg2 completion:(id)arg3 ;
-(void)remote_generateRaceRouteClustersWithLimit:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)remote_updateWorkoutClusterWithUUID:(id)arg0 newRelevance:(id)arg1 newLastWorkoutUUID:(id)arg2 newBestWorkoutUUID:(id)arg3 newWorkoutAssociations:(id)arg4 workoutAssociationsToRemove:(id)arg5 completion:(id)arg6 ;
-(void)remote_updateWorkoutRouteLabel:(id)arg0 forClusterUUID:(id)arg1 completion:(id)arg2 ;
-(void)remote_updateWorkoutRouteSnapshot:(id)arg0 forClusterUUID:(id)arg1 completion:(id)arg2 ;


@end


#endif