// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDDATABASE_H
#define HDDATABASE_H

@class NSUUID, NSLock, HKObserverSet, NSMutableArray, NSDate, NSMutableDictionary, NSHashTable, NSString, HDAssertionManager, NSConditionLock, NSMutableSet, NSOperationQueue, NSDictionary;
@protocol HDAssertionObserver, HDContentProtectionObserver, HDDiagnosticObject, HDSQLiteDatabaseDelegate, HDSQLiteDatabasePoolDelegate, HDSQLiteDatabaseProvider, HDDatabaseJournalDelegate, HDHFDataStoreDelegate, HDDatabaseMigrationTransactionDelegate, HDProfileReadyObserver, HDHealthDaemonReadyObserver, HDAnalyticsSubmissionCoordinatorDelegate, HDDatabaseCorruptionEventStoreDelegate, HDHealthDatabase, OS_dispatch_queue, OS_dispatch_group, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "HDHFDataStore.h"
#import "HDDatabaseJournal.h"
#import "HDContentProtectionManager.h"
#import "HDProfile.h"

@interface HDDatabase : NSObject <HDAssertionObserver, HDContentProtectionObserver, HDDiagnosticObject, HDSQLiteDatabaseDelegate, HDSQLiteDatabasePoolDelegate, HDSQLiteDatabaseProvider, HDDatabaseJournalDelegate, HDHFDataStoreDelegate, HDDatabaseMigrationTransactionDelegate, HDProfileReadyObserver, HDHealthDaemonReadyObserver, HDAnalyticsSubmissionCoordinatorDelegate, HDDatabaseCorruptionEventStoreDelegate, HDHealthDatabase>

 {
    uint8_t _invalidated;
    uint8_t _started;
    NSUUID *_databaseUUID;
    os_unfair_lock_s _databaseUUIDLock;
    NSObject<OS_dispatch_queue> *_serialAsynchronousQueue;
    HDHFDataStore *_hfDataStore;
    NSLock *_writeLock;
    NSObject<OS_dispatch_queue> *_protectedDataQueue;
    HKObserverSet *_protectedDataObservers;
    NSInteger _protectedDataState;
    NSInteger _observedContentProtectionState;
    BOOL _isObservingContentProtection;
    NSObject<OS_dispatch_group> *_contentProtectionObservationGroup;
    NSObject<OS_dispatch_source> *_inactivityFlushTimer;
    BOOL _hasFlushedForInactivity;
    NSMutableArray *_firstUnlockBlocks;
    BOOL _shouldNotifyFirstUnlockObservers;
    NSDate *_protectedDataFlushDeadlineDate;
    NSObject<OS_dispatch_source> *_protectedDataFlushDeadlineTimer;
    BOOL _hasFlushedProtectedData;
    BOOL _disableTakingProtectedDataAssertionsWhenLocked;
    uint8_t _hasPendingSecondaryJournalMerge;
    NSMutableDictionary *_databaseJournalMergeObserverSetByType;
    NSHashTable *_protectedResourceStores;
    os_unfair_lock_s _protectedResourceAssertionsLock;
    NSMutableDictionary *_protectedResourceAssertionsByIdentifier;
    atomic_flag _hasFaultedForCorruptionError;
    NSString *_profileDirectoryPath;
    NSString *_threadLocalTransactionKey;
    NSString *_threadLocalTransactionContextKey;
    NSString *_threadLocalIgnoreTransactionContextKey;
    HDAssertionManager *_assertionManager;
    NSLock *_schemaMigrationLock;
    NSConditionLock *_activeDatabasesLock;
    NSMutableSet *_activeDatabases;
    NSHashTable *_migratedDatabases;
    NSOperationQueue *_asynchronousOperationQueue;
    NSObject<OS_dispatch_queue> *_journalQueue;
    NSObject<OS_dispatch_group> *_journalGroup;
    NSUInteger _pendingJournalMerges;
    NSObject<OS_dispatch_queue> *_secondaryJournalMergeQueue;
    NSMutableDictionary *_extendedTransactions;
    NSDictionary *_databasePoolForType;
}


