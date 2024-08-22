// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSMANAGEDOBJECTCONTEXT_H
#define NSMANAGEDOBJECTCONTEXT_H

@class NSMutableSet, NSString, NSArray, NSSet, NSUndoManager, NSMutableDictionary;
@protocol NSCoding, NSLocking;

#import <Foundation/Foundation.h>

#import "_PFContextMapTable.h"
#import "_PFManagedObjectReferenceQueue.h"
#import "NSManagedObjectContext.h"
#import "NSPersistentStoreCoordinator.h"
#import "NSQueryGenerationToken.h"

@interface NSManagedObjectContext : NSObject <NSCoding, NSLocking>

 {
    id *_queueOwner;
    int _cd_rc;
    int _spinLock;
    *void _dispatchQueue;
    id *_parentObjectStore;
    _managedObjectContextFlags _flags;
    short _undoTransactionID;
    short _ignoreChangeNotification;
    int _lockCount;
    NSMutableSet *_unprocessedChanges;
    NSMutableSet *_unprocessedDeletes;
    NSMutableSet *_unprocessedInserts;
    NSMutableSet *_insertedObjects;
    NSMutableSet *_deletedObjects;
    NSMutableSet *_changedObjects;
    NSMutableSet *_lockedObjects;
    NSMutableSet *_refreshedObjects;
    _PFContextMapTable *_infoByGID;
    *id _cachedObsInfoByEntity;
    id *_lock;
    CGFloat _fetchTimestamp;
    NSInteger _referenceCallbackRegistration;
    _PFManagedObjectReferenceQueue *_referenceQueue;
    NSString *_contextLabel;
    NSArray *_persistentStoreIdentifiers;
    *id _additionalPrivateIvars;
    *void _reserved1;
}


@property (nonatomic) BOOL automaticallyMergesChangesFromParent;
@property (readonly) NSUInteger concurrencyType;
@property (readonly, nonatomic) NSSet *deletedObjects;
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly, nonatomic) NSSet *insertedObjects;
@property (retain) id *mergePolicy;
@property (copy) NSString *name;
@property (retain) NSManagedObjectContext *parentContext;
@property (retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic) BOOL propagatesDeletesAtEndOfEvent;
@property (readonly, nonatomic) NSQueryGenerationToken *queryGenerationToken;
@property (readonly, nonatomic) NSSet *registeredObjects;
@property (nonatomic) BOOL retainsRegisteredObjects;
@property BOOL shouldDeleteInaccessibleFaults;
@property CGFloat stalenessInterval;
@property (copy) NSString *transactionAuthor;
@property (retain, nonatomic) NSUndoManager *undoManager;
@property (readonly, nonatomic) NSSet *updatedObjects;
@property (readonly, nonatomic) NSMutableDictionary *userInfo;


