// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICNOTECONTEXT_H
#define ICNOTECONTEXT_H

@class NSString, ICManagedObjectContextUpdater, ICFolderCustomNoteSortType, NSError, NSManagedObjectContext, ICPersistentContainer, NSDictionary, NSData, NSTimer, NSArray;
@protocol ICManagedObjectContextUpdaterDelegate, ICNoteContainer, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICAccountUtilities.h"
#import "ICNotesCrossProcessChangeCoordinator.h"
#import "ICNote.h"
#import "ICAccount.h"

@interface ICNoteContext : NSObject <ICManagedObjectContextUpdaterDelegate, ICNoteContainer>



@property (retain, nonatomic) ICAccountUtilities *accountUtilities; // ivar: _accountUtilities
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundTaskQueue; // ivar: _backgroundTaskQueue
@property (readonly, nonatomic) BOOL canBeSharedViaICloud;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (nonatomic) NSUInteger contextOptions; // ivar: _contextOptions
@property (retain, nonatomic) ICManagedObjectContextUpdater *contextUpdater; // ivar: _contextUpdater
@property (nonatomic) NSUInteger countOfPerformBackgroundTask; // ivar: _countOfPerformBackgroundTask
@property (retain, nonatomic) ICNotesCrossProcessChangeCoordinator *crossProcessChangeCoordinator; // ivar: _crossProcessChangeCoordinator
@property (retain, nonatomic) ICNote *currentNote; // ivar: _currentNote
@property (readonly, nonatomic) ICFolderCustomNoteSortType *customNoteSortType;
@property (retain, nonatomic) NSError *databaseOpenError; // ivar: _databaseOpenError
@property (nonatomic) BOOL databaseOpenFailedDueToLowDiskSpace; // ivar: _databaseOpenFailedDueToLowDiskSpace
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL delaySaving; // ivar: _delaySaving
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAllNotesContainer;
@property (readonly, nonatomic) BOOL isSharedContext;
@property (readonly, nonatomic) BOOL isSharedReadOnly;
@property (readonly, nonatomic) BOOL isSharedViaICloud;
@property (readonly, nonatomic) BOOL isTrashFolder;
@property (retain) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext
@property (readonly, nonatomic) ICAccount *noteContainerAccount;
@property (readonly) ICPersistentContainer *persistentContainer; // ivar: _persistentContainer
@property (retain, nonatomic) NSDictionary *persistentStoresByAccountId; // ivar: _persistentStoresByAccountId
@property (getter=isSaving) BOOL saving; // ivar: _saving
@property (nonatomic) BOOL shouldEnsureLocalAccount; // ivar: _shouldEnsureLocalAccount
@property (retain, nonatomic) NSData *subFolderOrderMergeableData;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsEditingNotes;
@property (retain, nonatomic) NSTimer *trashDeletionTimer; // ivar: _trashDeletionTimer
@property (retain, nonatomic) NSTimer *updateAttachmentLocationsTimer; // ivar: _updateAttachmentLocationsTimer
@property (readonly, nonatomic) NSArray *visibleNotes;
@property (readonly, nonatomic) NSArray *visibleSubFolders;


