// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGSQLITEDATABASE_H
#define SGSQLITEDATABASE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SGSqliteDatabaseImpl.h"
#import "SGSqliteDatabaseSharedLock.h"

@interface SGSqliteDatabase : NSObject {
    SGSqliteDatabaseImpl *_impl;
    NSUInteger _lastBusyWaitEnded;
    SGSqliteDatabaseSharedLock *_sharedWriterLock;
    BOOL _usesDataProtection;
}


@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) *sqlite3 handle;
@property (readonly, nonatomic) BOOL isInMemory;


+(BOOL)isInMemoryPath:(id)arg0 ;
+(id)corruptionMarkerFilename;
+(id)corruptionMarkerPathForPath:(id)arg0 ;
+(id)inMemoryPath;
+(id)randomlyNamedInMemoryPathWithBaseName:(id)arg0 ;
+(id)sqliteDatabaseInMemoryWithError:(*id)arg0 ;
+(id)sqliteDatabaseWithFilename:(id)arg0 error:(*id)arg1 ;
+(int)bindParam:(struct sqlite3_stmt *)arg0 name:(char *)arg1 double:(CGFloat)arg2 ;
+(int)bindParam:(struct sqlite3_stmt *)arg0 name:(char *)arg1 int64:(NSInteger)arg2 ;
+(int)bindParam:(struct sqlite3_stmt *)arg0 name:(char *)arg1 int:(int)arg2 ;
+(int)bindParam:(struct sqlite3_stmt *)arg0 name:(char *)arg1 nsdata:(id)arg2 ;
+(int)bindParam:(struct sqlite3_stmt *)arg0 name:(char *)arg1 nsstring:(id)arg2 ;
+(int)bindParamToNull:(struct sqlite3_stmt *)arg0 name:(char *)arg1 ;
+(void)truncateDatabaseAtPath:(id)arg0 ;
-(BOOL)_abortDueToSqliteError:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_ABORT:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_ABORT_ROLLBACK:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_AUTH:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_AUTH_USER:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_BUSY:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_BUSY_RECOVERY:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_BUSY_SNAPSHOT:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_CANTOPEN:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_CANTOPEN_CONVPATH:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_CANTOPEN_FULLPATH:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_CANTOPEN_ISDIR:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_CANTOPEN_NOTEMPDIR:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_CONSTRAINT:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_CONSTRAINT_CHECK:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_CONSTRAINT_COMMITHOOK:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_CONSTRAINT_FOREIGNKEY:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_CONSTRAINT_FUNCTION:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_CONSTRAINT_NOTNULL:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_CONSTRAINT_PRIMARYKEY:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_CONSTRAINT_ROWID:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_CONSTRAINT_TRIGGER:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_CONSTRAINT_UNIQUE:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_CONSTRAINT_VTAB:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_CORRUPT:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_CORRUPT_VTAB:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_EMPTY:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_ERROR:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_FORMAT:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_FULL:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_INTERNAL:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_INTERRUPT:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_ACCESS:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_AUTH:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_BLOCKED:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_CHECKRESERVEDLOCK:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_CLOSE:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_CONVPATH:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_DELETE:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_DELETE_NOENT:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_DIR_CLOSE:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_DIR_FSYNC:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_FSTAT:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_FSYNC:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_GETTEMPPATH:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_LOCK:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_MMAP:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_NOMEM:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_RDLOCK:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_READ:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_SEEK:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_SHMLOCK:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_SHMMAP:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_SHMOPEN:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_SHMSIZE:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_SHORT_READ:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_TRUNCATE:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_UNLOCK:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_VNODE:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_IOERR_WRITE:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_LOCKED:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_LOCKED_SHAREDCACHE:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_MISMATCH:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_MISUSE:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_NOLFS:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_NOMEM:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_NOTADB:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_NOTFOUND:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_NOTICE:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_NOTICE_RECOVER_ROLLBACK:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_NOTICE_RECOVER_WAL:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_PERM:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_PROTOCOL:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_RANGE:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_READONLY:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_READONLY_CANTLOCK:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_READONLY_DBMOVED:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_READONLY_RECOVERY:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_READONLY_ROLLBACK:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_SCHEMA:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_TOOBIG:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_WARNING:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_SQLITE_WARNING_AUTOINDEX:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_UNKNOWN_ERROR:(id)arg0 onError:(id)arg1 ;
-(BOOL)_handle_sqlite_error_code:(int)arg0 error:(id)arg1 onError:(id)arg2 ;
// -(BOOL)_prepQuery:(id)arg0 onPrep:(id)arg1 onError:(unk)arg2  ;
-(BOOL)createSnapshot:(id)arg0 ;
-(BOOL)frailReadTransaction:(id)arg0 ;
-(BOOL)frailWriteTransaction:(id)arg0 ;
-(BOOL)handleError:(NSInteger)arg0 sqliteError:(int)arg1 forQuery:(id)arg2 onError:(id)arg3 ;
-(BOOL)hasColumnOnTable:(id)arg0 named:(id)arg1 ;
-(BOOL)hasIndexNamed:(id)arg0 ;
-(BOOL)hasTableNamed:(id)arg0 ;
-(BOOL)prepAndRunNonDataQueries:(id)arg0 onError:(id)arg1 ;
// -(BOOL)prepAndRunQuery:(id)arg0 onPrep:(id)arg1 onRow:(unk)arg2 onError:(id)arg3  ;
// -(BOOL)prepAndRunSQL:(id)arg0 onPrep:(id)arg1 onRow:(unk)arg2 onError:(id)arg3  ;
// -(BOOL)runQuery:(id)arg0 onRow:(id)arg1 onError:(unk)arg2  ;
-(BOOL)setUserVersion:(unsigned int)arg0 ;
-(NSInteger)lastInsertRowId;
-(NSInteger)maxIdForTable:(id)arg0 ;
-(NSUInteger)_pagesToVacuum;
-(NSUInteger)freelistCount;
-(NSUInteger)numberOfRowsInTable:(id)arg0 ;
-(NSUInteger)pageCount;
-(NSUInteger)vacuumMode;
-(id)corruptionMarkerPath;
-(id)dbErrorWithCode:(NSUInteger)arg0 sqliteReturnValue:(int)arg1 lastErrno:(int)arg2 query:(id)arg3 ;
-(id)description;
-(id)freeSpace;
-(id)initWithFilename:(id)arg0 withProtection:(BOOL)arg1 sharedLock:(id)arg2 error:(*id)arg3 ;
-(id)languageForFTSTable:(id)arg0 ;
// -(id)selectColumns:(id)arg0 fromTable:(id)arg1 whereClause:(id)arg2 onPrep:(id)arg3 onError:(unk)arg4  ;
-(id)tablesWithColumnNamed:(id)arg0 ;
-(unsigned int)userVersion;
-(void)_prepAndRunQuery:(id)arg0 columns:(id)arg1 dictionary:(id)arg2 onError:(id)arg3 ;
-(void)closePermanently;
-(void)insertOrReplaceIntoTable:(id)arg0 dictionary:(id)arg1 onError:(id)arg2 ;
-(void)optimize:(NSUInteger)arg0 ;
-(void)performIntegrityCheck;
-(void)placeCorruptionMarker;
-(void)readTransaction:(id)arg0 ;
-(void)runWithWriteLockAcquired:(id)arg0 ;
-(void)simulateOnDiskDatabase;
-(void)updateTable:(id)arg0 dictionary:(id)arg1 whereClause:(id)arg2 onError:(id)arg3 ;
-(void)vacuum;
-(void)writeTransaction:(id)arg0 ;


@end


#endif