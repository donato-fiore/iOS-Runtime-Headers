// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSAMPLEENTITY_H
#define HDSAMPLEENTITY_H



#import "HDDataEntity.h"

@interface HDSampleEntity : HDDataEntity



+(BOOL)_validateEntityWithEnumerator:(id)arg0 error:(*id)arg1 validationErrorHandler:(id)arg2 ;
+(BOOL)enumerateAssociatedObjectsForIdentifier:(NSInteger)arg0 inDatabase:(id)arg1 error:(*id)arg2 associatedObjectHandler:(id)arg3 ;
+(BOOL)requiresSampleTypePredicate;
+(BOOL)validateEntitiesOfTypes:(id)arg0 profile:(id)arg1 error:(*id)arg2 validationErrorHandler:(id)arg3 ;
+(Class)_deletedEntityClass;
+(Class)_entityClassForDeletion;
+(NSInteger)countOfSamplesWithType:(id)arg0 profile:(id)arg1 matchingPredicate:(id)arg2 withError:(*id)arg3 ;
+(NSInteger)preferredEntityType;
+(id)anySampleOfType:(id)arg0 profile:(id)arg1 encodingOptions:(id)arg2 predicate:(id)arg3 error:(*id)arg4 ;
+(id)columnNamesForTimeOffset;
+(id)databaseTable;
+(id)dateIntervalsForSampleTypes:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)entityEncoderForProfile:(id)arg0 transaction:(id)arg1 purpose:(NSInteger)arg2 encodingOptions:(id)arg3 authorizationFilter:(id)arg4 ;
+(id)entityEnumeratorWithType:(id)arg0 profile:(id)arg1 ;
+(id)entityEnumeratorWithTypes:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)indices;
+(id)insertDataObject:(id)arg0 withProvenance:(id)arg1 inDatabase:(id)arg2 persistentID:(id)arg3 error:(*id)arg4 ;
+(id)maxAnchorForSamplesWithType:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)minimumSampleStartDateForProfile:(id)arg0 error:(*id)arg1 ;
+(id)mostRecentSampleWithType:(id)arg0 profile:(id)arg1 encodingOptions:(id)arg2 predicate:(id)arg3 anchor:(*id)arg4 error:(*id)arg5 ;
+(id)objectInsertionFilterForProfile:(SEL)arg0 ;
+(id)oldestSampleWithType:(id)arg0 profile:(id)arg1 encodingOptions:(id)arg2 predicate:(id)arg3 error:(*id)arg4 ;
+(id)orderingTermForSortDescriptor:(id)arg0 ;
+(id)populatedSampleTypes:(id)arg0 inDateInterval:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)sampleCountsByTypeForProfile:(id)arg0 error:(*id)arg1 ;
+(id)sampleTypesForSamplesMatchingPredicate:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)samplesWithType:(id)arg0 profile:(id)arg1 encodingOptions:(id)arg2 predicate:(id)arg3 limit:(NSUInteger)arg4 anchor:(*id)arg5 error:(*id)arg6 ;
+(id)sourceIDsForSamplesWithType:(id)arg0 profile:(id)arg1 predicate:(id)arg2 error:(*id)arg3 ;
+(id)syntheticQuantityColumnName;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
+(void)deleteSamplesWithPredicate:(id)arg0 limit:(NSUInteger)arg1 deletionContext:(id)arg2 completionHandler:(id)arg3 ;
// +(void)deleteSamplesWithPredicate:(id)arg0 limit:(NSUInteger)arg1 generateDeletedObjects:(BOOL)arg2 transaction:(id)arg3 profile:(id)arg4 recursiveDeleteAuthorizationBlock:(id)arg5 completionHandler:(unk)arg6  ;
// +(void)deleteSamplesWithTypes:(id)arg0 sourceEntities:(id)arg1 profile:(id)arg2 recursiveDeleteAuthorizationBlock:(id)arg3 completionHandler:(unk)arg4  ;


@end


#endif