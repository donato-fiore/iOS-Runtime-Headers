// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLDATAMIGRATIONCONTROLLER_H
#define SLDATAMIGRATIONCONTROLLER_H


#import <Foundation/Foundation.h>


@interface SLDataMigrationController : NSObject



+(id)sharedController;
-(BOOL)needsFileProtectionUpgradeForProfileImagesAtPath:(id)arg0 serviceNameForLogging:(id)arg1 ;
-(BOOL)needsMigrationForSocialDaemonBundleID:(id)arg0 preferenceKey:(id)arg1 ;
-(void)didFinishMigrationForSocialDaemonBundleID:(id)arg0 preferenceKey:(id)arg1 ;
-(void)ensureSocialUserDataDirectory;
-(void)removeAncillarySocialDatabaseFilesWithPrefix:(id)arg0 serviceNameForLogging:(id)arg1 ;


@end


#endif