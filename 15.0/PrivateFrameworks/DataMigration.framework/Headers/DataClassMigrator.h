// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DATACLASSMIGRATOR_H
#define DATACLASSMIGRATOR_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface DataClassMigrator : NSObject

@property (retain, nonatomic) NSDictionary *context; // ivar: _context
@property (readonly, nonatomic) BOOL didMigrateBackupFromDifferentDevice;
@property (readonly, nonatomic) BOOL didRestoreFromBackup;
@property (readonly, nonatomic) BOOL didRestoreFromCloudBackup;
@property (nonatomic) BOOL didUpgrade; // ivar: _didUpgrade
@property (copy, nonatomic) NSString *dmBundleIdentifier; // ivar: _dmBundleIdentifier
@property (retain, nonatomic) NSString *restoredBackupBuildVersion; // ivar: _restoredBackupBuildVersion
@property (retain, nonatomic) NSString *restoredBackupDeviceName; // ivar: _restoredBackupDeviceName
@property (retain, nonatomic) NSString *restoredBackupProductType; // ivar: _restoredBackupProductType
@property (readonly, nonatomic) BOOL shouldPreserveSettingsAfterRestore;
@property (nonatomic) unsigned int userDataDisposition; // ivar: _userDataDisposition
@property (readonly, nonatomic) BOOL wasPasscodeSetInBackup;


+(id)dataClassMigratorForBundleAtPath:(id)arg0 ;
-(BOOL)performMigration;


@end


#endif