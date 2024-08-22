// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSQLITE_H
#define CKSQLITE_H

@class NSError, NSString;
@protocol CKSQLiteDB, CKSQLiteDBConveniences, CKSQLiteDelegate;

#import <Foundation/Foundation.h>


@interface CKSQLite : NSObject <CKSQLiteDB, CKSQLiteDBConveniences>

 {
    os_unfair_lock_s _operationLock;
    uint8_t _operationThread;
    id *_errorHandlerBlock;
    BOOL _cancelled;
    NSError *_error;
    NSInteger _errorResponse;
    NSError *_invalidationError;
    BOOL _needsMarkCorrupt;
    BOOL _needsRemove;
}


@property (nonatomic) *sqlite3 db; // ivar: _db
@property (retain, nonatomic) NSObject<CKSQLiteDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL hasMigrated; // ivar: _hasMigrated
@property BOOL invalid; // ivar: _invalid
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly, nonatomic) BOOL isCorrupt;
@property (readonly, nonatomic) BOOL isOpen;
@property (retain, nonatomic) NSString *objectClassPrefix; // ivar: _objectClassPrefix
@property (nonatomic) NSUInteger openCount; // ivar: _openCount
@property (readonly, nonatomic) NSString *path; // ivar: _path
@property (readonly, nonatomic) NSString *schema; // ivar: _schema
@property (readonly, nonatomic) NSString *schemaVersion; // ivar: _schemaVersion
@property (nonatomic) BOOL shouldVacuum; // ivar: _shouldVacuum
@property (nonatomic) NSInteger synchronousMode; // ivar: _synchronousMode
@property (nonatomic) BOOL traced; // ivar: _traced
@property (nonatomic) int userVersion; // ivar: _userVersion


+(id)equalityClauseAndBindingsForDict:(id)arg0 ;
-(BOOL)deleteExactObject:(id)arg0 ;
-(BOOL)openWithError:(*id)arg0 ;
-(BOOL)remove;
-(NSInteger)insertOrReplaceInto:(id)arg0 values:(id)arg1 ;
-(NSInteger)insertOrReplaceObject:(id)arg0 ;
-(NSInteger)lastInsertRowID;
-(NSInteger)selectCountFrom:(id)arg0 where:(id)arg1 bindings:(id)arg2 ;
-(NSInteger)upsertInto:(id)arg0 values:(id)arg1 onConflict:(id)arg2 doUpdate:(id)arg3 where:(id)arg4 ;
-(id)_boxedPropertyDictionary:(id)arg0 forObjCClass:(id)arg1 ;
-(id)_boxedValue:(id)arg0 forObjcCProperty:(id)arg1 ;
// -(id)_performDatabaseOperation_locked:(id)arg0 withErrorHandler:(unk)arg1  ;
-(id)_prepareDatabase;
-(id)_tableNameForClass:(Class)arg0 ;
-(id)allTableNames;
-(id)columnNamesForTable:(id)arg0 ;
-(id)creationDate;
-(id)datePropertyForKey:(id)arg0 ;
-(id)handleDatabaseError:(id)arg0 ;
-(id)handleDatabaseError:(id)arg0 args:(char *)arg1 ;
-(id)handleError:(id)arg0 ;
-(id)initWithPath:(id)arg0 schema:(id)arg1 ;
-(id)performDatabaseOperation:(id)arg0 ;
// -(id)performDatabaseOperation:(id)arg0 withErrorHandler:(unk)arg1  ;
-(id)propertyForKey:(id)arg0 ;
-(id)select:(id)arg0 from:(id)arg1 ;
-(id)select:(id)arg0 from:(id)arg1 where:(id)arg2 bindings:(id)arg3 ;
-(id)select:(id)arg0 from:(id)arg1 where:(id)arg2 bindings:(id)arg3 orderBy:(id)arg4 ;
-(id)select:(id)arg0 from:(id)arg1 where:(id)arg2 bindings:(id)arg3 orderBy:(id)arg4 limit:(id)arg5 ;
-(id)selectAllFrom:(id)arg0 where:(id)arg1 bindings:(id)arg2 ;
-(id)selectAllObjectsOfClass:(Class)arg0 ;
-(id)selectAllObjectsOfClass:(Class)arg0 where:(id)arg1 bindings:(id)arg2 ;
-(id)selectAllObjectsOfClass:(Class)arg0 where:(id)arg1 bindings:(id)arg2 limit:(id)arg3 ;
-(id)selectFrom:(id)arg0 where:(id)arg1 bindings:(id)arg2 limit:(id)arg3 ;
-(id)selectObjectOfClass:(Class)arg0 where:(id)arg1 bindings:(id)arg2 ;
-(id)sqlErrorWithMessage:(id)arg0 ;
-(int)changes;
-(int)deleteAllObjectsOfClass:(Class)arg0 where:(id)arg1 bindings:(id)arg2 ;
-(void)_dropAllTables;
-(void)_forceClosed_locked;
-(void)_forceClosed_unlocked;
-(void)_recursiveOperationLock:(id)arg0 ;
-(void)assertInOperation:(SEL)arg0 ;
-(void)close;
-(void)dealloc;
-(void)deleteFrom:(id)arg0 matchingValues:(id)arg1 ;
-(void)deleteFrom:(id)arg0 where:(id)arg1 bindings:(id)arg2 ;
-(void)executeSQL:(id)arg0 ;
-(void)executeSQL:(id)arg0 arguments:(char *)arg1 ;
-(void)markCorrupt;
-(void)removePropertyForKey:(id)arg0 ;
-(void)select:(id)arg0 from:(id)arg1 where:(id)arg2 bindings:(id)arg3 orderBy:(id)arg4 limit:(id)arg5 block:(id)arg6 ;
-(void)select:(id)arg0 from:(id)arg1 where:(id)arg2 bindings:(id)arg3 orderBy:(id)arg4 limit:(id)arg5 offset:(id)arg6 block:(id)arg7 ;
-(void)selectAllObjectsOfClass:(Class)arg0 where:(id)arg1 bindings:(id)arg2 orderBy:(id)arg3 limit:(id)arg4 block:(id)arg5 ;
-(void)selectFrom:(id)arg0 where:(id)arg1 bindings:(id)arg2 orderBy:(id)arg3 limit:(id)arg4 block:(id)arg5 ;
-(void)setDateProperty:(id)arg0 forKey:(id)arg1 ;
-(void)setProperty:(id)arg0 forKey:(id)arg1 ;
-(void)update:(id)arg0 set:(id)arg1 where:(id)arg2 bindings:(id)arg3 limit:(id)arg4 ;
-(void)updateAllObjectsOfClass:(Class)arg0 set:(id)arg1 where:(id)arg2 bindings:(id)arg3 ;
-(void)usingStatementForSQL:(id)arg0 performBlock:(id)arg1 ;
-(void)vacuum;
-(void)willCreateDatabase;


@end


#endif