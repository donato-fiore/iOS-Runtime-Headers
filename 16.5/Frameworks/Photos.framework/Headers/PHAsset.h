// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASSET_H
#define PHASSET_H

@class PLLazyObject, NSString, NSURL, NSDate, NSData, NSArray, NSNumber, CLLocation, NSManagedObjectContext, NSManagedObjectID, NSValue, NSSet;
@protocol PHThumbnailAsset, _PLImageLoadingAsset, PHResourceChooserAsset, PFParallaxAsset;


#import "PHObject.h"
#import "PHPhotoLibrary.h"

@interface PHAsset : PHObject <PHThumbnailAsset, _PLImageLoadingAsset, PHResourceChooserAsset, PFParallaxAsset>

 {
    PLLazyObject *_lazyCachedLocation;
    uint8_t _canUseLocationCoordinateForLocation;
    NSString *_cloudAssetGUID;
    unsigned short _bundleScope;
}


@property (readonly, nonatomic) NSURL *ALAssetURL;
@property (readonly, nonatomic) NSInteger RAWBadgeAttributes; // ivar: _RAWBadgeAttributes
@property (readonly, nonatomic) CGRect acceptableCropRect; // ivar: _acceptableCropRect
@property (readonly, nonatomic) NSString *adjustmentFormatIdentifier;
@property (readonly, nonatomic) NSDate *adjustmentTimestamp; // ivar: _adjustmentTimestamp
@property (readonly, nonatomic) NSDate *analysisStateModificationDate; // ivar: _analysisStateModificationDate
@property (readonly, nonatomic) CGFloat aspectRatio;
@property (nonatomic) BOOL assetDescriptionWasSet; // ivar: _assetDescriptionWasSet
@property (readonly, nonatomic) int avalanchePickType; // ivar: _avalanchePickType
@property (readonly, nonatomic) NSString *burstIdentifier; // ivar: _burstIdentifier
@property (readonly, nonatomic) NSUInteger burstSelectionTypes;
@property (readonly, nonatomic) BOOL canFlipFullSizeRender;
@property (readonly, nonatomic) BOOL canPerformSharingAction;
@property (readonly, nonatomic) BOOL canPlayAutoloop;
@property (readonly, nonatomic) BOOL canPlayLongExposure;
@property (readonly, nonatomic) BOOL canPlayLoopingVideo;
@property (readonly, nonatomic) BOOL canPlayMirror;
@property (readonly, nonatomic) BOOL canPlayPhotoIris;
@property BOOL canUseLocationCoordinateForLocation;
@property (readonly, copy, nonatomic) NSString *cloudIdentifier;
@property (readonly, nonatomic) BOOL cloudIsDeletable; // ivar: _cloudIsDeletable
@property (readonly, nonatomic) NSInteger cloudPlaceholderKind;
@property (readonly, nonatomic) NSInteger cloudPlaceholderKind; // ivar: _cloudPlaceholderKind
@property (readonly, nonatomic) BOOL complete;
@property (readonly, nonatomic) BOOL complete; // ivar: _complete
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NSInteger creationDateSource; // ivar: _creationDateSource
@property (readonly, nonatomic) NSString *croppingDebugDescription;
@property (readonly, nonatomic) CGFloat curationScore; // ivar: _curationScore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned short deferredProcessingNeeded; // ivar: _deferredProcessingNeeded
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *directory; // ivar: _directory
@property (readonly, nonatomic) NSData *distanceIdentity;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSUInteger effectiveThumbnailIndex;
@property (readonly, nonatomic) int exifOrientation; // ivar: _exifOrientation
@property (readonly, nonatomic) id *faceAdjustmentVersion; // ivar: _faceAdjustmentVersion
@property (readonly, nonatomic) short faceAnalysisVersion; // ivar: _faceAnalysisVersion
@property (readonly, nonatomic) CGFloat faceAreaMaxX; // ivar: _faceAreaMaxX
@property (readonly, nonatomic) CGFloat faceAreaMaxY; // ivar: _faceAreaMaxY
@property (readonly, nonatomic) CGFloat faceAreaMinX; // ivar: _faceAreaMinX
@property (readonly, nonatomic) CGFloat faceAreaMinY; // ivar: _faceAreaMinY
@property (readonly, nonatomic) NSArray *faceRegions; // ivar: _faceRegions
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite; // ivar: _favorite
@property (readonly, nonatomic) NSString *filename; // ivar: _filename
@property (readonly, nonatomic) BOOL hasAdjustments; // ivar: _hasAdjustments
@property (readonly, nonatomic) BOOL hasKeywords; // ivar: _hasKeywords
@property (readonly, nonatomic) BOOL hasPhotoColorAdjustments;
@property (readonly, nonatomic) BOOL hasPhotoStreamTagID;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *hdrGain; // ivar: _hdrGain
@property (readonly, nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (readonly, nonatomic) CGFloat highlightPromotionScore; // ivar: _highlightPromotionScore
@property (readonly, nonatomic) CGFloat highlightVisibilityScore; // ivar: _highlightVisibilityScore
@property (readonly, nonatomic) NSInteger imageOrientation;
@property (readonly, nonatomic) NSData *imageRequestHints; // ivar: _imageRequestHints
@property (readonly, nonatomic) BOOL isAnimatedGIF;
@property (readonly, nonatomic) BOOL isAudio;
@property (readonly, nonatomic) BOOL isCinematicVideo;
@property (readonly, nonatomic) BOOL isCloudPhotoLibraryAsset;
@property (readonly, nonatomic) BOOL isCloudPlaceholder;
@property (readonly, nonatomic) BOOL isCloudSharedAsset;
@property (readonly, nonatomic) BOOL isGuestAsset;
@property (readonly, nonatomic) BOOL isHDRVideo;
@property (readonly, nonatomic) BOOL isHDVideo;
@property (readonly, nonatomic) BOOL isHEICSequence;
@property (readonly, nonatomic) BOOL isHEIF;
@property (readonly, nonatomic) BOOL isHighFrameRateVideo;
@property (readonly, nonatomic) BOOL isIncludedInCloudFeeds;
@property (readonly, nonatomic) BOOL isIncludedInMoments;
@property (readonly, nonatomic) BOOL isJPEG;
@property (readonly, nonatomic) BOOL isJPEG2000;
@property (readonly, nonatomic) BOOL isLocalVideoKeyFrameValid;
@property (readonly, nonatomic) BOOL isLoopingVideo;
@property (readonly, nonatomic) BOOL isMomentSharedAsset;
@property (readonly, nonatomic) BOOL isMonoskiMedia;
@property (readonly, nonatomic) BOOL isOffline;
@property (readonly, nonatomic) BOOL isPDF;
@property (readonly, nonatomic) BOOL isPNG;
@property (readonly, nonatomic) BOOL isPSD;
@property (readonly, nonatomic) BOOL isPartOfBurst;
@property (readonly, nonatomic) BOOL isPhoto;
@property (readonly, nonatomic) BOOL isPhotoIris; // ivar: _isPhotoIris
@property (readonly, nonatomic) BOOL isPhotoIrisPlaceholder;
@property (readonly, nonatomic) BOOL isPhotoStreamPhoto;
@property (readonly, nonatomic) BOOL isProRes; // ivar: _isProRes
@property (readonly, nonatomic) BOOL isRAW;
@property (readonly, nonatomic) BOOL isRAWPlusJPEG;
@property (readonly, nonatomic) BOOL isReferencedAsset;
@property (readonly, nonatomic) BOOL isStreamedVideo;
@property (readonly, nonatomic) BOOL isSyndicatedAssetSavedToUserLibrary;
@property (readonly, nonatomic) BOOL isTIFF;
@property (readonly, nonatomic) BOOL isTimelapsePlaceholder;
@property (readonly, nonatomic) BOOL isVideo;
@property (readonly, nonatomic) BOOL isWalrusEnabled;
@property (readonly, nonatomic) NSNumber *livePhotoSRLCompensationAmount;
@property (readonly, nonatomic) NSDate *localCreationDate; // ivar: _localCreationDate
@property (readonly, copy, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) CLLocationCoordinate2D locationCoordinate; // ivar: _locationCoordinate
@property (readonly, nonatomic) NSData *locationData; // ivar: _locationData
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContextForFetchingResources;
@property (readonly, nonatomic) NSUInteger mediaSubtypes; // ivar: _mediaSubtypes
@property (readonly, nonatomic) NSInteger mediaType; // ivar: _mediaType
@property (readonly, nonatomic) NSString *metadataDebugDescription;
@property (readonly, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (readonly, nonatomic) CGRect normalizedFaceAreaRect;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) NSString *originalColorSpace; // ivar: _originalColorSpace
@property (readonly, nonatomic) CGRect originalFaceAreaRect;
@property (readonly, nonatomic) NSValue *originalFaceAreaRectValue;
@property (readonly, nonatomic) NSString *originalFilename;
@property (readonly, nonatomic) NSUInteger originalResourceChoice;
@property (readonly, nonatomic) float overallAestheticScore; // ivar: _overallAestheticScore
@property (readonly, nonatomic) BOOL participatesInLibraryScope; // ivar: _participatesInLibraryScope
@property (readonly, nonatomic) NSUInteger persistenceState; // ivar: _persistenceState
@property (readonly, nonatomic) NSArray *petRegions;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSUInteger pixelHeight; // ivar: _pixelHeight
@property (readonly, nonatomic) NSUInteger pixelWidth; // ivar: _pixelWidth
@property (readonly, nonatomic) NSInteger playbackStyle; // ivar: _playbackStyle
@property (readonly, nonatomic) unsigned short playbackVariation; // ivar: _playbackVariation
@property (readonly, nonatomic) CGRect preferredCropRect; // ivar: _preferredCropRect
@property (readonly, nonatomic) NSUInteger reframeVariation; // ivar: _reframeVariation
@property (readonly, nonatomic) BOOL representsBurst;
@property (readonly, nonatomic) NSString *resourcesDebugDescription;
@property (readonly, nonatomic) short savedAssetType; // ivar: _savedAssetType
@property (readonly, copy) NSSet *sceneClassifications;
@property (readonly, nonatomic) NSURL *segmentationResourceURL;
@property (readonly, nonatomic) NSUInteger sourceType;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsSegmentationResourceCaching;
@property (readonly, nonatomic, getter=isSyncFailureHidden) BOOL syncFailureHidden; // ivar: _syncFailureHidden
@property (readonly, nonatomic) NSString *syndicatedAppDisplayName;
@property (readonly, nonatomic) NSInteger syndicationEligibility;
@property (readonly, nonatomic) unsigned short syndicationState; // ivar: _syndicationState
@property (readonly, nonatomic) NSString *thumbnailIdentifier;
@property (readonly, nonatomic) NSUInteger thumbnailIndex;
@property (readonly, nonatomic) NSUInteger thumbnailIndex; // ivar: _thumbnailIndex
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic, getter=isTrashed) BOOL trashed; // ivar: _trashed
@property (readonly, nonatomic) NSDate *trashedDate; // ivar: _trashedDate
@property (readonly, nonatomic) NSString *uniformTypeIdentifier; // ivar: _uniformTypeIdentifier
@property (readonly, nonatomic) NSString *variationSuggestionStatesDetails;
@property (readonly, nonatomic) NSInteger videoCpDurationValue; // ivar: _videoCpDurationValue
@property (readonly, nonatomic) unsigned short videoCpVisibilityState; // ivar: _videoCpVisibilityState
@property (readonly, nonatomic) unsigned short videoDeferredProcessingNeeded; // ivar: _videoDeferredProcessingNeeded


