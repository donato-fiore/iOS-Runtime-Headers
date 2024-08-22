// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDATAENTITY_H
#define HDDATAENTITY_H

@class NSString;
@protocol HDSQLiteEntity;


#import "HDHealthEntity.h"

@interface HDDataEntity : HDHealthEntity <HDSQLiteEntity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_removeObjectWithPersistentID:(NSInteger)arg0 database:(id)arg1 error:(*id)arg2 ;
+(BOOL)acceptsObject:(id)arg0 ;
+(BOOL)addCodableObject:(id)arg0 toCollection:(id)arg1 ;
+(BOOL)enumerateAssociatedObjectsForIdentifier:(NSInteger)arg0 inDatabase:(id)arg1 error:(*id)arg2 associatedObjectHandler:(id)arg3 ;
+(BOOL)generateSyncObjectsForSession:(id)arg0 syncEntityClass:(Class)arg1 predicate:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange )arg3 profile:(id)arg4 messageHandler:(id)arg5 error:(*id)arg6 ;
+(BOOL)isBackedByTable;
+(BOOL)isConcreteEntity;
+(BOOL)journalObjects:(id)arg0 insertionContext:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(BOOL)participatesInInsertion;
+(BOOL)replaceExistingObject:(id)arg0 existingObjectID:(id)arg1 replacementObject:(id)arg2 replacementObjectID:(id)arg3 profile:(id)arg4 transaction:(id)arg5 error:(*id)arg6 ;
+(BOOL)requiresSampleTypePredicate;
+(BOOL)supportsObjectMerging;
+(Class)_deletedEntityClass;
+(Class)_entityClassForDeletion;
+(Class)baseDataEntityClass;
+(NSInteger)compareForReplacmentWithObject:(id)arg0 existingObject:(id)arg1 ;
+(NSInteger)countOfObjectsWithPredicate:(id)arg0 healthDatabase:(id)arg1 error:(*id)arg2 ;
+(NSInteger)preferredEntityType;
+(NSInteger)protectionClass;
+(NSInteger)shouldInsertObject:(id)arg0 sourceID:(id)arg1 profile:(id)arg2 transaction:(id)arg3 objectToReplace:(*id)arg4 objectID:(*id)arg5 error:(*id)arg6 ;
+(id)_insertDataObject:(id)arg0 withProvenanceID:(id)arg1 inDatabase:(id)arg2 error:(*id)arg3 ;
+(id)anyInDatabase:(id)arg0 predicate:(id)arg1 error:(*id)arg2 ;
+(id)attachmentObjectIdentifierForSampleWithUUID:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)codableObjectsFromObjectCollection:(id)arg0 ;
+(id)columnNamesForTimeOffset;
+(id)dataEntityForObject:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)dataEntityForObject:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)databaseTable;
+(id)defaultForeignKey;
+(id)deleteStatementsForRelatedEntitiesWithTransaction:(id)arg0 ;
+(id)disambiguatedSQLForProperty:(id)arg0 ;
+(id)entityEncoderForProfile:(id)arg0 transaction:(id)arg1 purpose:(NSInteger)arg2 encodingOptions:(id)arg3 authorizationFilter:(id)arg4 ;
+(id)entityEnumeratorWithProfile:(id)arg0 ;
+(id)foreignKeys;
+(id)hk_timeZoneEncodingOptions;
+(id)indices;
+(id)insertDataObject:(id)arg0 withProvenance:(id)arg1 inDatabase:(id)arg2 persistentID:(id)arg3 error:(*id)arg4 ;
+(id)joinClausesForProperty:(id)arg0 ;
+(id)mergeDataObject:(id)arg0 provenance:(id)arg1 profile:(id)arg2 transaction:(id)arg3 error:(*id)arg4 insertHandler:(id)arg5 ;
+(id)objectInsertionFilterForProfile:(SEL)arg0 ;
+(id)objectWithID:(id)arg0 encodingOptions:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)objectWithUUID:(id)arg0 encodingOptions:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)orderingTermForSortDescriptor:(id)arg0 ;
+(id)predicateForObjectsFromLocalSourceWithBundleIdentifier:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)predicateMatchingPreferredEntityTypeIfRequiredWithPredicate:(id)arg0 ;
+(id)propertyForSyncProvenance;
+(id)sourceIDForObjectID:(id)arg0 type:(NSInteger)arg1 profile:(id)arg2 errorOut:(*id)arg3 ;
+(id)sourceIDsForObjectsOfType:(NSInteger)arg0 profile:(id)arg1 predicate:(id)arg2 error:(*id)arg3 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
// +(void)deleteDataObjects:(id)arg0 restrictedSourceEntities:(id)arg1 failIfNotFound:(BOOL)arg2 profile:(id)arg3 recursiveDeleteAuthorizationBlock:(id)arg4 completionHandler:(unk)arg5  ;
+(void)insertDataObjects:(id)arg0 insertionContext:(id)arg1 profile:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif