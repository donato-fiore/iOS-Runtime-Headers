// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPHOTOLIBRARYPATHMANAGERUBF_H
#define PLPHOTOLIBRARYPATHMANAGERUBF_H

@class NSString, NSFileManager;


#import "PLPhotoLibraryPathManagerCore.h"

@interface PLPhotoLibraryPathManagerUBF : PLPhotoLibraryPathManagerCore {
    NSString *_databaseDirectory;
    NSString *_searchDatabaseDirectory;
    NSString *_originalsDirectory;
    NSString *_privateDirectory;
    NSString *_privateCacheDirectory;
    NSString *_scopesBaseDirectory;
    NSString *_scopesPhotoCloudSharingDirectory;
    NSString *_scopesPhotoCloudSharingDataDirectory;
    NSString *_scopesPhotoCloudSharingMetadataDirectory;
    NSString *_scopesPhotoCloudSharingCacheDirectory;
    NSString *_scopesSyndicationDirectory;
    NSString *_scopesMomentSharedDirectory;
    NSString *_resourcesDirectory;
    NSString *_journalsDirectory;
    NSString *_rendersDirectory;
    NSString *_derivativesDirectory;
    NSString *_derivativesThumbsDirectory;
    NSString *_derivativesMasterThumbsDirectory;
    NSString *_resourcesCPLDataDirectory;
    NSString *_resourcesPhotoStreamsDataDirectory;
    NSString *_resourcesProjectsDataDirectory;
    NSString *_resourcesProjectsLegacyDirectory;
    NSString *_resourcesAnalyticsDirectory;
    NSString *_resourcesPartialVideoDirectory;
    NSString *_externalDirectory;
    NSString *_internalDirectory;
    NSFileManager *_fm;
}




-(BOOL)createPathsForNewLibrariesWithError:(*id)arg0 ;
-(BOOL)isDeviceRestoreSupported;
-(BOOL)shouldUseFileIdentifierForBundleScope:(unsigned short)arg0 ;
-(BOOL)updateTimeMachineExclusionAttributeForExcludePath:(id)arg0 error:(*id)arg1 ;
-(id)_externalDirectoryWithBundleIdentifier:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)_scopedInternalPathManagerWithBundleScope:(unsigned short)arg0 ;
-(id)addToPath:(id)arg0 leafType:(unsigned char)arg1 additionalPathComponents:(id)arg2 ;
-(id)assetAbbreviatedMetadataDirectoryForDirectory:(id)arg0 type:(unsigned char)arg1 bundleScope:(unsigned short)arg2 ;
-(id)assetMainFilePathWithDirectory:(id)arg0 filename:(id)arg1 bundleScope:(unsigned short)arg2 ;
-(id)basePrivateDirectoryPath;
-(id)convertPhotoLibraryPathType:(unsigned char)arg0 ;
-(id)corePathsWithError:(*id)arg0 directDatabaseAccess:(BOOL)arg1 limitedLibrary:(BOOL)arg2 ;
-(id)extendedPathsWithError:(*id)arg0 ;
-(id)externalDirectoryWithSubType:(unsigned char)arg0 leafType:(unsigned char)arg1 additionalPathComponents:(id)arg2 ;
-(id)initWithLibraryURL:(id)arg0 bundleScope:(unsigned short)arg1 ;
-(id)internalDirectoryWithSubType:(unsigned char)arg0 additionalPathComponents:(id)arg1 ;
-(id)pathToAssetsToAlbumsMapping;
-(id)pathsForClientAccess:(id)arg0 ;
-(id)pathsForExternalWriters;
-(id)pathsForPermissionCheck;
-(id)photoDirectoryWithType:(unsigned char)arg0 leafType:(unsigned char)arg1 additionalPathComponents:(id)arg2 ;
-(id)photosDatabasePath;
-(id)privateCacheDirectoryWithSubType:(unsigned char)arg0 ;
-(id)privateDirectoryWithSubType:(unsigned char)arg0 leafType:(unsigned char)arg1 additionalPathComponents:(id)arg2 ;
-(id)readOnlyUrlWithIdentifier:(id)arg0 ;
-(id)syncInfoPath;
-(id)urlWithIdentifier:(id)arg0 ;
-(unsigned char)photoLibraryPathTypeForBundleScope:(unsigned short)arg0 ;
-(void)enumerateBundleScopesWithBlock:(id)arg0 ;
-(void)obtainAccessAndWaitWithFileWithIdentifier:(id)arg0 mode:(unsigned char)arg1 toURLWithHandler:(id)arg2 ;
-(void)setExtendedAttributesWithIdentifier:(id)arg0 ;
-(void)setExtendedAttributesWithIdentifier:(id)arg0 andURL:(id)arg1 ;


@end


#endif