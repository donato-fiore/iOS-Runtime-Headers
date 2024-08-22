// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PASSQLITEDATABASE_H
#define _PASSQLITEDATABASE_H

@class NSMutableArray, NSMutableDictionary, NSCache, NSString;
@protocol _PASSqliteErrorHandlerProtocol;

#import <Foundation/Foundation.h>

#import "_PASSqliteStatementCache.h"

@interface _PASSqliteDatabase : NSObject {
    *sqlite3 _db;
    int _transactionDepth;
    BOOL _transactionRolledback;
    atomic_flag _isClosed;
    NSObject<_PASSqliteErrorHandlerProtocol> *_errorHandler;
    _opaque_pthread_mutex_t _lock;
    NSMutableArray *_statementsToFinalizeAsync;
    BOOL _currentExclusivity;
    NSMutableDictionary *_explainedQueryForPlan;
    NSCache *_explainedQueriesLogged;
    *__sFILE _explainedQueriesLogFile;
    _PASSqliteStatementCache *_statementCache;
    BOOL _preparedForFirstQuery;
}


@property (readonly, nonatomic) NSInteger contentProtectionType; // ivar: _contentProtectionType
@property (readonly, nonatomic) NSString *filename; // ivar: _filename
@property (readonly, nonatomic) *sqlite3 handle;
@property (readonly, nonatomic) BOOL isInMemory; // ivar: _isInMemory


