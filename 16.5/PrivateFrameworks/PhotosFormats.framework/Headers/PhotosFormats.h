

#include "PFAssetAdjustments.h"
#include "PFAssetAdjustmentFingerprintData.h"
#include "PFParallaxPaletteSuggestion.h"
#include "PFMetadataCore.h"
#include "PFStoryClusteringProperties.h"
#include "PFStoryAutoEditConfiguration.h"
#include "PFStoryConcreteTransitionTable.h"
#include "PFStoryConcreteMotionStyleTable.h"
#include "PFRWSampleBufferChannel.h"
#include "PFAVReaderWriter.h"
#include "PFPosterConfiguration.h"
#include "PFPosterEditConfiguration.h"
#include "PFPosterShuffleConfiguration.h"
#include "PFCameraAdjustments.h"
#include "PFMutableCameraAdjustments.h"
#include "PFCameraAdjustmentsSerialization.h"
#include "PFAnimatedImage.h"
#include "PFColorConverter.h"
#include "PFCropUtilities.h"
#include "PFMetadataImageCaptureMovieProperties.h"
#include "PFParallaxAssetResourceOptions.h"
#include "PFParallaxAssetResource.h"
#include "PFPosterMedia.h"
#include "PFPosterMediaSuggestion.h"
#include "PFPosterMediaImage.h"
#include "PFExportGIFRequest.h"
#include "PFParallaxLayerStackArchiver.h"
#include "PFCameraViewfinderSessionWatcher.h"
#include "PFStoryRecipeStyleFactory.h"
#include "PFStoryConcreteStyle.h"
#include "PFPseudoRandomNumberGenerator.h"
#include "PFIncreasingNumberGenerator.h"
#include "PFJSONDebugDumpConverter.h"
#include "PFSceneGeography.h"
#include "_PFStoryRecipeDisplayAssetNormalizationDataV1.h"
#include "_PFStoryRecipeDisplayAssetNormalizationDataV2.h"
#include "PFStoryRecipeDisplayAssetNormalization.h"
#include "PFUniformTypeUtilities.h"
#include "PFStoryConcreteRecipePresentation.h"
#include "PFMediaCapabilitiesQuery.h"
#include "PFMediaCapabilities.h"
#include "PFMetadata.h"
#include "PFStoryConcreteRecipeClip.h"
#include "PFVideoMetadataAudioTrackFormatInfo.h"
#include "PFVideoMetadataVideoTrackFormatInfo.h"
#include "PFVideoMetadata.h"
#include "PFAuxiliaryImageRecord.h"
#include "PFImageMetadata.h"
#include "PFParallaxColor.h"
#include "PFMediaUtilities.h"
#include "PFLivePhotoFrameProcessingRequest.h"
#include "PFLivePhotoExportDestination.h"
#include "PFLivePhotoPlaybackSettings.h"
#include "PFLivePhotoEditSession.h"
#include "PFLivePhotoPlaybackResult.h"
#include "PFMetadataLegacyMovieProperties.h"
#include "PFMetadataTypeVerifier.h"
#include "PFPhotosFaceUtilities.h"
#include "PFMetadataMovie.h"
#include "PFSemanticEnhancePregateCalculator.h"
#include "PFStoryConcreteAutoEditDecisionList.h"
#include "PFStoryRecipeLibraryFactory.h"
#include "PFStoryConcreteRecipeLibrary.h"
#include "PFPhotoSharingOperation.h"
#include "PFFrameCache.h"
#include "PFSharingRemakerOptions.h"
#include "PFSharingRemakerOperation.h"
#include "PFSharingRemaker.h"
#include "PFMetadataBuilder.h"
#include "PFImageMetadataBuilder.h"
#include "PFVideoMetadataBuilder.h"
#include "PFXMPMetadataBuilder.h"
#include "PFSharingUtilities.h"
#include "PFCameraMetadataJSONDebugSerialization.h"
#include "_PFCameraMetadataAVMetadataObject.h"
#include "PFCameraMetadata.h"
#include "PFCameraClientMetadata.h"
#include "PFCameraMetadataSerialization.h"
#include "PFMetadataImage.h"
#include "PFParallaxIntermediateLayout.h"
#include "PFParallaxLayoutHelper.h"
#include "PFParallaxLayoutUtilities.h"
#include "PFMetadataStateBreadcrumb.h"
#include "PFMetadataStateHandler.h"
#include "PFSlowMotionConfiguration.h"
#include "PFSlowMotionRampConfiguration.h"
#include "PFSceneTaxonomyNode.h"
#include "PFSceneTaxonomy.h"
#include "PFSlowMotionTimeRangeMapperScaledRegion.h"
#include "PFSlowMotionTimeRangeMapper.h"
#include "PFAppleArchiveStream.h"
#include "PFAppleArchive.h"
#include "PFAppleArchiveLogger.h"
#include "PFMetadataSyndication.h"
#include "PFSlowMotionUtilities.h"
#include "PFStoryConcreteRecipeAsset.h"
#include "PFClientSideEncryptionManager.h"
#include "PFStoryRecipeUnarchiver.h"
#include "PFStoryRecipeSongAssetFactory.h"
#include "PFStoryConcreteRecipeSongAsset.h"
#include "PFParallaxLayerStyle.h"
#include "PFVideoAdjustments.h"
#include "PFStoryRecipeArchiver.h"
#include "PFMessagesStackLayoutFrameSolver.h"
#include "PFVideoAVObjectBuilder.h"
#include "PFVideoComplementMetadataRecord.h"
#include "PFVideoComplement.h"
#include "PFPosterDescriptor.h"
#include "PFParallaxLayer.h"
#include "PFStoryRecipeDisplayAssetFactory.h"
#include "PFStoryConcreteRecipeDisplayAsset.h"
#include "PFParallaxLayoutConcreteConfiguration.h"
#include "PFParallaxLayout.h"
#include "PFStoryRecipeFactory.h"
#include "PFStoryConcreteRecipe.h"
#include "PFStoryConcreteMutableRecipe.h"
#include "PFVideoEncoding.h"
#include "PFTimeZoneLookup.h"
#include "PFMetadataIdentifier.h"
#include "PFSinglePassVideoExportItemStatistics.h"
#include "PFProportionalIntegralController.h"
#include "PFVideoExportRangeWaitingCaller.h"
#include "PFVideoExportRangeCoordinator.h"
#include "PFSinglePassVideoExportItem.h"
#include "PFVideoExport.h"
#include "PFStoryAutoEditFrequencyTable.h"
#include "PFCachingArchiveIndex.h"
#include "PFAssetBundle.h"
#include "PFParallaxLayerStack.h"
#include "PFZlibDataCompressionOptions.h"
#include "PFZlibDataDecompressionOptions.h"
#include "PFZlibDataCompression.h"
#include "PFVideoSharingOperation.h"
