// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASSETCHANGEREQUEST_H
#define PHASSETCHANGEREQUEST_H

@class NSURL, CLLocation, NSString, NSData, NSSet, NSDate, NSMutableDictionary, NSDictionary, NSManagedObjectID, NSArray, NSIndexSet;
@protocol NSSecureCoding, PHUpdateChangeRequest;


#import "PHChangeRequest.h"
#import "PHAsset.h"
#import "PHRelationshipChangeRequestHelper.h"
#import "PHContentEditingOutput.h"
#import "PHObjectPlaceholder.h"

@interface PHAssetChangeRequest : PHChangeRequest <NSSecureCoding, PHUpdateChangeRequest>

 {
    int _clientProcessIdentifier;
    BOOL _clientEntitled;
    PHAsset *_originalAsset;
    NSURL *_editorBundleURL;
    CLLocation *_updatedLocation;
    NSString *_assetDescription;
    NSString *_accessibilityDescription;
    NSString *_title;
    ? _bestKeyFrameTime;
    NSData *_bestKeyFrameJPEGData;
    BOOL _didSetTitle;
    BOOL _didSetVisibilityState;
    BOOL _didSetSceneClassifications;
    BOOL _didSetCharacterRecognitionData;
    BOOL _didSetVisualSearchData;
    NSSet *_sceneClassifications;
    short _sceneAnalysisVersion;
    NSDate *_sceneAnalysisTimestamp;
    NSData *_characterRecognitionData;
    NSData *_machineReadableCodeData;
    NSInteger _characterRecognitionAlgorithmVersion;
    NSDate *_characterRecognitionAdjustmentVersion;
    BOOL _resetCharacterRecognitionProperties;
    NSData *_visualSearchData;
    NSInteger _visualSearchAlgorithmVersion;
    NSDate *_visualSearchAdjustmentVersion;
    BOOL _resetVisualSearchProperties;
    NSData *_distanceIdentity;
    BOOL _allowUnsafeSetProcessed;
    BOOL _incrementPlayCount;
    BOOL _incrementShareCount;
    NSDate *_lastSharedDate;
    BOOL _incrementViewCount;
    BOOL _toRetryUpload;
    BOOL _didSetVariationSuggestionStates;
    NSUInteger _variationSuggestionStates;
    NSUInteger _variationSuggestionStatesMask;
    BOOL _didModifyComputedAttributes;
    NSMutableDictionary *_computedAttributeMutations;
    BOOL _didSetWallpaperPropertiesData;
    BOOL _didSetWallpaperPropertiesTimestamp;
    BOOL _didSetWallpaperPropertiesVersion;
    BOOL _resetWallpaperProperties;
    BOOL _didSetPackedPreferredCropRect;
    BOOL _didSetPackedAcceptableCropRect;
    BOOL _didSetPackedBestPlaybackRect;
    NSInteger _packedPreferredCropRect;
    NSInteger _packedAcceptableCropRect;
    NSInteger _packedBestPlaybackRect;
    BOOL _didUnsetBestKeyFrameTime;
    BOOL _didSetMediaAnalysisTimeStamp;
    BOOL _didSetMediaAnalysisVersion;
    BOOL _didSetBlurrinessScore;
    BOOL _didSetExposureScore;
    BOOL _didSetAutoplaySuggestionScore;
    BOOL _didSetVideoScore;
    BOOL _didSetActivityScore;
    BOOL _didSetAudioScore;
    BOOL _didSetWallpaperScore;
    BOOL _didSetFaceCount;
    BOOL _didSetAudioClassification;
    BOOL _didSetProbableRotationDirection;
    BOOL _didSetProbableRotationDirectionConfidence;
    BOOL _didSetSceneprintData;
    BOOL _didSetReverseLocationData;
    BOOL _didSetReverseLocationDataIsValid;
    BOOL _didSetShiftedLocation;
    BOOL _didSetOriginalResourceChoice;
    BOOL _didRevertLocationToOriginal;
    BOOL _didRemoveFromPhotoStream;
    BOOL _didUpdateExtendedAttributesUsingOriginalMediaMetadata;
    BOOL _didExpungeAllSpatialOverCaptureResources;
    BOOL _didTrashAllSpatialOverCaptureResources;
    BOOL _didUntrashAllSpatialOverCaptureResources;
    BOOL _didExpungeTrashedSpatialOverCaptureResources;
    BOOL _didSetReframeVariation;
    NSData *_objectSaliencyRectsData;
    BOOL _didSetObjectSaliencyRectsData;
    BOOL _didSetTimeZone;
    NSString *_timeZoneName;
    int _timeZoneOffsetValue;
    BOOL _didSetKeywordTitles;
    PHRelationshipChangeRequestHelper *_keywordsHelper;
    BOOL _didSetGpsHorizontalAccuracy;
    BOOL _didPromoteToGuestAsset;
    BOOL _didResetGuestAssetPromotion;
    BOOL _didSetScreenTimeDeviceImageSensitivity;
    BOOL _didSetSyndicationProcessingValue;
    BOOL _didSetSyndicationProcessingVersion;
    BOOL _didSetSyndicationIdentifier;
    NSString *_syndicationIdentifier;
    BOOL _didSetFaceAnalysisVersion;
    BOOL _didSetDuplicateMatchingData;
    NSData *_duplicateMatchingData;
    NSData *_duplicateMatchingAlternateData;
    NSDictionary *_pathsToNewAssetResourcesByAssetResourceType;
    NSSet *_assetResourceTypesToDelete;
    NSSet *_libraryScopeOriginatorUUIDs;
}


