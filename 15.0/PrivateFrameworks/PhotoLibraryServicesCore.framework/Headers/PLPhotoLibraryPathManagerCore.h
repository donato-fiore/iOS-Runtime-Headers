// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPHOTOLIBRARYPATHMANAGERCORE_H
#define PLPHOTOLIBRARYPATHMANAGERCORE_H

@class NSString, NSURL;
@protocol PLPhotoLibraryPathManager;

#import <Foundation/Foundation.h>

#import "PLFileSystemCapabilities.h"

@interface PLPhotoLibraryPathManagerCore : NSObject <PLPhotoLibraryPathManager>

 {
    os_unfair_lock_s _folderCreationAndCapabilitiesLock;
    unsigned int _photoDirectoriesExists;
    unsigned int _privateSubDirectoriesExists;
    unsigned int _privateCacheSubDirectoriesExists;
    unsigned int _externalDirectoriesExists;
    unsigned int _internalDirectoriesExists;
    unsigned int _persistedAlbumDataDirectoryExists;
}


@property (copy) NSString *assetUUIDRecoveryMappingPath; // ivar: _assetUUIDRecoveryMappingPath
@property (copy) NSString *baseDirectory; // ivar: _baseDirectory
@property unsigned short bundleScope; // ivar: _bundleScope
@property (readonly, nonatomic) PLFileSystemCapabilities *capabilities; // ivar: _capabilities
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *iTunesPhotosDirectory; // ivar: _iTunesPhotosDirectory
@property (retain, nonatomic) NSString *legacyMemoriesRelatedSnapshotDirectory; // ivar: _legacyMemoriesRelatedSnapshotDirectory
@property (retain, nonatomic) NSString *legacyModelInterestDatabasePath; // ivar: _legacyModelInterestDatabasePath
@property (copy) NSURL *libraryURL; // ivar: _libraryURL
@property (readonly) Class superclass;


