// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVINDEXMAINTENANCELOG_H
#define CKVINDEXMAINTENANCELOG_H

@class NSString, NSDate, NSNumber;

#import <Foundation/Foundation.h>

#import "CKVFilesystemBase.h"
#import "CKVConcurrentDictionary.h"

@interface CKVIndexMaintenanceLog : NSObject {
    CKVFilesystemBase *_filesystemBase;
    CKVConcurrentDictionary *_log;
}


@property (readonly, nonatomic) NSString *databaseSchemaVersion;
@property (readonly, nonatomic) NSDate *lastDatabaseCleanup;
@property (readonly, nonatomic) NSDate *lastMaintenance;
@property (readonly, nonatomic) NSDate *lastMigration;
@property (readonly, nonatomic) NSDate *lastSkitRebuild;
@property (readonly, nonatomic) NSString *migratedBuildVersion;
@property (readonly, nonatomic) NSString *migratedProjectVersion;
@property (readonly, nonatomic) NSNumber *migrationAttempts;
@property (readonly, nonatomic) NSNumber *modifiedDatabaseRowsSinceCleanup;


-(BOOL)_flushLog;
-(BOOL)_setCurrentDateForKey:(id)arg0 ;
-(id)init;
-(id)initWithFilesystemBase:(id)arg0 ;
-(void)_initalizeLog;
-(void)recordDatabaseCleanup;
-(void)recordDatabaseRowsModified:(NSUInteger)arg0 ;
-(void)recordDatabaseSchemaVersion:(id)arg0 ;
-(void)recordMaintenance;
-(void)recordMigrationAttempt;
-(void)recordMigrationWithBuildVersion:(id)arg0 projectVersion:(id)arg1 ;
-(void)recordSkitRebuild;


@end


#endif