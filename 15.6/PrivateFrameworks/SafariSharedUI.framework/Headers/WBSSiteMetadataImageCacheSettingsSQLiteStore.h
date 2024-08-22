// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSSITEMETADATAIMAGECACHESETTINGSSQLITESTORE_H
#define WBSSITEMETADATAIMAGECACHESETTINGSSQLITESTORE_H

@class WBSSQLiteDatabase, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSSiteMetadataImageCacheSettingsSQLiteStore : NSObject {
    BOOL _isClosed;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    NSInteger _protectionType;
}


@property (readonly, nonatomic) WBSSQLiteDatabase *database; // ivar: _database
@property (readonly, nonatomic) NSURL *databaseURL; // ivar: _databaseURL


+(Class)cacheSettingsEntryClass;
-(BOOL)_checkDatabaseIntegrity;
-(BOOL)_createNewDatabaseSchema;
-(BOOL)_migrateToCurrentSchemaVersionifNeeded;
-(BOOL)_openDatabase:(id)arg0 andCheckIntegrity:(BOOL)arg1 ;
-(BOOL)_performMigrationStepToSchemaVersion:(NSInteger)arg0 withStatements:(id)arg1 ;
-(BOOL)deleteAllEntries;
-(BOOL)deleteEntryWithHost:(id)arg0 ;
-(id)_createNewDatabaseSQLiteStatement;
-(id)_deleteAllEntriesSQLiteStatement;
-(id)_deleteEntrySQLiteStatementWithHost:(id)arg0 ;
-(id)_insertEntry:(id)arg0 ;
-(id)_insertEntrySQLiteStatementWithEntry:(id)arg0 ;
-(id)_selectAllEntriesSQLiteStatement;
-(id)_selectEntrySQLiteStatementWithHost:(id)arg0 ;
-(id)_statementsForMigrationToSchemaVersion:(NSInteger)arg0 ;
-(id)_updateEntry:(id)arg0 ;
-(id)_updateEntrySQLiteStatementWithEntry:(id)arg0 ;
-(id)allEntries;
-(id)entryWithHost:(id)arg0 ;
-(id)initWithDatabaseURL:(id)arg0 ;
-(id)initWithDatabaseURL:(id)arg0 protectionType:(NSInteger)arg1 ;
-(id)saveEntry:(id)arg0 ;
-(void)_closeDatabase;
-(void)close;
-(void)dealloc;


@end


#endif