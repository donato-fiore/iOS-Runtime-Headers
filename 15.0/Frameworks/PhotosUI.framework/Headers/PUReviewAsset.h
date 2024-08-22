// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUREVIEWASSET_H
#define PUREVIEWASSET_H

@class NSString, PFAssetAdjustments, NSDate, NSDictionary, CLLocation, AVAsset, AVAudioMix, NSURL, PHLivePhoto, UIImage, PFVideoAVObjectBuilder;
@protocol PUEditableAsset, PUCAMReviewAsset, PXShareable;

#import <Foundation/Foundation.h>


@interface PUReviewAsset : NSObject <PUEditableAsset, PUCAMReviewAsset, PXShareable>



@property (readonly, nonatomic, getter=isHDR) BOOL HDR; // ivar: _HDR
@property (readonly, copy, nonatomic) NSString *accessibilityDescription;
@property (readonly, nonatomic, getter=isAdjusted) BOOL adjusted;
@property (readonly, nonatomic) CGFloat aspectRatio;
@property (readonly, nonatomic) PFAssetAdjustments *assetAdjustments; // ivar: _assetAdjustments
@property (readonly, copy, nonatomic) NSString *burstIdentifier; // ivar: _burstIdentifier
@property (readonly, nonatomic) BOOL canPlayLoopingVideo;
@property (readonly, nonatomic) BOOL canPlayPhotoIris; // ivar: _canPlayPhotoIris
@property (readonly, nonatomic, getter=isCloudPhotoLibraryEnabled) BOOL cloudPhotoLibraryEnabled;
@property (readonly, nonatomic) BOOL containsAllMetadata;
@property (readonly, nonatomic, getter=isContentAdjustmentAllowed) BOOL contentAdjustmentAllowed;
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUInteger deferredLogInfo;
@property (readonly, nonatomic) unsigned short deferredProcessingNeeded;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property (readonly, nonatomic) BOOL hasPhotoColorAdjustments;
@property (readonly, nonatomic) BOOL hasSyndicationInformation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic, getter=isHighFramerateVideo) BOOL highFramerateVideo;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDictionary *imageProperties;
@property (readonly, nonatomic, getter=isInPlaceVideoTrimAllowed) BOOL inPlaceVideoTrimAllowed;
@property (readonly, nonatomic) BOOL isAnimatedImage;
@property (readonly, nonatomic) BOOL isGuestAsset;
@property (readonly, nonatomic) BOOL isPhotoIrisPlaceholder;
@property (readonly, nonatomic) BOOL isTemporaryPlaceholder;
@property (readonly, nonatomic, getter=isLivePhoto) BOOL livePhoto; // ivar: _livePhoto
@property (readonly, nonatomic) ? livePhotoDuration; // ivar: _livePhotoDuration
@property (readonly, nonatomic, getter=isLivePhotoPlaceholder) BOOL livePhotoPlaceholder; // ivar: _livePhotoPlaceholder
@property (readonly, nonatomic) ? livePhotoSynchronizedDisplayTime; // ivar: _livePhotoSynchronizedDisplayTime
@property (readonly, nonatomic, getter=isLivePhotoVisibilityAdjustmentAllowed) BOOL livePhotoVisibilityAdjustmentAllowed;
@property (readonly, nonatomic) NSUInteger livePhotoVisibilityState;
@property (readonly, nonatomic) NSDate *localCreationDate; // ivar: _localCreationDate
@property (readonly, nonatomic) NSString *localizedGeoDescription;
@property (readonly, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) NSUInteger mediaSubtypes; // ivar: _mediaSubtypes
@property (readonly, nonatomic) NSUInteger mediaType; // ivar: _mediaType
@property (readonly, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (readonly, nonatomic) BOOL needsDeferredProcessing;
@property (readonly, nonatomic) NSUInteger numberOfRepresentedAssets; // ivar: _numberOfRepresentedAssets
@property (readonly, nonatomic) int originalEXIFOrientation;
@property (readonly, nonatomic) NSUInteger originalFilesize;
@property (readonly, nonatomic) NSUInteger originalResourceChoice;
@property (readonly, copy, nonatomic) NSString *pathForOriginalImageFile;
@property (readonly, copy, nonatomic) NSString *pathForOriginalVideoFile;
@property (readonly, copy, nonatomic) NSString *pathForTrimmedVideoFile;
@property (readonly, nonatomic) ? photoIrisStillDisplayTime;
@property (readonly, nonatomic) ? photoIrisVideoDuration;
@property (readonly, nonatomic) NSUInteger pixelHeight; // ivar: _pixelHeight
@property (readonly, nonatomic) NSUInteger pixelWidth; // ivar: _pixelWidth
@property (readonly, nonatomic) NSInteger playbackStyle; // ivar: _playbackStyle
@property (readonly, nonatomic) NSInteger playbackVariation; // ivar: _playbackVariation
@property (readonly, nonatomic) AVAsset *providedAVAsset; // ivar: providedAVAsset
@property (readonly, nonatomic) AVAudioMix *providedAudioMix; // ivar: providedAudioMix
@property (readonly, nonatomic) NSURL *providedFullsizeImageURL; // ivar: _providedFullsizeImageURL
@property (readonly, nonatomic) NSURL *providedFullsizeRenderImageURL; // ivar: _providedFullsizeRenderImageURL
@property (readonly, nonatomic) NSURL *providedFullsizeRenderVideoURL; // ivar: _providedFullsizeRenderVideoURL
@property (readonly, nonatomic) NSDictionary *providedImageMetadata; // ivar: _providedImageMetadata
@property (readonly, nonatomic) PHLivePhoto *providedLivePhoto; // ivar: providedLivePhoto
@property (readonly, nonatomic) UIImage *providedPreviewImage; // ivar: _providedPreviewImage
@property (readonly, nonatomic) NSURL *providedVideoURL; // ivar: _providedVideoURL
@property (readonly, nonatomic) NSUInteger reframeVariation;
@property (readonly, nonatomic) BOOL representsBurst; // ivar: _representsBurst
@property (readonly, nonatomic) BOOL requiresConfidentiality; // ivar: _requiresConfidentiality
@property (readonly, nonatomic, getter=isResourceDownloadPossible) BOOL resourceDownloadPossible;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTrimmableType) BOOL trimmableType;
@property (readonly, nonatomic) NSString *uniformTypeIdentifier;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) ? videoKeyFrameSourceTime;
@property (readonly, nonatomic) PFVideoAVObjectBuilder *videoObjectBuilder;


