// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOSQLITEDB_H
#define GEOSQLITEDB_H

@class NSMutableArray, NSDictionary, NSMapTable, NSURL, NSString, NSError;
@protocol OS_dispatch_queue, OS_dispatch_group, OS_os_log;

#import <Foundation/Foundation.h>


@interface GEOSQLiteDB : NSObject {
    NSObject<OS_dispatch_queue> *_externalFilesQueue;
    NSObject<OS_dispatch_group> *_externalFilesGroup;
    NSMutableArray *_externalFilesActiveChannels;
    BOOL _didEncounterExternalResourceErrorInTransaction;
    NSDictionary *_pragmas;
    id *_setupBlock;
    NSMapTable *_preparedStatements;
    BOOL _isInTransaction;
    BOOL _isTemporaryInMemoryDatabase;
    NSMutableArray *_filesAddedDuringTransaction;
    NSMutableArray *_filesDeletedDuringTransaction;
    NSMapTable *_virtualTables;
    atomic_flag _didTearDown;
}


@property (readonly, nonatomic) NSURL *databaseFileURL; // ivar: _databaseFileURL
@property (readonly, nonatomic) NSString *dbFilePath;
@property (readonly, nonatomic) BOOL isDBReady;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue; // ivar: _queue
@property (readonly, nonatomic) NSError *lastError; // ivar: _lastError
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly, nonatomic) NSDictionary *pragmas;
@property (readonly, nonatomic) *sqlite3 sqliteDB; // ivar: _db
@property (readonly, nonatomic) int sqliteFlags; // ivar: _sqliteFlags
@property (nonatomic) NSInteger user_version;


