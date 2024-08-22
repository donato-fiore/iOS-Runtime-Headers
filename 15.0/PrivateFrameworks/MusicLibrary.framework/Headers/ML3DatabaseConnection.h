// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3DATABASECONNECTION_H
#define ML3DATABASECONNECTION_H

@class NSMutableArray, NSString, NSUUID;
@protocol ML3DatabaseConnectionDelegate;

#import <Foundation/Foundation.h>

#import "ML3DatabaseStatementCache.h"
#import "ML3DatabaseConnectionPool.h"
#import "ML3DatabasePrivacyContext.h"

@interface ML3DatabaseConnection : NSObject {
    *sqlite3 _sqlitedb;
    BOOL _isOpen;
    ML3DatabaseStatementCache *_statementCache;
    NSUInteger _statementsSinceLastCheckpoint;
    NSUInteger _transactionLevel;
    BOOL _nestedTransactionWantsToRollback;
    NSMutableArray *_enqueuedTransactionCommitBlocks;
    ML3DatabaseConnectionPool *_owningPool;
    NSMutableArray *_registeredFunctions;
    NSMutableArray *_registeredModules;
    *void _iTunesExtensions;
    NSInteger _profilingLevel;
    NSString *_lastTracedStatement;
    int _willDeleteDatabaseNotifyToken;
    BOOL _isHandlingIOError;
    BOOL _alreadyAttemptedCorruptionRecovery;
}


@property (nonatomic) BOOL automaticCheckpointingEnabled; // ivar: _automaticCheckpointingEnabled
@property (nonatomic) NSUInteger checkpointStatementThreshold; // ivar: _checkpointStatementThreshold
@property (weak, nonatomic) NSObject<ML3DatabaseConnectionDelegate> *connectionDelegate; // ivar: _connectionDelegate
@property (readonly, nonatomic) NSUUID *currentTransactionID; // ivar: _currentTransactionID
@property (readonly, nonatomic) NSString *databasePath; // ivar: _databasePath
@property (readonly, nonatomic) BOOL isInTransaction;
@property (readonly, nonatomic) BOOL isOpen;
@property (nonatomic, setter=setReadOnly:) BOOL isReadOnly; // ivar: _isReadOnly
@property (nonatomic) NSUInteger journalingMode; // ivar: _journalingMode
@property (nonatomic) BOOL logQueryPlans; // ivar: _logQueryPlans
@property (retain, nonatomic) ML3DatabasePrivacyContext *privacyContext; // ivar: _privacyContext
@property (nonatomic) NSInteger profilingLevel;
@property (nonatomic) NSUInteger protectionLevel; // ivar: _protectionLevel
@property (readonly, nonatomic) BOOL transactionMarkedForRollBack;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


