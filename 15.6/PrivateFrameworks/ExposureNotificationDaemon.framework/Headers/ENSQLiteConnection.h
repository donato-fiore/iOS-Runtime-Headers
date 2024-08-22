// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENSQLITECONNECTION_H
#define ENSQLITECONNECTION_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface ENSQLiteConnection : NSObject {
    *sqlite3 _db;
    *__CFDictionary _statementCache;
    BOOL _isInTransaction;
}


@property (nonatomic) int additionalOpenFlags; // ivar: _additionalOpenFlags
@property (readonly, copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, nonatomic) BOOL isOpen;
@property (readonly, nonatomic) NSInteger lastInsertedRowID;


// -(BOOL)_executeSQL:(id)arg0 cacheStatement:(BOOL)arg1 error:(*id)arg2 bindingHandler:(id)arg3 enumerationHandler:(unk)arg4  ;
-(BOOL)_prepareStatementForSQL:(id)arg0 cache:(BOOL)arg1 error:(*id)arg2 statementHandler:(id)arg3 ;
-(BOOL)_stepStatement:(struct sqlite3_stmt *)arg0 hasRow:(*BOOL)arg1 error:(*id)arg2 ;
-(BOOL)executeSQL:(id)arg0 error:(*id)arg1 ;
// -(BOOL)executeSQL:(id)arg0 error:(*id)arg1 bindingHandler:(id)arg2 enumerationHandler:(unk)arg3  ;
-(BOOL)executeUncachedSQL:(id)arg0 error:(*id)arg1 ;
-(BOOL)executeUncachedSQLStatements:(id)arg0 error:(*id)arg1 ;
-(BOOL)getIntegerValue:(*NSInteger)arg0 forPragma:(id)arg1 error:(*id)arg2 ;
-(BOOL)getUserVersion:(*NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)performTransactionWithType:(NSInteger)arg0 error:(*id)arg1 usingBlock:(id)arg2 ;
-(BOOL)setIntegerValue:(NSInteger)arg0 forPragma:(id)arg1 error:(*id)arg2 ;
-(BOOL)setUserVersion:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)truncateWithError:(*id)arg0 ;
-(id)_initWithDatabaseURL:(id)arg0 ;
-(id)_lastErrorWithResultCode:(int)arg0 ;
-(id)init;
-(id)initWithDatabaseURL:(id)arg0 ;
-(int)openWithError:(*id)arg0 ;
-(void)close;
-(void)dealloc;


@end


#endif