+(BOOL)renameAllDBFilesFrom:(id)arg0 to:(id)arg1 ;
+(id)_findAllDBFilesForURL:(id)arg0 error:(*id)arg1 ;
+(id)defaultPragmas;
-(BOOL)_bindParameter:(char *)arg0 inStatement:(struct sqlite3_stmt *)arg1 error:(*id)arg2 withBinder:(id)arg3 ;
-(BOOL)_deleteAllDBFiles;
-(BOOL)_deleteAllDatabaseFilesIfCorrupt:(int)arg0 ;
-(BOOL)_openAndConfigureWithRetryIfCorrupt;
-(BOOL)_waitForAllTransactionExternalResources;
-(BOOL)bindBlobNoCopyParameter:(char *)arg0 toValue:(id)arg1 inStatement:(struct sqlite3_stmt *)arg2 error:(*id)arg3 ;
-(BOOL)bindBlobParameter:(char *)arg0 toValue:(id)arg1 inStatement:(struct sqlite3_stmt *)arg2 error:(*id)arg3 ;
-(BOOL)bindInt64Parameter:(char *)arg0 toValue:(NSInteger)arg1 inStatement:(struct sqlite3_stmt *)arg2 error:(*id)arg3 ;
-(BOOL)bindIntParameter:(char *)arg0 toValue:(int)arg1 inStatement:(struct sqlite3_stmt *)arg2 error:(*id)arg3 ;
-(BOOL)bindNullParameter:(char *)arg0 inStatement:(struct sqlite3_stmt *)arg1 error:(*id)arg2 ;
-(BOOL)bindParameter:(char *)arg0 toUUID:(id)arg1 inStatement:(struct sqlite3_stmt *)arg2 error:(*id)arg3 ;
-(BOOL)bindRealParameter:(char *)arg0 toValue:(CGFloat)arg1 inStatement:(struct sqlite3_stmt *)arg2 error:(*id)arg3 ;
-(BOOL)bindTextParameter:(char *)arg0 toValue:(id)arg1 inStatement:(struct sqlite3_stmt *)arg2 error:(*id)arg3 ;
-(BOOL)bindZeroBlobParameter:(char *)arg0 length:(NSUInteger)arg1 inStatement:(struct sqlite3_stmt *)arg2 error:(*id)arg3 ;
-(BOOL)createTable:(char *)arg0 withDrop:(char *)arg1 ;
-(BOOL)deleteAllDBFiles;
-(BOOL)deleteExternalResourceAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)dropAllTables;
-(BOOL)dropTablesLike:(id)arg0 ;
-(BOOL)executeInTransaction:(id)arg0 ;
-(BOOL)executeStatement:(id)arg0 statementBlock:(id)arg1 ;
-(BOOL)executeStatement:(struct sqlite3_stmt *)arg0 error:(*id)arg1 ;
-(BOOL)moveExternalResourceAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)prepareStatement:(char *)arg0 forKey:(id)arg1 ;
-(BOOL)registerVirtualTable:(id)arg0 ;
-(BOOL)reportSQLiteErrorCode:(int)arg0 method:(id)arg1 error:(*id)arg2 ;
-(BOOL)setup;
-(BOOL)statementForKey:(id)arg0 statementBlock:(id)arg1 ;
-(BOOL)unregisterVirtualTable:(id)arg0 ;
-(BOOL)vacuum;
-(BOOL)writeBlobData:(id)arg0 toTable:(char *)arg1 column:(char *)arg2 rowID:(NSInteger)arg3 error:(*id)arg4 ;
-(BOOL)writeExternalResourceWithData:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(CGFloat)doubleForColumn:(int)arg0 inStatment:(struct sqlite3_stmt *)arg1 ;
-(NSInteger)int64ForColumn:(int)arg0 inStatment:(struct sqlite3_stmt *)arg1 ;
-(NSInteger)lastInsertRowID;
-(id)UUIDForColumn:(int)arg0 inStatment:(struct sqlite3_stmt *)arg1 ;
-(id)_blobForColumn:(int)arg0 inStatment:(struct sqlite3_stmt *)arg1 noCopy:(BOOL)arg2 ;
-(id)blobForColumn:(int)arg0 inStatment:(struct sqlite3_stmt *)arg1 ;
-(id)description;
-(id)getAllTables;
-(id)getTablesLike:(id)arg0 ;
-(id)init;
-(id)initWithQueueName:(char *)arg0 log:(id)arg1 databaseFileURL:(id)arg2 sqliteFlags:(int)arg3 pragmas:(id)arg4 setupBlock:(id)arg5 ;
-(id)initWithQueueName:(char *)arg0 logFacility:(char *)arg1 dbFilePath:(id)arg2 sqliteFlags:(int)arg3 pragmas:(id)arg4 setupBlock:(id)arg5 ;
-(id)noCopyBlobForColumn:(int)arg0 inStatment:(struct sqlite3_stmt *)arg1 ;
-(id)stringForColumn:(int)arg0 inStatment:(struct sqlite3_stmt *)arg1 ;
-(int)_openAndConfigure;
-(int)_openDatabaseFile;
-(int)intForColumn:(int)arg0 inStatment:(struct sqlite3_stmt *)arg1 ;
-(struct sqlite3_stmt *)statementForKey:(id)arg0 ;
-(void)_channelCleanupFailedWithError:(int)arg0 ;
-(void)_channelEncounteredError:(int)arg0 ;
-(void)_closeDB;
-(void)_createParentDirectory;
-(void)_debug_lockDB:(id)arg0 ;
-(void)_debug_unlockDB:(id)arg0 ;
-(void)_deleteAndReopenDatabaseIfCorrupt:(int)arg0 ;
-(void)_doneWritingToChannel:(id)arg0 ;
// -(void)_execute:(id)arg0 errorHandler:(unk)arg1  ;
-(void)_writeTransactionExternalResourceWithData:(id)arg0 toURL:(id)arg1 ;
-(void)clearStatement:(id)arg0 ;
-(void)dealloc;
-(void)executeAsync:(id)arg0 ;
// -(void)executeAsync:(id)arg0 errorHandler:(unk)arg1  ;
-(void)executeSync:(id)arg0 ;
// -(void)executeSync:(id)arg0 errorHandler:(unk)arg1  ;
-(void)tearDown;


@end


#endif