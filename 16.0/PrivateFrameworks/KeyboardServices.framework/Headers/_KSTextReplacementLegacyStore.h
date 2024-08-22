// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _KSTEXTREPLACEMENTLEGACYSTORE_H
#define _KSTEXTREPLACEMENTLEGACYSTORE_H

@class NSURL, NSString, NSDate, NSManagedObjectContext, NSPersistentStore, NSPersistentStoreCoordinator;
@protocol NSManagedObjectContextFaultingDelegate, _KSTextReplacementSyncProtocol, OS_os_transaction, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _KSTextReplacementLegacyStore : NSObject <NSManagedObjectContextFaultingDelegate, _KSTextReplacementSyncProtocol>

 {
    NSObject<OS_os_transaction> *_uptimeTransaction;
}


@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (copy, nonatomic) NSString *cacheFilePath; // ivar: _cacheFilePath
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didScheduleCacheUpdate; // ivar: _didScheduleCacheUpdate
@property (nonatomic) BOOL forceMaintenance; // ivar: _forceMaintenance
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger importedSinceMaintenance; // ivar: _importedSinceMaintenance
@property (retain, nonatomic) NSDate *lastMaintenanceDate; // ivar: _lastMaintenanceDate
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext
@property (nonatomic) BOOL minimumUptimeDidExpire; // ivar: _minimumUptimeDidExpire
@property (nonatomic) BOOL pendingSampleShortcutImport; // ivar: _pendingSampleShortcutImport
@property (retain, nonatomic) NSPersistentStore *persistentStore; // ivar: _persistentStore
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // ivar: _persistentStoreCoordinator
@property (retain, nonatomic) NSDate *persistentStoreDidLoadTime; // ivar: _persistentStoreDidLoadTime
@property (nonatomic) BOOL shouldDisableCaching; // ivar: _shouldDisableCaching
@property (nonatomic) BOOL shouldUpdateTheCache; // ivar: _shouldUpdateTheCache
@property (readonly) Class superclass;
@property (nonatomic) BOOL suspendedForAccountChange; // ivar: _suspendedForAccountChange
@property (retain, nonatomic) NSDate *ubiquityStoreLoadStartTime; // ivar: _ubiquityStoreLoadStartTime
@property (nonatomic) BOOL ubiquityStoreLoaded; // ivar: _ubiquityStoreLoaded
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)basePersistentStoreURL;
+(id)cachedStorePath;
+(id)legacyImportFilePaths;
+(id)legacyImportWordKeyPairsFromFiles:(id)arg0 ;
+(id)legacyStorePath;
+(id)textReplacementEntriesFromManagedObjects:(id)arg0 ;
-(BOOL)_mergeShortcut:(id)arg0 phrase:(id)arg1 fromContext:(id)arg2 ;
-(BOOL)_shouldMergeShortcut:(id)arg0 phrase:(id)arg1 intoContext:(id)arg2 ;
-(BOOL)detectAndCleanDuplicatesWithContext:(id)arg0 ;
-(BOOL)mergeEntriesForUbiquityIdentityChangeFromURL:(id)arg0 firstDelete:(BOOL)arg1 ;
-(BOOL)mergeEntriesForUbiquityIdentityChangeIfNecessary;
-(BOOL)mergeEntriesFromAllStoresIncludeLocalVariations:(BOOL)arg0 ;
-(BOOL)migrateEntriesFromStoreAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)needsMaintenance;
-(BOOL)save;
-(BOOL)writeEntriesToCache:(id)arg0 ;
-(CGFloat)minimumUptimeRemaining;
-(NSInteger)context:(id)arg0 shouldHandleInaccessibleFault:(id)arg1 forObjectID:(id)arg2 andTrigger:(id)arg3 ;
-(id)_deleteTransaction:(id)arg0 ;
-(id)currentStoreIndentity;
-(id)entityDescription;
-(id)entriesFromCache:(*id)arg0 ;
-(id)entriesMatchingPredicate:(id)arg0 ;
-(id)entriesMatchingPredicate:(id)arg0 sortDescriptors:(id)arg1 ;
-(id)entriesUsingSortDescriptors:(id)arg0 ;
-(id)init;
-(id)initWithBaseURL:(id)arg0 ;
-(id)managedObjectModelURL;
-(id)mergeShortcutsFromContext:(id)arg0 ;
-(id)removeEntriesWithPredicate:(id)arg0 ;
-(id)storeURLForMergeAfterUbiquityIdentityChangeFromToken:(id)arg0 toToken:(id)arg1 withLastKnownToken:(id)arg2 shouldDeleteFirst:(*BOOL)arg3 ;
-(id)textReplacementEntries;
-(void)_deleteDuplicatesOfShortcut:(id)arg0 phrase:(id)arg1 count:(NSInteger)arg2 withContext:(id)arg3 ;
-(void)addEntries:(id)arg0 removeEntries:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)cleanup;
-(void)dealloc;
-(void)didMaintenance;
-(void)didMergeEntriesForNewUbiquityIdentity:(id)arg0 ;
-(void)didMergeEntriesForOtherLocalPeers:(id)arg0 ;
-(void)endMinimumUptime;
-(void)iCloudAccountDidChange:(id)arg0 ;
-(void)importLegacyEntries;
-(void)importSampleShortcutsIfNecessary;
-(void)insertEntryWithValue:(id)arg0 ;
-(void)loadMaintenancePreferencesIfNecessary;
-(void)loadPersistentStoreIfNecessary;
-(void)migrateSundanceData;
-(void)migrateTellurideData;
-(void)performMaintenanceIfNecessary;
-(void)persistentStoreCoordinatorStoresDidChange:(id)arg0 ;
-(void)persistentStoreCoordinatorStoresWillChange:(id)arg0 ;
-(void)persistentStoreDidImportUbiquitousContentChanges:(id)arg0 ;
-(void)prepareForMigration;
-(void)queryTextReplacementsWithCallback:(id)arg0 ;
-(void)queryTextReplacementsWithPredicate:(id)arg0 callback:(id)arg1 ;
-(void)removeAllEntries;
-(void)requestMinimumUptime;
-(void)requestSync:(NSUInteger)arg0 withCompletionBlock:(id)arg1 ;
-(void)requestSyncWithCompletionBlock:(id)arg0 ;
-(void)retirePersistentStoreAtURL:(id)arg0 ;
-(void)runLegacyMigration;
-(void)runMaintenanceIncludeLocalVariations:(BOOL)arg0 ;
-(void)scheduleCacheUpdate:(id)arg0 ;
-(void)unloadPersistentStore;


@end


#endif