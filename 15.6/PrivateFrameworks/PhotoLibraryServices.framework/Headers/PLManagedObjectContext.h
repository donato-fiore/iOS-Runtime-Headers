// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLMANAGEDOBJECTCONTEXT_H
#define PLMANAGEDOBJECTCONTEXT_H

@class NSManagedObjectContext, NSMutableSet, NSMutableDictionary, PLPhotoLibraryPathManager, NSError;
@protocol PLManagedObjectContextPTPNotificationDelegate;


#import "PLPhotoLibrary.h"
#import "PLDelayedSaveActions.h"
#import "PLChangeHandlingContainer.h"
#import "PLDelayedFiledSystemDeletions.h"

@interface PLManagedObjectContext : NSManagedObjectContext {
    BOOL _isConnectedToChangeHandling;
    BOOL _isObservingChangesForPTPNotificationDelegate;
    BOOL _needsBackgroundJobProcessing;
    NSMutableSet *_avalancheUUIDsForUpdate;
    NSMutableDictionary *_uuidsForCloudDeletion;
    BOOL _syncChangeMarker;
    NSMutableDictionary *_updatedObjectsAttributes;
    NSMutableDictionary *_updatedObjectsRelationships;
    PLPhotoLibrary *_photoLibrary;
    PLPhotoLibraryPathManager *_pathManager;
    PLDelayedSaveActions *_delayedSaveActions;
    PLChangeHandlingContainer *_changeHandlingContainer;
    os_unfair_lock_s _invalidationStateLock;
    NSError *_invalidationReason;
    CGFloat _lastResetTimestamp;
}


@property (nonatomic) int changeSource; // ivar: _changeSource
@property (retain, nonatomic) PLDelayedFiledSystemDeletions *delayedDeletions; // ivar: _delayedDeletions
@property (readonly, nonatomic) PLDelayedSaveActions *delayedSaveActions;
@property (nonatomic) BOOL hasMetadataChanges; // ivar: _hasMetadataChanges
@property (nonatomic) BOOL isBackingALAssetsLibrary; // ivar: _isBackingALAssetsLibrary
@property (nonatomic) BOOL isInitializingSingletons; // ivar: _isInitializingSingletons
@property (readonly, nonatomic) BOOL isUserInterfaceContext;
@property (readonly, nonatomic) BOOL mergingChanges; // ivar: _mergingChanges
@property (weak, nonatomic) PLPhotoLibrary *photoLibrary;
@property (weak, nonatomic) NSObject<PLManagedObjectContextPTPNotificationDelegate> *ptpNotificationDelegate; // ivar: _ptpNotificationDelegate
@property (nonatomic) BOOL regenerateVideoThumbnails; // ivar: _regenerateVideoThumbnails
@property (readonly, nonatomic) BOOL savingDuringMerge; // ivar: _savingDuringMerge


