// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLIMAGEWRITER_H
#define PLIMAGEWRITER_H

@class PLSimpleDCIMDirectory;
@protocol OS_dispatch_queue, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "PLIndicatorFileCoordinator.h"
#import "PLLibraryServicesManager.h"

@interface PLImageWriter : NSObject {
    int _unfinishedJobsRequiringIndicatorCount;
    NSObject<OS_dispatch_queue> *_jobQueue;
    os_unfair_recursive_lock_s _jobCountLock;
    os_unfair_lock_s _transactionLock;
    NSUInteger _transactionCounter;
    NSObject<OS_os_transaction> *_transaction;
    PLSimpleDCIMDirectory *_iTunesSyncedAssetsDCIMDirectory;
    PLIndicatorFileCoordinator *_indicatorFileCoordinator;
    PLLibraryServicesManager *_libraryServicesManager;
}




+(BOOL)_hasPrimaryAssetAndAdjustmentsFilesWithType:(short)arg0 inIncomingFilenames:(id)arg1 forAssetUUID:(id)arg2 ;
+(BOOL)_requiresAssetUUIDForJobType:(id)arg0 ;
+(BOOL)_requiresIndicatorFileForJobType:(id)arg0 ;
+(BOOL)isDeferredPhotoPreviewURL:(id)arg0 ;
+(BOOL)isSpatialOverCaptureURL:(id)arg0 ;
+(BOOL)semanticEnhanceSceneIsValid:(NSInteger)arg0 ;
+(BOOL)setAdjustmentsForNewPhoto:(id)arg0 mainFileMetadata:(id)arg1 cameraAdjustmentData:(id)arg2 adjustmentDataPath:(id)arg3 filteredImagePath:(id)arg4 cameraMetadata:(id)arg5 finalAssetSize:(struct CGSize )arg6 isSubstandardRender:(BOOL)arg7 ;
+(id)_assetAdjustmentsFromCameraAdjustmentData:(id)arg0 cameraMetadata:(id)arg1 exportProperties:(id)arg2 assetType:(short)arg3 applySemanticEnhance:(BOOL)arg4 ;
+(id)_assetAdjustmentsFromCameraAdjustments:(id)arg0 cameraMetadata:(id)arg1 exportProperties:(id)arg2 assetType:(short)arg3 applySemanticEnhance:(BOOL)arg4 ;
+(id)_assetAdjustmentsFromCameraAdjustmentsFileAtPath:(id)arg0 exportProperties:(id)arg1 cameraMetadata:(id)arg2 ;
+(id)_assetUUIDFromIncomingFilename:(id)arg0 ;
+(id)_pathsByAssetUUIDFromIncomingCrashRecoveryPaths:(id)arg0 ;
+(id)assetAdjustmentsFromCameraAdjustmentData:(id)arg0 cameraMetadata:(id)arg1 exportProperties:(id)arg2 applySemanticEnhance:(BOOL)arg3 ;
+(id)assetAdjustmentsFromCameraAdjustmentData:(id)arg0 exportProperties:(id)arg1 ;
+(id)assetAdjustmentsFromCameraAdjustments:(id)arg0 cameraMetadata:(id)arg1 exportProperties:(id)arg2 ;
+(id)assetAdjustmentsFromCameraAdjustments:(id)arg0 cameraMetadata:(id)arg1 exportProperties:(id)arg2 applySemanticEnhance:(BOOL)arg3 ;
+(id)assetAdjustmentsFromCameraFilters:(id)arg0 portraitMetadata:(id)arg1 exportProperties:(id)arg2 cameraMetadata:(id)arg3 ;
+(id)assetAdjustmentsFromCompositionController:(id)arg0 exportProperties:(id)arg1 ;
+(id)cameraMetadataURLForPrimaryAssetURL:(id)arg0 photoLibrary:(id)arg1 ;
+(id)deferredPhotoPreviewDestinationURLForPrimaryAssetURL:(id)arg0 ;
+(id)finalizedAssetURLForDeferredPhotoPreviewURL:(id)arg0 extension:(id)arg1 ;
+(id)semanticEnhancePreviewDestinationURLForPrimaryAssetURL:(id)arg0 ;
+(id)spatialOverCaptureDestinationURLForPrimaryAssetURL:(id)arg0 ;
+(void)setAdjustmentsForNewVideo:(id)arg0 mainFileMetadata:(id)arg1 withAdjustmentsDictionary:(id)arg2 cameraAdjustments:(id)arg3 renderedContentPath:(id)arg4 renderedPosterFramePreviewPath:(id)arg5 finalAssetSize:(struct CGSize )arg6 ;
-(BOOL)_isHighPriorityJob:(id)arg0 ;
-(BOOL)_transferSpatialOverCaptureVideoFromIncomingPath:(id)arg0 forBaseDestinationPath:(id)arg1 shouldRemoveIncoming:(*BOOL)arg2 ;
-(BOOL)_transferVideoFromIncomingPath:(id)arg0 toDestinationPath:(id)arg1 shouldRemoveIncoming:(*BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_writeOutCameraMetadata:(id)arg0 destinationURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)canEnqueueJob:(id)arg0 ;
-(BOOL)enqueueJob:(id)arg0 ;
-(BOOL)imageWriterJob:(id)arg0 hasValidPathsWithConnection:(id)arg1 ;
-(id)_fetchPhotoAssetForUUID:(id)arg0 moc:(id)arg1 ;
-(id)_pathForFilteredPreviewWithBaseName:(id)arg0 imageData:(id)arg1 orImage:(id)arg2 ;
-(id)_pathForNewAssetWithPath:(id)arg0 withExtension:(id)arg1 ;
-(id)_processLimitedLibraryAdditionIfNeededWithAssetUUID:(id)arg0 clientBundleIdentifier:(id)arg1 clientAuthorization:(id)arg2 library:(id)arg3 ;
-(id)cameraAssetPathForNewAssetWithExtension:(id)arg0 assetUUID:(id)arg1 ;
-(id)iTunesSyncedAssetsDCIMDirectory;
-(id)indicatorFileCoordinator;
-(id)init;
-(id)initWithLibraryServicesManager:(id)arg0 ;
-(id)pathForNewAssetPathAtAlbumDirectoryPath:(id)arg0 assetType:(unsigned int)arg1 extension:(id)arg2 ;
-(id)pathForNewAssetWithDirectoryPath:(id)arg0 fileName:(id)arg1 extension:(id)arg2 ;
-(id)pathForOriginalMyPhotoStreamAssetWithJob:(id)arg0 ;
-(void)_decrementJobCount:(id)arg0 ;
-(void)_enablePhotoStreamJob:(id)arg0 completion:(id)arg1 ;
-(void)_handleAvalancheCrashRecovery:(id)arg0 ;
-(void)_handleCameraAdjustments:(id)arg0 fullsizeRenders:(id)arg1 largeThumbnails:(id)arg2 ;
-(void)_handleCameraMetadataCrashRecovery:(id)arg0 ;
-(void)_handlePhotoIrisCrashRecoveryForPhotoIndicatorFiles:(id)arg0 ;
-(void)_handlePhotoIrisCrashRecoveryForVideos:(id)arg0 ;
-(void)_incrementJobCount:(id)arg0 ;
-(void)_linkDiagnosticFileWithSourcePath:(id)arg0 forPhotoDestinationURL:(id)arg1 ;
-(void)_photoIrisPairingDidSucceed:(BOOL)arg0 fileIndicatorPath:(id)arg1 photoAsset:(id)arg2 photoLibrary:(id)arg3 ;
-(void)_processAutodeleteEmptyAlbumJob:(id)arg0 completion:(id)arg1 ;
-(void)_processAvalancheJob:(id)arg0 completion:(id)arg1 ;
-(void)_processAvalanchesValidationJob:(id)arg0 completion:(id)arg1 ;
-(void)_processBatchImageJob:(id)arg0 inLibrary:(id)arg1 completion:(id)arg2 ;
-(void)_processCrashRecoveryJob:(id)arg0 completion:(id)arg1 ;
-(void)_processDaemonJob:(id)arg0 completion:(id)arg1 ;
-(void)_processDeletePhotoStreamAssetsWithUUIDs:(id)arg0 withReason:(id)arg1 completion:(id)arg2 ;
-(void)_processDeletePhotoStreamDataJob:(id)arg0 withReason:(id)arg1 completion:(id)arg2 ;
-(void)_processImageJob:(id)arg0 inLibrary:(id)arg1 completion:(id)arg2 ;
-(void)_processJob:(id)arg0 ;
-(void)_processReenqueueAssetUUIDsToPhotoStreamJob:(id)arg0 completion:(id)arg1 ;
-(void)_processSavePhotoStreamImageToCameraRollJob:(id)arg0 completion:(id)arg1 ;
-(void)_processSyncClientSaveJobsJob:(id)arg0 completion:(id)arg1 ;
-(void)_processSyncedVideoSaveJob:(id)arg0 completion:(id)arg1 ;
-(void)_processVideoJob:(id)arg0 completion:(id)arg1 ;
-(void)_processVideoSaveJob:(id)arg0 completion:(id)arg1 ;
-(void)_processXPCDaemonJob:(id)arg0 completion:(id)arg1 ;
-(void)_removeInProgressExtendedAttributesForFileAtURL:(id)arg0 ;
-(void)_removeTransientKeys:(id)arg0 ;
-(void)_resetSyncedAssetsDCIMDirectory;
-(void)cleanupFilesInLibrary:(id)arg0 afteriTunesSyncBeforeDate:(id)arg1 ;
-(void)enqueueAutoDeleteEmptyAlbumJobWithAlbumID:(id)arg0 ;
-(void)processSyncSaveJob:(id)arg0 library:(id)arg1 albumMap:(id)arg2 ;
-(void)saveAssetJob:(id)arg0 imageSurface:(id)arg1 previewImageSurface:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif