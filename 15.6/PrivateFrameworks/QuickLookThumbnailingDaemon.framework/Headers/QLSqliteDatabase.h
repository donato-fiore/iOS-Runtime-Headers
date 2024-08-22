// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLSQLITEDATABASE_H
#define QLSQLITEDATABASE_H

@class NSString, NSMutableDictionary, NSMapTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface QLSqliteDatabase : NSObject {
    NSString *_path;
    *sqlite3 _db;
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger transactionCount;
    NSMutableDictionary *_statementCache;
    NSMapTable *_statementsInUseTable;
}


@property BOOL isCorrupted; // ivar: _isCorrupted
@property (retain) NSString *tracingPrefix; // ivar: _tracingPrefix


+(void)toggleSqlLogging;
-(*void)newBufferFromColumn:(int)arg0 inStatement:(struct sqlite3_stmt *)arg1 length:(*unsigned int)arg2 ;
-(?)_finalizeStatement;
-(?)finalizeStatement;
-(BOOL)beginTransaction;
-(BOOL)isOpened;
-(BOOL)stepStatement:(struct sqlite3_stmt *)arg0 ;
-(BOOL)stepStatement:(struct sqlite3_stmt *)arg0 didReturnData:(*BOOL)arg1 ;
-(CGFloat)doubleFromColumn:(int)arg0 inStatement:(struct sqlite3_stmt *)arg1 ;
-(NSInteger)columnCount:(struct sqlite3_stmt *)arg0 ;
-(NSInteger)lastInsertRowId;
-(NSUInteger)unsignedLongLongFromColumn:(int)arg0 inStatement:(struct sqlite3_stmt *)arg1 ;
-(float)floatFromColumn:(int)arg0 inStatement:(struct sqlite3_stmt *)arg1 ;
-(id)_cacheStatement:(struct sqlite3_stmt *)arg0 forKey:(id)arg1 ;
-(id)_cachedStatementForKey:(id)arg0 ;
-(id)_crapPath;
-(id)init;
-(id)lastCrapWithDate:(*id)arg0 ;
-(id)newColumnName:(int)arg0 inStatement:(struct sqlite3_stmt *)arg1 uniqueInStringTable:(id)arg2 ;
-(id)newDataFromColumn:(int)arg0 inStatement:(struct sqlite3_stmt *)arg1 copyBytes:(BOOL)arg2 ;
-(id)newPathFromColumn:(int)arg0 inStatement:(struct sqlite3_stmt *)arg1 uniqueInStringTable:(id)arg2 ;
-(id)newStringFromColumn:(int)arg0 inStatement:(struct sqlite3_stmt *)arg1 uniqueInStringTable:(id)arg2 ;
-(id)queue;
-(int)intFromColumn:(int)arg0 inStatement:(struct sqlite3_stmt *)arg1 ;
-(struct __CFString *)newCFStringFromColumn:(int)arg0 inStatement:(struct sqlite3_stmt *)arg1 uniqueInStringTable:(id)arg2 ;
-(struct __CFURL *)newCFURLFromColumn:(int)arg0 inStatement:(struct sqlite3_stmt *)arg1 ;
-(struct sqlite3_stmt *)prepareStatement:(char *)arg0 ;
-(void)_databaseCorrupted;
-(void)_dropStatementCache;
-(void)bindBytes:(*void)arg0 length:(unsigned int)arg1 atIndex:(int)arg2 inStatement:(struct sqlite3_stmt *)arg3 ;
-(void)bindCFURL:(struct __CFURL *)arg0 atIndex:(int)arg1 inStatement:(struct sqlite3_stmt *)arg2 ;
-(void)bindDouble:(CGFloat)arg0 atIndex:(int)arg1 inStatement:(struct sqlite3_stmt *)arg2 ;
-(void)bindInt:(int)arg0 atIndex:(int)arg1 inStatement:(struct sqlite3_stmt *)arg2 ;
-(void)bindLongLong:(NSInteger)arg0 atIndex:(int)arg1 inStatement:(struct sqlite3_stmt *)arg2 ;
-(void)bindObject:(id)arg0 atIndex:(int)arg1 inStatement:(struct sqlite3_stmt *)arg2 ;
-(void)bindPath:(id)arg0 atIndex:(int)arg1 inStatement:(struct sqlite3_stmt *)arg2 ;
-(void)bindUnsignedLongLong:(NSUInteger)arg0 atIndex:(int)arg1 inStatement:(struct sqlite3_stmt *)arg2 ;
-(void)checkpoint;
-(void)closeDatabase;
-(void)dealloc;
-(void)disableSqliteTracing;
-(void)do:(id)arg0 ;
-(void)enableSqliteTracing:(id)arg0 ;
-(void)endTransaction;
-(void)execute:(char *)arg0 ;
-(void)executeSql:(char *)arg0 withCallback:(*unk)arg1 context:(*void)arg2 ;
-(void)executeWithBlob:(*void)arg0 length:(int)arg1 format:(char *)arg2 ;
-(void)executeWithCallback:(*unk)arg0 context:(*void)arg1 rollbackOnError:(BOOL)arg2 sql:(char *)arg3 arguments:(char *)arg4 ;
-(void)executeWithCallback:(*unk)arg0 context:(*void)arg1 sql:(char *)arg2 ;
-(void)executeWithRollbackOnError:(char *)arg0 ;
-(void)openDatabaseAtPath:(id)arg0 ;
-(void)resetStatement:(struct sqlite3_stmt *)arg0 unbindValuesThroughIndex:(int)arg1 ;
-(void)runStatement:(struct sqlite3_stmt *)arg0 stepHandler:(id)arg1 ;
-(void)runStatement:(struct sqlite3_stmt *)arg0 withBoundNumbers:(id)arg1 startingAtIndex:(int)arg2 stepHandler:(id)arg3 ;
-(void)runStatement:(struct sqlite3_stmt *)arg0 withBoundObjects:(id)arg1 startingAtIndex:(int)arg2 stepHandler:(id)arg3 ;
-(void)runStatement:(struct sqlite3_stmt *)arg0 withBoundRowIds:(*NSUInteger)arg1 count:(NSUInteger)arg2 startingAtIndex:(int)arg3 stepHandler:(id)arg4 ;
-(void)runStatement:(struct sqlite3_stmt *)arg0 withBoundRowIds:(id)arg1 startingAtIndex:(int)arg2 stepHandler:(id)arg3 ;
-(void)setSqliteCacheSize:(NSInteger)arg0 ;
-(void)sqliteCrappedOut:(int)arg0 message:(id)arg1 ;
-(void)vacuum;


@end


#endif