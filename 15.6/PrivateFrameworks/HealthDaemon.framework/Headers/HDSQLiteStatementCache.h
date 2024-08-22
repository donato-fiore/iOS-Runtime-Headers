// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSQLITESTATEMENTCACHE_H
#define HDSQLITESTATEMENTCACHE_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "_HDSQLiteStatementCacheStorage.h"

@interface HDSQLiteStatementCache : NSObject {
    *sqlite3 _db;
    _HDSQLiteStatementCacheStorage *_defaultStatementStorage;
    _HDSQLiteStatementCacheStorage *_transactionStatementStorage;
    *__CFSet _activeStatements;
    *__CFSet _uncachedActiveStatements;
    BOOL _inTransaction;
}


@property (readonly, copy, nonatomic) NSSet *allStatmentSQLStrings;
@property (readonly, nonatomic) NSInteger count;
@property (readonly, nonatomic) NSInteger faultCount; // ivar: _faultCount


-(id)init;
-(id)initWithDatabase:(struct sqlite3 *)arg0 ;
// -(struct sqlite3_stmt *)checkOutCachedStatementForKey:(char *)arg0 SQLGenerator:(id)arg1 error:(unk)arg2  ;
-(struct sqlite3_stmt *)checkOutStatementForSQL:(id)arg0 shouldCache:(BOOL)arg1 error:(*id)arg2 ;
-(void)beginTransaction;
-(void)checkInStatement:(struct sqlite3_stmt *)arg0 ;
-(void)clearCachedStatements;
-(void)dealloc;
-(void)endTransaction;


@end


#endif