+(BOOL)contentProtectionTypeRequiresDeviceToBeUnlocked:(NSInteger)arg0 ;
+(BOOL)contentProtectionTypeRequiresDeviceToHaveBeenUnlockedOnce:(NSInteger)arg0 ;
+(BOOL)isInMemoryPath:(id)arg0 ;
+(id)corruptionMarkerPathForPath:(id)arg0 ;
+(id)inMemoryPath;
+(id)initializeDatabase:(id)arg0 withContentProtection:(NSInteger)arg1 newDatabaseCreated:(*BOOL)arg2 ;
+(id)initializeDatabase:(id)arg0 withContentProtection:(NSInteger)arg1 newDatabaseCreated:(*BOOL)arg2 errorHandler:(id)arg3 ;
+(id)initializeDatabase:(id)arg0 withProtection:(BOOL)arg1 newDatabaseCreated:(*BOOL)arg2 ;
+(id)protectedDatabaseWithFilename:(id)arg0 error:(*id)arg1 ;
+(id)protectedDatabaseWithFilename:(id)arg0 error:(*id)arg1 errorHandler:(id)arg2 ;
+(id)randomlyNamedInMemoryPathWithBaseName:(id)arg0 ;
+(id)recreateCorruptDatabase:(id)arg0 withContentProtection:(NSInteger)arg1 ;
+(id)sqliteDatabaseInMemoryWithError:(*id)arg0 ;
+(id)sqliteDatabaseInMemoryWithError:(*id)arg0 errorHandler:(id)arg1 ;
+(id)sqliteDatabaseWithFilename:(id)arg0 contentProtection:(NSInteger)arg1 error:(*id)arg2 ;
+(id)sqliteDatabaseWithFilename:(id)arg0 contentProtection:(NSInteger)arg1 errorHandler:(id)arg2 error:(*id)arg3 ;
+(id)sqliteDatabaseWithFilename:(id)arg0 error:(*id)arg1 ;
+(id)sqliteDatabaseWithFilename:(id)arg0 error:(*id)arg1 errorHandler:(id)arg2 ;
+(id)sqliteDatabaseWithFilename:(id)arg0 flags:(int)arg1 error:(*id)arg2 ;
+(id)sqliteDatabaseWithFilename:(id)arg0 flags:(int)arg1 error:(*id)arg2 errorHandler:(id)arg3 ;
+(void)runDebugCommand:(char *)arg0 onDbWithHandle:(id)arg1 ;
+(void)truncateDatabaseAtPath:(id)arg0 ;
-(BOOL)_isLikelySQLStatementContainedInString:(char *)arg0 ;
-(BOOL)createSnapshot:(id)arg0 ;
-(BOOL)enableQueryPlanLoggingWithPath:(id)arg0 ;
-(BOOL)frailReadTransaction:(id)arg0 ;
-(BOOL)frailWriteTransaction:(id)arg0 ;
-(BOOL)handleError:(NSInteger)arg0 sqliteError:(int)arg1 forQuery:(id)arg2 onError:(id)arg3 ;
-(BOOL)hasColumnOnTable:(id)arg0 named:(id)arg1 ;
-(BOOL)hasIndexNamed:(id)arg0 ;
-(BOOL)hasTableNamed:(id)arg0 ;
-(BOOL)prepAndRunNonDataQueries:(id)arg0 onError:(id)arg1 ;
// -(BOOL)prepAndRunQuery:(id)arg0 onPrep:(id)arg1 onRow:(unk)arg2 onError:(id)arg3  ;
// -(BOOL)prepQuery:(id)arg0 onPrep:(id)arg1 onError:(unk)arg2  ;
-(BOOL)runQuery:(id)arg0 onRow:(id)arg1 ;
// -(BOOL)runQuery:(id)arg0 onRow:(id)arg1 onError:(unk)arg2  ;
-(BOOL)setUserVersion:(unsigned int)arg0 ;
// -(BOOL)vacuumWithShouldContinueBlock:(id)arg0 error:(unk)arg1  ;
-(NSInteger)lastInsertRowId;
-(NSUInteger)_pagesToVacuum;
-(NSUInteger)numberOfRowsInTable:(id)arg0 ;
-(NSUInteger)valueForPragmaName:(id)arg0 ;
-(id)dbErrorWithCode:(NSUInteger)arg0 sqliteReturnValue:(int)arg1 lastErrno:(int)arg2 query:(id)arg3 ;
-(id)description;
-(id)freeSpace;
-(id)init;
-(id)initWithFilename:(id)arg0 flags:(int)arg1 error:(*id)arg2 ;
-(id)initWithFilename:(id)arg0 flags:(int)arg1 error:(*id)arg2 errorHandler:(id)arg3 ;
-(id)languageForFTSTable:(id)arg0 ;
// -(id)selectColumns:(id)arg0 fromTable:(id)arg1 whereClause:(id)arg2 onPrep:(id)arg3 onError:(unk)arg4  ;
-(id)tablesWithColumnNamed:(id)arg0 ;
-(struct _PASDBTransactionCompletion_ )_transactionWithExclusivity:(BOOL)arg0 transaction:(id)arg1 ;
-(struct _PASDBTransactionCompletion_ )readTransactionWithFailableBlock:(id)arg0 ;
-(struct _PASDBTransactionCompletion_ )writeTransactionWithFailableBlock:(id)arg0 ;
-(unsigned int)userVersion;
-(void)_logQueryPlanForQuery:(id)arg0 ;
-(void)_prepAndRunQuery:(id)arg0 columns:(id)arg1 dictionary:(id)arg2 onError:(id)arg3 ;
-(void)_prepareForFirstQuery;
-(void)_txnBegin;
-(void)_txnBeginExclusive;
-(void)_txnEnd;
-(void)_txnRollback;
-(void)clearCaches;
-(void)closePermanently;
-(void)dealloc;
-(void)disableQueryPlanLogging;
-(void)insertIntoTable:(id)arg0 dictionary:(id)arg1 ;
-(void)insertOrReplaceIntoTable:(id)arg0 dictionary:(id)arg1 onError:(id)arg2 ;
-(void)placeCorruptionMarker;
-(void)readTransaction:(id)arg0 ;
-(void)simulateOnDiskDatabase;
-(void)updateTable:(id)arg0 dictionary:(id)arg1 whereClause:(id)arg2 onError:(id)arg3 ;
-(void)withDbLockExecuteBlock:(id)arg0 ;
-(void)writeTransaction:(id)arg0 ;


@end


#endif