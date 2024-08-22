// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDPROTECTEDDATABASEPERSISTENCE_H
#define EDPROTECTEDDATABASEPERSISTENCE_H

@class NSString;
@protocol EFLoggable, EFSignpostable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "EDPersistenceDatabase.h"
#import "EDPersistenceHookRegistry.h"
#import "EDPersistenceDatabaseJournalManager.h"

@interface EDProtectedDatabasePersistence : NSObject <EFLoggable, EFSignpostable>

 {
    os_unfair_lock_s _initializationLock;
    os_unfair_lock_s _reconciliationLock;
    EDPersistenceDatabase *_database;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry; // ivar: _hookRegistry
@property (nonatomic) BOOL isInitialized; // ivar: _isInitialized
@property (nonatomic) BOOL isReconciling; // ivar: _isReconciling
@property (readonly, nonatomic) EDPersistenceDatabaseJournalManager *journalManager; // ivar: _journalManager
@property (readonly, nonatomic) BOOL protectedDataAvailable;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *reconciliationQueue; // ivar: _reconciliationQueue
@property (readonly) NSUInteger signpostID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsJournaling;


+(id)journalDatabaseName;
+(id)log;
+(id)protectedDatabaseName;
+(id)signpostLog;
-(BOOL)_attachProtectedDatabaseToConnection:(id)arg0 withSchema:(id)arg1 error:(*id)arg2 ;
-(BOOL)_initializeDatabase:(id)arg0 withConnection:(id)arg1 schema:(id)arg2 error:(*id)arg3 ;
-(BOOL)_isJournalMalformedForSchema:(id)arg0 connection:(id)arg1 ;
-(BOOL)_isRecoverableError:(id)arg0 ;
-(BOOL)_performOnDemandReconciliationForConnection:(id)arg0 withSchema:(id)arg1 ;
-(BOOL)_removeExistingDatabaseIDs:(id)arg0 withColumn:(id)arg1 connection:(id)arg2 ;
-(BOOL)_updateSqliteSequenceForDatabase:(id)arg0 schema:(id)arg1 withConnection:(id)arg2 error:(*id)arg3 ;
-(BOOL)_upgradeJournalWithConnection:(id)arg0 schema:(id)arg1 error:(*id)arg2 ;
-(NSInteger)_maxRowIDForColumn:(id)arg0 withConnection:(id)arg1 ;
-(NSUInteger)_deleteRowIDs:(id)arg0 fromJournal:(id)arg1 withConnection:(id)arg2 ;
-(NSUInteger)_executeStatementString:(id)arg0 onConnection:(id)arg1 errorMessage:(id)arg2 ;
-(NSUInteger)_executeUpdateStatement:(id)arg0 onConnection:(id)arg1 errorMessage:(id)arg2 ;
-(NSUInteger)_mergeSchema:(id)arg0 connection:(id)arg1 journaledRows:(*NSUInteger)arg2 newRows:(*NSUInteger)arg3 ;
-(NSUInteger)_mergeTable:(id)arg0 connection:(id)arg1 journaledRows:(*NSUInteger)arg2 newRows:(*NSUInteger)arg3 ;
-(NSUInteger)_reconcileJournalsWithSchema:(id)arg0 connection:(id)arg1 ;
-(NSUInteger)_resultForConnection:(id)arg0 success:(BOOL)arg1 error:(id)arg2 errorMessage:(id)arg3 ;
-(NSUInteger)_runReconciliationWithSchema:(id)arg0 connection:(id)arg1 ;
-(id)_allReferencingColumnsForTable:(id)arg0 ;
-(id)_databaseIDsToDeleteForTable:(id)arg0 ;
-(id)database;
-(id)initWithBasePath:(id)arg0 hookRegistry:(id)arg1 ;
-(id)initWithJournalManager:(id)arg0 hookRegistry:(id)arg1 ;
-(void)_attachJournalDatabaseToConnection:(id)arg0 withSchema:(id)arg1 ;
-(void)_deleteDatabaseIDs:(id)arg0 fromTable:(id)arg1 ;
-(void)_detachJournalDatabaseFromConnection:(id)arg0 ;
-(void)_detachProtectedDatabaseFromConnection:(id)arg0 ;
-(void)_ensureJournalIsAttachedToConnection:(id)arg0 withSchema:(id)arg1 ;
-(void)_ensureProtectedDatabaseOrJournalIsAttachedToConnection:(id)arg0 withSchema:(id)arg1 ;
-(void)addAdditionalCriteriaToCleanupActivity:(id)arg0 ;
-(void)attachProtectedOrJournalDatabaseToConnectionIfNecessary:(id)arg0 withSchema:(id)arg1 ;
-(void)detachProtectedOrJournalDatabaseFromConnectionIfNecessary:(id)arg0 ;
-(void)finishJournalReconciliation:(NSUInteger)arg0 ;
-(void)reconcileJournalsWithSchema:(id)arg0 completionBlock:(id)arg1 ;
-(void)scheduleRecurringActivity;
-(void)setDatabase:(id)arg0 ;


@end


#endif