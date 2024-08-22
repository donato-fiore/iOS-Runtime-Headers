// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKWORKOUTCLUSTERSTORE_H
#define HKWORKOUTCLUSTERSTORE_H

@class NSString;
@protocol _HKXPCExportable, HKWorkoutClusterStoreClient;

#import <Foundation/Foundation.h>

#import "HKTaskServerProxyProvider.h"

@interface HKWorkoutClusterStore : NSObject <_HKXPCExportable, HKWorkoutClusterStoreClient>

 {
    HKTaskServerProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)_coordinatesHandlerWithCallback:(SEL)arg0 completion:(id)arg1 ;
-(id)_workoutFilterForPredicate:(id)arg0 ;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)createWorkoutCluster:(id)arg0 completion:(id)arg1 ;
-(void)deleteWorkoutClusterWithUUID:(id)arg0 completion:(id)arg1 ;
// -(void)fetchRouteCoordinatesForWorkoutUUID:(id)arg0 dateInterval:(id)arg1 limit:(NSUInteger)arg2 handler:(id)arg3 completion:(unk)arg4  ;
// -(void)fetchRouteCoordinatesForWorkoutUUID:(id)arg0 startDate:(id)arg1 limit:(NSUInteger)arg2 handler:(id)arg3 completion:(unk)arg4  ;
-(void)fetchWorkoutClusterContainingWorkoutUUID:(id)arg0 completion:(id)arg1 ;
-(void)fetchWorkoutClustersContainingWorkoutUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)fetchWorkoutClustersWithCompletion:(id)arg0 ;
-(void)fetchWorkoutCountWithPredicate:(id)arg0 completion:(id)arg1 ;
-(void)fetchWorkoutRouteSnapshotForClusterUUID:(id)arg0 completion:(id)arg1 ;
-(void)fetchWorkoutUUIDsForClusterUUID:(id)arg0 completion:(id)arg1 ;
-(void)fetchWorkoutsWithPredicate:(id)arg0 anchor:(id)arg1 limit:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)fetchWorkoutsWithPredicate:(id)arg0 limit:(NSUInteger)arg1 sortDescriptors:(id)arg2 completion:(id)arg3 ;
-(void)generateRaceRouteClustersWithLimit:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)updateWorkoutClusterWithUUID:(id)arg0 newRelevance:(id)arg1 newLastWorkoutUUID:(id)arg2 newBestWorkoutUUID:(id)arg3 newWorkoutAssociations:(id)arg4 workoutAssociationsToRemove:(id)arg5 completion:(id)arg6 ;
-(void)updateWorkoutRouteLabel:(id)arg0 forClusterUUID:(id)arg1 completion:(id)arg2 ;
-(void)updateWorkoutRouteSnapshot:(id)arg0 forClusterUUID:(id)arg1 completion:(id)arg2 ;


@end


#endif