// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXIMPORTITEMVIEWMODEL_H
#define PXIMPORTITEMVIEWMODEL_H

@class NSString, NSMutableDictionary, NSDate, NSData, NSNumber, NSDictionary, PHImportAsset, CLLocation, NSTimeZone, NSError, PHImportAssetDataRequest;
@protocol PXDisplayAsset, PXMetadataDetailsContentItem, NSCopying, PXImportDisplayDelegate;


#import "PXObservable.h"
#import "PXImportAssetCollection.h"

@interface PXImportItemViewModel : PXObservable <PXDisplayAsset, PXMetadataDetailsContentItem, NSCopying>

 {
    NSString *_collectionIdentifier;
}


@property (readonly, nonatomic) CGRect acceptableCropRect;
@property (readonly, nonatomic) CGFloat aspectRatio;
@property (weak, nonatomic) PXImportAssetCollection *assetCollection; // ivar: _assetCollection
@property (retain, nonatomic) NSMutableDictionary *assetRequestsBySize; // ivar: _assetRequestsBySize
@property (readonly, nonatomic) NSInteger badgeType;
@property (readonly, nonatomic) NSUInteger burstSelectionTypes;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *debugDisplayName;
@property (readonly, nonatomic) Class defaultImageProviderClass;
@property (readonly, nonatomic) NSString *deleteSession; // ivar: _deleteSession
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<PXImportDisplayDelegate> *displayDelegate; // ivar: _displayDelegate
@property (readonly, nonatomic, getter=isDuplicate) BOOL duplicate; // ivar: _duplicate
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic) CGRect faceAreaRect;
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property (readonly, nonatomic) NSData *fetchColorNormalizationData;
@property (readonly, nonatomic) NSDate *fileCreationDate;
@property (readonly, nonatomic) NSString *fileName;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *hdrGain;
@property (nonatomic) CGFloat imageProcessingEndTime; // ivar: _imageProcessingEndTime
@property (nonatomic) CGFloat imageProcessingStartTime; // ivar: _imageProcessingStartTime
@property (readonly, nonatomic) NSDictionary *imageRepresentations;
@property (retain, nonatomic) NSMutableDictionary *imageRepresentationsBySize; // ivar: _imageRepresentationsBySize
@property (readonly, nonatomic) PHImportAsset *importAsset; // ivar: _importAsset
@property (readonly, nonatomic) NSDate *importDate;
@property (readonly, nonatomic) NSDate *importDate; // ivar: _importDate
@property (readonly, nonatomic) BOOL isAutoPlaybackEligibilityEstimated;
@property (readonly, nonatomic) BOOL isDeleted; // ivar: _isDeleted
@property (readonly, nonatomic) BOOL isEligibleForAutoPlayback;
@property (readonly, nonatomic) BOOL isInCloud;
@property (readonly, nonatomic) BOOL isMediaAsset;
@property (readonly, nonatomic) BOOL isNotYetImported;
@property (readonly, nonatomic) BOOL isPanoramicImage;
@property (readonly, nonatomic) NSString *kind; // ivar: _kind
@property (nonatomic) CGSize largeThumbnailSize; // ivar: _largeThumbnailSize
@property (readonly, nonatomic) ? livePhotoVideoDuration;
@property (readonly, nonatomic) NSDate *localCreationDate;
@property (readonly, nonatomic) NSString *localizedGeoDescription;
@property (readonly, nonatomic) NSUInteger mediaSubtypes;
@property (readonly, nonatomic) NSInteger mediaType;
@property (readonly, nonatomic) NSUInteger pixelHeight;
@property (readonly, nonatomic) NSUInteger pixelWidth;
@property (readonly, nonatomic) NSInteger playbackStyle;
@property (readonly, nonatomic) NSInteger playbackVariation;
@property (readonly, nonatomic) CGRect preferredCropRect;
@property (readonly, nonatomic) NSNumber *px_FPS;
@property (readonly, nonatomic) NSNumber *px_ISORating;
@property (readonly, nonatomic) NSNumber *px_aperture;
@property (readonly, nonatomic) NSString *px_assetDescription;
@property (readonly, nonatomic, getter=px_isAudio) BOOL px_audio;
@property (readonly, nonatomic) unsigned int px_audioTrackFormat;
@property (readonly, nonatomic) NSNumber *px_bitRate;
@property (readonly, nonatomic) NSString *px_burstUUID;
@property (readonly, nonatomic) BOOL px_canUseLocation;
@property (readonly, nonatomic) NSString *px_codec;
@property (readonly, nonatomic) NSDate *px_creationDate;
@property (readonly, nonatomic) NSNumber *px_digitalZoomRatio;
@property (readonly, nonatomic) NSNumber *px_duration;
@property (readonly, nonatomic) NSNumber *px_exposureBias;
@property (readonly, nonatomic, getter=ipx_isFavorite) BOOL px_favorite;
@property (readonly, nonatomic) unsigned short px_fetchCloudLocalState;
@property (readonly, nonatomic) NSUInteger px_fileType;
@property (readonly, nonatomic) NSString *px_filename;
@property (readonly, nonatomic) NSNumber *px_filesize;
@property (readonly, nonatomic) NSNumber *px_flash;
@property (readonly, nonatomic) NSNumber *px_focalLength;
@property (readonly, nonatomic) NSNumber *px_focalLengthIn35mm;
@property (readonly, nonatomic) NSString *px_formattedCameraModel;
@property (readonly, nonatomic) BOOL px_hasKeywords;
@property (readonly, nonatomic, getter=px_isHidden) BOOL px_hidden;
@property (readonly, nonatomic, getter=px_isImage) BOOL px_image;
@property (readonly, nonatomic, getter=px_isInTrash) BOOL px_inTrash;
@property (readonly, nonatomic) BOOL px_isCinematicVideo;
@property (readonly, nonatomic) BOOL px_isDepthEffect;
@property (readonly, nonatomic) *BOOL px_isExtendedPropertiesProcessed;
@property (readonly, nonatomic) BOOL px_isH264;
@property (readonly, nonatomic) BOOL px_isHEVC;
@property (readonly, nonatomic) BOOL px_isLivePhoto;
@property (readonly, nonatomic) BOOL px_isPanorama;
@property (readonly, nonatomic) BOOL px_isProRes;
@property (readonly, nonatomic) BOOL px_isScreenRecording;
@property (readonly, nonatomic) BOOL px_isScreenshot;
@property (readonly, nonatomic) BOOL px_isSelfie;
@property (readonly, nonatomic) BOOL px_isSloMo;
@property (readonly, nonatomic) BOOL px_isTimelapse;
@property (readonly, nonatomic) NSString *px_lensModel;
@property (readonly, nonatomic) NSString *px_make;
@property (readonly, nonatomic) NSNumber *px_meteringMode;
@property (readonly, nonatomic) NSString *px_model;
@property (readonly, nonatomic) NSDate *px_originalCreationDate;
@property (readonly, nonatomic) NSUInteger px_originalFileType;
@property (readonly, nonatomic) CLLocation *px_originalLocation;
@property (readonly, nonatomic) NSTimeZone *px_originalTimeZone;
@property (readonly, nonatomic) NSUInteger px_originalType;
@property (readonly, nonatomic) BOOL px_representsBurst;
@property (readonly, nonatomic) PXIntSize_st px_resolution;
@property (readonly, nonatomic) BOOL px_reverseLocationDataIsValid;
@property (readonly, nonatomic) NSNumber *px_sampleRate;
@property (readonly, nonatomic) NSNumber *px_semanticStylePreset;
@property (readonly, nonatomic) BOOL px_shotWithNightMode;
@property (readonly, nonatomic) NSNumber *px_shutterSpeed;
@property (readonly, nonatomic) BOOL px_supportsImageProperties;
@property (readonly, nonatomic) NSTimeZone *px_timeZone;
@property (readonly, nonatomic) NSString *px_title;
@property (readonly, nonatomic) NSUInteger px_type;
@property (readonly, nonatomic) NSString *px_uniformTypeIdentifier;
@property (readonly, nonatomic, getter=px_isVideo) BOOL px_video;
@property (readonly, nonatomic) NSNumber *px_whiteBalance;
@property (readonly, nonatomic) BOOL representsBurst;
@property (readonly, nonatomic, getter=isSelectable) BOOL selectable; // ivar: _selectable
@property (readonly, nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSError *thumbnailError; // ivar: _thumbnailError
@property (readonly, nonatomic) NSUInteger thumbnailIndex;
@property (readonly, nonatomic) NSInteger thumbnailIndex; // ivar: _thumbnailIndex
@property (weak, nonatomic) PHImportAssetDataRequest *thumbnailRequest; // ivar: _thumbnailRequest
@property (retain, nonatomic) NSMutableDictionary *thumbnailRequestsBySize; // ivar: _thumbnailRequestsBySize
@property (nonatomic) CGSize thumbnailSize; // ivar: _thumbnailSize
@property (readonly, nonatomic) NSUInteger thumbnailVersion;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) id *uuid;