+(BOOL)_shouldCheckConfidentiality;
+(BOOL)_shouldShowConfidentialityWarningForAdjustments:(id)arg0 ;
+(BOOL)_shouldShowConfidentialityWarningForMetadata:(id)arg0 creationDate:(id)arg1 ;
+(NSUInteger)_confidentialityWarningsVersionForAdjustments:(id)arg0 ;
+(id)createUniqueMediaDirectoryForAssetWithIdentifier:(id)arg0 ;
+(id)fileURLForAdjustmentsInDirectory:(id)arg0 ;
+(id)fileURLForFullsizeImageInDirectory:(id)arg0 extension:(id)arg1 ;
+(id)fileURLForFullsizeRenderImageInDirectory:(id)arg0 extension:(id)arg1 ;
+(id)fileURLForFullsizeRenderVideoComplementInDirectory:(id)arg0 ;
+(id)fileURLForFullsizeRenderVideoInDirectory:(id)arg0 ;
+(id)fileURLForFullsizeVideoComplementInDirectory:(id)arg0 ;
+(id)fileURLForFullsizeVideoInDirectory:(id)arg0 extension:(id)arg1 ;
-(BOOL)_linkFileAtURL:(id)arg0 toURL:(id)arg1 ;
-(BOOL)isOriginalRaw;
-(NSUInteger)isContentEqualTo:(id)arg0 ;
-(NSUInteger)requestContentEditingInputWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(id)_ensureLinkDestinationDirectoryFromBaseDirectory:(id)arg0 ;
-(id)_uniqueDestinationURLForFileURL:(id)arg0 inDirectory:(id)arg1 ;
-(id)adjustmentOutputForInputBaseVersion:(NSInteger)arg0 withLivePhotoSupport:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAVAsset:(id)arg0 audioMix:(id)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 captureDate:(id)arg4 duration:(CGFloat)arg5 previewImage:(id)arg6 videoURL:(id)arg7 adjustments:(id)arg8 identifier:(id)arg9 ;
-(id)initWithAVAsset:(id)arg0 audioMix:(id)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 captureDate:(id)arg4 duration:(CGFloat)arg5 previewImage:(id)arg6 videoURL:(id)arg7 unadjustedVideoURL:(id)arg8 adjustments:(id)arg9 identifier:(id)arg10 ;
-(id)initWithConformingAsset:(id)arg0 ;
-(id)initWithLivePhoto:(id)arg0 fullsizeUnadjustedImageURL:(id)arg1 fullsizeUnadjustedVideoURL:(id)arg2 assetAdjustments:(id)arg3 width:(NSUInteger)arg4 height:(NSUInteger)arg5 captureDate:(id)arg6 metadata:(id)arg7 duration:(CGFloat)arg8 previewImage:(id)arg9 identifier:(id)arg10 ;
-(id)initWithPhoto:(id)arg0 mediaSubtypes:(NSUInteger)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 captureDate:(id)arg4 metadata:(id)arg5 burstIdentifier:(id)arg6 representedCount:(NSUInteger)arg7 fullsizeImageURL:(id)arg8 fullsizeUnadjustedImageURL:(id)arg9 assetAdjustments:(id)arg10 identifier:(id)arg11 ;
-(id)initWithReviewAsset:(id)arg0 ;
-(id)initWithReviewAsset:(id)arg0 baseImageURL:(id)arg1 renderedImageURL:(id)arg2 baseVideoURL:(id)arg3 renderedVideoURL:(id)arg4 pixelWidth:(NSUInteger)arg5 pixelHeight:(NSUInteger)arg6 assetAdjustments:(id)arg7 duration:(CGFloat)arg8 ;
-(id)initWithReviewAsset:(id)arg0 baseImageURL:(id)arg1 renderedImageURL:(id)arg2 baseVideoURL:(id)arg3 renderedVideoURL:(id)arg4 previewImage:(id)arg5 pixelWidth:(NSUInteger)arg6 pixelHeight:(NSUInteger)arg7 assetAdjustments:(id)arg8 duration:(CGFloat)arg9 ;
-(id)initWithReviewAsset:(id)arg0 linkFileURLsToUniquePathsInDirectory:(id)arg1 ;
-(id)initWithReviewAsset:(id)arg0 linkFileURLsToUniquePathsInDirectory:(id)arg1 canPlayPhotoIris:(BOOL)arg2 ;
-(id)initWithReviewAsset:(id)arg0 primaryResourceURL:(id)arg1 ;
-(id)inputForAdjustmentWithMediaProvider:(id)arg0 canHandleAdjustments:(id)arg1 ;
-(id)primaryRenderedMediaURL;
-(id)providedImageURLForImageVersion:(NSInteger)arg0 ;
-(id)providedVideoURLForImageVersion:(NSInteger)arg0 ;
-(id)providedVideoURLForVideoVersion:(NSInteger)arg0 ;
-(id)reviewAssetRevertingAdjustments;
-(id)reviewAssetWithAdjustmentOutput:(id)arg0 adjustmentData:(id)arg1 formatIdentifier:(id)arg2 version:(id)arg3 ;
-(int)exifOrientationForImageVersion:(NSInteger)arg0 ;
-(void)_removeFileAtURL:(id)arg0 ;
-(void)cancelContentEditingInputRequest:(NSUInteger)arg0 ;
-(void)removeAllFilesAtReferencedURLs;


@end


#endif