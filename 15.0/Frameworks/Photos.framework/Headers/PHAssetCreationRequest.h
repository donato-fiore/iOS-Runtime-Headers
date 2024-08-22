// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASSETCREATIONREQUEST_H
#define PHASSETCREATIONREQUEST_H

@class NSMutableArray, NSMutableDictionary, NSDictionary, NSNumber, NSString, NSManagedObjectID;
@protocol PHInsertChangeRequest;


#import "PHAssetChangeRequest.h"
#import "PHAssetResourceBag.h"
#import "PHAssetCreationDerivativeContext.h"
#import "PHAssetCreationPhotoStreamPublishingRequest.h"
#import "PHAssetCreationAdjustmentBakeInOptions.h"
#import "PHAssetCreationMetadataCopyOptions.h"
#import "PHMomentShare.h"
#import "PHRelationshipChangeRequestHelper.h"

@interface PHAssetCreationRequest : PHAssetChangeRequest <PHInsertChangeRequest>

 {
    NSMutableArray *_assetResources;
    PHAssetResourceBag *_assetResourceBag;
    NSMutableDictionary *_movedFiles;
    BOOL _duplicateAllowsPrivateMetadata;
    BOOL _shouldCreateScreenshot;
    PHAssetCreationDerivativeContext *_derivativeContext;
}


