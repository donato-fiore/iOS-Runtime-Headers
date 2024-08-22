// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDWORKOUTENTITY_H
#define HDWORKOUTENTITY_H



#import "HDSampleEntity.h"

@interface HDWorkoutEntity : HDSampleEntity



+(BOOL)addCodableObject:(id)arg0 toCollection:(id)arg1 ;
+(BOOL)copySampleAssociationsFromWorkout:(id)arg0 toWorkout:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(BOOL)enumerateCondensedWorkoutsWithPredicate:(id)arg0 profile:(id)arg1 error:(*id)arg2 handler:(id)arg3 ;
+(BOOL)isConcreteEntity;
+(BOOL)supportsObjectMerging;
+(BOOL)workoutActivityType:(*NSUInteger)arg0 associatedWithRouteUUID:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(id)codableObjectsFromObjectCollection:(id)arg0 ;
+(id)databaseTable;
+(id)deleteStatementsForRelatedEntitiesWithTransaction:(id)arg0 ;
+(id)entityEncoderForProfile:(id)arg0 transaction:(id)arg1 purpose:(NSInteger)arg2 encodingOptions:(id)arg3 authorizationFilter:(id)arg4 ;
+(id)insertDataObject:(id)arg0 withProvenance:(id)arg1 inDatabase:(id)arg2 persistentID:(id)arg3 error:(*id)arg4 ;
+(id)joinClausesForProperty:(id)arg0 ;
+(id)maxValueForProperty:(id)arg0 predicate:(id)arg1 database:(id)arg2 error:(*id)arg3 ;
+(id)mergeDataObject:(id)arg0 provenance:(id)arg1 profile:(id)arg2 transaction:(id)arg3 error:(*id)arg4 insertHandler:(id)arg5 ;
+(id)orderingTermForSortDescriptor:(id)arg0 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(BOOL)getCondenserVersion:(*NSInteger)arg0 date:(*id)arg1 profile:(id)arg2 error:(*id)arg3 ;
-(BOOL)isCondenserVersionLessThan:(NSInteger)arg0 transaction:(id)arg1 ;
-(BOOL)updateCondenserVersion:(NSInteger)arg0 date:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
-(id)codableCondensedWorkoutWithTransaction:(id)arg0 error:(*id)arg1 ;
-(id)mainWorkoutActivityTypeWithTransaction:(id)arg0 error:(*id)arg1 ;
-(id)totalDistanceInCanonicalUnitWithTransaction:(id)arg0 error:(*id)arg1 ;
-(id)workoutDurationWithTransaction:(id)arg0 error:(*id)arg1 ;
-(id)workoutStartDateWithTransaction:(id)arg0 error:(*id)arg1 ;


@end


#endif