+(BOOL)hasPanoramaImageDimensions:(struct CGSize )arg0 ;
+(id)alreadyImportedGroupIdentifier;
+(id)dateFormatter;
+(id)importAssetsFromModels:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToImportItemViewModel:(id)arg0 ;
-(NSInteger)isContentEqualTo:(id)arg0 ;
-(id)accessibilityLabel;
-(id)assetDataRequestForRequestSize:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)groupIdentifier;
-(id)init;
-(id)initWithImportAsset:(id)arg0 ;
-(id)initWithKind:(id)arg0 selectable:(BOOL)arg1 ;
-(id)mutableChangeObject;
-(id)px_localizedGeoDescriptionForRTL:(BOOL)arg0 ;
-(id)thumbnailRequestsForRequestSize:(NSUInteger)arg0 ;
-(struct CGRect )bestCropRectForAspectRatio:(CGFloat)arg0 ;
-(void)addImageRepresentation:(id)arg0 ;
-(void)addThumbnailRequest:(id)arg0 ;
-(void)performChanges:(id)arg0 ;
-(void)removeAssetDataRequestForRequestSize:(NSUInteger)arg0 ;
-(void)removeThumbnailRequest:(id)arg0 ;
-(void)setAssetDataRequest:(id)arg0 forRequestSize:(NSUInteger)arg1 ;


@end


#endif