@property (readonly, nonatomic) HDDatabaseJournal *cloudSyncJournal; // ivar: _cloudSyncJournal
@property (readonly, nonatomic) HDContentProtectionManager *contentProtectionManager; // ivar: _contentProtectionManager
@property (nonatomic) NSInteger corruptedMigrationAttemptsCount; // ivar: _corruptedMigrationAttemptsCount
@property (readonly, nonatomic, getter=isDataProtectedByFirstUnlockAvailable) BOOL dataProtectedByFirstUnlockAvailable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didRunPostMigrationUpdates; // ivar: _didRunPostMigrationUpdates
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat inactivityFlushInterval; // ivar: _inactivityFlushInterval
@property (readonly, nonatomic) HDDatabaseJournal *journal; // ivar: _journal
@property (readonly, copy, nonatomic) NSDate *mostRecentObliterationDate;
@property (nonatomic) CGFloat offsetTimeInterval; // ivar: _offsetTimeInterval
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly, nonatomic, getter=isProtectedDataAvailable) BOOL protectedDataAvailable;
@property (nonatomic) CGFloat protectedDataFlushInterval; // ivar: _protectedDataFlushInterval
@property (readonly) Class superclass;
@property (copy, nonatomic) id *unitTest_didWaitForJournalMergeHandler; // ivar: _unitTest_didWaitForJournalMergeHandler


