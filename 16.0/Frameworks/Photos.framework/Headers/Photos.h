

#include "PHCloudSharedAlbumInvitationRecord.h"
#include "PHImportDuplicateInfo.h"
#include "PHImportDuplicateChecker.h"
#include "PHShareRelationshipChangeRequestHelper.h"
#include "PHCompositeMediaResult.h"
#include "PHPhotosHighlightChangeRequest.h"
#include "PHSafeNSCacheDelegateReflector.h"
#include "PHAlbum.h"
#include "PHUnauthorizedFetchResult.h"
#include "PHCollectionDeleteRequest.h"
#include "PHSuggestionWallpaperUtilities.h"
#include "PHSmartAlbumChangeRequest.h"
#include "PHUserFeedbackCalculator.h"
#include "PHImageCache.h"
#include "PHSmartAlbum.h"
#include "PHProject.h"
#include "PHImageResourceChooserFastPolicyHandler.h"
#include "PHFaceGroup.h"
#include "PHMakeResourceAvailableRequest.h"
#include "PHVideoResult.h"
#include "PHUserFeedbackDataCache.h"
#include "PHFaceGroupDeleteRequest.h"
#include "PHSingleMediaRequestContext.h"
#include "PHPersonSuggestion.h"
#include "PHMomentList.h"
#include "PHChangeValidationController.h"
#include "PHAssetExportRequestOptions.h"
#include "PHAssetExportRequest.h"
#include "_PHAnimatedImageLoadOperation.h"
#include "PHAnimatedImage.h"
#include "PHAnimatedImageRequestOptions.h"
#include "PHSynchronousPhotoLibraryExecutionContext.h"
#include "PHImageRequest.h"
#include "PHImportController.h"
#include "PHMediaResourceResult.h"
#include "PHVisionAnalysisUtilities.h"
#include "PHFetchResultMediaTypeCounts.h"
#include "PHPerformChangesInstrumentation.h"
#include "PHFaceprint.h"
#include "PHAssetCollection.h"
#include "PHInternalAssetExportRequest.h"
#include "PHMediaRequestContext.h"
#include "PHImportLegacyLibrarySource.h"
#include "PHAssetDeleteRequest.h"
#include "PHImportCanceler.h"
#include "PHImageCacheEntry.h"
#include "PHObjectChangeDetails.h"
#include "PHVideoRequest.h"
#include "PHPerformChangesRequest.h"
#include "PHImportRecord.h"
#include "PHImageResourceChooserRequestInfo.h"
#include "PHImageResourceChooserPolicyHandler.h"
#include "PHRecyclableObjectVendor.h"
#include "PHPersonPLAdapter.h"
#include "PHKeywordChangeRequest.h"
#include "PHImportAssetNameDescription.h"
#include "PHImportAssetFilePresenter.h"
#include "PHImportAsset.h"
#include "PHAssetCreationRequestPlaceholderSupport.h"
#include "PHAssetCreationRequestPlaceholderSupportCrashRecovery.h"
#include "PHCloudSharedAlbumDeleteRequest.h"
#include "PHObjectDeleteRequest.h"
#include "PHEntityKeyMap.h"
#include "PHImageIODecoder.h"
#include "PHSuggestionMessageMatchingResult.h"
#include "PHCollectionList.h"
#include "PHFaceGroupChangeRequest.h"
#include "PHAdjustmentDataRequestContext.h"
#include "PHUserFeedbackImportantPerson.h"
#include "PHChangeRequestHelper.h"
#include "PHRelationshipChangeRequestHelper.h"
#include "PHMemoryUpNextHelper.h"
#include "PHAssetPLAdapter.h"
#include "PHImageDecoderOptions.h"
#include "PHImageDecoderAsyncDecodeRequestHandle.h"
#include "PHImageDecoder.h"
#include "PHPersistentChange.h"
#include "PHCachingImageManager.h"
#include "PHImageDisplaySpec.h"
#include "PHCloudSharedPhoto.h"
#include "PHCollectionListChangeRequest.h"
#include "PHServerResourceRequestRunner.h"
#include "PHPhotosHighlight.h"
#include "PHDetectionTrait.h"
#include "PHPersistentChangeToken.h"
#include "PHPersistentObjectChangeDetails.h"
#include "PHPersistentChangeFetchResult.h"
#include "PHImportSession.h"
#include "PHImageResourceChooserIntermediatePolicyHandler.h"
#include "PHMemoryFeature.h"
#include "PHMemoryFeatureEncoder.h"
#include "PHMemoryFeatureDecoder.h"
#include "PHResourceLocalAvailabilityRequestOptions.h"
#include "PHResourceLocalAvailabilityRequest.h"
#include "PHMemoryGenerationOptions.h"
#include "PHMemory.h"
#include "PHMemoryPropertySet.h"
#include "PHMemoryUserFeedbackProperties.h"
#include "PHMoment.h"
#include "PHMemoryChangeRequest.h"
#include "PHRepairRequest.h"
#include "PHChange.h"
#include "PHQueryChangeDetectionCriteria.h"
#include "PHCropVariant.h"
#include "PHAssetCreationPhotoStreamPublishingRequest.h"
#include "PHAssetResourceCreationOptions.h"
#include "PHAssetCreationAdjustmentBakeInOptions.h"
#include "PHAssetCreationMetadataCopyOptions.h"
#include "PHAssetCreationOptions.h"
#include "PHAssetCreationDerivativeContext.h"
#include "PHAssetCreationRequest.h"
#include "_PHAssetCreationRequestValidator.h"
#include "PHImportUrlSource.h"
#include "PHImportExceptionRecorder.h"
#include "PHThumbnailAsset.h"
#include "PHFetchOptions.h"
#include "PHImportLibrarySource.h"
#include "PHTrashableObjectDeleteRequest.h"
#include "PHMemoryRelevanceHelper.h"
#include "PHLivePhotoRequestContext.h"
#include "PHMomentChangeRequest.h"
#include "PHFaceGroupPLAdapter.h"
#include "PHFaceCropChangeRequest.h"
#include "PHAssetCrashRecoveryUnarchiver.h"
#include "PHAssetResourceWriteRequest.h"
#include "PHImageResult.h"
#include "PHAssetChangeRequest.h"
#include "PHContentEditingInputRequestOptions.h"
#include "PHAssetResource.h"
#include "PHProjectChangeRequest.h"
#include "PHVideoXPCRequest.h"
#include "PHImageRequestColorSpace.h"
#include "PHImageRequestResource.h"
#include "PHPhotoLibrary.h"
#include "PHSceneClassification.h"
#include "PHAsset.h"
#include "PHAssetPropertySet.h"
#include "PHBatchFetchedAssetPropertySet.h"
#include "PHAssetOriginalMetadataProperties.h"
#include "PHAssetGridMetadataProperties.h"
#include "PHAssetPhotosOneUpProperties.h"
#include "PHAssetLocalDateProperties.h"
#include "PHAssetPhotosInfoPanelExtendedProperties.h"
#include "PHAssetPhotosInfoPanelLocationProperties.h"
#include "PHAssetCameraCaptureDeviceProperties.h"
#include "PHAssetDescriptionProperties.h"
#include "PHAssetPhotoCommentProperties.h"
#include "PHAssetAnalysisStateProperties.h"
#include "PHAssetSceneAnalysisProperties.h"
#include "PHAssetUserActivityProperties.h"
#include "PHAssetPhotoIrisProperties.h"
#include "PHAssetAdjustmentProperties.h"
#include "PHAssetCurationProperties.h"
#include "PHAssetAestheticProperties.h"
#include "PHAssetPhotoAnalysisWallpaperProperties.h"
#include "PHAssetMediaAnalysisProperties.h"
#include "PHAssetCharacterRecognitionProperties.h"
#include "PHAssetVisualSearchProperties.h"
#include "PHAssetImportProperties.h"
#include "PHAssetSceneprintProperties.h"
#include "PHAssetDestinationAssetCopyProperties.h"
#include "PHAssetKeywordProperties.h"
#include "PHAssetCoarseLocationProperties.h"
#include "PHAssetLibraryScopeProperties.h"
#include "PHAssetCreationDateProperties.h"
#include "PHAssetAddedDateProperties.h"
#include "PHAssetCloudLocalStateProperties.h"
#include "PHAssetMontageProperties.h"
#include "PHAssetMonoskiMediaProperties.h"
#include "PHLocallyAvailableResourceBag.h"
#include "PHManualFetchResult.h"
#include "PHCloudInvitation.h"
#include "PHAdjustmentData.h"
#include "PHTextFeature.h"
#include "PHTextFeatureEncoder.h"
#include "PHTextFeatureDecoder.h"
#include "PHBatchAssetExpunger.h"
#include "PHFaceChangeRequest.h"
#include "PHImportDeviceAsset.h"
#include "PHPersonChangeRequest.h"
#include "PHSuggestionMessageContext.h"
#include "PHVideoRequestContext.h"
#include "PHImportBatch.h"
#include "PHImporter.h"
#include "PHAssetCollectionChangeRequest.h"
#include "ICCameraDeviceRemovedItemsCoalescer.h"
#include "PHImportDeviceSource.h"
#include "PHPerson.h"
#include "PHPersonPropertySet.h"
#include "PHPersonUserFeedbackProperties.h"
#include "PHImageResourceChooser.h"
#include "PHSearch.h"
#include "PHFaceDeleteRequest.h"
#include "PHExternalAssetResource.h"
#include "PHResourceChooserListResourceInfo.h"
#include "PHResourceChooserList.h"
#include "PHLibraryScopeDeleteRequest.h"
#include "PHLivePhoto.h"
#include "PHLivePhotoCreationOperation.h"
#include "_PHCropInfo.h"
#include "PHAssetCurationUtilities.h"
#include "PHRecentContentSyndicationCollectionsResult.h"
#include "PHRelatedCollection.h"
#include "PHRelatedFetchOptions.h"
#include "PHLibraryScopeChangeRequest.h"
#include "PHChangeBuilder.h"
#include "PHUserFeedback.h"
#include "PHPersistentChangeFetchOptions.h"
#include "PHLibraryChangeRequest.h"
#include "PHQuestionDeleteRequest.h"
#include "PHMomentShareDeleteRequest.h"
#include "PHSandboxExtensionWrapper.h"
#include "PHAssociatedObjectsTable.h"
#include "PHCloudIdentifierMapping.h"
#include "PHLocalIdentifierMapping.h"
#include "PHCloudIdentifier.h"
#include "PHPersonResetOperation.h"
#include "PHPersonResetManager.h"
#include "PHLibraryScopeRule.h"
#include "PHShareParticipantChangeRequest.h"
#include "PHLibraryScope.h"
#include "PHSuggestionDeleteRequest.h"
#include "PHQuestionChangeRequest.h"
#include "PHFace.h"
#include "PHFacePropertySet.h"
#include "PHFaceClusteringProperties.h"
#include "PHPersistentChangeFetchRequest.h"
#include "PHLibraryScopeCondition.h"
#include "PHLibraryScopeConditionDateRange.h"
#include "PHLibraryScopeConditionPerson.h"
#include "PHLibraryScopeConditionUnknown.h"
#include "PHImageRequestContext.h"
#include "PHImageResourceChooserBestPolicyHandler.h"
#include "PHObjectDeleteValidator.h"
#include "PHResourceRequest.h"
#include "PHMediaRequest.h"
#include "PHAssetCrashRecoverySupport.h"
#include "PHObject.h"
#include "PHObjectPlaceholder.h"
#include "PHMemoryPresentationHints.h"
#include "PHObjectReference.h"
#include "PHAssetReference.h"
#include "PHCollectionReference.h"
#include "PHAssetCollectionReference.h"
#include "PHCollectionListReference.h"
#include "PHPersonReference.h"
#include "PHImageManagerRequestTracer.h"
#include "PHMomentShareChangeRequest.h"
#include "PHShareParticipant.h"
#include "PHQuery.h"
#include "PHCloudSharedAssetExportRequest.h"
#include "PHContentEditingOutput.h"
#include "PHContentEditingOutputRequestOptions.h"
#include "PHSuggestionChangeRequest.h"
#include "PHLiveRenderEditingInputRequestContext.h"
#include "PHQueryPersonContext.h"
#include "PHAssetResourceRequestOptions.h"
#include "PHAssetResourceManager.h"
#include "PHContentEditingInputRequestContext.h"
#include "PHContentEditingInput.h"
#include "PHImportTimerCollection.h"
#include "PHImportTimer.h"
#include "PHSuggestion.h"
#include "PHLivePhotoResult.h"
#include "PHObjectPLAdapter.h"
#include "DurationGroup.h"
#include "PHImportResults.h"
#include "PHAssetGeoHashUtilities.h"
#include "PHImportOptions.h"
#include "PHCPAnalyticsMediaPropertyProvider.h"
#include "PHCPAnalyticsCachedPropertyProvider.h"
#include "PHMomentSharePreview.h"
#include "PHPhotosHighlightDeleteRequest.h"
#include "PHShare.h"
#include "PHPhotoLibraryAppPrivateData.h"
#include "PHAssetResourceQualityClass.h"
#include "PHImportAssetBundleAsset.h"
#include "PHVideoRequestBehaviorSpec.h"
#include "PHMemoryDeleteRequest.h"
#include "PHImportAssetDataRequest.h"
#include "PHImportAssetThumbnailDataRequest.h"
#include "PHImportAssetMetadataRequest.h"
#include "PHImportSource.h"
#include "PHCollection.h"
#include "PHCollectionListAncestryContext.h"
#include "PHCameraSmartSharingIdentity.h"
#include "PHCameraSmartSharingMetadata.h"
#include "PHPersistentChangeEnumerationContext.h"
#include "PHFacePLAdapter.h"
#include "PHAssetResourceRequest.h"
#include "PHMomentShare.h"
#include "PHValidator.h"
#include "_PHValidation.h"
#include "PHAssetDeleteOptions.h"
#include "PHAdjustmentDataResult.h"
#include "PHBatchFetchingArrayFetchedClass.h"
#include "PHBatchFetchingArray.h"
#include "PHShareParticipantDeleteRequest.h"
#include "PHBatchPerformChanges.h"
#include "PHPlaceholderImageHelper.h"
#include "PHKeyword.h"
#include "PHContentEditingInputResult.h"
#include "PHFaceCrop.h"
#include "PHAssetResourceValidatedContext.h"
#include "_PHPhotoLibraryValidator.h"
#include "PHAssetResourceBag.h"
#include "PHFetchResultChangeDetails.h"
#include "PHCloudSharedAlbumChangeRequest.h"
#include "PHConcurrentMapTable.h"
#include "_PHFetchRequestWrapper.h"
#include "PHDuplicateDetection.h"
#include "PHImageRequestBehaviorSpec.h"
#include "PHKeywordDeleteRequest.h"
#include "PHAssetComment.h"
#include "PHLivePhotoEditingContext.h"
#include "PHFigDecoder.h"
#include "PHImportException.h"
#include "PHChangeRequest.h"
#include "PHSuggestionWallpaperShuffleUtilities.h"
#include "PHMemoryAnalyticsHelper.h"
#include "PHCloudSharedAlbum.h"
#include "PHPersonDeleteRequest.h"
#include "PHImageRequestOptions.h"
#include "PHLivePhotoRequestOptions.h"
#include "PHVideoRequestOptions.h"
#include "PHImageManager.h"
#include "PHAsynchronousPhotoLibraryExecutionContext.h"
#include "PHLivePhotoExportSession.h"
#include "PHLivePhotoExportSessionOptions.h"
#include "PHAdjustmentDataRequestBehaviorSpec.h"
#include "PHAdjustmentDataRequest.h"
#include "PHAssetBundleExportSession.h"
#include "PHImportLibraryAsset.h"
#include "PHFetchResult.h"
#include "PHMediaResourceRequest.h"
#include "PHFaceCropDeleteRequest.h"
#include "PHQuestion.h"
#include "PHUniqueObjectIDCache.h"
#include "PHAssociatedObjectsEntry.h"
