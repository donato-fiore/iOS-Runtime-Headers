// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSQLITECONNECTION_H
#define PLSQLITECONNECTION_H

@class NSString, NSMutableDictionary;
@protocol OS_dispatch_semaphore, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PLSQLiteConnection : NSObject

@property NSInteger cacheSize; // ivar: _cacheSize
@property (retain) NSString *cachedClassName; // ivar: _cachedClassName
@property *sqlite3 dbConnection; // ivar: _dbConnection
@property (retain) NSObject<OS_dispatch_semaphore> *dbSem; // ivar: _dbSem
@property int entryCacheStorageSize; // ivar: _entryCacheStorageSize
@property (copy, nonatomic) NSString *filePath; // ivar: _filePath
@property (retain) NSMutableDictionary *preparedDynamicStatements; // ivar: _preparedDynamicStatements
@property (retain) NSMutableDictionary *preparedStatements; // ivar: _preparedStatements
@property (retain) NSMutableDictionary *preparedUpdateStatements; // ivar: _preparedUpdateStatements
@property int transactionInProgress; // ivar: _transactionInProgress
@property (retain) NSString *transactionLock; // ivar: _transactionLock
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;


+(CGFloat)periodicIntegrityCheckInterval;
+(id)masterTableForTable:(id)arg0 andType:(id)arg1 ;
+(id)sharedSQLiteConnection;
+(id)tableHasTimestampColumn;
+(id)tableHasTimestampColumnSem;
+(id)versionForTable:(id)arg0 ;
+(void)removeDBAtFilePath:(id)arg0 ;
-(BOOL)checkEmptyMasterTable:(id)arg0 ;
-(BOOL)commonInitProcessWithFilePath:(id)arg0 withCacheSize:(NSInteger)arg1 ;
-(BOOL)copyDatabase:(id)arg0 ;
-(BOOL)copyDatabaseToPath:(id)arg0 ;
-(BOOL)copyDatabaseToPath:(id)arg0 fromDate:(id)arg1 toDate:(id)arg2 ;
-(BOOL)copyDatabaseToPath:(id)arg0 fromDate:(id)arg1 toDate:(id)arg2 withTableFilters:(id)arg3 vacuumDB:(BOOL)arg4 ;
-(BOOL)copyDatabaseToPath:(id)arg0 fromDate:(id)arg1 toDate:(id)arg2 withTableFilters:(id)arg3 vacuumDB:(BOOL)arg4 withCacheSize:(NSInteger)arg5 ;
-(BOOL)isIncrementalVacuumEnabled;
-(BOOL)isTransactionInProgress;
-(BOOL)openCurrentFile;
-(BOOL)openCurrentFileWithCacheSize:(NSInteger)arg0 ;
-(BOOL)openCurrentFileWithCacheSize:(NSInteger)arg0 withFlags:(id)arg1 ;
-(BOOL)passesIntegrityCheck;
-(BOOL)tableExistsForTableName:(id)arg0 ;
-(BOOL)tableHasTimestampColumn:(id)arg0 ;
-(CGFloat)schemaVersionForTable:(id)arg0 ;
-(NSInteger)writeEntry:(id)arg0 ;
-(id)entriesForKey:(id)arg0 withProperties:(id)arg1 ;
-(id)entriesForKey:(id)arg0 withQuery:(id)arg1 ;
-(id)getIntegrityCheckCriteria;
-(id)init;
-(id)initWithFilePath:(id)arg0 ;
-(id)initWithFilePath:(id)arg0 withCacheSize:(NSInteger)arg1 ;
-(id)initWithFilePath:(id)arg0 withCacheSize:(NSInteger)arg1 withFlags:(id)arg2 ;
-(id)initWithFilePath:(id)arg0 withFlags:(id)arg1 ;
-(id)performQuery:(id)arg0 ;
-(id)performQuery:(id)arg0 returnValue:(*int)arg1 returnResult:(BOOL)arg2 ;
-(id)performStatement:(id)arg0 ;
-(id)sqlFormatedColumnNamesForTableInsert:(id)arg0 ;
-(id)sqlFormatedColumnNamesForTableSelect:(id)arg0 withSystemOffset:(CGFloat)arg1 ;
-(id)tableInfo:(id)arg0 ;
-(id)versionHashForTable:(id)arg0 ;
-(int)bindEntry:(id)arg0 toPreparedStatement:(id)arg1 atBindPosition:(int)arg2 ;
-(int)getCacheSpillValue;
-(int)rowCountForTable:(id)arg0 ;
-(int)rowCountForTableName:(id)arg0 ;
-(void)beginTransaction;
-(void)buildColumnInsert:(*id)arg0 andValueInsert:(*id)arg1 forEntry:(id)arg2 ;
-(void)clearTableHasTimestampColumnCache;
-(void)closeConnection;
-(void)createCoveringIndexOnTable:(id)arg0 forColumns:(id)arg1 ;
-(void)createIndexOnTable:(id)arg0 forColumn:(id)arg1 ;
-(void)createTableName:(id)arg0 withColumns:(id)arg1 ;
-(void)dealloc;
-(void)deleteAllEntriesForKey:(id)arg0 withFilters:(id)arg1 ;
-(void)deleteArrayEntriesForKey:(id)arg0 withRowID:(NSInteger)arg1 ;
-(void)deleteDynamicEntriesForKey:(id)arg0 withRowID:(NSInteger)arg1 ;
-(void)deleteEntryForKey:(id)arg0 withRowID:(NSInteger)arg1 ;
-(void)displaySchema:(id)arg0 ;
-(void)dropTable:(id)arg0 ;
-(void)dropTables:(id)arg0 ;
-(void)endTransaction;
-(void)enumerateAllTablesWithBlock:(id)arg0 ;
-(void)enumerateTablesWithBlock:(id)arg0 ;
-(void)fullVacuum;
-(void)hashEntryKeyKeys:(id)arg0 ;
-(void)loadArrayValuesIntoEntry:(id)arg0 ;
-(void)loadDynamicValuesIntoEntry:(id)arg0 ;
-(void)mergeDataFromOtherDBFile:(id)arg0 ;
-(void)moveDatabaseToPath:(id)arg0 ;
-(void)printDBStatusString;
-(void)removeEmptyOldTables;
-(void)removeIDIndexes;
-(void)removeTableNameFromMergeDB:(id)arg0 ;
-(void)runTrimQuery:(id)arg0 ;
-(void)scheduleIntegrityCheck;
-(void)setAllNullValuesForEntryKey:(id)arg0 forKey:(id)arg1 toValue:(id)arg2 withFilters:(id)arg3 ;
-(void)setJournalMode:(short)arg0 ;
-(void)setSchemaVersion:(CGFloat)arg0 forTableName:(id)arg1 ;
-(void)setVersionHash:(id)arg0 forTableName:(id)arg1 ;
-(void)trimAllTablesFromDate:(id)arg0 toDate:(id)arg1 ;
-(void)trimAllTablesFromDate:(id)arg0 toDate:(id)arg1 withTableFilters:(id)arg2 ;
-(void)trimTable:(id)arg0 fromDate:(id)arg1 withFilter:(id)arg2 withTrimLimit:(NSInteger)arg3 ;
-(void)updateEntry:(id)arg0 ;
-(void)vacuum;
-(void)writeArrayEntries:(id)arg0 ;
-(void)writeDynamicEntries:(id)arg0 ;


@end


#endif