// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSQLITECONNECTION_H
#define NSSQLITECONNECTION_H

@class NSURL, NSString, NSArray, NSMutableDictionary, NSMutableSet, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NSSQLCore.h"
#import "NSSQLiteStatement.h"
#import "NSSQLEntity.h"
#import "NSSQLSaveChangesRequestContext.h"
#import "NSSQLitePrefetchRequestCache.h"

@interface NSSQLiteConnection : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSSQLCore *_sqlCore;
    NSURL *_workingURL;
    NSString *_dbPath;
    BOOL _transactionIsOpen;
    BOOL _transactionIsCurrentlyReadOnly;
    BOOL _useSyntaxColoredLogging;
    NSSQLiteStatement *_sqlStatement;
    NSArray *_columnsToFetch;
    NSArray *_metadataColumns;
    *sqlite3 _db;
    *sqlite3_stmt _vmstatement;
    int _rowsProcessedCount;
    unsigned int _lastEntityKey;
    NSSQLEntity *_finalEntity;
    NSSQLEntity *_lastEntity;
    *sqlite3_stmt _fetchPKStatement;
    *sqlite3_stmt _updatePKStatement;
    NSSQLiteStatement *_beginStatement;
    NSSQLiteStatement *_commitStatement;
    NSSQLiteStatement *_rollbackStatement;
    *__CFDictionary _vmCachedStatements;
    NSMutableDictionary *_pragmaSettings;
    NSMutableSet *_mObjectIDsUpdatedByTriggers;
    NSMutableArray *_mObjectIDsInsertedByDATriggers;
    NSMutableArray *_mObjectIDsUpdatededByDATriggers;
    NSSQLSaveChangesRequestContext *_saveRequest;
    *__CFDictionary _statementCachesByEntity;
    NSSQLitePrefetchRequestCache *_prefetchRequestCache;
    *__CFDictionary _cachedEntityUpdateStatements;
    *__CFDictionary _cachedEntityConstrainedValuesUpdateStatements;
    CGFloat _timeOutOption;
    CGFloat _timeOutIncrement;
    *void _extraBuffersForRegisteredFunctions;
    NSString *_dbPathRegisteredWithBackupd;
    NSInteger _vacuumTracker;
    NSMutableArray *_temporaryTables;
    __sqliteConnectionFlags _sqliteConnectionFlags;
    NSUInteger _debugInode;
    NSMutableArray *_activeGenerations;
    NSMutableDictionary *_transactionStringName;
    NSMutableDictionary *_usedIndexes;
    NSInteger _cachedPageSize;
}




+(void)initialize;
-(id)adapter;
-(id)initAsQueryGenerationTrackingConnectionForSQLCore:(id)arg0 ;
-(id)initForSQLCore:(id)arg0 ;
-(id)sqlStatement;
-(int)registerCurrentQueryGenerationWithStore:(id)arg0 ;
-(void)dealloc;
-(void)execute;
-(void)setExclusiveLockingMode:(BOOL)arg0 ;


@end


#endif