+(BOOL)_isAssetLibraryFetchingAlbum:(id)arg0 ;
+(BOOL)assetsLibraryLoggingEnabled;
+(BOOL)canMergeRemoteChanges;
+(BOOL)hasConfiguredPhotoLibrary;
+(BOOL)isInPLMocPerform;
+(BOOL)shouldHavePhotoLibrary;
+(NSUInteger)_indexValueForPropertyNames:(id)arg0 entityName:(id)arg1 indexesByPropertyNamesByEntityNames:(id)arg2 ;
+(NSUInteger)indexValueForAttributeNames:(id)arg0 entity:(id)arg1 ;
+(NSUInteger)indexValueForRelationshipNames:(id)arg0 entity:(id)arg1 ;
+(id)__processEntityByName:(id)arg0 obj:(id)arg1 ;
+(id)__processSubEntityByName:(id)arg0 entity:(id)arg1 withEntityData:(id)arg2 ;
+(id)_attributeNamesByIndexByEntityNames;
+(id)_indexesByAttributeNamesByEntityNames;
+(id)_indexesByRelationshipNamesByEntityNames;
+(id)_propertyNamesForIndexValues:(NSUInteger)arg0 entity:(id)arg1 propertyNamesByIndexByEntityNames:(id)arg2 ;
+(id)_relationshipNamesByIndexByEntityNames;
+(id)attributeNamesForIndexValues:(NSUInteger)arg0 entity:(id)arg1 ;
+(id)changeNotificationObjectIDKeys;
+(id)changeNotificationObjectIDMutationKeys;
+(id)changeNotificationObjectKeys;
+(id)changeNotificationObjectMutationKeys;
+(id)contextForPhotoLibrary:(id)arg0 automaticallyMerges:(BOOL)arg1 automaticallyPinToFirstFetch:(BOOL)arg2 name:(char *)arg3 ;
+(id)contextForRepairingSingletonObjects:(char *)arg0 libraryURL:(id)arg1 error:(*id)arg2 ;
+(id)managedObjectModel;
+(id)managedObjectModelURL;
+(id)relationshipNamesForIndexValues:(NSUInteger)arg0 entity:(id)arg1 ;
+(id)sanitizedErrorFromError:(id)arg0 ;
+(void)__prepareEntityPropertyLookups;
+(void)getPersistentStoreURL:(*id)arg0 options:(*id)arg1 forDatabasePath:(id)arg2 ;
+(void)recordChangedKeys:(id)arg0 forObjectID:(id)arg1 inAttributesByOID:(id)arg2 relationshipsByOID:(id)arg3 ;
+(void)recordChangedProperties:(id)arg0 forObjectID:(id)arg1 inAttributesByOID:(id)arg2 relationshipsByOID:(id)arg3 ;
+(void)removePhotosDatabaseWithPathManager:(id)arg0 ;
-(BOOL)_adjustmentTimestampChangedChangedAttribute:(id)arg0 from:(id)arg1 ;
-(BOOL)_tooManyAssetChangesToHandle:(NSUInteger)arg0 ;
-(BOOL)getAndClearSyncChangeMarker;
-(BOOL)hasPreviouslyMergedDeleteForObject:(id)arg0 ;
-(BOOL)isDatabaseCreationContext;
-(BOOL)isReadOnly;
-(BOOL)isValidForSelector:(SEL)arg0 error:(*id)arg1 ;
-(BOOL)obtainPermanentIDsForObjects:(id)arg0 error:(*id)arg1 ;
-(BOOL)pl_performWithOptions:(NSUInteger)arg0 andBlock:(id)arg1 ;
-(BOOL)save:(*id)arg0 ;
-(BOOL)shouldMergeFromRemoteContextWithChanges:(id)arg0 ;
-(CGFloat)lastResetTimestamp;
-(NSUInteger)countForFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)executeFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)executeRequest:(id)arg0 error:(*id)arg1 ;
-(id)existingObjectWithID:(id)arg0 error:(*id)arg1 ;
-(id)getAndClearRecordedAvalancheUUIDsForUpdate;
-(id)getAndClearRecordedObjectsForCloudDeletion;
-(id)initWithConcurrencyType:(NSUInteger)arg0 libraryBundle:(id)arg1 ;
-(id)initWithConcurrencyType:(NSUInteger)arg0 pathManager:(id)arg1 changeHandlingContainer:(id)arg2 coordinator:(id)arg3 ;
-(id)libraryBundle;
-(id)pathManager;
-(id)pl_executeFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)pl_fetchObjectsWithIDs:(id)arg0 ;
-(id)pl_fetchObjectsWithIDs:(id)arg0 rootEntity:(id)arg1 ;
-(id)storeUUID;
-(void)_addCloudUUID:(id)arg0 forDeletionType:(NSInteger)arg1 ;
-(void)_createDelayedSaveActionsWithTransaction:(id)arg0 ;
-(void)_destroyDelayedSaveActions;
-(void)_getInsertedIDs:(id)arg0 deletedIDs:(id)arg1 changedIDs:(id)arg2 adjustedIDs:(id)arg3 ofEntityKind:(id)arg4 fromRemoteContextDidSaveObjectIDsNotification:(id)arg5 ;
-(void)_informPTPDelegateAboutChangesFromRemoteContextSaveNotification:(id)arg0 ;
-(void)_mergeChangesFromDidSaveDictionary:(id)arg0 usingObjectIDs:(BOOL)arg1 ;
-(void)_notifyALAssetsLibraryWithChanges:(id)arg0 usingObjectIDs:(BOOL)arg1 ;
-(void)_recordChangedKeys:(id)arg0 forObjectID:(id)arg1 ;
-(void)appendDelayedDeletionsToXPCMessage:(id)arg0 ;
-(void)breakRetainCycles;
-(void)connectToChangeHandling;
-(void)dealloc;
-(void)disconnectFromChangeHandling;
-(void)getAndClearUpdatedObjectsAttributes:(*id)arg0 relationships:(*id)arg1 ;
-(void)invalidateWithReason:(id)arg0 ;
-(void)performBlock:(id)arg0 ;
-(void)performBlockAndWait:(id)arg0 ;
-(void)performWithOptions:(NSUInteger)arg0 andBlock:(id)arg1 ;
-(void)recordAvalancheUUIDForUpdate:(id)arg0 ;
-(void)recordChangesFromTriggerModifiedObjectIDs:(id)arg0 ;
-(void)recordCloudDeletionForObject:(id)arg0 ;
-(void)recordManagedObjectWillSave:(id)arg0 ;
-(void)recordNeedsBackgroundJobProcessing;
-(void)recordSyncChangeMarker;
-(void)refreshAllObjects;
-(void)registerFilesystemDeletionInfo:(id)arg0 ;
-(void)reset;
-(void)resetAllFetchingAlbums;
-(void)setName:(id)arg0 ;
-(void)setupLocalChangeNotifications;
-(void)tearDownLocalChangeNotifications;
-(void)updateTransactionAuthor;
-(void)withDispatchGroup:(id)arg0 performBlock:(id)arg1 ;


@end


#endif