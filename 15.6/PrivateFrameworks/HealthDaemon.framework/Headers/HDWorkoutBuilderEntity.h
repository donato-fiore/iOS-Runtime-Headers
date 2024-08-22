// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDWORKOUTBUILDERENTITY_H
#define HDWORKOUTBUILDERENTITY_H



#import "HDHealthEntity.h"

@interface HDWorkoutBuilderEntity : HDHealthEntity



+(BOOL)discardBuilderWithIdentifier:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(NSInteger)protectionClass;
+(id)createEntityForBuilderConfiguration:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)databaseTable;
+(id)finishWorkoutBuilderWithIdentifier:(id)arg0 dateInterval:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)foreignKeys;
+(id)privateSubEntities;
+(id)workoutBuilderEntitiesExcludingSessions:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)workoutBuilderEntitiesForSource:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)workoutBuilderEntityWithIdentifier:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(BOOL)deleteStatisticsForType:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)enumerateAssociatedSampleValuesOfType:(id)arg0 interval:(id)arg1 profile:(id)arg2 error:(*id)arg3 sampleHandler:(id)arg4 ;
-(BOOL)enumerateAssociatedSamplesOfType:(id)arg0 interval:(id)arg1 profile:(id)arg2 error:(*id)arg3 sampleHandler:(id)arg4 ;
-(BOOL)enumerateAssociatedUUIDsWithTransaction:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)enumerateDataSourcesForProfile:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)enumerateStatisticsInTransaction:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)insertWorkoutEvent:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)pruneAssociatedSamplesToDateInterval:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeDataSourceWithIdentifier:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
-(BOOL)setArchivedState:(id)arg0 forDataSourceIdentifier:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
-(BOOL)setDataInterval:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)setDeviceEntity:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)setEndDate:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)setMetadata:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)setQuantityTypesIncludedWhilePaused:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)setSessionIdentifier:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)setStartDate:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)setWorkoutConfiguration:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)storeStatisticsCalculator:(id)arg0 anchor:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
-(NSInteger)associateObject:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)configurationWithTransaction:(id)arg0 error:(*id)arg1 ;
-(id)dataIntervalInTransaction:(id)arg0 error:(*id)arg1 ;
-(id)endDateInTransaction:(id)arg0 error:(*id)arg1 ;
-(id)metadataWithTransaction:(id)arg0 error:(*id)arg1 ;
-(id)quantityTypesIncludedWhilePausedInTransaction:(id)arg0 error:(*id)arg1 ;
-(id)sessionIdentifierWithTransaction:(id)arg0 error:(*id)arg1 ;
-(id)startDateInTransaction:(id)arg0 error:(*id)arg1 ;
-(id)workoutEventsInTransaction:(id)arg0 error:(*id)arg1 ;


@end


#endif