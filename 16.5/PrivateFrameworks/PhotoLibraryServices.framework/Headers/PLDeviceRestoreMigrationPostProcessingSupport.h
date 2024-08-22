// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDEVICERESTOREMIGRATIONPOSTPROCESSINGSUPPORT_H
#define PLDEVICERESTOREMIGRATIONPOSTPROCESSINGSUPPORT_H

@class PLPhotoLibraryPathManager;

#import <Foundation/Foundation.h>

#import "PLModelMigrator.h"

@interface PLDeviceRestoreMigrationPostProcessingSupport : NSObject {
    BOOL _tokenIsKnownToBeMissing;
    PLModelMigrator *_modelMigrator;
    PLPhotoLibraryPathManager *_pathManager;
    os_unfair_lock_s _tokenLock;
}




+(BOOL)_writeTokenToPath:(id)arg0 withInfo:(id)arg1 allowOverwrite:(BOOL)arg2 error:(*id)arg3 ;
+(BOOL)createForegroundRestoreFromCloudBackupCompleteTokenWithPathManager:(id)arg0 error:(*id)arg1 ;
+(id)_readTokenAtPath:(id)arg0 allowNotExists:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)foregroundRestoreFromCloudBackupCompleteTokenExists;
-(BOOL)isBackgroundRestorePostProcessingInProgressTokenValid;
-(BOOL)isModelMigrationRestorePostProcessingComplete;
-(BOOL)needsToPrepareForBackgroundRestore;
-(BOOL)writeBackgroundRestorePostProcessingCompleteAndArchiveTokens;
-(BOOL)writeBackgroundRestorePostProcessingInProgressToken;
-(BOOL)writeModelMigrationRestorePostProcessingCompleteToken;
-(id)initWithModelMigrator:(id)arg0 ;


@end


#endif