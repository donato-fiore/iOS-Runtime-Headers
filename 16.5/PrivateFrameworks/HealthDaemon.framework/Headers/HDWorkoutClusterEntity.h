// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDWORKOUTCLUSTERENTITY_H
#define HDWORKOUTCLUSTERENTITY_H



#import "HDHealthEntity.h"

@interface HDWorkoutClusterEntity : HDHealthEntity



+(BOOL)deleteWorkoutClusterWithUUID:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(BOOL)updateWorkoutClusterWithUUID:(id)arg0 relevanceValue:(id)arg1 lastWorkoutUUID:(id)arg2 bestWorkoutUUID:(id)arg3 workoutUUIDsToAssociate:(id)arg4 workoutUUIDsToRemove:(id)arg5 profile:(id)arg6 error:(*id)arg7 ;
+(BOOL)updateWorkoutClusterWithUUID:(id)arg0 routeLabel:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(BOOL)updateWorkoutClusterWithUUID:(id)arg0 routeSnapshot:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(NSInteger)protectionClass;
+(id)clusterEntitiesWithTransaction:(id)arg0 limit:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)clusterUUIDsForWorkoutUUIDs:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)databaseTable;
+(id)entityForClusterUUID:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)foreignKeys;
+(id)insertWorkoutCluster:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)privateSubEntities;
+(id)uniquedColumns;
+(id)workoutClusterContainingWorkoutUUID:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)workoutClustersForProfile:(id)arg0 limit:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)workoutEntityForUUID:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)workoutUUIDsForClusterUUID:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(BOOL)modelPropertiesWithTransaction:(id)arg0 error:(*id)arg1 handler:(id)arg2 ;
-(id)numberOfWorkoutsWithTransaction:(id)arg0 error:(*id)arg1 ;
-(id)snapshotEntityWithTransaction:(id)arg0 error:(*id)arg1 ;
-(id)workoutRouteSnapshotWithTransaction:(id)arg0 error:(*id)arg1 ;
-(id)workoutUUIDsWithTransaction:(id)arg0 error:(*id)arg1 ;


@end


#endif