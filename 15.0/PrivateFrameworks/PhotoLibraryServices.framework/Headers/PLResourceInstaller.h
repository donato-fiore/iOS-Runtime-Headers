// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLRESOURCEINSTALLER_H
#define PLRESOURCEINSTALLER_H


#import <Foundation/Foundation.h>


@interface PLResourceInstaller : NSObject



+(BOOL)_installInternalResourcesForExistingAsset:(id)arg0 assumeNoExistingResources:(BOOL)arg1 referencedResourceURLs:(id)arg2 includeLegacyCloudResources:(BOOL)arg3 outResourcesStoreCount:(*NSUInteger)arg4 error:(*id)arg5 ;
+(BOOL)_isPenultimateVersionFromCPLType:(NSUInteger)arg0 ;
+(BOOL)createInternalResourcesForExistingAssetsWithNoExistingResourcesInStore:(id)arg0 migrator:(id)arg1 ;
+(BOOL)installInternalResourcesForExistingAsset:(id)arg0 assumeNoExistingResources:(BOOL)arg1 referencedResourceURLs:(id)arg2 error:(*id)arg3 ;
+(BOOL)installInternalResourcesForExistingAssetsWithNoExistingResourcesInManagedObjectContext:(id)arg0 migrator:(id)arg1 ;
+(BOOL)installSupplementalResourceForExistingFileAtURL:(id)arg0 ptpTrashedState:(NSInteger)arg1 index:(id)arg2 forAsset:(id)arg3 imageOrientation:(id)arg4 resultingResource:(*id)arg5 error:(*id)arg6 ;
+(BOOL)isValidCPLResourceTypeForPersistence:(NSUInteger)arg0 ;
+(BOOL)reconsiderSavedAssetTypeInStore:(id)arg0 migrator:(id)arg1 ;
+(BOOL)recoverSupplementalResourcesForAsset:(id)arg0 usingSidecarFinder:(id)arg1 outResourcesStoreCount:(*NSUInteger)arg2 error:(*id)arg3 ;
+(BOOL)removeLegacyCloudResourcesInStore:(id)arg0 migrator:(id)arg1 ;
+(BOOL)resetImageRequestHintsInContext:(id)arg0 ;
+(BOOL)resetInternalResourcesInStore:(id)arg0 resetUTIs:(BOOL)arg1 resetCodecs:(BOOL)arg2 resetMasters:(BOOL)arg3 migrator:(id)arg4 ;
+(NSUInteger)_getURLDataLength:(id)arg0 ;
+(NSUInteger)derivativeCPLTypeFromRecipeID:(unsigned int)arg0 version:(unsigned int)arg1 ;
+(NSUInteger)nonDerivativeCPLTypeFromResourceType:(unsigned int)arg0 version:(unsigned int)arg1 uniformTypeIdentifier:(id)arg2 ;
+(id)_predicateForUnrecoverableResources;
+(id)_speculativePathForPenultimateFullsizeRenderImageFileForAsset:(id)arg0 ;
+(id)_validatedExternalResourceFromSupplementalFileURL:(id)arg0 withUTI:(id)arg1 ptpTrashedState:(NSInteger)arg2 index:(id)arg3 asset:(id)arg4 ;
+(id)_validatedExternalResourceIfPresentForAudioOrUnknownAsset:(id)arg0 ;
+(id)_validatedExternalResourcesFromLocalImageOrVideoAsset:(id)arg0 referencedResourceURLs:(id)arg1 ;
+(id)_validatedExternalResourcesFromSharedStreamAsset:(id)arg0 ;
+(id)externalResourcesForExistingAsset:(id)arg0 referencedResourceURLs:(id)arg1 ;
+(id)generateAdjustedFullSizeRenderResourceForFilePath:(id)arg0 requireFileToBePresent:(BOOL)arg1 basedOnFullSizeWidth:(NSInteger)arg2 andHeight:(NSInteger)arg3 context:(id)arg4 ;
+(id)generateExternalResourceFromCPLResource:(id)arg0 asset:(id)arg1 fromAdjustedSet:(BOOL)arg2 ;
+(id)generateExternalResourceFromCPLResource:(id)arg0 cloudMaster:(id)arg1 masterResources:(id)arg2 ;
+(id)generateValidatedExternalImageResourceOfType:(unsigned int)arg0 forFilePath:(id)arg1 requireFileToBePresent:(BOOL)arg2 version:(unsigned int)arg3 basedOnFullSizeWidth:(NSInteger)arg4 andHeight:(NSInteger)arg5 isNativeColorSpace:(BOOL)arg6 isLosslessEncoding:(BOOL)arg7 recipe:(id)arg8 assetKind:(short)arg9 context:(id)arg10 ;
+(id)generateValidatedExternalOtherResourceOfType:(unsigned int)arg0 forFilePath:(id)arg1 uti:(id)arg2 requireFileToBePresent:(BOOL)arg3 version:(unsigned int)arg4 ;
+(id)generateVideoResourcesFromVideoAsset:(id)arg0 referencedVideoPath:(id)arg1 ;
+(id)onDemand_installAdjustedDeferredFullSizeVideoComplementResourceForAsset:(id)arg0 ;
+(id)onDemand_installAdjustedFullSizeVideoComplementResourceIfPresentForAsset:(id)arg0 ;
+(id)onDemand_installLocalVideoKeyFrameForAsset:(id)arg0 ;
+(id)onDemand_installOriginalAdjustmentResourceIfPresentForAsset:(id)arg0 ;
+(id)onDemand_installOriginalResourceForSyndicationAsset:(id)arg0 ;
+(id)onDemand_installOriginalSOCImagePresentForAsset:(id)arg0 referencedResourceURLs:(id)arg1 ;
+(id)onDemand_installOriginalSOCVideoComplementPresentForAsset:(id)arg0 referencedResourceURLs:(id)arg1 ;
+(id)onDemand_installOriginalSOCVideoPresentForAsset:(id)arg0 referencedResourceURLs:(id)arg1 ;
+(id)onDemand_installOriginalVideoComplementForSyndicationAsset:(id)arg0 contentType:(id)arg1 ;
+(id)onDemand_installOriginalVideoComplementResourceIfPresentForAsset:(id)arg0 ;
+(id)onDemand_installPrimaryImageResourceWithRecipe:(id)arg0 version:(unsigned int)arg1 forAsset:(id)arg2 ;
+(id)onDemand_installPrimaryImageResourceWithRecipe:(id)arg0 version:(unsigned int)arg1 forAsset:(id)arg2 requireFileToBePresent:(BOOL)arg3 ;
+(id)validatedExternalResourceForLocalVideoIfPresentAtPath:(id)arg0 context:(id)arg1 ;
+(id)validatedExternalResourceFromExternalResourceCloudAttributes:(id)arg0 cplType:(NSUInteger)arg1 assetType:(short)arg2 uti:(id)arg3 originalOrientation:(unsigned int)arg4 orientation:(unsigned int)arg5 originalColorSpace:(id)arg6 resourceWidth:(NSUInteger)arg7 resourceHeight:(NSUInteger)arg8 assetWidth:(NSUInteger)arg9 assetHeight:(NSUInteger)arg10 resourceFingerprint:(id)arg11 resourceSize:(NSUInteger)arg12 isAvailable:(BOOL)arg13 fromAdjustedSet:(BOOL)arg14 resourceURL:(id)arg15 cloudMaster:(id)arg16 isForMigration:(BOOL)arg17 context:(id)arg18 ;
+(unsigned int)recipeIDFromCPLResourceType:(NSUInteger)arg0 assetType:(short)arg1 fromAdjustedSet:(BOOL)arg2 ;
+(unsigned int)resourceTypeFromCPLType:(NSUInteger)arg0 assetType:(short)arg1 ;
+(unsigned int)resourceVersionFromCPLType:(NSUInteger)arg0 fromAdjustedSet:(BOOL)arg1 ;
+(void)_applyColorSpaceAndCodecToNonDerivativeExternalResource:(id)arg0 fromCloudMaster:(id)arg1 originalColorSpace:(id)arg2 ;
+(void)_applyColorSpaceAndCodecUsingFileToExternalResource:(id)arg0 managedObjectContext:(id)arg1 ;
+(void)_applyImageIOMetadataToExternalResource:(id)arg0 fromFileURL:(id)arg1 assumedWidth:(NSInteger)arg2 assumedHeight:(NSInteger)arg3 recipe:(id)arg4 assetKind:(short)arg5 context:(id)arg6 ;
+(void)_applyImageOrientationToExternalResource:(id)arg0 originalOrientation:(unsigned int)arg1 assetOrienation:(unsigned int)arg2 ;
+(void)_recipeAndDerivativeStateFromCPLResourceType:(NSUInteger)arg0 fromAdjustedSet:(BOOL)arg1 assetType:(short)arg2 recipeID:(*unsigned int)arg3 ;
+(void)onDemand_installAdjustedFullSizeRenderResourceAtFilePath:(id)arg0 forAsset:(id)arg1 ;


@end


#endif