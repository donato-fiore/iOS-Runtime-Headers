// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSURLSTORAGEURLCACHEDB_H
#define NSURLSTORAGEURLCACHEDB_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface NSURLStorageURLCacheDB : NSObject {
    *sqlite3 _dbReadConnection;
    *sqlite3 _dbWriteConnection;
    os_unfair_lock_s _dbReadConnectionLock;
    os_unfair_lock_s _dbWriteConnectionLock;
    *sqlite3_stmt _sqlUpdateReceiverDataStmt;
    *sqlite3_stmt _sqlInsertStmtResponse;
    *sqlite3_stmt _sqlInsertStmtBlobData;
    *sqlite3_stmt _sqlInsertStmtReceiverData;
    *sqlite3_stmt _sqlUpdateResponseStmt;
    *sqlite3_stmt _sqlUpdateBlobDataStmt;
    *sqlite3_stmt _sqlSelectStmt;
    *sqlite3_stmt _sqlSelectEntry_idAndRecevierDataForKeyStmt;
    *sqlite3_stmt _sqlSelectIsDataOnFSForEntry_IDStmt;
    *sqlite3_stmt _sqlSelectFileSystemFileForDeletionStmt;
    *sqlite3_stmt _sqlDeleteStmtResponse;
    *sqlite3_stmt _sqlDeleteStmtBlobData;
    *sqlite3_stmt _sqlDeleteStmtReceiverData;
    NSMutableArray *_entryIDsToDelete;
    NSUInteger _writeCount;
    BOOL _isDBOpen;
    NSString *_dbPathDirectory;
    NSString *_dbPathFile;
    NSInteger _maxDBSize;
    NSUInteger _currentFSBackedUsage;
    NSUInteger _currentSQLiteDBUsage;
    NSUInteger _currentTotalPersistentCacheUsage;
    NSInteger _minSizeForFileSystemBackedCacheItem;
}




-(void)dealloc;


@end


#endif