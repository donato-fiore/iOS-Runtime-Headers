// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSASMODELBASE_H
#define MSASMODELBASE_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MSASModelBase : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dbQueue; // ivar: _dbQueue
@property (readonly, nonatomic) *sqlite3 dbQueueDB; // ivar: _db
@property (nonatomic) BOOL dbWasRecreated; // ivar: _dbWasRecreated
@property (readonly, nonatomic) NSString *personID; // ivar: _personID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statementQueue; // ivar: _statementQueue
@property (nonatomic) *__CFDictionary statements; // ivar: _statements


-(BOOL)dbQueueUpgradeFromDatabaseVersion:(int)arg0 currentVersion:(int)arg1 ;
-(id)dbQueuePersistentDataForKey:(id)arg0 ;
-(id)dbQueuePersistentObjectForKey:(id)arg0 ;
-(id)dbQueuePersistentStringForKey:(id)arg0 ;
-(id)initWithPersonID:(id)arg0 databasePath:(id)arg1 currentVersion:(int)arg2 ;
-(id)persistentObjectForKey:(id)arg0 ;
-(id)persistentStringForKey:(id)arg0 ;
-(struct sqlite3 *)db;
-(struct sqlite3_stmt *)statementForString:(id)arg0 ;
-(void)beginTransaction;
-(void)dbQueueDeletePersistentValueWithKey:(id)arg0 ;
-(void)dbQueueInitializeDatabasePath:(id)arg0 currentVersion:(int)arg1 ;
-(void)dbQueueSetPersistentData:(id)arg0 forKey:(id)arg1 ;
-(void)dbQueueSetPersistentObject:(id)arg0 forKey:(id)arg1 ;
-(void)dbQueueSetPersistentString:(id)arg0 forKey:(id)arg1 ;
-(void)deletePersistentValueWithKey:(id)arg0 ;
-(void)endTransaction;
-(void)setPersistentObject:(id)arg0 forKey:(id)arg1 ;
-(void)setPersistentString:(id)arg0 forKey:(id)arg1 ;
-(void)shutDownForDestruction:(BOOL)arg0 completionBlock:(id)arg1 ;


@end


#endif