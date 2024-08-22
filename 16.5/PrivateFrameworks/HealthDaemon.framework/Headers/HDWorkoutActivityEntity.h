// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDWORKOUTACTIVITYENTITY_H
#define HDWORKOUTACTIVITYENTITY_H



#import "HDHealthEntity.h"

@interface HDWorkoutActivityEntity : HDHealthEntity



+(BOOL)_insertOrReplaceWorkoutActivity:(id)arg0 shouldReplace:(BOOL)arg1 ownerID:(NSUInteger)arg2 isPrimaryActivity:(BOOL)arg3 database:(id)arg4 error:(*id)arg5 ;
+(BOOL)enumerateActivityEntitiesForOwnerID:(NSUInteger)arg0 transaction:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(BOOL)insertPrimaryActivity:(id)arg0 ownerID:(NSUInteger)arg1 database:(id)arg2 error:(*id)arg3 ;
+(BOOL)insertSubActivities:(id)arg0 ownerID:(NSUInteger)arg1 database:(id)arg2 error:(*id)arg3 ;
+(BOOL)supportsNullableEndDate;
+(Class)ownerEntityClass;
+(NSInteger)protectionClass;
+(id)_allProperties;
+(id)_numberProperty:(id)arg0 primaryActivityOwnerID:(NSUInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(id)_primaryActivityPredicateForOwnerID:(NSUInteger)arg0 ;
+(id)_statisticsForWorkoutActivityWithPersistentId:(NSUInteger)arg0 workoutActivity:(id)arg1 database:(id)arg2 error:(*id)arg3 ;
+(id)_workoutActivityFromRow:(struct HDSQLiteRow *)arg0 ;
+(id)activityEntityWithUUID:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)activityTypeForPrimaryActivityOwnerID:(NSUInteger)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)databaseTable;
+(id)durationForPrimaryActivityOwnerID:(NSUInteger)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)foreignKeys;
+(id)indices;
+(id)primaryWorkoutActivityForOwnerID:(NSUInteger)arg0 database:(id)arg1 error:(*id)arg2 ;
+(id)subActivitiesWithOwnerID:(NSUInteger)arg0 database:(id)arg1 error:(*id)arg2 ;
+(id)subActivityEntityWithUUID:(id)arg0 ownerID:(NSUInteger)arg1 database:(id)arg2 error:(*id)arg3 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(BOOL)setDuration:(CGFloat)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)setEndDate:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)setMetadata:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)unitTest_validateInTransaction:(id)arg0 error:(*id)arg1 ;
-(id)UUIDInTransaction:(id)arg0 error:(*id)arg1 ;


@end


#endif