+(BOOL)_isLibraryScopeExiting:(id)arg0 ;
+(BOOL)_isLivePhotoWithPhotoIris:(BOOL)arg0 hasAdjustments:(BOOL)arg1 videoCpDuration:(NSInteger)arg2 videoCPVisibility:(unsigned short)arg3 sourceType:(NSUInteger)arg4 deferredProcessingNeeded:(unsigned short)arg5 ;
+(BOOL)_libraryScopeAssetContributedByCurrentUser:(id)arg0 ;
+(BOOL)isOriginalKnownUnsupportedFormatForAsset:(id)arg0 failureInfo:(*id)arg1 ;
+(BOOL)isOriginalVideoComplementKnownUnsupportedFormatForAsset:(id)arg0 failureInfo:(*id)arg1 ;
+(BOOL)managedObjectSupportsAllowedForAnalysis;
+(BOOL)managedObjectSupportsBursts;
+(BOOL)managedObjectSupportsContributor;
+(BOOL)managedObjectSupportsDuplicateVisibilityState;
+(BOOL)managedObjectSupportsHiddenState;
+(BOOL)managedObjectSupportsMontage;
+(BOOL)managedObjectSupportsSavedAssetType;
+(BOOL)managedObjectSupportsTrashedState;
+(BOOL)managedObjectSupportsVisibilityState;
+(Class)propertySetClassForPropertySet:(id)arg0 ;
+(NSInteger)countOfAssetsWithLocationFromUUIDs:(id)arg0 photoLibrary:(id)arg1 ;
+(NSUInteger)_extendedPropertyFetchHintsForPropertySets:(id)arg0 ;
+(NSUInteger)propertyFetchHintsForPropertySets:(id)arg0 ;
+(id)_assetFetchResultFromAssets:(id)arg0 options:(id)arg1 ;
+(id)_composePropertiesToFetchWithHint:(NSUInteger)arg0 ;
+(id)_currentTimestampString;
+(id)_descriptionForMediaSubtype:(NSUInteger)arg0 ;
+(id)_descriptionForVariationSuggestionStates:(NSUInteger)arg0 ;
+(id)_descriptionForVariationSuggestionType:(NSUInteger)arg0 ;
+(id)_fetchRepresentativeAssetInAssetCollection:(id)arg0 ;
+(id)_imageManagerRequestLoggingQueue;
+(id)_inq_highestImageManagerRequestIDsObserved;
+(id)_inq_imageManagerRequestLogsByAssetUUID;
+(id)_inq_imageManagerRequestMessagesByRequestIDForAssetUUID:(id)arg0 requestID:(NSInteger)arg1 ;
+(id)_requestCuratedAssetInAssetCollection:(id)arg0 referenceAsset:(id)arg1 referencePersons:(id)arg2 fetchOptions:(id)arg3 onlyKey:(BOOL)arg4 ;
+(id)_transformMediaSubtypeReferences:(id)arg0 inComparisonPredicate:(id)arg1 options:(id)arg2 ;
+(id)_unfetchedPropertySetsForAssets:(id)arg0 fromPropertySets:(id)arg1 ;
+(id)composabilityScoresOfAssets:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)corePropertiesToFetch;
+(id)descriptionForMediaSubtypes:(NSUInteger)arg0 ;
+(id)descriptionForMediaType:(NSInteger)arg0 ;
+(id)descriptionForPlaybackStyle:(NSInteger)arg0 ;
+(id)entityKeyMap;
+(id)faceWorkerPropertiesToFetch;
+(id)fetchAllAssetsInYearRepresentedByYearHighlight:(id)arg0 options:(id)arg1 ;
+(id)fetchAssetsAllowedForSceneProcessingWithOptions:(id)arg0 ;
+(id)fetchAssetsForBehavioralCurationWithOptions:(id)arg0 ;
+(id)fetchAssetsForFaceGroups:(id)arg0 options:(id)arg1 ;
+(id)fetchAssetsForFaces:(id)arg0 options:(id)arg1 ;
+(id)fetchAssetsForKeywords:(id)arg0 options:(id)arg1 ;
+(id)fetchAssetsForPerson:(id)arg0 options:(id)arg1 ;
+(id)fetchAssetsForPersons:(id)arg0 options:(id)arg1 ;
+(id)fetchAssetsForReferences:(id)arg0 photoLibrary:(id)arg1 ;
+(id)fetchAssetsFromCameraSinceDate:(id)arg0 options:(id)arg1 ;
+(id)fetchAssetsGroupedByFaceUUIDForFaces:(id)arg0 ;
+(id)fetchAssetsGroupedByFaceUUIDForFaces:(id)arg0 fetchPropertySets:(id)arg1 ;
+(id)fetchAssetsInAssetCollection:(id)arg0 options:(id)arg1 ;
+(id)fetchAssetsInAssetCollections:(id)arg0 options:(id)arg1 ;
+(id)fetchAssetsInBoundingBoxWithTopLeftLocation:(id)arg0 bottomRightLocation:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsInImportSessions:(id)arg0 options:(id)arg1 ;
+(id)fetchAssetsInLibraryScope:(id)arg0 fromAssets:(id)arg1 ;
+(id)fetchAssetsInLibraryScope:(id)arg0 options:(id)arg1 ;
+(id)fetchAssetsInPreviewStateInLibraryScope:(id)arg0 options:(id)arg1 ;
+(id)fetchAssetsInPreviewStateWithPhotosOrPhotosDeferredSuggestedByClientTypeWithOptions:(id)arg0 ;
+(id)fetchAssetsInPreviewStateWithSuggestedByClientType:(short)arg0 options:(id)arg1 ;
+(id)fetchAssetsMatchingAdjustedFingerPrint:(id)arg0 photoLibrary:(id)arg1 ;
+(id)fetchAssetsMatchingMasterFingerPrint:(id)arg0 photoLibrary:(id)arg1 ;
+(id)fetchAssetsNeedingSceneProcessingWithOptions:(id)arg0 ;
+(id)fetchAssetsWithALAssetURLs:(id)arg0 options:(id)arg1 ;
+(id)fetchAssetsWithBurstIdentifier:(id)arg0 options:(id)arg1 ;
+(id)fetchAssetsWithCloudIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)fetchAssetsWithCurrentUserAsLibraryScopeContributor:(BOOL)arg0 inLibraryScope:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsWithLocalIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)fetchAssetsWithMediaType:(NSInteger)arg0 options:(id)arg1 ;
+(id)fetchAssetsWithObjectIDs:(id)arg0 options:(id)arg1 ;
+(id)fetchAssetsWithOptions:(id)arg0 ;
+(id)fetchAssetsWithSyndicationIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)fetchAssetsWithSyndicationIdentifiers:(id)arg0 options:(id)arg1 includeRejected:(BOOL)arg2 ;
+(id)fetchAssetsWithUUIDs:(id)arg0 options:(id)arg1 ;
+(id)fetchAssetsWithoutOriginalsInAssetCollection:(id)arg0 options:(id)arg1 ;
+(id)fetchCuratedAssetsForMomentShareCreationWithAssets:(id)arg0 options:(id)arg1 ;
+(id)fetchCuratedAssetsInAssetCollection:(id)arg0 ;
+(id)fetchCuratedAssetsInAssetCollection:(id)arg0 options:(id)arg1 ;
+(id)fetchCustomUserAssetsInMemory:(id)arg0 options:(id)arg1 ;
+(id)fetchExtendedCuratedAndRepresentativeAssetsAssociatedWithMemory:(id)arg0 options:(id)arg1 ;
+(id)fetchExtendedCuratedAssetsInAssetCollection:(id)arg0 options:(id)arg1 ;
+(id)fetchGuestAssetsInCollectionContainingAsset:(id)arg0 options:(id)arg1 ;
+(id)fetchGuestAssetsWithOptions:(id)arg0 ;
+(id)fetchKeyAssetByHighlightUUIDForHighlights:(id)arg0 options:(id)arg1 ;
+(id)fetchKeyAssetByMemoryUUIDForMemories:(id)arg0 options:(id)arg1 ;
+(id)fetchKeyAssetBySuggestionUUIDForSuggestions:(id)arg0 options:(id)arg1 ;
+(id)fetchKeyAssetForEachSuggestion:(id)arg0 options:(id)arg1 ;
+(id)fetchKeyAssetForSceneIdentifier:(unsigned int)arg0 aboveConfidenceThreshold:(CGFloat)arg1 minimumSceneAnalysisVersion:(short)arg2 options:(id)arg3 ;
+(id)fetchKeyAssetsInAssetCollection:(id)arg0 options:(id)arg1 ;
+(id)fetchKeyCuratedAssetInAssetCollection:(id)arg0 referenceAsset:(id)arg1 ;
+(id)fetchKeyCuratedAssetInAssetCollection:(id)arg0 referenceAsset:(id)arg1 options:(id)arg2 ;
+(id)fetchKeyCuratedAssetInAssetCollection:(id)arg0 referencePersons:(id)arg1 ;
+(id)fetchMovieCuratedAssetsInMemory:(id)arg0 ;
+(id)fetchPredicateFromComparisonPredicate:(id)arg0 options:(id)arg1 ;
+(id)fetchPreviewAssetsForMomentShareCreationWithAssets:(id)arg0 options:(id)arg1 ;
+(id)fetchReducedCuratedAssetsInMemory:(id)arg0 options:(id)arg1 ;
+(id)fetchReferencedAssetsWithOptions:(id)arg0 ;
+(id)fetchRepresentativeAssetsInAssetCollection:(id)arg0 ;
+(id)fetchSyndicatedAssetsWithOptions:(id)arg0 ;
+(id)fetchSyndicatedAssetsWithOptions:(id)arg0 includeRejected:(BOOL)arg1 ;
+(id)fetchType;
+(id)fetchUserCuratedAssetsInMemory:(id)arg0 ;
+(id)fetchUserCuratedAssetsInMemory:(id)arg0 options:(id)arg1 ;
+(id)filterPredicateForSavedSyndicationAssetsOnly;
+(id)filterPredicateForUnsavedSyndicationAssets;
+(id)filterPredicateToExcludeNoSyndicationAssets;
+(id)filterPredicateToIncludeOnlyReceivedSyndicatedAssets;
+(id)identifierCode;
+(id)imageManagerPropertiesToFetch;
+(id)managedEntityName;
+(id)originalUniformTypeIdentifierForAsset:(id)arg0 ;
+(id)pl_managedAssetsForAssets:(id)arg0 ;
+(id)predicateForSyndicatedAssetIdentifiers:(id)arg0 ;
+(id)predicateForSyndicatedAssetIdentifiers:(id)arg0 includeRejected:(BOOL)arg1 ;
+(id)propertiesToFetchWithHint:(NSUInteger)arg0 ;
+(id)propertySetAccessorsByPropertySet;
+(id)propertySetsForPropertyFetchHints:(NSUInteger)arg0 ;
+(id)quickClassificationFaceAdjustmentVersion;
+(id)requestCuratedAssetsInAssetCollection:(id)arg0 options:(id)arg1 ;
+(id)requestCuratedAssetsInAssetCollection:(id)arg0 referencePersons:(id)arg1 options:(id)arg2 ;
+(id)senderIdentifierByAssetUUIDForAssets:(id)arg0 ;
+(id)transformValueExpression:(id)arg0 forKeyPath:(id)arg1 ;
+(void)_batchFetchAdditionalPropertySetsIfNeeded:(id)arg0 forAssets:(id)arg1 ;
+(void)_computeFingerPrintsOfAsset:(id)arg0 completionHandler:(id)arg1 ;
+(void)_inq_recordRequestID:(NSInteger)arg0 ;
+(void)_inq_trimToMostRecentImageManagerMessages;
-(BOOL)_canHandleAdjustmentData:(id)arg0 withOptions:(id)arg1 ;
-(BOOL)canPerformEditOperation:(NSInteger)arg0 ;
-(BOOL)hasContentEqualTo:(id)arg0 ;
-(BOOL)hasLegacyAdjustments;
-(BOOL)isDeleted;
-(BOOL)isInFlight;
-(BOOL)isLocatedAtCoordinates:(struct CLLocationCoordinate2D )arg0 ;
-(BOOL)isMediaSubtype:(NSUInteger)arg0 ;
-(BOOL)isOriginalRaw;
-(BOOL)isOriginalSRGB;
-(BOOL)isPrimaryImageFormat;
-(BOOL)isScreenRecording;
-(BOOL)isVariationSuggestionStatesUnknown;
-(BOOL)needsDeferredProcessing;
-(BOOL)shouldUseRAWResourceAsUnadjustedEditBase;
-(BOOL)shouldUseRAWResourceWithOriginalResourceChoice:(NSUInteger)arg0 ;
-(Class)changeRequestClass;
-(NSInteger)_baseVersionForAdjustmentData:(id)arg0 canHandleAdjustmentData:(BOOL)arg1 ;
-(NSInteger)cloudSharedAssetPlaceholderKind;
-(NSInteger)originalImageOrientation;
-(NSUInteger)contentChangeFromAsset:(id)arg0 ;
-(NSUInteger)originalChoiceToFallbackForUnsupportRAW;
-(NSUInteger)requestContentEditingInputWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(NSUInteger)variationSuggestionStatesForVariationType:(NSUInteger)arg0 ;
-(id)__dictionaryWithContentsOfData:(id)arg0 ;
-(id)_computeCropVariantsWithConfigs:(id)arg0 forAspectRatio:(CGFloat)arg1 ;
-(id)_createAnalysisStatePropertyObject;
-(id)_createCommentPropertyObject;
-(id)_createKeywordPropertyObject;
-(id)_createPropertyObjectOfClass:(Class)arg0 ;
-(id)_createPropertyObjectOfClass:(Class)arg0 preFetchedProperties:(id)arg1 ;
-(id)_cropVariantForConfig:(NSInteger)arg0 aspectRatio:(CGFloat)arg1 ;
-(id)_filterCropVariants:(id)arg0 ;
-(id)_generateCropCandidates;
-(id)_getScaledCropForCropConfig:(id)arg0 aspectRatio:(CGFloat)arg1 withCropType:(NSInteger)arg2 ;
-(id)_imageRequestOptionsForBaseVersion:(NSInteger)arg0 options:(id)arg1 progressEstimateForImageProgress:(id)arg2 ;
-(id)_rankCropVariants:(id)arg0 ;
-(id)_uncachedLocation;
-(id)_unfetchedPropertySetsFromPropertySets:(id)arg0 ;
-(id)_videoRequestOptionsForBaseVersion:(NSInteger)arg0 options:(id)arg1 progressEstimateForVideoProgress:(id)arg2 ;
-(id)adjustmentProperties;
-(id)adjustmentVersion;
-(id)adjustmentsDebugMetadata;
-(id)aestheticProperties;
-(id)assetAnalysisStateProperties;
-(id)assetUserActivityProperties;
-(id)assetsLibraryURL;
-(id)cameraCaptureDeviceProperties;
-(id)characterRecognitionProperties;
-(id)cloudAssetGUID;
-(id)cloudLocalStateProperties;
-(id)coarseLocationProperties;
-(id)commentProperties;
-(id)cropVariants;
-(id)cropVariantsForAspectRatio:(CGFloat)arg0 ;
-(id)curationProperties;
-(id)debugFilename;
-(id)descriptionForAestheticsWithManagedAsset:(id)arg0 ;
-(id)descriptionForMediaAnalysisWithManagedAsset:(id)arg0 ;
-(id)descriptionForPhotoAnanlysisWallpaperProeprtiesWithManagedAsset:(id)arg0 ;
-(id)destinationAssetCopyProperties;
-(id)detailedDebugDescriptionInLibrary:(id)arg0 ;
-(id)evaluationDebugMetadata;
-(id)fileURLForFullsizeRenderImage;
-(id)fileURLForVideoComplementFile;
-(id)fileURLsForDiagnosticFiles;
-(id)gatingDebugMetadata;
-(id)gridMetadataProperties;
-(id)importProperties;
-(id)initWithFetchDictionary:(id)arg0 propertyHint:(NSUInteger)arg1 photoLibrary:(id)arg2 ;
-(id)keywordProperties;
-(id)libraryID;
-(id)libraryScopeProperties;
-(id)localDateProperties;
-(id)mainFileURL;
-(id)managedAssetForPhotoLibrary:(id)arg0 ;
-(id)mediaAnalysisProperties;
-(id)messagesForRecentImageManagerRequests;
-(id)monoskiMediaProperties;
-(id)montageProperties;
-(id)objectReference;
-(id)originalAVAssetCommonMetadata;
-(id)originalAVAssetOrProxy;
-(id)originalCreationDateWithTimeZone:(*id)arg0 ;
-(id)originalImageProperties;
-(id)originalMetadataProperties;
-(id)originalUTI;
-(id)pathForAdjustmentDataFile;
-(id)pathForAdjustmentFile;
-(id)pathForOriginalFile;
-(id)photoAnalysisWallpaperProperties;
-(id)photoIrisProperties;
-(id)photosInfoPanelExtendedProperties;
-(id)photosInfoPanelLocationProperties;
-(id)photosOneUpProperties;
-(id)pl_managedAsset;
-(id)pl_managedAssetFromPhotoLibrary:(id)arg0 ;
-(id)sceneAnalysisProperties;
-(id)sceneprintProperties;
-(id)visualSearchProperties;
-(id)wallpaperCroppingDebugKeyValuePairs;
-(int)analysisStateForWorkerType:(short)arg0 outLastIgnoreDate:(*id)arg1 outIgnoreUntilDate:(*id)arg2 ;
-(int)loadParallaxResource:(NSInteger)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)loadPetsRegions:(id)arg0 ;
-(int)orientation;
-(short)assetSource;
-(short)kind;
-(short)kindSubtype;
-(struct CGRect )suggestedCropForTargetSize:(struct CGSize )arg0 ;
-(struct CGRect )suggestedCropForTargetSize:(struct CGSize )arg0 withFocusRegion:(struct CGRect )arg1 ;
-(struct CGRect )suggestedCropForTargetSize:(struct CGSize )arg0 withFocusRegion:(struct CGRect )arg1 andOutputCropScore:(*CGFloat)arg2 ;
-(struct CGRect )suggestedCropForTargetSize:(struct CGSize )arg0 withOcclusionRegion:(struct CGRect )arg1 andOutputCropScore:(*CGFloat)arg2 ;
-(struct CGSize )imageSize;
-(struct CGSize )originalImageSize;
-(unsigned short)bundleScope;
-(void)_addPropertyHint:(NSUInteger)arg0 ;
-(void)_attachPropertyObjectOfClass:(Class)arg0 preFetchedProperties:(id)arg1 ;
-(void)_createExtendedPropertySetsIfNeededWithPropertyHint:(NSUInteger)arg0 fetchDictionary:(id)arg1 ;
-(void)_crop:(struct CGRect *)arg0 score:(*CGFloat)arg1 withZoom:(CGFloat)arg2 cropConfig:(id)arg3 aspectRatio:(CGFloat)arg4 ;
-(void)_initializeCachedLocation;
-(void)_invalidateCachedLocation;
-(void)_renderTemporaryVideoForObjectBuilder:(id)arg0 resultHandler:(id)arg1 ;
-(void)_requestRenderedVideoForVideoURL:(id)arg0 adjustmentData:(id)arg1 canHandleAdjustmentData:(BOOL)arg2 resultHandler:(id)arg3 ;
-(void)cancelContentEditingInputRequest:(NSUInteger)arg0 ;
-(void)cancelParallaxResourceRequest:(int)arg0 ;
-(void)cancelPetsRegionsRequest:(int)arg0 ;
-(void)fetchPropertySetsIfNeeded;
-(void)generateLargeThumbnailFileIfNecessary;
-(void)getFingerPrintForAssetType:(NSInteger)arg0 withCompletionHandler:(id)arg1 ;
-(void)getMasterFingerPrintWithCompletionHandler:(id)arg0 ;
-(void)recordImageManagerMessageForRequestID:(int)arg0 message:(id)arg1 ;
-(void)updateSegmentationResource:(id)arg0 ;


@end


#endif