@property (readonly, nonatomic) NSInteger accessScopeOptionsRequirement;
@property (retain, nonatomic) NSString *accessibilityDescription;
@property (nonatomic) float activityScore; // ivar: _activityScore
@property (retain, nonatomic) NSDate *addedDate;
@property (retain, nonatomic) NSDate *alternateImportImageDate; // ivar: _alternateImportImageDate
@property (retain, nonatomic) NSString *assetDescription;
@property (nonatomic) short audioClassification; // ivar: _audioClassification
@property (nonatomic) float audioScore; // ivar: _audioScore
@property (nonatomic) float autoplaySuggestionScore; // ivar: _autoplaySuggestionScore
@property (nonatomic) float behavioralScore;
@property (nonatomic) ? bestVideoTimeRange; // ivar: _bestVideoTimeRange
@property (nonatomic) float blurrinessScore; // ivar: _blurrinessScore
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (copy, nonatomic) NSData *colorNormalizationData; // ivar: _colorNormalizationData
@property (retain, nonatomic) PHContentEditingOutput *contentEditingOutput; // ivar: _contentEditingOutput
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) CGFloat curationScore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didChangeAdjustments; // ivar: _didChangeAdjustments
@property (readonly, nonatomic) BOOL duplicateAllowsPrivateMetadata; // ivar: _duplicateAllowsPrivateMetadata
@property (readonly, copy, nonatomic) NSString *editorBundleID; // ivar: _editorBundleID
@property (nonatomic) float exposureScore; // ivar: _exposureScore
@property (retain, nonatomic) id *faceAdjustmentVersion;
@property (nonatomic) short faceAnalysisVersion; // ivar: _faceAnalysisVersion
@property (nonatomic) NSUInteger faceCount; // ivar: _faceCount
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *facesHelper; // ivar: _facesHelper
@property (nonatomic) float failureScore;
@property (nonatomic, getter=isFavorite) BOOL favorite;
@property (nonatomic) CGFloat gpsHorizontalAccuracy; // ivar: _gpsHorizontalAccuracy
@property (nonatomic) float harmoniousColorScore;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) CGFloat highlightPromotionScore;
@property (nonatomic) CGFloat highlightVisibilityScore;
@property (nonatomic) ? imageDisplayTime; // ivar: _imageDisplayTime
@property (nonatomic) float immersivenessScore;
@property (nonatomic) float interactionScore;
@property (nonatomic) float interestingSubjectScore;
@property (nonatomic) float intrusiveObjectPresenceScore;
@property (copy, nonatomic) NSSet *keywordTitles; // ivar: _keywordTitles
@property (nonatomic) float livelyColorScore;
@property (retain, nonatomic) CLLocation *location;
@property (nonatomic) float lowLight;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (retain, nonatomic) NSDate *mediaAnalysisTimeStamp; // ivar: _mediaAnalysisTimeStamp
@property (nonatomic) NSUInteger mediaAnalysisVersion; // ivar: _mediaAnalysisVersion
@property (retain, nonatomic) NSDate *modificationDate;
@property (readonly, getter=isMutated) BOOL mutated;
@property (nonatomic) float noiseScore;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (retain, nonatomic) NSArray *objectSaliencyRects; // ivar: _objectSaliencyRects
@property (nonatomic) NSUInteger originalResourceChoice; // ivar: _originalResourceChoice
@property (nonatomic) float overallAestheticScore;
@property (retain, nonatomic) NSString *pairingIdentifier; // ivar: _pairingIdentifier
@property (nonatomic) unsigned short photoIrisVisibilityState; // ivar: _photoIrisVisibilityState
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedAsset;
@property (nonatomic) float pleasantCameraTiltScore;
@property (nonatomic) float pleasantCompositionScore;
@property (nonatomic) float pleasantLightingScore;
@property (nonatomic) float pleasantPatternScore;
@property (nonatomic) float pleasantPerspectiveScore;
@property (nonatomic) float pleasantPostProcessingScore;
@property (nonatomic) float pleasantReflectionsScore;
@property (nonatomic) float pleasantSymmetryScore;
@property (nonatomic) short probableRotationDirection; // ivar: _probableRotationDirection
@property (nonatomic) float probableRotationDirectionConfidence; // ivar: _probableRotationDirectionConfidence
@property (nonatomic) NSUInteger reframeVariation; // ivar: _reframeVariation
@property (retain, nonatomic) NSData *reverseLocationData; // ivar: _reverseLocationData
@property (nonatomic) BOOL reverseLocationDataIsValid; // ivar: _reverseLocationDataIsValid
@property (retain, nonatomic) NSData *sceneprintData; // ivar: _sceneprintData
@property (nonatomic) short screenTimeDeviceImageSensitivity; // ivar: _screenTimeDeviceImageSensitivity
@property (nonatomic) float sharplyFocusedSubjectScore;
@property (retain, nonatomic) CLLocation *shiftedLocation; // ivar: _shiftedLocation
@property (readonly) Class superclass;
@property (retain, nonatomic) NSIndexSet *supportedEditOperations; // ivar: _supportedEditOperations
@property (nonatomic) unsigned short syndicationProcessingValue; // ivar: _syndicationProcessingValue
@property (nonatomic) NSUInteger syndicationProcessingVersion; // ivar: _syndicationProcessingVersion
@property (nonatomic) float tastefullyBlurredScore;
@property (nonatomic) float testScore; // ivar: _testScore
@property (retain, nonatomic) NSString *title;
@property (nonatomic) ? videoDuration; // ivar: _videoDuration
@property (nonatomic) float videoScore; // ivar: _videoScore
@property (retain, nonatomic) NSURL *videoURLForUpdate; // ivar: _videoURLForUpdate
@property (retain, nonatomic) NSData *wallpaperPropertiesData; // ivar: _wallpaperPropertiesData
@property (retain, nonatomic) NSDate *wallpaperPropertiesTimestamp; // ivar: _wallpaperPropertiesTimestamp
@property (nonatomic) NSUInteger wallpaperPropertiesVersion; // ivar: _wallpaperPropertiesVersion
@property (nonatomic) float wallpaperScore; // ivar: _wallpaperScore
@property (nonatomic) float wellChosenSubjectScore;
@property (nonatomic) float wellFramedSubjectScore;
@property (nonatomic) float wellTimedShotScore;


