// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BMFMDATABASE_H
#define _BMFMDATABASE_H

@class NSMutableSet, NSDateFormatter, NSMutableDictionary, NSString, NSURL;

#import <Foundation/Foundation.h>


@interface _bmFMDatabase : NSObject {
    *void _db;
    BOOL _isExecutingStatement;
    CGFloat _startBusyRetryTime;
    NSMutableSet *_openResultSets;
    NSMutableSet *_openFunctions;
    NSDateFormatter *_dateFormat;
}


@property (nonatomic) unsigned int applicationID;
@property (retain) NSMutableDictionary *cachedStatements; // ivar: _cachedStatements
@property (readonly, nonatomic) int changes;
@property BOOL checkedOut; // ivar: _checkedOut
@property BOOL crashOnErrors; // ivar: _crashOnErrors
@property (readonly, nonatomic) NSString *databasePath; // ivar: _databasePath
@property (readonly, nonatomic) NSURL *databaseURL;
@property (readonly, nonatomic) BOOL goodConnection;
@property (readonly, nonatomic) BOOL hasOpenResultSets;
@property (readonly, nonatomic) BOOL isInTransaction; // ivar: _isInTransaction
@property (nonatomic) BOOL isOpen; // ivar: _isOpen
@property (readonly, nonatomic) NSInteger lastInsertRowId;
@property BOOL logsErrors; // ivar: _logsErrors
@property (nonatomic) CGFloat maxBusyRetryTimeInterval; // ivar: _maxBusyRetryTimeInterval
@property (nonatomic) BOOL shouldCacheStatements; // ivar: _shouldCacheStatements
@property (readonly, nonatomic) *void sqliteHandle;
@property BOOL traceExecution; // ivar: _traceExecution
@property (nonatomic) unsigned int userVersion;