+(BOOL)backupSupportedForWellKnownLibraryIdentifier:(NSInteger)arg0 ;
+(BOOL)ignoreFilesystemCheckForWellKnownPhotoLibraryIdentifier:(NSInteger)arg0 ;
+(BOOL)isSupportedFileSystemAtURL:(id)arg0 ;
+(BOOL)isSystemLibraryURLDefined;
+(BOOL)isSystemPhotoLibraryURL:(id)arg0 ;
+(BOOL)setSystemLibraryURL:(id)arg0 options:(unsigned short)arg1 error:(*id)arg2 ;
+(BOOL)setTimeMachineExclusionAttribute:(BOOL)arg0 url:(id)arg1 error:(*id)arg2 ;
+(BOOL)shouldAutoUpgradeWellKnownPhotoLibraryIdentifier:(NSInteger)arg0 ;
+(BOOL)shouldProcessHighlightsForWellKnownPhotoLibraryIdentifier:(NSInteger)arg0 ;
+(NSInteger)wellKnownPhotoLibraryIdentifierForURL:(id)arg0 ;
+(NSUInteger)libraryCreateOptionsForWellKnownLibraryIdentifier:(NSInteger)arg0 ;
+(id)_constructLegacySystemPhotoLibraryURLFromUnresolvableBookmark:(id)arg0 ;
+(id)_legacySystemLibraryBookmarkData;
+(id)_legacySystemLibraryPath;
+(id)_photosLibrariesDataVaultPathForLibraryBundleName:(id)arg0 ;
+(id)basenameForSpatialOverCaptureFromOriginalBasename:(id)arg0 ;
+(id)libraryURLFromDatabaseURL:(id)arg0 ;
+(id)managedPathWithUuid:(char *)arg0 base:(char *)arg1 fileMarker:(char *)arg2 extension:(char *)arg3 ;
+(id)photosLibrariesDataVaultPath;
+(id)systemLibraryBaseDirectory;
+(id)systemLibraryURL;
+(id)systemLibraryURLIfResolvable;
+(id)wellKnownPhotoLibraryURLForIdentifier:(NSInteger)arg0 ;
+(void)_persistSystemPhotoLibraryPath:(id)arg0 ;
+(void)_updateSystemLibraryURLWithOldValue:(id)arg0 ;
+(void)initialize;
+(void)listenForSystemPhotoLibraryURLChanges;
+(void)recordPrevSystemLibraryPath:(id)arg0 ;
-(BOOL)createDirectoryOnceWithPath:(id)arg0 mask:(unsigned char)arg1 type:(unsigned char)arg2 error:(*id)arg3 ;
-(BOOL)createPathsForNewLibrariesWithError:(*id)arg0 ;
-(BOOL)isDataProtectionComplete;
-(BOOL)isDeviceRestoreSupported;
-(BOOL)shouldUseFileIdentifierForBundleScope:(unsigned short)arg0 ;
-(BOOL)updateExclusionAttributeWithPath:(id)arg0 mask:(unsigned char)arg1 type:(unsigned char)arg2 error:(*id)arg3 ;
-(BOOL)updateTimeMachineExclusionAttributeForExcludePath:(id)arg0 error:(*id)arg1 ;
-(id)_dataProtectionIndicatorFilePath;
-(id)assetAbbreviatedMetadataDirectoryForDirectory:(id)arg0 rootPath:(id)arg1 ;
-(id)assetAbbreviatedMetadataDirectoryForDirectory:(id)arg0 type:(unsigned char)arg1 bundleScope:(unsigned short)arg2 ;
-(id)assetBaseFilenameForAdjustmentFilePath:(id)arg0 ;
-(id)assetMainFilePathWithDirectory:(id)arg0 filename:(id)arg1 bundleScope:(unsigned short)arg2 ;
-(id)basePrivateDirectoryPath;
-(id)cloudRestoreBackgroundPhaseInProgressTokenPath;
-(id)cloudRestoreCompleteTokenPath;
-(id)cloudRestoreForegroundPhaseCompleteTokenPath;
-(id)convertPhotoLibraryPathType:(unsigned char)arg0 ;
-(id)externalDirectoryWithSubType:(unsigned char)arg0 ;
-(id)externalDirectoryWithSubType:(unsigned char)arg0 createIfNeeded:(BOOL)arg1 error:(*id)arg2 ;
-(id)externalDirectoryWithSubType:(unsigned char)arg0 leafType:(unsigned char)arg1 additionalPathComponents:(id)arg2 ;
-(id)externalDirectoryWithSubType:(unsigned char)arg0 leafType:(unsigned char)arg1 additionalPathComponents:(id)arg2 createIfNeeded:(BOOL)arg3 error:(*id)arg4 ;
-(id)iTunesPhotosLastSyncMetadataFilePath;
-(id)iTunesPhotosSyncCurrentLibraryUUIDPath;
-(id)iTunesPhotosSyncMetadataFilePath;
-(id)iTunesSyncedAssetMetadataThumbnailsDirectory;
-(id)iTunesSyncedAssetSmallThumbnailsDirectory;
-(id)iTunesSyncedAssetsDirectory;
-(id)iTunesSyncedFaceAlbumThumbnailsDirectory;
-(id)iTunesSyncedFaceDataDirectory;
-(id)init;
-(id)initWithLibraryURL:(id)arg0 bundleScope:(unsigned short)arg1 ;
-(id)internalDirectoryWithSubType:(unsigned char)arg0 additionalPathComponents:(id)arg1 ;
-(id)internalDirectoryWithSubType:(unsigned char)arg0 additionalPathComponents:(id)arg1 createIfNeeded:(BOOL)arg2 error:(*id)arg3 ;
-(id)knownDBPaths;
-(id)modelRestorePostProcessingCompleteTokenPath;
-(id)pathForCPLStatus;
-(id)pathToAssetAlbumOrderStructure;
-(id)pathToAssetsToAlbumsMapping;
-(id)pathsForClientAccess:(id)arg0 ;
-(id)pathsForExternalWriters;
-(id)pathsForPermissionCheck;
-(id)pathsGroupedByAssetBasePathFromFilePaths:(id)arg0 populateInvalidAdjustmentPaths:(id)arg1 ;
-(id)persistedAlbumDataDirectoryCreateIfNeeded:(BOOL)arg0 error:(*id)arg1 ;
-(id)photoDirectoryWithType:(unsigned char)arg0 ;
-(id)photoDirectoryWithType:(unsigned char)arg0 additionalPathComponents:(id)arg1 ;
-(id)photoDirectoryWithType:(unsigned char)arg0 createIfNeeded:(BOOL)arg1 error:(*id)arg2 ;
-(id)photoDirectoryWithType:(unsigned char)arg0 leafType:(unsigned char)arg1 additionalPathComponents:(id)arg2 ;
-(id)photoDirectoryWithType:(unsigned char)arg0 leafType:(unsigned char)arg1 additionalPathComponents:(id)arg2 createIfNeeded:(BOOL)arg3 error:(*id)arg4 ;
-(id)photoDirectoryWithType:(unsigned char)arg0 leafType:(unsigned char)arg1 createIfNeeded:(BOOL)arg2 error:(*id)arg3 ;
-(id)photoMetadataDirectoryForMediaInMainDirectory:(id)arg0 ;
-(id)photosAsideDatabasePath;
-(id)photosCPLDatabasePath;
-(id)photosDatabasePath;
-(id)privateCacheDirectoryWithSubType:(unsigned char)arg0 ;
-(id)privateCacheDirectoryWithSubType:(unsigned char)arg0 createIfNeeded:(BOOL)arg1 error:(*id)arg2 ;
-(id)privateDirectoryWithBundleIdentifier:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)privateDirectoryWithSubType:(unsigned char)arg0 ;
-(id)privateDirectoryWithSubType:(unsigned char)arg0 createIfNeeded:(BOOL)arg1 error:(*id)arg2 ;
-(id)privateDirectoryWithSubType:(unsigned char)arg0 leafType:(unsigned char)arg1 additionalPathComponents:(id)arg2 ;
-(id)privateDirectoryWithSubType:(unsigned char)arg0 leafType:(unsigned char)arg1 additionalPathComponents:(id)arg2 createIfNeeded:(BOOL)arg3 error:(*id)arg4 ;
-(id)privateDirectoryWithSubType:(unsigned char)arg0 leafType:(unsigned char)arg1 createIfNeeded:(BOOL)arg2 error:(*id)arg3 ;
-(id)readOnlyUrlWithIdentifier:(id)arg0 ;
-(id)simpleDCIMDirectory;
-(id)syncInfoPath;
-(id)temporaryDragAndDropDirectoryCreateIfNeeded:(BOOL)arg0 error:(*id)arg1 ;
-(id)temporaryFileBackedDebugDirectoryCreateIfNeeded:(BOOL)arg0 error:(*id)arg1 ;
-(unsigned char)photoLibraryPathTypeForBundleScope:(unsigned short)arg0 ;
-(void)enumerateBundleScopesWithBlock:(id)arg0 ;
-(void)externalDirectoryCreationMaskResetWithSubType:(unsigned char)arg0 ;
-(void)internalDirectoryCreationMaskResetWithSubType:(unsigned char)arg0 ;
-(void)obtainAccessAndWaitWithFileWithIdentifier:(id)arg0 mode:(unsigned char)arg1 toURLWithHandler:(id)arg2 ;
-(void)photoDirectoryCreationMaskResetWithType:(unsigned char)arg0 ;
-(void)postInit;
-(void)privateCacheDirectoryCreationMaskResetWithSubType:(unsigned char)arg0 ;
-(void)privateDirectoryCreationMaskResetWithSubType:(unsigned char)arg0 ;
-(void)setDataProtectionComplete:(BOOL)arg0 ;
-(void)setExtendedAttributesWithIdentifier:(id)arg0 ;
-(void)setExtendedAttributesWithIdentifier:(id)arg0 andURL:(id)arg1 ;


@end


#endif