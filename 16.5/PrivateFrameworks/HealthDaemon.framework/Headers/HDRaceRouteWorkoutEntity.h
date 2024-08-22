// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDRACEROUTEWORKOUTENTITY_H
#define HDRACEROUTEWORKOUTENTITY_H



#import "HDHealthEntity.h"

@interface HDRaceRouteWorkoutEntity : HDHealthEntity



+(BOOL)enumerateRoutePointsForWorkoutPersistentID:(NSInteger)arg0 timestampAnchor:(CGFloat)arg1 limit:(NSUInteger)arg2 startDuration:(CGFloat)arg3 finishDuration:(CGFloat)arg4 transaction:(id)arg5 error:(*id)arg6 handler:(id)arg7 ;
+(BOOL)enumerateRoutePointsForWorkoutUUID:(id)arg0 timestampAnchor:(CGFloat)arg1 limit:(NSUInteger)arg2 profile:(id)arg3 error:(*id)arg4 dataHandler:(id)arg5 ;
+(BOOL)insertCodableRoutePoints:(id)arg0 workoutPersistentID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)markForDeletionWorkoutDataWithPersistentID:(NSInteger)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(BOOL)pruneWorkoutsMarkedForDeletionInTransaction:(id)arg0 error:(*id)arg1 ;
+(NSInteger)protectionClass;
+(id)createRaceRouteWorkoutFromWorkout:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)databaseTable;
+(id)entityForWorkoutUUID:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)insertCodableRacingMetrics:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)privateSubEntities;
+(id)startingPointForWorkoutWithPersistentID:(NSInteger)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(BOOL)setDateToDelete:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)dateToDeleteInTransaction:(id)arg0 error:(*id)arg1 ;


@end


#endif