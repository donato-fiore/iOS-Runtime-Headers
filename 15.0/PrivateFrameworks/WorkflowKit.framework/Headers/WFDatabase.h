// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFDATABASE_H
#define WFDATABASE_H

@class NSManagedObjectContext, NSString, NSURL, NSHashTable, WFCoreDataChangeNotification, NSPersistentStoreDescription;
@protocol WFDatabaseProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFDatabase : NSObject <WFDatabaseProvider>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (retain, nonatomic) NSManagedObjectContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL destroysOnDeallocation; // ivar: _destroysOnDeallocation
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly, nonatomic) os_unfair_lock_s observersLock; // ivar: _observersLock
@property (retain, nonatomic) WFCoreDataChangeNotification *pendingChangeNotification; // ivar: _pendingChangeNotification
@property (retain, nonatomic) NSPersistentStoreDescription *persistentStoreDescription; // ivar: _persistentStoreDescription
@property (retain, nonatomic) NSHashTable *resultsToNotify; // ivar: _resultsToNotify
@property (retain, nonatomic) NSManagedObjectContext *suggestionsContext; // ivar: _suggestionsContext
@property (readonly) Class superclass;
@property (nonatomic) NSInteger transactionCount; // ivar: _transactionCount


+(id)createDatabaseForTesting;
+(id)defaultDatabase;
+(void)setDefaultDatabase:(id)arg0 ;
-(BOOL)createWorkflowWithIdentifier:(id)arg0 record:(id)arg1 error:(*id)arg2 ;
-(BOOL)deleteAllBookmarksForWorkflowID:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteBookmarkWithPath:(id)arg0 forWorkflowID:(id)arg1 error:(*id)arg2 ;
-(BOOL)deleteReference:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteReference:(id)arg0 tombstone:(BOOL)arg1 deleteConflictIfPresent:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)hasConflictWithName:(id)arg0 ;
-(BOOL)hasConflictingReferenceForReference:(id)arg0 ;
-(BOOL)hasVisibleWorkflowsWithName:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isReference:(id)arg0 allowedToRunOnDomain:(id)arg1 ;
-(BOOL)mergeAutomationsAndShortcuts;
-(BOOL)moveCollections:(id)arg0 toIndex:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)moveCollections:(id)arg0 toIndexes:(id)arg1 error:(*id)arg2 ;
-(BOOL)moveCollections:(id)arg0 toIndexes:(id)arg1 ofCollectionWithIdentifier:(id)arg2 error:(*id)arg3 ;
-(BOOL)moveReferences:(id)arg0 toIndex:(NSInteger)arg1 ofCollection:(id)arg2 error:(*id)arg3 ;
-(BOOL)moveReferences:(id)arg0 toIndex:(NSInteger)arg1 ofCollection:(id)arg2 visible:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)moveReferences:(id)arg0 toIndexes:(id)arg1 ofCollection:(id)arg2 error:(*id)arg3 ;
-(BOOL)moveReferences:(id)arg0 toIndexes:(id)arg1 ofCollection:(id)arg2 visible:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)prependReferences:(id)arg0 toCollection:(id)arg1 error:(*id)arg2 ;
-(BOOL)prependReferences:(id)arg0 toCollectionWithType:(id)arg1 error:(*id)arg2 ;
-(BOOL)reloadRecord:(id)arg0 withDescriptor:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeReferences:(id)arg0 fromCollectionWithIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)saveContextOrRollback:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveRecord:(id)arg0 withDescriptor:(id)arg1 error:(*id)arg2 ;
-(BOOL)saveSmartPromptStateData:(id)arg0 actionUUID:(id)arg1 reference:(id)arg2 error:(*id)arg3 ;
-(BOOL)setShortcutSuggestions:(id)arg0 forAppWithBundleIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)startObservingChangesForResult:(id)arg0 ;
-(Class)recordClassForObjectType:(NSUInteger)arg0 ;
-(NSUInteger)countForResult:(id)arg0 ;
-(NSUInteger)countOfAllVisibleWorkflows;
-(NSUInteger)countOfWorkflowsInAFolder;
-(id)_createWorkflowWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)_syncTokenWithError:(*id)arg0 ;
-(id)accessResourceStatesForReference:(id)arg0 ;
-(id)accessResourcesForReference:(id)arg0 ;
-(id)allCollections;
-(id)allConfiguredTriggers;
-(id)allShortcutBookmarks;
-(id)allShortcutSuggestions;
-(id)allShortcuts;
-(id)allStatesDataForReference:(id)arg0 actionUUID:(id)arg1 ;
-(id)approvalResultForContentAttributionSet:(id)arg0 contentDestination:(id)arg1 actionUUID:(id)arg2 actionIdentifier:(id)arg3 actionIndex:(NSUInteger)arg4 reference:(id)arg5 ;
-(id)bookmarkDataForWorkflowID:(id)arg0 path:(id)arg1 error:(*id)arg2 ;
-(id)bookmarksForWorkflowID:(id)arg0 error:(*id)arg1 ;
-(id)collectionForWorkflowType:(id)arg0 ;
-(id)collectionRecordForCollectionIdentifier:(id)arg0 createIfNecessary:(BOOL)arg1 ;
-(id)collectionResultWithFetchRequest:(id)arg0 ;
-(id)collectionWithIdentifier:(id)arg0 ;
-(id)collectionWithIdentifier:(id)arg0 createIfNecessary:(BOOL)arg1 ;
-(id)collectionsForWorkflowReference:(id)arg0 ;
-(id)configuredTriggerForTriggerID:(id)arg0 ;
-(id)configuredTriggersForWorkflowID:(id)arg0 ;
-(id)conflictForWorkflowReference:(id)arg0 ;
-(id)conflictingReferenceForReference:(id)arg0 ;
-(id)createBookmarkWithWorkflowID:(id)arg0 path:(id)arg1 bookmarkData:(id)arg2 error:(*id)arg3 ;
-(id)createFolderWithName:(id)arg0 icon:(unsigned short)arg1 error:(*id)arg2 ;
-(id)createTriggerEventWithTriggerID:(id)arg0 eventInfo:(id)arg1 confirmed:(BOOL)arg2 error:(*id)arg3 ;
-(id)createTriggerWithRecord:(id)arg0 workflow:(id)arg1 error:(*id)arg2 ;
-(id)createWorkflowWithError:(*id)arg0 ;
-(id)createWorkflowWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)createWorkflowWithOptions:(id)arg0 nameCollisionBehavior:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)currentDeletionAuthorizationStatusWithContentItemClassName:(id)arg0 actionUUID:(id)arg1 actionIdentifier:(id)arg2 actionIndex:(NSUInteger)arg3 count:(NSUInteger)arg4 reference:(id)arg5 ;
-(id)currentPerWorkflowStateDataForAccessResourceWithIdentifier:(id)arg0 forReference:(id)arg1 ;
-(id)databaseWithError:(*id)arg0 ;
-(id)deletedFolders;
-(id)deletedWorkflows;
-(id)deletionAuthorizationStatesForReference:(id)arg0 ;
-(id)descriptorsForResult:(id)arg0 error:(*id)arg1 ;
-(id)duplicateNameErrorWithName:(id)arg0 ;
-(id)duplicateReference:(id)arg0 error:(*id)arg1 ;
-(id)duplicateReference:(id)arg0 newName:(id)arg1 error:(*id)arg2 ;
-(id)fetchFirstAllowedStateMatching:(id)arg0 actionUUID:(id)arg1 forReference:(id)arg2 ;
-(id)folderForWorkflowReference:(id)arg0 ;
-(id)generateAndPersistUUIDForActionWithIdentifier:(id)arg0 actionIndex:(NSUInteger)arg1 workflowIdentifier:(id)arg2 ;
-(id)initWithStoreDescription:(id)arg0 runMigrationsIfNecessary:(BOOL)arg1 error:(*id)arg2 ;
-(id)latestRunEvent;
-(id)localConflictingReferenceForReference:(id)arg0 ;
-(id)logRunOfWorkflow:(id)arg0 atDate:(id)arg1 withIdentifier:(id)arg2 source:(id)arg3 triggerID:(id)arg4 ;
-(id)logRunOfWorkflow:(id)arg0 withSource:(id)arg1 triggerID:(id)arg2 ;
-(id)migrateAccountStateToAppOriginIfNecessary:(id)arg0 reference:(id)arg1 actionUUID:(id)arg2 ;
-(id)missingErrorForDescriptor:(id)arg0 ;
-(id)mostRunOrLatestImportedVisibleShortcut;
-(id)objectForDescriptor:(id)arg0 properties:(id)arg1 ;
-(id)objectForDescriptor:(id)arg0 properties:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(id)objectOfClass:(Class)arg0 withIdentifier:(id)arg1 forKey:(id)arg2 createIfNecessary:(BOOL)arg3 properties:(id)arg4 ;
-(id)orphanedFolders;
-(id)orphanedFoldersPredicate;
-(id)orphanedShortcuts;
-(id)orphanedWorkflowsPredicate;
-(id)performDatabaseLookupForState:(id)arg0 actionUUID:(id)arg1 reference:(id)arg2 ;
// -(id)performOperationWithBlock:(id)arg0 error:(unk)arg1  ;
// -(id)performSaveOperationWithBlock:(id)arg0 error:(unk)arg1  ;
// -(id)performSuggestionsOperationWithBlock:(id)arg0 error:(unk)arg1  ;
-(id)recentlyModifiedShortcuts;
-(id)recentlyRunShortcuts;
-(id)recordWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)recordWithDescriptor:(id)arg0 properties:(id)arg1 error:(*id)arg2 ;
-(id)referenceForWorkflowID:(id)arg0 ;
-(id)remoteConflictingReferenceForReference:(id)arg0 ;
-(id)renameReference:(id)arg0 to:(id)arg1 error:(*id)arg2 ;
-(id)shortcutSuggestionsForAllAppsWithLimit:(NSUInteger)arg0 shortcutAvailability:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)shortcutSuggestionsForAppWithBundleIdentifier:(id)arg0 shortcutAvailability:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)smartPromptStatesForReference:(id)arg0 ;
-(id)smartPromptStatesForReference:(id)arg0 actionUUID:(id)arg1 ;
-(id)sortedRunEventsForTriggerID:(id)arg0 ;
-(id)sortedRunEventsWithSource:(id)arg0 ;
-(id)sortedRunEventsWithSource:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(id)sortedTriggerEventsWithConfirmationOnly:(BOOL)arg0 ;
-(id)sortedVisibleFolders;
-(id)sortedVisibleWorkflowsByName;
-(id)sortedVisibleWorkflowsInCollection:(id)arg0 ;
-(id)sortedVisibleWorkflowsWithAssociatedAppBundleIdentifier:(id)arg0 ;
-(id)sortedVisibleWorkflowsWithType:(id)arg0 ;
-(id)sortedWorkflowsWithQuery:(id)arg0 ;
-(id)suggestedFolderNameForName:(id)arg0 ;
-(id)suggestedWorkflowNameForName:(id)arg0 ;
-(id)syncToken;
-(id)tombstonedShortcutsPredicate;
-(id)triggerEventForIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)triggerResultWithFetchRequest:(id)arg0 ;
-(id)uniqueVisibleReferenceForWorkflowName:(id)arg0 ;
-(id)updateFolder:(id)arg0 newName:(id)arg1 newIcon:(unsigned short)arg2 error:(*id)arg3 ;
-(id)validateFolderName:(id)arg0 forCollection:(id)arg1 error:(*id)arg2 ;
-(id)validateWorkflowName:(id)arg0 forCreation:(BOOL)arg1 overwriting:(BOOL)arg2 error:(*id)arg3 ;
-(id)visibleCollectionForFolderName:(id)arg0 ;
-(id)visiblePredicate;
-(id)visibleReferencesForWorkflowName:(id)arg0 ;
-(id)workflowFetchRequestWithCollectionID:(id)arg0 includeTombstones:(BOOL)arg1 limit:(NSUInteger)arg2 ;
-(id)workflowResultWithFetchOperation:(id)arg0 ;
-(id)workflowResultWithFetchRequest:(id)arg0 ;
-(id)workflowsWithTombstonedConflicts;
-(void)_deleteSmartPromptState:(id)arg0 forReference:(id)arg1 ;
-(void)_saveSmartPromptStateData:(id)arg0 actionUUID:(id)arg1 forWorkflow:(id)arg2 ;
-(void)_updateDeletionAuthorizationsToMatchAuthorization:(id)arg0 forWorkflow:(id)arg1 ;
-(void)_updateStatesToMatchSmartPromptState:(id)arg0 forWorkflow:(id)arg1 ;
// -(void)accessStorageForDescriptor:(id)arg0 forWriting:(BOOL)arg1 readingRecordProperties:(id)arg2 usingBlock:(id)arg3 withError:(unk)arg4  ;
-(void)addActionCountsToShortcutsIfNecessary;
-(void)addObjectObserver:(id)arg0 ;
-(void)addSyncHashesToShortcutsIfNecessary;
-(void)clearTombstonesAndSyncState;
-(void)contextDidSave:(id)arg0 ;
-(void)createSmartPromptStatesForInsertedActions:(id)arg0 forReference:(id)arg1 ;
-(void)dealloc;
-(void)deleteAllAccessResourceStateDataForReference:(id)arg0 ;
-(void)deleteAllSmartPromptStateDataForReference:(id)arg0 ;
-(void)deleteDonationsForShortcutWithIdentifier:(id)arg0 ;
-(void)deleteShortcutSuggestionsFromApps:(id)arg0 ;
-(void)deleteSmartPromptState:(id)arg0 forReference:(id)arg1 ;
-(void)deleteSmartPromptStatesForDeletedActionUUIDs:(id)arg0 forReference:(id)arg1 ;
-(void)notifyResultsAboutChange:(id)arg0 ;
// -(void)performTransactionWithBlock:(id)arg0 error:(unk)arg1  ;
-(void)remoteContextDidSave:(id)arg0 ;
-(void)removeObjectObserver:(id)arg0 ;
-(void)removeRunEventsWithoutAssociatedShortcuts;
-(void)setAuthorizedAtWorkflowLevel:(BOOL)arg0 forAccessResource:(id)arg1 overridingPreviouslyDeterminedAuthorizations:(BOOL)arg2 ;
-(void)setAuthorizedAtWorkflowLevel:(BOOL)arg0 forAccessResource:(id)arg1 reference:(id)arg2 overridingPreviouslyDeterminedAuthorizations:(BOOL)arg3 ;
-(void)setConfirmedForTriggerEventWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)setConflictingReference:(id)arg0 forReference:(id)arg1 ;
-(void)setOutcome:(NSInteger)arg0 forRunEvent:(id)arg1 ;
-(void)setPerWorkflowStateData:(id)arg0 forAccessResourceWithIdentifier:(id)arg1 reference:(id)arg2 ;
-(void)setSyncToken:(id)arg0 ;
-(void)setTrustedToRunScripts:(BOOL)arg0 forReference:(id)arg1 onDomain:(id)arg2 ;
-(void)updateAppDescriptor:(id)arg0 atKey:(id)arg1 actionUUID:(id)arg2 actionIndex:(id)arg3 actionIdentifier:(id)arg4 workflowID:(id)arg5 ;


@end


#endif