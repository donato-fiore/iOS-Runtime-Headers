// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDPERSISTENCEDATABASE_H
#define EDPERSISTENCEDATABASE_H

@class NSString, EFSQLPropertyMapper, EFSQLSchema;
@protocol EDPersistenceDatabaseConnectionPoolDelegate, EDPersistenceDatabaseConnectionDelegate;

#import <Foundation/Foundation.h>

#import "EDPersistenceDatabaseConnectionPool.h"
#import "EDProtectedDatabasePersistence.h"

@interface EDPersistenceDatabase : NSObject <EDPersistenceDatabaseConnectionPoolDelegate, EDPersistenceDatabaseConnectionDelegate>

 {
    EDPersistenceDatabaseConnectionPool *_connectionPool;
}


@property (readonly, nonatomic) NSString *basePath; // ivar: _basePath
@property (readonly, nonatomic) BOOL databaseIsCorrupt;
@property (readonly, nonatomic) NSString *databaseName; // ivar: _databaseName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL enforceDataProtection;
@property (readonly, nonatomic) NSString *fullPath; // ivar: _fullPath
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isNestedDatabaseCall;
@property (readonly, nonatomic) EFSQLPropertyMapper *propertyMapper; // ivar: _propertyMapper
@property (readonly, nonatomic) EDProtectedDatabasePersistence *protectedDatabasePersistence; // ivar: _protectedDatabasePersistence
@property (readonly, nonatomic) EFSQLSchema *protectedSchema; // ivar: _protectedSchema
@property (readonly, nonatomic) EFSQLSchema *schema; // ivar: _schema
@property BOOL setupIsComplete; // ivar: _setupIsComplete
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL writersAreWaiting;


-(BOOL)performDatabaseSetupUsingTransaction:(BOOL)arg0 block:(id)arg1 ;
-(BOOL)performReadBlock:(id)arg0 ;
-(BOOL)performWithOptions:(NSUInteger)arg0 block:(id)arg1 ;
-(BOOL)performWriteBlock:(id)arg0 ;
-(id)checkOutConnectionIsWriter:(BOOL)arg0 ;
-(id)fileProtectionForDatabaseType:(NSInteger)arg0 ;
-(id)init;
-(id)initWithBasePath:(id)arg0 databaseName:(id)arg1 maxConcurrentReaders:(NSUInteger)arg2 schema:(id)arg3 protectedSchema:(id)arg4 propertyMapper:(id)arg5 protectedDatabasePersistence:(id)arg6 ;
-(id)openConnectionIsWriter:(BOOL)arg0 ;
-(id)urlForDatabasePath:(id)arg0 type:(NSInteger)arg1 ;
-(id)urlForDatabasePath:(id)arg0 type:(NSInteger)arg1 fileProtection:(id)arg2 ;
-(void)checkInConnection:(id)arg0 ;
-(void)closeAllConnections;
-(void)handleExceptionCreatingConnection:(id)arg0 ;
-(void)performDatabaseWorkInBlockWithHighPriority:(id)arg0 ;
-(void)reconcileJournalWithCompletionBlock:(id)arg0 ;
-(void)scheduleRecurringActivity;


@end


#endif