+(BOOL)hasContextOptions:(NSUInteger)arg0 ;
+(BOOL)hasSharedContext;
+(BOOL)isActive;
+(BOOL)legacyNotesDisabled;
+(BOOL)updateSharedStateFile:(id)arg0 toState:(BOOL)arg1 error:(*id)arg2 ;
+(id)filenameFromFileWrapper:(id)arg0 ;
+(id)performBackgroundTaskSerialQueue;
+(id)searchIndexerDataSource;
+(id)sharedContext;
+(id)snapshotManagedObjectContextForContainer:(id)arg0 ;
+(id)workerManagedObjectContextForContainer:(id)arg0 ;
+(void)crashThisApp;
+(void)enableLocalAccount;
+(void)markOldTrashedNotesForDeletionInContext:(id)arg0 ;
+(void)resetAppContainer;
+(void)resetAppState;
+(void)setLegacyNotesDisabled:(BOOL)arg0 ;
+(void)startSharedContextWithOptions:(NSUInteger)arg0 ;
+(void)useContainerNamed:(id)arg0 ;
-(BOOL)hasAnyContextOptions:(NSUInteger)arg0 ;
-(BOOL)hasContextOptions:(NSUInteger)arg0 ;
-(BOOL)isDeleted;
-(BOOL)isModernCustomFolder;
-(BOOL)mergeWithSubFolderMergeableData:(id)arg0 ;
-(BOOL)noteIsVisible:(id)arg0 ;
-(BOOL)recoverFromSaveError;
-(BOOL)save;
-(BOOL)save:(*id)arg0 ;
-(BOOL)saveImmediately;
-(BOOL)supportsVisibilityTestingType:(NSInteger)arg0 ;
-(id)accountName;
-(id)allICloudACAccounts;
-(id)defaultPersistentStoreFromPersistentStores:(id)arg0 ;
-(id)fetchedResultsControllerForFetchRequest:(id)arg0 sectionNameKeyPath:(id)arg1 ;
-(id)inMemoryPersistentStoreFromPersistentStores:(id)arg0 ;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(id)newFetchedResultsControllerForAllAccounts;
-(id)noteVisibilityTestingForSearchingAccount;
-(id)persistentStoreCoordinator;
-(id)persistentStoreForAccountID:(id)arg0 ;
-(id)predicateForPinnedNotes;
-(id)predicateForSearchableAttachments;
-(id)predicateForSearchableNotes;
-(id)predicateForVisibleNotes;
-(id)primaryICloudACAccount;
-(id)snapshotManagedObjectContext;
-(id)storeFilenameForAccountIdentifier:(id)arg0 ;
-(id)titleForNavigationBar;
-(id)titleForTableViewCell;
-(id)workerManagedObjectContext;
-(void)accountsDidChange:(id)arg0 ;
-(void)addOrDeleteLocalAccountIfNecessary;
-(void)applicationWillTerminate;
-(void)cleanupAdditionalPersistentStores;
-(void)clearPersistentContainer;
-(void)cloudContextFetchRecordChangeOperationDidFinish:(id)arg0 ;
-(void)createAdditionalPersistentStoresWithAccountIdentifiers:(id)arg0 completionBlock:(id)arg1 ;
-(void)createAdditionalPersistentStoresWithAccountIdentifiers:(id)arg0 persistentContainer:(id)arg1 ;
-(void)dealloc;
-(void)deleteEverything;
-(void)destroyPersistentStore;
-(void)loadAdditionalPersistentStores;
-(void)managedObjectContextDidSave:(id)arg0 ;
-(void)managedObjectContextUpdater:(id)arg0 objectDidChange:(id)arg1 ;
-(void)performBackgroundTask:(id)arg0 ;
-(void)performSnapshotBackgroundTask:(id)arg0 ;
-(void)postMoveUpdateChangeCountForNote:(id)arg0 ;
-(void)purgeDeletedObjectsInManagedObjectContext:(id)arg0 ;
-(void)purgeEverything;
-(void)refreshAll;
-(void)refreshPersistentStoresByAccountIdFromPersistentStores:(id)arg0 ;
-(void)reloadPersistentContainer;
-(void)saveAndClearDecryptedDataIfNecessary;
-(void)saveSubFolderMergeableDataIfNeeded;
-(void)setupCrossProcessChangeCoordinator;
-(void)setupTrashDeletionTimer;
-(void)startIndexingWithCoreSpotlightDelegateForDescription:(id)arg0 coordinator:(id)arg1 ;
-(void)startSearchIndexerChangeObservingIfNecessary;
-(void)updateAccounts;
-(void)updateSubFolderMergeableDataChangeCount;


@end


#endif