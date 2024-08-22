// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLVALIDATEDSAVEDASSETTYPE_H
#define PLVALIDATEDSAVEDASSETTYPE_H


#import <Foundation/Foundation.h>


@interface PLValidatedSavedAssetType : NSObject



+(NSUInteger)mapSavedAssetType:(short)arg0 unknown:(NSUInteger)arg1 photoBooth:(NSUInteger)arg2 photoStream:(NSUInteger)arg3 camera:(NSUInteger)arg4 cloudShared:(NSUInteger)arg5 cameraConnectionKit:(NSUInteger)arg6 cloudPhotoLibrary:(NSUInteger)arg7 wallpaper_UNUSED:(NSUInteger)arg8 momentShared:(NSUInteger)arg9 placeholder:(NSUInteger)arg10 referenced:(NSUInteger)arg11 alternate:(NSUInteger)arg12 guest:(NSUInteger)arg13 companionSynced:(NSUInteger)arg14 legacyImport:(NSUInteger)arg15 unrecognized:(NSUInteger)arg16 ;
+(id)predicateArrayArgumentForMask:(unsigned short)arg0 ;
+(id)predicateForExcludeMask:(unsigned short)arg0 useIndex:(BOOL)arg1 ;
+(id)predicateForExcludeMask:(unsigned short)arg0 useIndex:(BOOL)arg1 keyPathPrefix:(id)arg2 ;
+(id)predicateForExcludeSavedAssetType:(short)arg0 ;
+(id)predicateForIncludeMask:(unsigned short)arg0 useIndex:(BOOL)arg1 ;
+(id)predicateForIncludeMask:(unsigned short)arg0 useIndex:(BOOL)arg1 keyPathPrefix:(id)arg2 ;
+(id)predicateForIncludeMask:(unsigned short)arg0 useIndex:(BOOL)arg1 keyPathPrefix:(id)arg2 formatPrefix:(id)arg3 ;
+(id)predicateForIncludeSavedAssetType:(short)arg0 ;
+(id)subpredicatesForExcludeMask:(unsigned short)arg0 ;
+(id)subpredicatesForIncludeMask:(unsigned short)arg0 ;
+(short)defaultSavedAssetTypeForConsolidatedAssets;
+(short)defaultSavedAssetTypeForLegacyMigration;
+(short)defaultSavedAssetTypeForPLAssetsSaver;
+(short)defaultSavedAssetTypeForPhotoKitAssetCreationRequest;
+(short)defaultSavedAssetTypeForUnknownFilesystemImportAssets;
+(short)defaultSavedAssetTypeForUnspecifiedImageWriterJobs;
+(short)savedAssetTypeForAssetsInCPLAssetsDirectory;
+(short)savedAssetTypeForAwakeFromInsert;
+(short)savedAssetTypeForCameraAsset;
+(short)savedAssetTypeForCloudPhotoLibraryAsset;
+(short)savedAssetTypeForCloudSharedAsset;
+(short)savedAssetTypeForCompanionSyncedAsset;
+(short)savedAssetTypeForDownloadedPhotoStreamAssets;
+(short)savedAssetTypeForDuplicateAsAlternateAsset;
+(short)savedAssetTypeForFinderSyncedAsset;
+(short)savedAssetTypeForImportedByCameraConnectionKit;
+(short)savedAssetTypeForInsertIntoSyndicationLibrary;
+(short)savedAssetTypeForMomentSharedAsset;
+(short)savedAssetTypeForPhotoBoothAsset;
+(short)savedAssetTypeForPhotoStreamPhotoSavedToCameraRoll;
+(short)savedAssetTypeForPlaceholder;
+(short)savedAssetTypeForPromoteToGuestAsset;
+(short)savedAssetTypeForPromoteToUserLibrary;
+(short)savedAssetTypeForReferencedImport;
+(unsigned short)maskForAddAssetToLibraryScopeIfShareEverythingPolicyEnabled;
+(unsigned short)maskForAddingLocalVideoKeyFrameResourceExclusions;
+(unsigned short)maskForAllPhotosAlbum;
+(unsigned short)maskForAllowedForAnalysis;
+(unsigned short)maskForAllowedToPromoteToGuestAsset;
+(unsigned short)maskForAllowedToPromoteToUserLibrary;
+(unsigned short)maskForAllowedToResetGuestAssetPromotion;
+(unsigned short)maskForAssetsAllowingLockedResourceTransfer;
+(unsigned short)maskForAssetsEligibleForCloudKitTransport;
+(unsigned short)maskForAssetsEligibleForCloudKitTransportWithoutMomentSharesAndPlaceholders;
+(unsigned short)maskForAssetsExcludedFromOTARestore;
+(unsigned short)maskForAssetsIncludedInMoments;
+(unsigned short)maskForAutoDeleteAssetsUponMomentShareTrash;
+(unsigned short)maskForAvalancheSupportedAssets;
+(unsigned short)maskForBurstsAlbumExclusions;
+(unsigned short)maskForCameraAsset;
+(unsigned short)maskForCameraConnectionKitAsset;
+(unsigned short)maskForCanDeleteEmptyPathForCorruptAssetsDuringFilesystemImport;
+(unsigned short)maskForCloudPhotoLibraryAsset;
+(unsigned short)maskForCloudPhotoLibrarySizesFromDBExclusions;
+(unsigned short)maskForCloudSharedAsset;
+(unsigned short)maskForCloudSharedBundleScope;
+(unsigned short)maskForCompanionSyncedAsset;
+(unsigned short)maskForCompleteStateIsRelevant;
+(unsigned short)maskForCouldBeStoredInDCIM;
+(unsigned short)maskForDupeAnalysisExclusions;
+(unsigned short)maskForDupeAnalysisNormalAssetsExclusions;
+(unsigned short)maskForDupeAnalysisUseFakeHash;
+(unsigned short)maskForDuplicateProcessingExclusions;
+(unsigned short)maskForFavoritesAlbumExclusions;
+(unsigned short)maskForFetchingDuplicatePhotoStreamPhotosForPhotos;
+(unsigned short)maskForFinderSyncedAsset;
+(unsigned short)maskForFixIncorrectAddedDateExclusions;
+(unsigned short)maskForFixupAssetPersistenceExclusions;
+(unsigned short)maskForGenerateAddedDateExclusions;
+(unsigned short)maskForGuestAsset;
+(unsigned short)maskForIncludeInCPLCounts;
+(unsigned short)maskForIsValidForBackup;
+(unsigned short)maskForIsValidForFileSystemPersistence;
+(unsigned short)maskForLibraryScopeRuleEvaluationExclusions;
+(unsigned short)maskForMigrateLegacyVideoAdjustmentsExclusions;
+(unsigned short)maskForMomentShareDeDupe;
+(unsigned short)maskForMomentSharedAsset;
+(unsigned short)maskForNotifyALAssetsLibraryWithChangesCloudSharedExclusions;
+(unsigned short)maskForNotifyALAssetsLibraryWithChangesExclusions;
+(unsigned short)maskForPLFetchingAlbumExclusions;
+(unsigned short)maskForPLSyncClientIncompleteAssetExclusions;
+(unsigned short)maskForPhotoBoothAsset;
+(unsigned short)maskForPhotoStreamAsset;
+(unsigned short)maskForPlaceholderAsset;
+(unsigned short)maskForPlacesAlbum;
+(unsigned short)maskForPopulateFaceRegionsExclusions;
+(unsigned short)maskForRecentlyAddedAlbumExclusions;
+(unsigned short)maskForRecentlyEditedAlbumExclusions;
+(unsigned short)maskForRecoverSupplementalResourcesForAsset;
+(unsigned short)maskForReferencedAsset;
+(unsigned short)maskForSearchIndexExclusions;
+(unsigned short)maskForSelfiesAlbumExclusions;
+(unsigned short)maskForSharedLibraryExclusions;
+(unsigned short)maskForSmartAlbumExclusions;
+(unsigned short)maskForStoreDemoContent;
+(unsigned short)maskForSuppressPtpInfo;
+(unsigned short)maskForSyndicationIdentifierFetchExclusions;
+(unsigned short)maskForSyndicationSyncWorkerInSyndicationLibrary;
+(unsigned short)maskForSyndicationSyncWorkerInSystemPhotoLibrary;
+(unsigned short)maskForTagScreenshotsExclusions;
+(unsigned short)maskForTriggerRebuildForPathCorruptionExclusions;
+(unsigned short)maskForUpdateMogulSubtypeExclusions;
+(unsigned short)maskForUserLibrary;
+(unsigned short)maskForValidSavedAssetTypes;
+(unsigned short)maskForVideosAlbumExclusions;
+(unsigned short)validatedSavedAssetTypeMaskUnknown:(BOOL)arg0 photoBooth:(BOOL)arg1 photoStream:(BOOL)arg2 camera:(BOOL)arg3 cloudShared:(BOOL)arg4 cameraConnectionKit:(BOOL)arg5 cloudPhotoLibrary:(BOOL)arg6 wallpaper_UNUSED:(BOOL)arg7 momentShared:(BOOL)arg8 placeholder:(BOOL)arg9 referenced:(BOOL)arg10 alternate:(BOOL)arg11 guest:(BOOL)arg12 companionSynced:(BOOL)arg13 legacyImport:(BOOL)arg14 ;
// +(void)executeBlockForSavedAssetType:(short)arg0 unknown:(id)arg1 photoBooth:(unk)arg2 photoStream:(id)arg3 camera:(unk)arg4 cloudShared:(id)arg5 cameraConnectionKit:(unk)arg6 cloudPhotoLibrary:(id)arg7 wallpaper_UNUSED:(unk)arg8 momentShared:(id)arg9 placeholder:(unk)arg10 referenced:(id)arg11 alternate:(unk)arg12 guest:(id)arg13 companionSynced:(unk)arg14 legacyImport:(id)arg15 unrecognized:(unk)arg16  ;


@end


#endif