-(BOOL)_alreadyAttemptedCorruptionRecovery;
-(BOOL)_alterTableNamed:(id)arg0 withNewColumnDefinitions:(id)arg1 newColumnNames:(id)arg2 oldColumnNames:(id)arg3 ;
-(BOOL)_closeAndFlushTransactionState:(BOOL)arg0 ;
-(BOOL)_databaseFileExists;
-(BOOL)_databaseFilesAreWritable;
-(BOOL)_executeStatement:(id)arg0 withError:(*id)arg1 ;
-(BOOL)_handleBusyLockWithNumberOfRetries:(int)arg0 ;
-(BOOL)_handleConnectionErrorWhileOpening:(int)arg0 ;
-(BOOL)_handleDiskIOError;
-(BOOL)_handleZombieSQLiteConnection:(struct sqlite3 *)arg0 ;
-(BOOL)_internalBeginTransactionWithBehaviorType:(NSUInteger)arg0 ;
-(BOOL)_internalEndTransactionAndCommit:(BOOL)arg0 ;
-(BOOL)_internalExecuteUpdate:(id)arg0 withParameters:(id)arg1 error:(*id)arg2 ;
-(BOOL)_isDeviceMediaLibraryDatabase;
-(BOOL)_openWithFlags:(int)arg0 ;
-(BOOL)_validatePreparedStatement:(id)arg0 error:(*id)arg1 ;
-(BOOL)close;
-(BOOL)deleteDatabase;
-(BOOL)executeUpdate:(id)arg0 ;
-(BOOL)executeUpdate:(id)arg0 withParameters:(id)arg1 error:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)open;
-(BOOL)performTransactionWithBlock:(id)arg0 ;
// -(BOOL)performTransactionWithBlock:(id)arg0 usingBehaviorType:(unk)arg1  ;
-(BOOL)popToRootTransactionAndCommit:(BOOL)arg0 ;
-(BOOL)popTransactionAndCommit:(BOOL)arg0 ;
-(BOOL)pushTransaction;
-(BOOL)pushTransactionUsingBehaviorType:(NSUInteger)arg0 ;
-(BOOL)registerFunctionName:(id)arg0 argumentCount:(int)arg1 block:(id)arg2 ;
-(BOOL)registerFunctionName:(id)arg0 argumentCount:(int)arg1 functionPointer:(*unk)arg2 ;
-(BOOL)registerFunctionName:(id)arg0 argumentCount:(int)arg1 functionPointer:(*unk)arg2 userData:(*void)arg3 ;
-(BOOL)registerModule:(id)arg0 ;
-(BOOL)registerModuleName:(id)arg0 moduleMethods:(struct sqlite3_module *)arg1 ;
-(BOOL)removeModuleNamed:(id)arg0 ;
-(BOOL)schemaAddColumnDefinition:(id)arg0 toTable:(id)arg1 ;
-(BOOL)schemaDeleteColumn:(id)arg0 inTable:(id)arg1 ;
-(BOOL)schemaDeleteColumns:(id)arg0 inTable:(id)arg1 ;
-(BOOL)schemaInsertColumnDefinition:(id)arg0 intoTable:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(BOOL)schemaInsertColumnDefinitions:(id)arg0 intoTable:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(BOOL)schemaRenameColumn:(id)arg0 inTable:(id)arg1 toNewColumnName:(id)arg2 ;
-(BOOL)tableExists:(id)arg0 ;
-(NSInteger)lastInsertionRowID;
-(NSUInteger)_transactionLevel;
-(id)_databaseFilePaths;
-(id)_internalExecuteQuery:(id)arg0 withParameters:(id)arg1 limitProperty:(id)arg2 limitValue:(NSInteger)arg3 ;
-(id)_owningPool;
-(id)_prepareStatement:(id)arg0 error:(*id)arg1 ;
-(id)_registeredModuleNamed:(id)arg0 ;
-(id)_shortDescription;
-(id)description;
-(id)executeQuery:(id)arg0 ;
-(id)executeQuery:(id)arg0 withParameters:(id)arg1 ;
-(id)executeQuery:(id)arg0 withParameters:(id)arg1 limitProperty:(id)arg2 limitValue:(NSInteger)arg3 ;
-(id)init;
-(id)initWithDatabasePath:(id)arg0 ;
-(id)openBlobInTable:(id)arg0 column:(id)arg1 row:(NSInteger)arg2 readOnly:(BOOL)arg3 ;
-(id)sqliteError;
-(int)_distrustQueriesDuringBlock:(id)arg0 ;
-(int)checkpointDatabase;
-(struct sqlite3 *)_sqliteHandle;
-(void)_createDatabaseDirectoryIfNonexistent;
-(void)_createDatabaseFileIfNonexistent;
-(void)_ensureConnectionIsOpen;
-(void)_enumerateTableColumnNamesAndDefinitionsFromTable:(id)arg0 usingBlock:(id)arg1 ;
-(void)_executeTransactionCommitBlocks:(BOOL)arg0 ;
-(void)_finalizeAllStatements;
-(void)_handleDatabaseCorruption;
-(void)_handleDatabaseProfileStatement:(char *)arg0 executionTimeNS:(NSUInteger)arg1 ;
-(void)_handleDatabaseTraceStatement:(char *)arg0 ;
-(void)_internalLogQuery:(id)arg0 withParameters:(id)arg1 limitProperty:(id)arg2 limitValue:(NSInteger)arg3 ;
-(void)_logCurrentError;
-(void)_logCurrentErrorWhilePerformingStatementOperation:(id)arg0 statement:(id)arg1 ;
-(void)_logCurrentErrorWhilePerformingStatementOperation:(id)arg0 statementSQL:(id)arg1 ;
-(void)_logDatabaseFileDebugInformation;
-(void)_resetUnfinalizedStatements;
-(void)_setAlreadyAttemptedCorruptionRecovery:(BOOL)arg0 ;
-(void)_setOwningPool:(id)arg0 ;
-(void)_setTransactionLevel:(NSUInteger)arg0 ;
-(void)_updateProfilingLevel;
-(void)dealloc;
-(void)enqueueBlockForTransactionCommit:(id)arg0 ;
-(void)flush;


@end


#endif