+(BOOL)performBatchExpungeAndWaitWithAssets:(id)arg0 deleteOptions:(id)arg1 photoLibrary:(id)arg2 error:(*id)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)_allAssetEditOperations;
+(id)changeRequestForAsset:(id)arg0 ;
+(id)changeRequestForAssetFromVideoFileURL:(id)arg0 imageAsset:(id)arg1 displayTime:(CGFloat)arg2 ;
+(id)creationRequestForAssetFromImage:(id)arg0 ;
+(id)creationRequestForAssetFromImageAtFileURL:(id)arg0 ;
+(id)creationRequestForAssetFromVideoAtFileURL:(id)arg0 ;
+(id)creationRequestForAssetFromVideoComplementBundle:(id)arg0 ;
+(void)_deleteAssets:(id)arg0 withOperation:(NSInteger)arg1 topLevelSelector:(SEL)arg2 deleteOptions:(id)arg3 ;
+(void)deleteAssets:(id)arg0 ;
+(void)expungeAssets:(id)arg0 ;
+(void)expungeAssets:(id)arg0 deleteOptions:(id)arg1 ;
+(void)internalExpungeAssets:(id)arg0 deleteOptions:(id)arg1 ;
+(void)performBatchExpungeWithAssets:(id)arg0 deleteOptions:(id)arg1 photoLibrary:(id)arg2 completionHandler:(id)arg3 ;
+(void)undeleteAssets:(id)arg0 ;
-(BOOL)_validateAndGenerateStillImageForLoopingLivePhotoWithContentEditingOutput:(id)arg0 error:(*id)arg1 ;
-(BOOL)_validateAsyncContentEditingOutputPreviewRenderURLs:(id)arg0 error:(*id)arg1 ;
-(BOOL)_validateImageURLForAssetMutation:(id)arg0 error:(*id)arg1 ;
-(BOOL)addAssetResourceWithType:(NSInteger)arg0 fromFileAtURL:(id)arg1 ;
-(BOOL)applyMutationsToManagedObject:(id)arg0 photoLibrary:(id)arg1 error:(*id)arg2 ;
-(BOOL)deleteAssetResourceWithType:(NSInteger)arg0 ;
-(BOOL)isHiding;
-(BOOL)isRevertingContentToOriginal;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateAccessibilityDescription:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateAdjustmentDataForAssetMutation:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateContentEditingOutput:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateMutationsToManagedObject:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateReadAccessForContentURL:(id)arg0 assetResource:(id)arg1 error:(*id)arg2 ;
-(BOOL)validateVideoURLForAssetMutation:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateWriteAccessForContentURL:(id)arg0 error:(*id)arg1 ;
-(id)_existentKeywordObjectIDs;
-(id)_mutableFaceObjectIDsAndUUIDs;
-(id)_mutableKeywordObjectIDsAndUUIDs;
-(id)getMediaAnalysisAttributesForAsset:(id)arg0 ;
-(id)getPhotoAnalysisAttributesForAsset:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHelper:(id)arg0 ;
-(id)initWithUUID:(id)arg0 objectID:(id)arg1 ;
-(id)initWithXPCDict:(id)arg0 request:(id)arg1 clientAuthorization:(id)arg2 ;
-(void)_prepareFaceIDsIfNeeded;
-(void)_prepareFacesHelperWithFetchResult:(id)arg0 ;
-(void)_setOriginalAsset:(id)arg0 ;
-(void)_setSyndicationIdentifier:(id)arg0 ;
-(void)_validateObjectSaliencyRects:(id)arg0 ;
-(void)addFaces:(id)arg0 ;
-(void)addKeywords:(id)arg0 ;
-(void)encodeToXPCDict:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)expungeAllSpatialOverCaptureResources;
-(void)expungeTrashedSpatialOverCaptureResources;
-(void)incrementPlayCount;
-(void)incrementShareCount;
-(void)incrementViewCount;
-(void)markDidChangeAdjustments;
-(void)promoteToGuestAsset;
-(void)removeFaces:(id)arg0 ;
-(void)removeFromMyPhotoStream;
-(void)removeKeywords:(id)arg0 ;
-(void)resetCharacterRecognitionAttributes;
-(void)resetGuestAssetPromotion;
-(void)resetVisualSearchAttributes;
-(void)resetWallpaperProperties;
-(void)retryUpload;
-(void)revertAssetContentToOriginal;
-(void)revertLocationToOriginal;
-(void)setAcceptableCropRectWithNormalizedRect:(struct CGRect )arg0 ;
-(void)setAdjustmentData:(id)arg0 withRenderedJPEGData:(id)arg1 orRenderedContentURL:(id)arg2 penultimateRenderedJPEGData:(id)arg3 isSubstandardRender:(BOOL)arg4 fullSizeRenderSize:(struct CGSize )arg5 renderedVideoComplementURL:(id)arg6 penultimateRenderedVideoComplementURL:(id)arg7 ;
-(void)setAdjustmentData:(id)arg0 withRenderedJPEGData:(id)arg1 orRenderedContentURL:(id)arg2 penultimateRenderedJPEGData:(id)arg3 isSubstandardRender:(BOOL)arg4 fullSizeRenderSize:(struct CGSize )arg5 renderedVideoComplementURL:(id)arg6 penultimateRenderedVideoComplementURL:(id)arg7 optionalOriginalResourceChoice:(id)arg8 ;
-(void)setBestKeyFrame:(struct CGImage *)arg0 time:(struct ? )arg1 ;
-(void)setBestPlaybackRectWithNormalizedRect:(struct CGRect )arg0 ;
-(void)setCharacterRecognitionData:(id)arg0 algorithmVersion:(NSInteger)arg1 adjustmentVersion:(id)arg2 ;
-(void)setCharacterRecognitionData:(id)arg0 machineReadableCodeData:(id)arg1 algorithmVersion:(NSInteger)arg2 adjustmentVersion:(id)arg3 ;
-(void)setDuplicateMatchingData:(id)arg0 duplicateMatchingAlternateData:(id)arg1 ;
-(void)setDuplicateMatchingValue:(id)arg0 duplicateMatchingAlternateValue:(id)arg1 ;
-(void)setLibraryScopeContributors:(id)arg0 ;
-(void)setPreferredCropRectWithNormalizedRect:(struct CGRect )arg0 ;
-(void)setRectWithNormalizedRect:(struct CGRect )arg0 forPackedRect:(*NSInteger)arg1 forSetFlag:(*BOOL)arg2 ;
-(void)setSceneClassifications:(id)arg0 algorithmVersion:(short)arg1 adjustmentVersion:(id)arg2 ;
-(void)setSceneClassifications:(id)arg0 algorithmVersion:(short)arg1 distanceIdentity:(id)arg2 adjustmentVersion:(id)arg3 ;
-(void)setSyndicationIdentifierOnMomentSharedAsset:(id)arg0 ;
-(void)setTimeZone:(id)arg0 withDate:(id)arg1 ;
-(void)setVariationSuggestionStates:(NSUInteger)arg0 forVariationType:(NSUInteger)arg1 ;
-(void)setVisualSearchData:(id)arg0 algorithmVersion:(NSInteger)arg1 adjustmentVersion:(id)arg2 ;
-(void)trashAllSpatialOverCaptureResources;
-(void)untrashAllSpatialOverCaptureResources;
-(void)updateExtendedAttributesUsingOriginalMediaMetadata;


@end


#endif