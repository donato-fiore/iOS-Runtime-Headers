// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKOBJECT_H
#define EKOBJECT_H

@class CADGenerationStampedObjectID, NSMutableDictionary, NSDictionary, NSString;
@protocol EKFrozenMeltedPair, EKProtocolMutableObject;

#import <Foundation/Foundation.h>

#import "EKObjectValidationContext.h"
#import "EKPersistentObject.h"
#import "EKChangeSet.h"
#import "EKEventStore.h"

@interface EKObject : NSObject <EKFrozenMeltedPair, EKProtocolMutableObject>



@property (readonly, nonatomic) CADGenerationStampedObjectID *CADObjectID;
@property (retain, nonatomic) NSMutableDictionary *_cachedMeltedObjects; // ivar: __cachedMeltedObjects
@property (retain, nonatomic) NSMutableDictionary *_cachedValues; // ivar: __cachedValues
@property (retain, nonatomic) EKObjectValidationContext *_validationContext; // ivar: __validationContext
@property (retain, nonatomic) NSDictionary *additionalFrozenProperties; // ivar: _additionalFrozenProperties
@property (retain, nonatomic) EKPersistentObject *backingObject;
@property (readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property (retain, nonatomic) EKChangeSet *changeSet; // ivar: _changeSet
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) EKEventStore *eventStore;
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFrozen;
@property (readonly, nonatomic) BOOL isPartialObject;
@property (readonly, nonatomic, getter=isNew) BOOL new;
@property (retain, nonatomic) EKPersistentObject *persistentObject; // ivar: _persistentObject
@property (readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property (readonly, nonatomic) NSString *semanticIdentifier;
@property (readonly, nonatomic) NSString *specificIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueIdentifier;


+(BOOL)_compareAllKnownKeysExceptKeys:(id)arg0 forObject:(id)arg1 againstObject:(id)arg2 ;
+(BOOL)_compareAllKnownKeysExceptKeys:(id)arg0 forObject:(id)arg1 againstObject:(id)arg2 compareIdentityKeys:(BOOL)arg3 ;
+(BOOL)_compareIdentityKeysForObject:(id)arg0 againstObject:(id)arg1 propertiesToIgnore:(id)arg2 ;
+(BOOL)_compareIdentityKeysForObject:(id)arg0 againstObject:(id)arg1 propertiesToIgnore:(id)arg2 ;
+(BOOL)_compareKnownKeys:(id)arg0 forObject:(id)arg1 againstObject:(id)arg2 ;
+(BOOL)_compareKnownKeys:(id)arg0 forObject:(id)arg1 againstObject:(id)arg2 compareIdentityKeys:(BOOL)arg3 compareImmutableKeys:(BOOL)arg4 propertiesToIgnore:(id)arg5 ;
+(BOOL)_compareKnownKeys:(id)arg0 forObject:(id)arg1 againstObject:(id)arg2 compareIdentityKeys:(BOOL)arg3 compareImmutableKeys:(BOOL)arg4 propertiesToIgnore:(id)arg5 ;
+(BOOL)_compareKnownKeys:(id)arg0 forObject:(id)arg1 againstObject:(id)arg2 compareImmutableKeys:(BOOL)arg3 propertiesToIgnore:(id)arg4 ;
+(BOOL)_compareKnownKeys:(id)arg0 forObject:(id)arg1 againstObject:(id)arg2 compareImmutableKeys:(BOOL)arg3 propertiesToIgnore:(id)arg4 ;
+(BOOL)_compareMultiValueRelationshipKey:(id)arg0 forObject:(id)arg1 againstObject:(id)arg2 propertiesToIgnore:(id)arg3 ;
+(BOOL)_compareMultiValueRelationshipKeys:(id)arg0 forObject:(id)arg1 againstObject:(id)arg2 propertiesToIgnore:(id)arg3 ;
+(BOOL)_compareMultiValueRelationshipKeys:(id)arg0 forObject:(id)arg1 againstObject:(id)arg2 propertiesToIgnore:(id)arg3 ;
+(BOOL)_compareMutliValueRelationshipKey:(id)arg0 forObject:(id)arg1 againstObject:(id)arg2 propertiesToIgnore:(id)arg3 ;
+(BOOL)_compareNonIdentityKeys:(id)arg0 forObject:(id)arg1 againstObject:(id)arg2 compareImmutableKeys:(BOOL)arg3 propertiesToIgnore:(id)arg4 ;
+(BOOL)_compareNonIdentityKeys:(id)arg0 forObject:(id)arg1 againstObject:(id)arg2 compareImmutableKeys:(BOOL)arg3 propertiesToIgnore:(id)arg4 ;
+(BOOL)_compareNonIdentityKeys:(id)arg0 forObject:(id)arg1 againstObject:(id)arg2 propertiesToIgnore:(id)arg3 ;
+(BOOL)_compareNonRelationshipKeys:(id)arg0 forObject:(id)arg1 againstObject:(id)arg2 propertiesToIgnore:(id)arg3 ;
+(BOOL)_compareRelationshipObject1:(id)arg0 againstRelationshipObject2:(id)arg1 propertiesToIgnore:(id)arg2 ;
+(BOOL)_compareRelationshipObject1:(id)arg0 againstRelationshipObject2:(id)arg1 propertiesToIgnore:(id)arg2 relationshipObjectKey:(id)arg3 ;
+(BOOL)_compareSingleValueRelationshipKey:(id)arg0 forObject:(id)arg1 againstObject:(id)arg2 propertiesToIgnore:(id)arg3 ;
+(BOOL)_compareSingleValueRelationshipKeys:(id)arg0 forObject:(id)arg1 againstObject:(id)arg2 propertiesToIgnore:(id)arg3 ;
+(BOOL)_compareSingleValueRelationshipKeys:(id)arg0 forObject:(id)arg1 againstObject:(id)arg2 propertiesToIgnore:(id)arg3 ;
+(BOOL)_object:(id)arg0 equalsObject:(id)arg1 forKeys:(id)arg2 compareImmutableKeys:(BOOL)arg3 ignoringProperties:(id)arg4 ;
+(BOOL)_objects:(id)arg0 haveSameMeltedClass:(Class)arg1 frozenClass:(Class)arg2 ;
+(BOOL)canonicalizedEqualityTestValue1:(id)arg0 value2:(id)arg1 key:(id)arg2 object1:(id)arg3 object2:(id)arg4 ;
+(BOOL)isDerivedRelationship;
+(BOOL)isMeltedAndNotWeakRelationshipObject:(id)arg0 forKey:(id)arg1 ;
+(BOOL)isWeakRelationObject:(id)arg0 forKey:(id)arg1 ;
+(BOOL)isWeakRelationship;
+(Class)frozenClass;
+(Class)meltedClass;
+(NSUInteger)_numberOfSharedLocksForUnitTesting;
+(id)EKObjectChangeSummarizer_multiValueDiffKeys;
+(id)EKObjectChangeSummarizer_singleValueDiffKeys;
+(id)_arrayIntersectingArray:(id)arg0 withSet:(id)arg1 ;
+(id)_changeSetForDiff:(id)arg0 ;
+(id)knownDerivedAndSingleValueRelationshipKeys;
+(id)knownDerivedRelationshipKeys;
+(id)knownIdentityKeysForComparison;
+(id)knownImmutableKeys;
+(id)knownRelationshipMultiValueKeys;
+(id)knownRelationshipMultiValueKeysForValidation;
+(id)knownRelationshipSingleValueKeys;
+(id)knownRelationshipSingleValueKeysForValidation;
+(id)knownRelationshipWeakKeys;
+(id)knownSingleValueKeysForComparison;
+(id)knownSummaryKeys;
+(id)propertiesUnavailableForPartialObjects;
+(void)_addChangesFromObject:(id)arg0 toObjects:(id)arg1 except:(id)arg2 keep:(id)arg3 copyingBackingObjects:(BOOL)arg4 ;
+(void)addChangesFromObject:(id)arg0 toObjects:(id)arg1 except:(id)arg2 ;
+(void)addChangesFromObject:(id)arg0 toObjects:(id)arg1 keep:(id)arg2 ;
-(BOOL)_areOnlyChangedKeys:(id)arg0 ;
-(BOOL)_hasChangeHelperInKeys:(id)arg0 ignoreKeys:(id)arg1 checkUnsaved:(BOOL)arg2 ;
-(BOOL)_hasChangesForKey:(id)arg0 ;
-(BOOL)_hasChangesForKey:(id)arg0 checkUnsaved:(BOOL)arg1 ;
-(BOOL)_hasUnsavedChangesInKeys:(id)arg0 ignoreKeys:(id)arg1 ;
-(BOOL)_isOnlyChangedKey:(id)arg0 ;
-(BOOL)_isPropertyUnavailable:(id)arg0 convertToFullObjectIfUnavailable:(BOOL)arg1 ;
-(BOOL)_refreshCommon;
-(BOOL)_refreshable;
-(BOOL)_reset;
-(BOOL)_resetCommon;
-(BOOL)_resetIfBackingObjectIsOfClass:(Class)arg0 fetchResetFrozenObjectBlock:(id)arg1 ;
-(BOOL)existsInStore;
-(BOOL)hasUnsavedChanges;
-(BOOL)hasUnsavedChangesIgnoreKeys:(id)arg0 ;
-(BOOL)hasUnsavedChangesInKeys:(id)arg0 ;
-(BOOL)isCompletelyEqual:(id)arg0 ;
-(BOOL)isDeleted;
-(BOOL)isDifferentFromCommitted;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 comparingKeys:(id)arg1 compareImmutableKeys:(BOOL)arg2 ignoringProperties:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ignoringProperties:(id)arg1 ;
-(BOOL)isPropertyUnavailable:(id)arg0 ;
-(BOOL)isSaved;
-(BOOL)isUndeleted;
-(BOOL)refresh;
-(BOOL)refreshAndNotify:(BOOL)arg0 ;
-(BOOL)revert;
-(BOOL)validate:(*id)arg0 ;
-(BOOL)validateWithOwner:(id)arg0 error:(*id)arg1 ;
-(Class)frozenClass;
-(NSUInteger)meltedAndCachedMultiRelationCountForKey:(id)arg0 ;
-(id)_basicSummaryWithDepth:(NSInteger)arg0 ;
-(id)_convertBackingObjectsWithPath:(id)arg0 updateBackingObjects:(BOOL)arg1 allChangedBackingObjects:(id)arg2 eventStore:(id)arg3 updatedBackingObjectProvider:(id)arg4 ;
-(id)_copyWithoutChangesInZone:(struct _NSZone *)arg0 ;
-(id)_multiRelationshipKeysToCheckForChanges;
-(id)_previousValueForKey:(id)arg0 ;
-(id)_propertyValueForKey:(id)arg0 ;
-(id)_readWriteLock;
// -(id)_recursiveSnapshotCopyWithPropertyAccessor:(id)arg0 propertyKeysToCopy:(unk)arg1 recurseOnWeakRelations:(id)arg2  ;
-(id)_singleRelationshipKeysToCheckForChanges;
-(id)_summaryWithDepth:(NSInteger)arg0 ;
-(id)backingObjectOfChildObject:(id)arg0 withRelationshipKey:(id)arg1 ;
-(id)cachedMeltedChildIdentifierToParentMap;
-(id)cachedMeltedObjectForSingleValueKey:(id)arg0 ;
-(id)cachedMeltedObjectsForMultiValueKey:(id)arg0 ;
-(id)cachedValueForKey:(id)arg0 ;
-(id)cachedValueForKey:(id)arg0 expectingCachedValue:(id)arg1 forMasterKey:(id)arg2 relatedKeys:(id)arg3 populateBlock:(id)arg4 ;
-(id)cachedValueForKey:(id)arg0 populateBlock:(id)arg1 ;
-(id)changedKeys;
-(id)committedCopy;
-(id)committedValueForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)diffWithObject:(id)arg0 ;
-(id)duplicate;
-(id)duplicateToEventStore:(id)arg0 ;
-(id)existingMeltedObject;
-(id)frozenObject;
-(id)frozenOrMeltedCachedMultiRelationObjectsForKey:(id)arg0 ;
-(id)frozenOrMeltedCachedSingleRelationObjectForKey:(id)arg0 ;
-(id)init;
-(id)initWithObject:(id)arg0 ;
-(id)initWithObjectForCopy:(id)arg0 ;
-(id)initWithPersistentObject:(id)arg0 ;
-(id)inverseObjectWithObject:(id)arg0 diff:(*id)arg1 ;
-(id)meltedAndCachedMultiRelationObjectsForKey:(id)arg0 ;
-(id)meltedAndCachedSingleRelationObjectForKey:(id)arg0 ;
-(id)meltedObjectInStore:(id)arg0 ;
-(id)multiChangedObjectValuesForKey:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectID;
-(id)prepareReminderKitObjectForSaveWithUpdatedBackingObjectProvider:(id)arg0 ;
-(id)previouslySavedCopy;
-(id)privacyDescription;
-(id)shallowCopyWithoutChanges;
-(id)singleChangedValueForKey:(id)arg0 ;
-(id)snapshotCopy;
-(id)snapshotCopyWithPropertyKeysToCopy:(id)arg0 ;
-(int)rowID;
-(void)_addCachedMeltedObject:(id)arg0 forMultiValueKey:(id)arg1 ;
-(void)_addChanges:(id)arg0 copyingBackingObjects:(BOOL)arg1 ;
-(void)_addChangesFromObject:(id)arg0 except:(id)arg1 keep:(id)arg2 ignoreRelations:(id)arg3 copyingBackingObjects:(BOOL)arg4 ;
-(void)_addSummaryWithDepth:(NSInteger)arg0 toMutableString:(id)arg1 indentFirstLine:(BOOL)arg2 ;
-(void)_applyDefinedAfterFirstSaveFrom:(id)arg0 ;
-(void)_applyKnownImmutableValuesFrom:(id)arg0 ;
-(void)_cachedMeltedChildIdentifierToParentMap:(id)arg0 ;
-(void)_initChangeSetIfNone;
-(void)_markAsCommittedCommon;
-(void)_markAsDeletedCommon;
-(void)_markAsNewCommon;
-(void)_markAsNotNewCommon;
-(void)_markAsSavedCommon;
-(void)_markAsUndeletedCommon;
-(void)_performBlockOnOwnedCachedRelatedObjects:(id)arg0 ;
-(void)_performWithReadLock:(id)arg0 ;
-(void)_performWithWriteLock:(id)arg0 ;
-(void)_removeCachedMeltedObject:(id)arg0 forMultiValueKey:(id)arg1 ;
-(void)_resetAfterUpdatingChangeSetOrBackingObject;
-(void)_resetInternalState;
-(void)_resetMeltedCache;
-(void)_resetWithFrozenObject:(id)arg0 ;
-(void)_rollbackCommon;
-(void)_sharedInit;
-(void)_updateCachedMeltedObjectSetForMultiValueKey:(id)arg0 usingBlock:(id)arg1 ;
-(void)_updatePersistentValueForKey:(id)arg0 ;
-(void)addCachedMeltedObject:(id)arg0 forMultiValueKey:(id)arg1 ;
-(void)addChanges:(id)arg0 ;
-(void)addChangesFromObject:(id)arg0 ;
-(void)addChangesFromObject:(id)arg0 copyingBackingObjects:(BOOL)arg1 ;
-(void)addCoCommitObject:(id)arg0 ;
-(void)addMultiChangedObjectValue:(id)arg0 forKey:(id)arg1 ;
-(void)addMultiChangedObjectValues:(id)arg0 forKey:(id)arg1 ;
-(void)applyChangeSetFromOtherObject:(id)arg0 ;
-(void)applyChanges:(id)arg0 ;
-(void)clearCachedValueForKey:(id)arg0 ;
-(void)clearCachedValuesForKeys:(id)arg0 ;
-(void)deletePersistentObject;
-(void)emptyMeltedCache;
-(void)emptyMeltedCacheForKey:(id)arg0 ;
-(void)emptyMeltedCacheForKeys:(id)arg0 ;
-(void)insertPersistentObjectIfNeeded;
-(void)markAsCommitted;
-(void)markAsDeleted;
-(void)markAsNew;
-(void)markAsNotNew;
-(void)markAsSaved;
-(void)markAsUndeleted;
-(void)rebase;
-(void)rebaseSkippingRelationProperties:(id)arg0 ;
-(void)rebaseSkippingRelationProperties:(id)arg0 toEventStore:(id)arg1 ;
-(void)rebaseToEventStore:(id)arg0 ;
-(void)refetch;
-(void)removeCachedMeltedObject:(id)arg0 forMultiValueKey:(id)arg1 ;
-(void)removeMultiChangedObjectValue:(id)arg0 forKey:(id)arg1 ;
-(void)removeMultiChangedObjectValues:(id)arg0 forKey:(id)arg1 ;
-(void)replaceMultiChangedObjectValuesWithObjectValues:(id)arg0 forKey:(id)arg1 ;
-(void)reset;
-(void)rollback;
-(void)setCachedMeltedObject:(id)arg0 forSingleValueKey:(id)arg1 ;
-(void)setCachedMeltedObjects:(id)arg0 forMultiValueKey:(id)arg1 ;
-(void)setCachedValue:(id)arg0 forKey:(id)arg1 ;
-(void)setSingleChangedValue:(id)arg0 forKey:(id)arg1 ;
-(void)updateAfterApplyingChanges:(id)arg0 ;
-(void)updateMeltedAndCachedMultiRelationObjects:(id)arg0 forKey:(id)arg1 ;
-(void)updateMeltedAndCachedSingleRelationObject:(id)arg0 forKey:(id)arg1 frozenClass:(Class)arg2 ;
-(void)updateMeltedCacheForChangeSet:(id)arg0 ;
-(void)updateMultiValueCacheForChangeSet:(id)arg0 preservingExistingAdds:(BOOL)arg1 ;
-(void)updatePersistentObject;
-(void)updatePersistentObjectSkippingProperties:(id)arg0 ;
-(void)updatePersistentValueForKeyIfNeeded:(id)arg0 ;


@end


#endif