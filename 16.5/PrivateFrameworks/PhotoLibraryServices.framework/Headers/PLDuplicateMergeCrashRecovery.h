// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDUPLICATEMERGECRASHRECOVERY_H
#define PLDUPLICATEMERGECRASHRECOVERY_H

@class PLPhotoLibraryPathManager;

#import <Foundation/Foundation.h>

#import "PLPhotoLibrary.h"

@interface PLDuplicateMergeCrashRecovery : NSObject {
    PLPhotoLibrary *_library;
    PLPhotoLibraryPathManager *_pathManager;
}




-(BOOL)removeCrashRecoveryMarkerFileWithError:(*id)arg0 ;
-(BOOL)writeCrashRecoveryMarkerFileForTargetAssetUUID:(id)arg0 error:(*id)arg1 ;
-(NSInteger)_requestRecoveryActionForAsset:(id)arg0 ;
-(id)_crashRecoveryMarkerFileURL;
-(id)_readCrashRecoveryUUIDContainerMarkerFile;
-(id)_readCrashRecoveryUUIDListMarkerFile;
-(id)initWithLibraryServicesManager:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(void)_recoveryMasterRecordCleanupForAsset:(id)arg0 ;
-(void)_recoveryMasterResourceRecordCleanupForAsset:(id)arg0 ;
-(void)performCrashRecoveryIfNeeded;


@end


#endif