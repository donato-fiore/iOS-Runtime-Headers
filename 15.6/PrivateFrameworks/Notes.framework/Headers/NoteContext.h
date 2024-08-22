// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NOTECONTEXT_H
#define NOTECONTEXT_H

@class NSManagedObjectContext, ICExclusiveLock, NSNumber, NSMutableDictionary, ICSelectorDelayer, ICManagedObjectContextUpdater;

#import <Foundation/Foundation.h>

#import "NoteStoreObject.h"
#import "NoteAccountObject.h"
#import "AccountUtilities.h"

@interface NoteContext : NSObject {
    NSManagedObjectContext *_managedObjectContext;
    NoteStoreObject *_localStore;
    NoteAccountObject *_localAccount;
    NSManagedObjectContext *_nextIdContext;
    ICExclusiveLock *_nextIdLock;
    NSNumber *_nextId;
    ICExclusiveLock *_objectCreationLock;
    NSUInteger _notificationCount;
    BOOL _logChanges;
    BOOL _indexInBatches;
    BOOL _hasPriorityInSaveConflicts;
    BOOL _inMigrator;
    NSMutableDictionary *_notePropertyObjectsRealized;
}


@property (retain, nonatomic) AccountUtilities *accountUtilities; // ivar: _accountUtilities
@property (retain, nonatomic) ICSelectorDelayer *externalChangeNotificationDelayer; // ivar: _externalChangeNotificationDelayer
@property (nonatomic) BOOL isMainContext; // ivar: _isMainContext
@property (readonly, retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) ICManagedObjectContextUpdater *mocUpdater; // ivar: _mocUpdater
@property (nonatomic) BOOL usePrivateQueue; // ivar: _usePrivateQueue