+(BOOL)accessInstanceVariablesDirectly;
+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)createFutureForFileAtURL:(id)arg0 ;
+(id)new;
+(void)_mergeChangesFromRemoteContextSave:(id)arg0 intoContexts:(id)arg1 ;
+(void)initialize;
+(void)mergeChangesFromRemoteContextSave:(id)arg0 intoContexts:(id)arg1 ;
-(BOOL)_allowAncillaryEntities;
-(BOOL)_disableDiscardEditing;
-(BOOL)_isDeallocating;
-(BOOL)_parentObtainPermanentIDsForObjects:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(BOOL)_performImmediate:(id)arg0 ;
-(BOOL)_setChangeTrackingTokenFromToken:(id)arg0 error:(*id)arg1 ;
-(BOOL)_setQueryGenerationFromToken:(id)arg0 error:(*id)arg1 ;
-(BOOL)_tryRetain;
-(BOOL)_updateLocationsOfObjectsToLocationByOrderKey:(id)arg0 inRelationshipWithName:(id)arg1 onObjectWithID:(id)arg2 error:(*id)arg3 ;
-(BOOL)commitEditing;
-(BOOL)commitEditingAndReturnError:(*id)arg0 ;
-(BOOL)evictFuture:(id)arg0 withError:(*id)arg1 ;
-(BOOL)isEditing;
-(BOOL)obtainPermanentIDsForObjects:(id)arg0 error:(*id)arg1 ;
-(BOOL)save:(*id)arg0 ;
-(BOOL)setQueryGenerationFromToken:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldHandleInaccessibleFault:(id)arg0 forObjectID:(id)arg1 triggeredByProperty:(id)arg2 ;
-(BOOL)shouldPerformSecureOperation;
-(BOOL)shouldRefreshAfterSave;
-(BOOL)trackSQLiteDatabaseStatistics;
-(BOOL)tryLock;
-(NSUInteger)countForFetchRequest:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)retainCount;
-(id)_allOrderKeysForDestination:(id)arg0 inRelationship:(id)arg1 error:(*id)arg2 ;
-(id)_changeTrackingToken__;
-(id)_delegate;
-(id)_newOrderedRelationshipInformationForRelationship:(id)arg0 forObjectWithID:(id)arg1 withContext:(id)arg2 error:(*id)arg3 ;
-(id)_orderKeysForRelationshipWithName__:(id)arg0 onObjectWithID:(id)arg1 ;
-(id)_orderedSetWithResultsFromFetchRequest:(id)arg0 ;
-(id)_retainedCurrentQueryGeneration:(id)arg0 ;
-(id)_retainedObjectsFromRemovedStore:(id)arg0 ;
-(id)databaseStatistics;
-(id)description;
-(id)executeFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)executeRequest:(id)arg0 error:(*id)arg1 ;
-(id)executeRequest:(id)arg0 withContext:(id)arg1 error:(*id)arg2 ;
-(id)existingObjectWithID:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConcurrencyType:(NSUInteger)arg0 ;
-(id)newValueForRelationship:(id)arg0 forObjectWithID:(id)arg1 withContext:(id)arg2 error:(*id)arg3 ;
-(id)newValuesForObjectWithID:(id)arg0 withContext:(id)arg1 error:(*id)arg2 ;
-(id)objectRegisteredForID:(id)arg0 ;
-(id)objectWithID:(id)arg0 ;
-(id)performBlockWithResult:(id)arg0 ;
-(id)retain;
-(void)_automaticallyMergeChangesFromContextDidSaveNotification:(id)arg0 ;
-(void)_clearChangedThisTransaction:(id)arg0 ;
-(void)_forceInsertionForObject:(id)arg0 ;
-(void)_forgetObject:(id)arg0 propagateToObjectStore:(BOOL)arg1 removeFromRegistry:(BOOL)arg2 ;
-(void)_managedObjectContextEditor:(id)arg0 didCommit:(BOOL)arg1 contextInfo:(struct ? *)arg2 ;
-(void)_mergeChangesFromDidSaveDictionary:(id)arg0 usingObjectIDs:(BOOL)arg1 ;
-(void)_mergeChangesFromRemoteContextSave:(id)arg0 ;
-(void)_noop:(id)arg0 ;
-(void)_processChangedStoreConfigurationNotification:(id)arg0 ;
-(void)_setAllowAncillaryEntities:(BOOL)arg0 ;
-(void)_setAllowsExpandedUserInfoKeys:(BOOL)arg0 ;
-(void)_setDelegate:(id)arg0 ;
-(void)_setDisableDiscardEditing:(BOOL)arg0 ;
-(void)_setFaultingError:(id)arg0 ;
-(void)_stopConflictDetectionForObject:(id)arg0 ;
-(void)_storeConfigurationChanged:(id)arg0 ;
-(void)_undoDeletions:(id)arg0 ;
-(void)_undoDeletionsMovedToUpdates:(id)arg0 ;
-(void)_undoInsertions:(id)arg0 ;
-(void)_undoManagerCheckpoint:(id)arg0 ;
-(void)_undoUpdates:(id)arg0 ;
-(void)assignObject:(id)arg0 toPersistentStore:(id)arg1 ;
-(void)commitEditingWithDelegate:(id)arg0 didCommitSelector:(SEL)arg1 contextInfo:(*void)arg2 ;
-(void)dealloc;
-(void)deleteObject:(id)arg0 ;
-(void)detectConflictsForObject:(id)arg0 ;
-(void)discardEditing;
-(void)encodeWithCoder:(id)arg0 ;
-(void)insertObject:(id)arg0 ;
-(void)lock;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg0 generation:(id)arg1 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg0 generation:(id)arg1 ;
-(void)mergeChangesFromContextDidSaveNotification:(id)arg0 ;
-(void)objectDidBeginEditing:(id)arg0 ;
-(void)objectDidEndEditing:(id)arg0 ;
-(void)objectWillChange:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performBlock:(id)arg0 ;
-(void)performBlockAndWait:(id)arg0 ;
-(void)performWithOptions:(NSUInteger)arg0 andBlock:(id)arg1 ;
-(void)processPendingChanges;
-(void)redo;
-(void)refreshAllObjects;
-(void)refreshObject:(id)arg0 mergeChanges:(BOOL)arg1 ;
-(void)release;
-(void)reset;
-(void)rollback;
-(void)setShouldPerformSecureOperation:(BOOL)arg0 ;
-(void)setShouldRefreshAfterSave:(BOOL)arg0 ;
-(void)setTrackSQLiteDatabaseStatistics:(BOOL)arg0 ;
-(void)undo;
-(void)unlock;


@end


#endif