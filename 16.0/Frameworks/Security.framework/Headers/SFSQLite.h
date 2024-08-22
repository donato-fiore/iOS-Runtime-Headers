// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSQLITE_H
#define SFSQLITE_H

@class NSDateFormatter, NSString, NSMutableDictionary;
@protocol SFSQLiteDelegate;

#import <Foundation/Foundation.h>


@interface SFSQLite : NSObject

@property (nonatomic) BOOL corrupt; // ivar: _corrupt
@property (retain, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (nonatomic) *sqlite3 db; // ivar: _db
@property (retain, nonatomic) NSObject<SFSQLiteDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL hasMigrated; // ivar: _hasMigrated
@property (readonly, nonatomic) BOOL isOpen;
@property (retain, nonatomic) NSString *objectClassPrefix; // ivar: _objectClassPrefix
@property (retain, nonatomic) NSDateFormatter *oldDateFormatter; // ivar: _oldDateFormatter
@property (nonatomic) NSUInteger openCount; // ivar: _openCount
@property (readonly, nonatomic) NSString *path; // ivar: _path
@property (readonly, nonatomic) NSString *schema; // ivar: _schema
@property (readonly, nonatomic) NSString *schemaVersion; // ivar: _schemaVersion
@property (readonly, nonatomic) NSMutableDictionary *statementsBySQL; // ivar: _statementsBySQL
@property (nonatomic) NSInteger synchronousMode; // ivar: _synchronousMode
@property (nonatomic) BOOL traced; // ivar: _traced
@property (nonatomic) int userVersion; // ivar: _userVersion


-(BOOL)executeSQL:(id)arg0 ;
-(BOOL)executeSQL:(id)arg0 arguments:(char *)arg1 ;
-(BOOL)openWithError:(*id)arg0 ;
-(NSInteger)insertOrReplaceInto:(id)arg0 values:(id)arg1 ;
-(NSInteger)lastInsertRowID;
-(NSUInteger)selectCountFrom:(id)arg0 where:(id)arg1 bindings:(id)arg2 ;
-(id)_createSchemaHash;
-(id)_tableNameForClass:(Class)arg0 ;
-(id)allTableNames;
-(id)columnNamesForTable:(id)arg0 ;
-(id)creationDate;
-(id)datePropertyForKey:(id)arg0 ;
-(id)initWithPath:(id)arg0 schema:(id)arg1 ;
-(id)propertyForKey:(id)arg0 ;
-(id)select:(id)arg0 from:(id)arg1 ;
-(id)select:(id)arg0 from:(id)arg1 mapEachRow:(id)arg2 ;
-(id)select:(id)arg0 from:(id)arg1 where:(id)arg2 bindings:(id)arg3 ;
-(id)selectAllFrom:(id)arg0 where:(id)arg1 bindings:(id)arg2 ;
-(id)selectFrom:(id)arg0 where:(id)arg1 bindings:(id)arg2 limit:(id)arg3 ;
-(id)statementForSQL:(id)arg0 ;
-(int)autoVacuumSetting;
-(int)changes;
-(void)analyze;
-(void)attemptProperDatabasePermissions;
-(void)begin;
-(void)close;
-(void)dealloc;
-(void)deleteFrom:(id)arg0 matchingValues:(id)arg1 ;
-(void)deleteFrom:(id)arg0 where:(id)arg1 bindings:(id)arg2 ;
-(void)dropAllTables;
-(void)end;
-(void)open;
-(void)remove;
-(void)removeAllStatements;
-(void)removePropertyForKey:(id)arg0 ;
-(void)rollback;
-(void)select:(id)arg0 from:(id)arg1 where:(id)arg2 bindings:(id)arg3 orderBy:(id)arg4 limit:(id)arg5 block:(id)arg6 ;
-(void)select:(id)arg0 from:(id)arg1 where:(id)arg2 bindings:(id)arg3 orderBy:(id)arg4 limit:(id)arg5 forEachRow:(id)arg6 ;
-(void)selectFrom:(id)arg0 where:(id)arg1 bindings:(id)arg2 orderBy:(id)arg3 limit:(id)arg4 block:(id)arg5 ;
-(void)setDateProperty:(id)arg0 forKey:(id)arg1 ;
-(void)setProperty:(id)arg0 forKey:(id)arg1 ;
-(void)update:(id)arg0 set:(id)arg1 where:(id)arg2 bindings:(id)arg3 limit:(id)arg4 ;
-(void)vacuum;


@end


#endif