+(BOOL)databaseIsCorrupt:(id)arg0 ;
+(BOOL)isDataProtectionError:(id)arg0 ;
+(BOOL)isTooLowOnDiskSpace;
+(BOOL)shouldLogIndexing;
+(NSUInteger)countOfVisibleNotesInCollection:(id)arg0 ;
+(NSUInteger)countOfVisibleNotesInCollectionIncludingNotesWithoutBodyContent:(id)arg0 ;
+(NSUInteger)countOfVisibleNotesMatchingPredicate:(id)arg0 context:(id)arg1 ;
+(NSUInteger)countOfVisibleNotesMatchingPredicate:(id)arg0 includingNoteWithoutBodyContent:(BOOL)arg1 context:(id)arg2 ;
+(id)allVisibleNotesMatchingPredicate:(id)arg0 context:(id)arg1 ;
+(id)allVisibleNotesMatchingPredicate:(id)arg0 sorted:(BOOL)arg1 context:(id)arg2 ;
+(id)allVisibleNotesMatchingPredicate:(id)arg0 sorted:(BOOL)arg1 context:(id)arg2 fetchLimit:(NSUInteger)arg3 ;
+(id)backupsDirectoryURL;
+(id)defaultNotesSortDescriptors;
+(id)fileProtectionOption;
+(id)fileURLProtectionOption;
+(id)generateGUID;
+(id)mainContextObjectFromObject:(id)arg0 ;
+(id)managedObjectModel;
+(id)newFetchRequestForAccounts;
+(id)newFetchRequestForNotes;
+(id)newFetchRequestForStores;
+(id)newManagedObjectContext;
+(id)newlyAddedAttachmentInContext:(id)arg0 ;
+(id)pathForIndex;
+(id)pathForPersistentStore;
+(id)persistentStoreCoordinator;
+(id)searchIndexerDataSource;
+(id)sharedContext;
+(id)storeOptions;
+(id)urlForPersistentStore;
+(id)visibleNotesIncludingEmptyBodyContentPredicate;
+(id)visibleNotesPredicate;
+(void)backupPersistentStore:(id)arg0 ;
+(void)clearTestsNotesRootPath;
+(void)removeConflictingSqliteAndIdxFiles;
+(void)removeSqliteAndIdxFiles;
+(void)setTestsNotesRootPath:(id)arg0 ;
-(BOOL)deleteAccount:(id)arg0 ;
-(BOOL)deleteStore:(id)arg0 ;
-(BOOL)forceDeleteAccount:(id)arg0 ;
-(BOOL)hasMultipleEnabledStores;
-(BOOL)save:(*id)arg0 ;
-(BOOL)saveOutsideApp:(*id)arg0 ;
-(BOOL)saveSilently:(*id)arg0 ;
-(BOOL)setUpCoreDataStack;
-(BOOL)setUpLastIndexTid;
-(BOOL)setUpLocalAccountAndStore;
-(BOOL)shouldDisableLocalStore;
-(BOOL)shouldObserveDarwinNotifications;
-(NSInteger)context:(id)arg0 shouldHandleInaccessibleFault:(id)arg1 forObjectID:(id)arg2 andTrigger:(id)arg3 ;
-(NSUInteger)countOfNotes;
-(NSUInteger)countOfNotesInCollection:(id)arg0 ;
-(NSUInteger)countOfNotesMatchingPredicate:(id)arg0 ;
-(NSUInteger)countOfStores;
-(NSUInteger)countOfVisibleNotes;
-(NSUInteger)countOfVisibleNotesInCollection:(id)arg0 ;
-(NSUInteger)countOfVisibleNotesMatchingPredicate:(id)arg0 ;
-(id)_notePropertyObjectForKey:(id)arg0 ;
-(id)accountForAccountId:(id)arg0 ;
-(id)allAccounts;
-(id)allAccountsAsFaults:(BOOL)arg0 prefechedRelationshipKeyPaths:(id)arg1 ;
-(id)allNotes;
-(id)allNotesInCollection:(id)arg0 ;
-(id)allNotesMatchingPredicate:(id)arg0 ;
-(id)allNotesWithoutBodiesInCollection:(id)arg0 ;
-(id)allStores;
-(id)allVisibleNotes;
-(id)allVisibleNotesInCollection:(id)arg0 ;
-(id)allVisibleNotesInCollection:(id)arg0 sorted:(BOOL)arg1 ;
-(id)allVisibleNotesMatchingPredicate:(id)arg0 ;
-(id)allVisibleNotesMatchingPredicate:(id)arg0 sorted:(BOOL)arg1 ;
-(id)collectionForInfo:(id)arg0 ;
-(id)collectionForObjectID:(id)arg0 ;
-(id)defaultStoreForNewNote;
-(id)faultedInStoresForAccounts:(id)arg0 ;
-(id)getNextIdObject;
-(id)init;
-(id)initForMainContext;
-(id)initForMigrator;
-(id)initWithAccountUtilities:(id)arg0 ;
-(id)initWithAccountUtilities:(id)arg0 inMigrator:(BOOL)arg1 ;
-(id)initWithAccountUtilities:(id)arg0 inMigrator:(BOOL)arg1 isMainContext:(BOOL)arg2 usePrivateQueue:(BOOL)arg3 ;
-(id)initWithPrivateQueue;
-(id)initWithPrivateQueue:(BOOL)arg0 ;
-(id)liveNotesNeedingBodiesPredicate;
-(id)localAccount;
-(id)localStore;
-(id)mostRecentlyModifiedNoteInCollection:(id)arg0 ;
-(id)newFRCForAccountsWithDelegate:(id)arg0 ;
-(id)newFRCForCollection:(id)arg0 delegate:(id)arg1 ;
-(id)newFRCForCollection:(id)arg0 delegate:(id)arg1 performFetch:(BOOL)arg2 ;
-(id)newFRCForFetchRequest:(id)arg0 delegate:(id)arg1 performFetch:(BOOL)arg2 ;
-(id)newFRCForStoresWithDelegate:(id)arg0 ;
-(id)newFetchRequestForNotes;
-(id)newlyAddedAccount;
-(id)newlyAddedAttachment;
-(id)newlyAddedNote;
-(id)newlyAddedNoteWithGUID:(id)arg0 ;
-(id)newlyAddedStore;
-(id)newlyCreatedNoteFromDefaultStore;
-(id)nextIndex;
-(id)noteChangeWithType:(int)arg0 store:(id)arg1 ;
-(id)noteForObjectID:(id)arg0 ;
-(id)notesForIntegerIds:(id)arg0 ;
-(id)propertyValueForKey:(id)arg0 ;
-(id)storeForObjectID:(id)arg0 ;
-(id)visibleNoteForObjectID:(id)arg0 ;
-(id)visibleNotesForIntegerIds:(id)arg0 ;
-(id)visibleNotesPredicate;
-(void)_createLocalAccount:(*id)arg0 andStore:(*id)arg1 ;
-(void)batchFaultNotes:(id)arg0 ;
-(void)cleanUpLocks;
-(void)clearCaches;
-(void)dealloc;
-(void)deleteChanges:(id)arg0 ;
-(void)deleteNote:(id)arg0 ;
-(void)deleteNoteRegardlessOfConstraints:(id)arg0 ;
-(void)enableChangeLogging:(BOOL)arg0 ;
-(void)forceSetUpUniqueObjects;
-(void)handleMigration;
-(void)invalidate;
-(void)managedObjectContextWillSaveNotification:(id)arg0 ;
-(void)postNotesChangedExternally;
-(void)receiveDarwinNotificationWithChangeLogging:(BOOL)arg0 ;
-(void)resetNotificationCount;
-(void)setHasPriorityInSaveConflicts:(BOOL)arg0 ;
-(void)setPropertyValue:(id)arg0 forKey:(id)arg1 ;
-(void)setUpUniqueObjects;
-(void)sortNotes:(id)arg0 ;
-(void)tearDownCoreDataStack;
-(void)trackChanges:(id)arg0 ;
-(void)updateForRecentChanges;


@end


#endif