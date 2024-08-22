// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSCLIPDATASQLITESTORE_H
#define CPSCLIPDATASQLITESTORE_H

@class NSURL, WBSSQLiteDatabase;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CPSClipDataSQLiteStore : NSObject {
    NSURL *_databaseURL;
    WBSSQLiteDatabase *_database;
    NSObject<OS_dispatch_queue> *_databaseQueue;
}




+(id)defaultStore;
-(BOOL)_checkDatabaseIntegrity;
-(BOOL)_insertAppClipRecord:(id)arg0 ;
-(BOOL)_insertOrReplaceEntryPointRecord:(id)arg0 ;
-(BOOL)_isDatabaseOpen;
-(BOOL)_updateAppClipRecord:(id)arg0 ;
-(id)init;
-(id)initWithDatabaseURL:(id)arg0 ;
-(int)_createClipEntryPointsTable;
-(int)_createFreshDatabaseSchema;
-(int)_migrateToCurrentSchemaVersionIfNeeded;
-(int)_migrateToSchemaVersion:(int)arg0 ;
-(int)_migrateToSchemaVersion_2;
-(int)_migrateToSchemaVersion_3;
-(int)_migrateToSchemaVersion_4;
-(int)_migrateToSchemaVersion_5;
-(int)_migrateToSchemaVersion_6;
-(int)_migrateToSchemaVersion_7;
-(int)_migrateToSchemeVersion_8;
-(int)_schemaVersion;
-(int)_setDatabaseSchemaVersion:(int)arg0 ;
-(void)_closeDatabase;
-(void)_openDatabaseAndCheckIntegrity:(BOOL)arg0 ;
-(void)getAppClipRecordWithBundleID:(id)arg0 completion:(id)arg1 ;
-(void)getEntryPointRecordWithWebClipIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)removeRecordWithBundleID:(id)arg0 ;
-(void)saveAppClipRecord:(id)arg0 completion:(id)arg1 ;
-(void)saveClipEntryPointRecord:(id)arg0 completion:(id)arg1 ;


@end


#endif