@property (readonly, nonatomic) NSDictionary *_movedFiles;
@property (retain, nonatomic, setter=_setPhotoStreamPublishingRequest:) PHAssetCreationPhotoStreamPublishingRequest *_photoStreamPublishingRequest; // ivar: __photoStreamPublishingRequest
@property (readonly, nonatomic) NSInteger accessScopeOptionsRequirement;
@property (copy, nonatomic, setter=_setAdjustmentBakeInOptions:) PHAssetCreationAdjustmentBakeInOptions *adjustmentBakeInOptions; // ivar: _adjustmentBakeInOptions
@property (retain, nonatomic) NSNumber *assetExistsWithSyndicationIdentifier; // ivar: _assetExistsWithSyndicationIdentifier
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSString *conversationID; // ivar: _conversationID
@property (nonatomic) BOOL createAsCompanionSyncedAsset; // ivar: _createAsCompanionSyncedAsset
@property (retain, nonatomic) NSDictionary *customAssetProperties; // ivar: _customAssetProperties
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, setter=_setDuplicateAllowsPrivateMetadata:) BOOL duplicateAllowsPrivateMetadata;
@property (nonatomic, setter=_setDuplicateAsAlternateAsset:) BOOL duplicateAsAlternateAsset; // ivar: _duplicateAsAlternateAsset
@property (nonatomic, setter=_setDuplicateAsOriginal:) BOOL duplicateAsOriginal; // ivar: _duplicateAsOriginal
@property (retain, nonatomic, setter=_setDuplicateAssetIdentifier:) NSString *duplicateAssetIdentifier; // ivar: _duplicateAssetIdentifier
@property (nonatomic, setter=_setDuplicateAssetPhotoLibraryType:) unsigned short duplicateAssetPhotoLibraryType; // ivar: _duplicateAssetPhotoLibraryType
@property (nonatomic, setter=_setDuplicateLivePhotoAsStill:) BOOL duplicateLivePhotoAsStill; // ivar: _duplicateLivePhotoAsStill
@property (nonatomic, setter=_setDuplicateSinglePhotoFromBurst:) BOOL duplicateSinglePhotoFromBurst; // ivar: _duplicateSinglePhotoFromBurst
@property (nonatomic, setter=_setDuplicateSpatialOverCaptureResources:) BOOL duplicateSpatialOverCaptureResources; // ivar: _duplicateSpatialOverCaptureResources
@property (nonatomic, setter=_setDuplicateStillSourceTime:) ? duplicateStillSourceTime; // ivar: _duplicateStillSourceTime
@property (readonly, nonatomic) NSString *forcePairingIdentifier; // ivar: _forcePairingIdentifier
@property (readonly, nonatomic) NSString *guestAssetUUID; // ivar: _guestAssetUUID
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *importSessionID; // ivar: _importSessionID
@property (nonatomic) short importedBy; // ivar: _importedBy
@property (copy, nonatomic) NSString *importedByBundleIdentifier; // ivar: _importedByBundleIdentifier
@property (readonly) BOOL isNewRequest;
@property (retain, nonatomic, getter=_limitedLibraryFetchFilterObjectID, setter=_setLimitedLibraryFetchFilterObjectID:) NSManagedObjectID *limitedLibraryFetchFilterObjectID; // ivar: _limitedLibraryFetchFilterObjectID
@property (readonly, nonatomic) NSString *managedEntityName;
@property (copy, nonatomic, setter=_setMetadataCopyOptions:) PHAssetCreationMetadataCopyOptions *metadataCopyOptions; // ivar: _metadataCopyOptions
@property (retain, nonatomic) PHMomentShare *momentShare; // ivar: _momentShare
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *momentShareHelper; // ivar: _momentShareHelper
@property (readonly, nonatomic) NSString *momentShareUUID; // ivar: _momentShareUUID
@property (readonly, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (nonatomic, getter=_shouldCreateScreenshot, setter=_setShouldCreateScreenshot:) BOOL shouldCreateScreenshot;
@property (nonatomic) BOOL shouldPerformConcurrentWork;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *syndicationIdentifier; // ivar: _syndicationIdentifier


+(BOOL)supportsAssetResourceTypes:(id)arg0 ;
+(BOOL)supportsImportAssetResourceTypes:(id)arg0 ;
+(NSInteger)_originalResourceTypeFromAdjustedResourceType:(NSInteger)arg0 sourceAssetIsLoopingVideo:(BOOL)arg1 ;
+(id)_creationOptionsFromExternalResource:(id)arg0 andSourceUrl:(id)arg1 ;
+(id)_creationRequestForAssetUsingUUID:(id)arg0 ;
+(id)_imageIOThumbnailCreationOptionsFromDerivativeContext:(id)arg0 ;
+(id)_jpegDataFromRAWData:(id)arg0 derivativeContext:(id)arg1 ;
+(id)_uuidForAssetWithSyndicationIdentifier:(id)arg0 inLibrary:(id)arg1 ;
+(id)creationRequestForAsset;
+(id)creationRequestForAssetCopyFromAsset:(id)arg0 ;
+(id)creationRequestForAssetCopyFromAsset:(id)arg0 options:(id)arg1 ;
+(id)creationRequestForAssetFromAssetBundle:(id)arg0 ;
+(id)creationRequestForAssetFromGuestAsset:(id)arg0 ;
+(id)creationRequestForAssetFromGuestAsset:(id)arg0 checkForMomentShareAsset:(BOOL)arg1 ;
+(id)creationRequestForAssetFromImage:(id)arg0 ;
+(id)creationRequestForAssetFromImageAtFileURL:(id)arg0 ;
+(id)creationRequestForAssetFromImageData:(id)arg0 ;
+(id)creationRequestForAssetFromImageData:(id)arg0 usingUUID:(id)arg1 ;
+(id)creationRequestForAssetFromScreenshotImage:(id)arg0 ;
+(id)creationRequestForAssetFromVideoAtFileURL:(id)arg0 ;
+(id)creationRequestForAssetFromVideoComplementBundle:(id)arg0 ;
+(id)creationRequestForAssetWithSyndicationIdentifier:(id)arg0 ;
+(id)creationRequestForAssetWithUUID:(id)arg0 ;
-(?)_managedAssetFromPrimaryResourceData:(?)arg0 withUUID:(?)arg1 photoLibrary:(?)arg2 mainFileMetadata:(?)arg3 getImageSourceimageData;
-(BOOL)_accessWritableURLForUUID:(id)arg0 imageUTI:(id)arg1 originalFilename:(id)arg2 photoLibrary:(id)arg3 withHandler:(id)arg4 ;
-(BOOL)_createAssetAsAdjusted:(id)arg0 fromValidatedResources:(id)arg1 mainFileMetadata:(id)arg2 error:(*id)arg3 ;
-(BOOL)_createAssetAsPhotoIris:(id)arg0 fromValidatedResources:(id)arg1 mainFileMetadata:(id)arg2 error:(*id)arg3 ;
-(BOOL)_createAudioResourceForAsset:(id)arg0 fromValidatedResources:(id)arg1 photoLibrary:(id)arg2 error:(*id)arg3 ;
-(BOOL)_createOriginalResourceForAsset:(id)arg0 fromValidatedResource:(id)arg1 resourceType:(unsigned int)arg2 photoLibrary:(id)arg3 destinationURL:(id)arg4 error:(*id)arg5 ;
-(BOOL)_createRAWSidecarForAsset:(id)arg0 fromValidatedResources:(id)arg1 mainFileMetadata:(id)arg2 photoLibrary:(id)arg3 error:(*id)arg4 ;
-(BOOL)_createSocResourceForAsset:(id)arg0 fromValidatedResources:(id)arg1 photoLibrary:(id)arg2 error:(*id)arg3 ;
-(BOOL)_createXmpResourceForAsset:(id)arg0 fromValidatedResources:(id)arg1 photoLibrary:(id)arg2 error:(*id)arg3 ;
-(BOOL)_ingestOriginalInPlaceSrcURL:(id)arg0 dstURL:(id)arg1 asset:(id)arg2 error:(*id)arg3 ;
-(BOOL)_populateDuplicatingAssetCreationRequest:(id)arg0 photoLibrary:(id)arg1 error:(*id)arg2 ;
-(BOOL)_restoreMovedFilesOnFailure;
-(BOOL)_validateNewObjectUUID:(id)arg0 inPhotoLibrary:(id)arg1 error:(*id)arg2 ;
-(BOOL)_writeDataToDisk:(id)arg0 imageUTIType:(id)arg1 exifProperties:(id)arg2 mainFileURL:(id)arg3 thumbnailData:(id)arg4 ;
-(BOOL)applyMutationsToManagedObject:(id)arg0 photoLibrary:(id)arg1 error:(*id)arg2 ;
-(BOOL)isDuplicateAssetCreationRequest;
-(BOOL)isNew;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(NSInteger)_mediaTypeForCreatedAsset;
-(id)_createAssetFromValidatedResources:(id)arg0 withUUID:(id)arg1 assetAlreadyExistsAsPlaceholder:(BOOL)arg2 inPhotoLibrary:(id)arg3 error:(*id)arg4 ;
-(id)_exifPropertiesFromSourceImageDataExifProperties:(id)arg0 ;
-(id)_externalLivePhotoResourceForAsset:(id)arg0 ;
-(id)_ingestOriginalFromSrcURL:(id)arg0 toDstURL:(id)arg1 useSecureMove:(BOOL)arg2 resource:(id)arg3 resourceType:(unsigned int)arg4 asset:(id)arg5 error:(*id)arg6 ;
-(id)_mutableMomentShareObjectIDsAndUUIDs;
-(id)_secureMove:(BOOL)arg0 assetResource:(id)arg1 photoLibrary:(id)arg2 error:(*id)arg3 ;
-(id)_secureMove:(BOOL)arg0 fileAtURL:(id)arg1 toURL:(id)arg2 capabilities:(id)arg3 error:(*id)arg4 ;
-(id)createAssetFromValidatedResources:(id)arg0 withUUID:(id)arg1 assetAlreadyExistsAsPlaceholder:(BOOL)arg2 inPhotoLibrary:(id)arg3 error:(*id)arg4 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)duplicatedAssetResourcesFromAsset:(id)arg0 stillSourceTime:(struct ? )arg1 flattenLivePhotoIntoStillPhoto:(BOOL)arg2 duplicateAsOriginal:(BOOL)arg3 duplicateWithAdjustmentsBakedIn:(BOOL)arg4 duplicatePhotoAsData:(BOOL)arg5 error:(*id)arg6 ;
-(id)initForNewObject;
-(id)initForNewObjectWithUUID:(id)arg0 ;
-(id)initWithHelper:(id)arg0 ;
-(id)initWithXPCDict:(id)arg0 request:(id)arg1 clientAuthorization:(id)arg2 ;
-(id)makeSubstitueRenderImageFileFromPath:(id)arg0 primaryResource:(id)arg1 fileSuffix:(id)arg2 error:(*id)arg3 ;
-(id)placeholderForCreatedAsset;
-(short)_savedAssetTypeForAsset;
-(struct CGImageSource *)_imageSourceForDerivatives;
-(void)_addResourceWithType:(NSInteger)arg0 data:(id)arg1 orFileURL:(id)arg2 options:(id)arg3 ;
-(void)_copyMediaAnalysisProperties:(id)arg0 ;
-(void)_copyMetadataFromAsset:(id)arg0 ;
-(void)_copyUserSpecificMetadataFromAsset:(id)arg0 ;
-(void)_didMoveFileFromURL:(id)arg0 toURL:(id)arg1 ;
-(void)_prepareMomentShareHelperIfNeeded;
-(void)_resetMovedFiles;
-(void)_setupDerivativeCreationContextForAsset:(id)arg0 imageSource:(struct CGImageSource *)arg1 imageData:(id)arg2 ;
-(void)_updateMutationsForDuplicatingPrivateMetadataFromAsset:(id)arg0 ;
-(void)addResourceWithType:(NSInteger)arg0 data:(id)arg1 options:(id)arg2 ;
-(void)addResourceWithType:(NSInteger)arg0 fileURL:(id)arg1 options:(id)arg2 ;
-(void)encodeToXPCDict:(id)arg0 ;
-(void)finalizeRequestWithBatchSuccess:(BOOL)arg0 ;
-(void)performConcurrentWork;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg0 ;


@end


#endif