+(NSInteger)unitTest_createOrMigrateDatabaseAtDirectoryURL:(id)arg0 schemaProviders:(id)arg1 behavior:(id)arg2 error:(*id)arg3 ;
+(id)allCurrentAndFutureEntityClasses;
+(id)allEntityClassesWithBehavior:(id)arg0 ;
+(id)createDatabaseConnectionWithURL:(id)arg0 ;
-(BOOL)accessHighFrequencyDataStoreWithError:(*id)arg0 block:(id)arg1 ;
-(BOOL)addJournalEntries:(id)arg0 error:(*id)arg1 ;
-(BOOL)addJournalEntry:(id)arg0 error:(*id)arg1 ;
-(BOOL)allowMigrationToSQLiteForHFDataStore:(id)arg0 ;
-(BOOL)discardHighFrequencyDataStoreWithError:(*id)arg0 ;
-(BOOL)migrateDataForHFDataStore:(id)arg0 from:(*void)arg1 to:(*void)arg2 recoveryAnalytics:(id)arg3 error:(*id)arg4 ;
-(BOOL)migrateDataForHFDataStore:(id)arg0 toSQLiteFrom:(*void)arg1 error:(*id)arg2 ;
-(BOOL)performHighPriorityTransactionsWithError:(*id)arg0 block:(id)arg1 ;
// -(BOOL)performTransactionWithContext:(id)arg0 error:(*id)arg1 block:(id)arg2 inaccessibilityHandler:(unk)arg3  ;
-(BOOL)performWithJournalType:(NSInteger)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)performWithTransactionContext:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(NSInteger)HFDataStore:(id)arg0 integerForKey:(id)arg1 ;
-(NSUInteger)journalChapterCountForType:(NSInteger)arg0 ;
-(id)HFDSizeInBytes;
-(id)_journalForType:(NSInteger)arg0 ;
-(id)_newCorruptionEventStore;
-(id)_newDataStoreForPath:(id)arg0 ;
-(id)activeTransactionForCurrentThreadForHFDataStore:(id)arg0 forWriting:(BOOL)arg1 ;
-(id)allEntityClassesWithProtectionClass:(NSInteger)arg0 ;
-(id)beginExtendedTransactionWithContext:(id)arg0 transactionTimeout:(CGFloat)arg1 continuationTimeout:(CGFloat)arg2 error:(*id)arg3 ;
-(id)checkOutProtectedDatabase:(id)arg0 error:(*id)arg1 ;
-(id)checkOutProtectedResources:(id)arg0 error:(*id)arg1 ;
-(id)checkOutUnprotectedDatabase:(id)arg0 error:(*id)arg1 ;
-(id)cloneAccessibilityAssertion:(id)arg0 ownerIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)databasePoolForDatabaseType:(NSInteger)arg0 ;
-(id)databaseSizeInBytesExcludingHFD;
-(id)databaseSizeInBytesForTypeUnprotected:(BOOL)arg0 WAL:(BOOL)arg1 ;
-(id)databaseUUIDWithError:(*id)arg0 ;
-(id)diagnosticDescription;
-(id)extendedDatabaseTransactionForIdentifier:(id)arg0 ;
-(id)highFrequencyDataStoreURL;
-(id)initWithProfile:(id)arg0 concurrentReaderLimit:(NSUInteger)arg1 ;
-(id)newDatabaseForDatabasePool:(id)arg0 error:(*id)arg1 ;
-(id)progressForJournalMergeWithType:(NSInteger)arg0 ;
-(id)store:(id)arg0 objectForKey:(id)arg1 ;
-(id)takeAccessibilityAssertionWithOwnerIdentifier:(id)arg0 shouldPerformTransaction:(BOOL)arg1 timeout:(CGFloat)arg2 error:(*id)arg3 ;
-(id)takeAccessibilityAssertionWithOwnerIdentifier:(id)arg0 timeout:(CGFloat)arg1 error:(*id)arg2 ;
-(id)unitTest_HFDataStore;
-(id)unitTest_currentTransaction;
-(void)HFDataStore:(id)arg0 detectedCorruptionOfType:(NSInteger)arg1 code:(int)arg2 error:(id)arg3 shouldPromptUser:(BOOL)arg4 initialRebuildState:(NSInteger)arg5 updatedRebuildState:(NSInteger)arg6 ;
-(void)HFDataStore:(id)arg0 setInteger:(NSInteger)arg1 forKey:(id)arg2 ;
-(void)HFDataStoreDetectedOutOfSpace:(id)arg0 ;
-(void)HFDataStoreDidPerformRebuild:(id)arg0 didDecompressArchivedHFD:(BOOL)arg1 didOpenArchivedHFD:(BOOL)arg2 didOpenMovedAsideHFD:(BOOL)arg3 recoveryAnalytics:(id)arg4 duration:(CGFloat)arg5 ;
-(void)_reportDatabaseMigrationStatus:(NSInteger)arg0 component:(NSInteger)arg1 schemaVersion:(NSInteger)arg2 error:(id)arg3 ;
-(void)_reportSQLiteCorruption:(id)arg0 forDatabase:(NSInteger)arg1 shouldPrompt:(BOOL)arg2 ;
-(void)addDatabaseJournalMergeObserver:(id)arg0 journalType:(NSInteger)arg1 queue:(id)arg2 ;
-(void)addProtectedDataObserver:(id)arg0 ;
-(void)addProtectedDataObserver:(id)arg0 queue:(id)arg1 ;
-(void)assertionManager:(id)arg0 assertionInvalidated:(id)arg1 ;
-(void)checkInDatabase:(id)arg0 type:(NSInteger)arg1 protectedResources:(id)arg2 ;
-(void)contentProtectionStateChanged:(NSInteger)arg0 previousState:(NSInteger)arg1 ;
-(void)daemonReady:(id)arg0 ;
-(void)databaseJournalMergeDidComplete:(id)arg0 ;
-(void)databasePool:(id)arg0 didFlushDatabases:(id)arg1 ;
-(void)dealloc;
-(void)didMigrateHFDataStore:(id)arg0 fromState:(NSInteger)arg1 toState:(NSInteger)arg2 success:(BOOL)arg3 error:(id)arg4 ;
-(void)finalizeExtendedTransactionForIdentifier:(id)arg0 ;
-(void)invalidateAndWait;
-(void)migrationTransaction:(id)arg0 didCreateDatabasesWithIdentifier:(id)arg1 ;
-(void)migrationTransaction:(id)arg0 didEncounterDatabaseMismatchWithUnprotectedIdentifier:(id)arg1 protectedIdentifier:(id)arg2 ;
-(void)obliterateWithReason:(id)arg0 preserveCopy:(BOOL)arg1 ;
-(void)performAsynchronously:(id)arg0 ;
-(void)performAsynchronouslySerial:(id)arg0 ;
-(void)performWhenDataProtectedByFirstUnlockIsAvailable:(id)arg0 ;
-(void)performWhenDataProtectedByFirstUnlockIsAvailableOnQueue:(id)arg0 block:(id)arg1 ;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)removeDatabaseJournalMergeObserver:(id)arg0 journalType:(NSInteger)arg1 ;
-(void)removeProtectedDataObserver:(id)arg0 ;
-(void)reportDailyAnalyticsWithCoordinator:(id)arg0 completion:(id)arg1 ;
-(void)requestRebuildTransactionForHFDataStore:(id)arg0 ;
-(void)start;
-(void)store:(id)arg0 setObject:(id)arg1 forKey:(id)arg2 ;
-(void)unitTest_disableDatabaseAccessibilityAssertions;
-(void)unitTest_enableDatabaseAccessibilityAssertions;
-(void)unitTest_requestHFDRebuild:(BOOL)arg0 ;
-(void)unitTest_setContentProtectionStateAndWait:(NSInteger)arg0 ;


@end


#endif