+(BOOL)isSQLiteThreadSafe;
+(id)FMDBUserVersion;
+(id)databaseWithPath:(id)arg0 ;
+(id)databaseWithURL:(id)arg0 ;
+(id)sqliteLibVersion;
+(id)storeableDateFormat:(id)arg0 ;
+(int)FMDBVersion;
-(BOOL)beginDeferredTransaction;
-(BOOL)beginExclusiveTransaction;
-(BOOL)beginImmediateTransaction;
-(BOOL)beginTransaction;
-(BOOL)bindStatement:(struct sqlite3_stmt *)arg0 WithArgumentsInArray:(id)arg1 orDictionary:(id)arg2 orVAList:(char *)arg3 ;
-(BOOL)boolForQuery:(id)arg0 ;
-(BOOL)checkpoint:(int)arg0 error:(*id)arg1 ;
-(BOOL)checkpoint:(int)arg0 name:(id)arg1 error:(*id)arg2 ;
-(BOOL)checkpoint:(int)arg0 name:(id)arg1 logFrameCount:(*int)arg2 checkpointCount:(*int)arg3 error:(*id)arg4 ;
-(BOOL)close;
-(BOOL)columnExists:(id)arg0 columnName:(id)arg1 ;
-(BOOL)columnExists:(id)arg0 inTableWithName:(id)arg1 ;
-(BOOL)commit;
-(BOOL)databaseExists;
-(BOOL)executeStatements:(id)arg0 ;
-(BOOL)executeStatements:(id)arg0 withResultBlock:(id)arg1 ;
-(BOOL)executeUpdate:(id)arg0 ;
-(BOOL)executeUpdate:(id)arg0 error:(*id)arg1 withArgumentsInArray:(id)arg2 orDictionary:(id)arg3 orVAList:(char *)arg4 ;
-(BOOL)executeUpdate:(id)arg0 values:(id)arg1 error:(*id)arg2 ;
-(BOOL)executeUpdate:(id)arg0 withArgumentsInArray:(id)arg1 ;
-(BOOL)executeUpdate:(id)arg0 withErrorAndBindings:(*id)arg1 ;
-(BOOL)executeUpdate:(id)arg0 withParameterDictionary:(id)arg1 ;
-(BOOL)executeUpdate:(id)arg0 withVAList:(char *)arg1 ;
-(BOOL)executeUpdateWithFormat:(id)arg0 ;
-(BOOL)hadError;
-(BOOL)hasDateFormatter;
-(BOOL)inTransaction;
-(BOOL)interrupt;
-(BOOL)open;
-(BOOL)openWithFlags:(int)arg0 ;
-(BOOL)openWithFlags:(int)arg0 vfs:(id)arg1 ;
-(BOOL)rekey:(id)arg0 ;
-(BOOL)rekeyWithData:(id)arg0 ;
-(BOOL)releaseSavePointWithName:(id)arg0 error:(*id)arg1 ;
-(BOOL)rollback;
-(BOOL)rollbackToSavePointWithName:(id)arg0 error:(*id)arg1 ;
-(BOOL)setKey:(id)arg0 ;
-(BOOL)setKeyWithData:(id)arg0 ;
-(BOOL)startSavePointWithName:(id)arg0 error:(*id)arg1 ;
-(BOOL)tableExists:(id)arg0 ;
-(BOOL)update:(id)arg0 withErrorAndBindings:(*id)arg1 ;
-(BOOL)validateSQL:(id)arg0 error:(*id)arg1 ;
-(CGFloat)doubleForQuery:(id)arg0 ;
-(CGFloat)valueDouble:(*void)arg0 ;
-(NSInteger)longForQuery:(id)arg0 ;
-(NSInteger)valueLong:(*void)arg0 ;
-(char *)sqlitePath;
-(id)cachedStatementForQuery:(id)arg0 ;
-(id)dataForQuery:(id)arg0 ;
-(id)dateForQuery:(id)arg0 ;
-(id)dateFromString:(id)arg0 ;
-(id)errorWithMessage:(id)arg0 ;
-(id)executeQuery:(id)arg0 ;
-(id)executeQuery:(id)arg0 values:(id)arg1 error:(*id)arg2 ;
-(id)executeQuery:(id)arg0 withArgumentsInArray:(id)arg1 ;
-(id)executeQuery:(id)arg0 withArgumentsInArray:(id)arg1 orDictionary:(id)arg2 orVAList:(char *)arg3 shouldBind:(BOOL)arg4 ;
-(id)executeQuery:(id)arg0 withParameterDictionary:(id)arg1 ;
-(id)executeQuery:(id)arg0 withVAList:(char *)arg1 ;
-(id)executeQueryWithFormat:(id)arg0 ;
-(id)getSchema;
-(id)getTableSchema:(id)arg0 ;
-(id)inSavePoint:(id)arg0 ;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)lastError;
-(id)lastErrorMessage;
-(id)prepare:(id)arg0 ;
-(id)stringForQuery:(id)arg0 ;
-(id)stringFromDate:(id)arg0 ;
-(id)valueData:(*void)arg0 ;
-(id)valueString:(*void)arg0 ;
-(int)bindObject:(id)arg0 toColumn:(int)arg1 inStatement:(struct sqlite3_stmt *)arg2 ;
-(int)busyRetryTimeout;
-(int)intForQuery:(id)arg0 ;
-(int)lastErrorCode;
-(int)lastExtendedErrorCode;
-(int)limitFor:(int)arg0 value:(int)arg1 ;
-(int)valueInt:(*void)arg0 ;
-(int)valueType:(*void)arg0 ;
-(void)clearCachedStatements;
-(void)closeOpenResultSets;
-(void)dealloc;
-(void)extractSQL:(id)arg0 argumentsList:(char *)arg1 intoString:(id)arg2 arguments:(id)arg3 ;
-(void)makeFunctionNamed:(id)arg0 arguments:(int)arg1 block:(id)arg2 ;
-(void)makeFunctionNamed:(id)arg0 maximumArguments:(int)arg1 withBlock:(id)arg2 ;
-(void)resultData:(id)arg0 context:(*void)arg1 ;
-(void)resultDouble:(CGFloat)arg0 context:(*void)arg1 ;
-(void)resultError:(id)arg0 context:(*void)arg1 ;
-(void)resultErrorCode:(int)arg0 context:(*void)arg1 ;
-(void)resultErrorNoMemoryInContext:(*void)arg0 ;
-(void)resultErrorTooBigInContext:(*void)arg0 ;
-(void)resultInt:(int)arg0 context:(*void)arg1 ;
-(void)resultLong:(NSInteger)arg0 context:(*void)arg1 ;
-(void)resultNullInContext:(*void)arg0 ;
-(void)resultSetDidClose:(id)arg0 ;
-(void)resultString:(id)arg0 context:(*void)arg1 ;
-(void)setBusyRetryTimeout:(int)arg0 ;
-(void)setCachedStatement:(id)arg0 forQuery:(id)arg1 ;
-(void)setDateFormat:(id)arg0 ;
-(void)warnInUse;


@end


#endif