// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLASSETSDMIGRATIONSERVICE_H
#define PLASSETSDMIGRATIONSERVICE_H

@class NSString;
@protocol PLAssetsdMigrationServiceProtocol, OS_dispatch_queue;


#import "PLAbstractLibraryServicesManagerService.h"

@interface PLAssetsdMigrationService : PLAbstractLibraryServicesManagerService <PLAssetsdMigrationServiceProtocol>

 {
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_queue> *_dataMigratordQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)applyBackupExclusionToFileProviderDocumentStorage:(*id)arg0 ;
+(id)photosFileProviderManagerDocumentStorageURL:(*id)arg0 ;
-(id)initWithLibraryServicesManager:(id)arg0 ;
-(void)_migrateWellknownLibraries;
-(void)cleanupModelForDataMigrationForRestoreType:(NSInteger)arg0 reply:(id)arg1 ;
-(void)dataMigrationWillFinishWithReply:(id)arg0 ;
-(void)moveiPhotoLibraryMediaWithReply:(id)arg0 ;


@end


#endif