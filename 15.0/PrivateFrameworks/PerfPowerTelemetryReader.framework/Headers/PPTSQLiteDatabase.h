// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPTSQLITEDATABASE_H
#define PPTSQLITEDATABASE_H

@class NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PPTSQLiteDatabase : NSObject {
    *sqlite3 _db;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    *__CFDictionary _statementCache;
}


@property (readonly, copy, nonatomic) NSURL *databaseURL; // ivar: _databaseURL


+(BOOL)_stepStatement:(struct sqlite3_stmt *)arg0 hasRow:(*BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_prepareStatementForSQL:(id)arg0 shouldCache:(BOOL)arg1 error:(*id)arg2 usingBlock:(id)arg3 ;
-(BOOL)executeSQL:(id)arg0 error:(*id)arg1 ;
// -(BOOL)executeSQL:(id)arg0 shouldCache:(BOOL)arg1 error:(*id)arg2 bindingHandler:(id)arg3 enumerationHandler:(unk)arg4  ;
-(BOOL)tableWithName:(id)arg0 containsColumnWithName:(id)arg1 ;
-(id)initWithDatabaseURL:(id)arg0 ;
-(id)tableNames;
-(id)typeForColumn:(id)arg0 inTable:(id)arg1 error:(*id)arg2 ;
-(int)openForReadingWithError:(*id)arg0 ;
-(struct sqlite3_stmt *)_statementForSQL:(id)arg0 shouldCache:(BOOL)arg1 error:(*id)arg2 ;
-(void)_accessDatabaseUsingBlock:(id)arg0 ;
-(void)clearStatementCache;
-(void)close;
-(void)dealloc;


@end


#endif