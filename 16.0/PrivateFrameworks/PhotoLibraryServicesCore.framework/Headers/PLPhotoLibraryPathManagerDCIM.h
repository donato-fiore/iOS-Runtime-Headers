// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPHOTOLIBRARYPATHMANAGERDCIM_H
#define PLPHOTOLIBRARYPATHMANAGERDCIM_H

@class NSString;


#import "PLPhotoLibraryPathManagerCore.h"
#import "PLSimpleDCIMDirectory.h"
#import "PLLazyObject.h"
#import "PLImportFileManager.h"

@interface PLPhotoLibraryPathManagerDCIM : PLPhotoLibraryPathManagerCore {
    NSUInteger _persistedAlbumDataDirectoryExists;
    NSString *_photoDataDirectory;
    NSString *_photoDataCachesDirectory;
    NSString *_photoDataAnalyticsDirectory;
    NSString *_photoDataSmartSharingDirectory;
    NSString *_photoDataSearchDirectory;
    NSString *_restoreInfoDirectory;
    NSString *_photoDataComputeDirectory;
    NSString *_dcimDirectory;
    NSString *_cplAssetsDirectory;
    NSString *_cmmAssetsDirectory;
    NSString *_journalsDirectory;
    NSString *_projectsDirectory;
    NSString *_privateDirectory;
    NSString *_internalDirectory;
    NSString *_partialVideoDirectory;
    NSString *_externalDirectory;
    NSString *_lockedDirectory;
    NSString *_changeStoreDatabasePath;
    NSString *_thumbnailsDirectory;
    NSString *_thumbnailsV2Directory;
    NSString *_thumbnailsVideoKeyFramesDirectory;
    BOOL _assetAlbumOrderStructurePathCreated;
    PLSimpleDCIMDirectory *_simpleDCIMDirectory;
    PLLazyObject *_lazyPathManagerForUBFOnDCIM;
}


@property (retain, nonatomic) PLImportFileManager *importFileManager; // ivar: _importFileManager


+(id)allPhotosPathsOnThisDevice;
-(BOOL)ensureFileProviderSyncExclusionAttributeIsSetWithError:(*id)arg0 ;
-(BOOL)isDeviceRestoreSupported;
-(BOOL)shouldUseFileIdentifierForBundleScope:(unsigned short)arg0 ;
-(BOOL)updateTimeMachineExclusionAttributeForExcludePath:(id)arg0 error:(*id)arg1 ;
-(id)_externalDirectoryWithBundleIdentifier:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)addToPath:(id)arg0 leafType:(unsigned char)arg1 additionalPathComponents:(id)arg2 ;
-(id)assetAbbreviatedMetadataDirectoryForDirectory:(id)arg0 type:(unsigned char)arg1 bundleScope:(unsigned short)arg2 ;
-(id)assetBaseFilenameForAdjustmentFilePath:(id)arg0 ;
-(id)assetMainFilePathWithDirectory:(id)arg0 filename:(id)arg1 bundleScope:(unsigned short)arg2 ;
-(id)basePrivateDirectoryPath;
-(id)cloudRestoreBackgroundPhaseInProgressTokenPath;
-(id)cloudRestoreCompleteTokenPath;
-(id)cloudRestoreForegroundPhaseCompleteTokenPath;
-(id)convertPhotoLibraryPathType:(unsigned char)arg0 ;
-(id)createPathsForNewLibraries;
-(id)externalDirectoryWithSubType:(unsigned char)arg0 leafType:(unsigned char)arg1 additionalPathComponents:(id)arg2 ;
-(id)getImportFileManager;
-(id)iTunesPhotosLastSyncMetadataFilePath;
-(id)iTunesPhotosSyncCurrentLibraryUUIDPath;
-(id)iTunesPhotosSyncDirectory;
-(id)iTunesPhotosSyncMetadataFilePath;
-(id)iTunesSyncedAssetMetadataThumbnailsDirectory;
-(id)iTunesSyncedAssetSmallThumbnailsDirectory;
-(id)iTunesSyncedAssetsDirectory;
-(id)iTunesSyncedFaceAlbumThumbnailsDirectory;
-(id)iTunesSyncedFaceDataDirectory;
-(id)initWithLibraryURL:(id)arg0 bundleScope:(unsigned short)arg1 ;
-(id)internalDirectoryWithSubType:(unsigned char)arg0 additionalPathComponents:(id)arg1 ;
-(id)modelRestorePostProcessingCompleteTokenPath;
-(id)pathToAssetAlbumOrderStructure;
-(id)pathToAssetsToAlbumsMapping;
-(id)pathsForClientAccess:(id)arg0 ;
-(id)pathsForExternalWriters;
-(id)pathsForPermissionCheck;
-(id)pathsGroupedByAssetBasePathFromFilePaths:(id)arg0 populateInvalidAdjustmentPaths:(id)arg1 ;
-(id)persistedAlbumDataDirectoryCreateIfNeeded:(BOOL)arg0 error:(*id)arg1 ;
-(id)photoDirectoryWithType:(unsigned char)arg0 leafType:(unsigned char)arg1 additionalPathComponents:(id)arg2 ;
-(id)photoMetadataDirectory;
-(id)photoMetadataDirectoryForMediaInMainDirectory:(id)arg0 ;
-(id)photoMutationsDirectory;
-(id)photosDatabasePath;
-(id)privateCacheDirectoryWithSubType:(unsigned char)arg0 ;
-(id)privateDirectoryWithSubType:(unsigned char)arg0 leafType:(unsigned char)arg1 additionalPathComponents:(id)arg2 ;
-(id)readOnlyUrlWithIdentifier:(id)arg0 ;
-(id)simpleDCIMDirectory;
-(id)syncInfoPath;
-(unsigned char)photoLibraryPathTypeForBundleScope:(unsigned short)arg0 ;
-(void)enumerateBundleScopesWithBlock:(id)arg0 ;
-(void)obtainAccessAndWaitWithFileWithIdentifier:(id)arg0 mode:(unsigned char)arg1 toURLWithHandler:(id)arg2 ;
-(void)setExtendedAttributesWithIdentifier:(id)arg0 ;
-(void)setExtendedAttributesWithIdentifier:(id)arg0 andURL:(id)arg1 ;


@end


#endif