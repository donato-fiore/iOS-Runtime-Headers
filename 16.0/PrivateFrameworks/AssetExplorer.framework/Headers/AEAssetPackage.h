// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AEASSETPACKAGE_H
#define AEASSETPACKAGE_H

@class NSMutableDictionary, NSMutableSet, PFAssetAdjustments, NSString, NSDate, CLLocation, AVAsset, AVAudioMix, NSURL, NSDictionary, PHLivePhoto, UIImage;
@protocol PUCAMReviewAsset, NSCopying, NSMutableCopying, NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AEAssetPackage : NSObject <PUCAMReviewAsset, NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, nonatomic, getter=isHDR) BOOL HDR;
@property (readonly, nonatomic) NSMutableDictionary *_contentQueueSidecar; // ivar: __contentQueueSidecar
@property (readonly, nonatomic) NSMutableDictionary *_contentQueue_finalURLs; // ivar: __contentQueue_finalURLs
@property (readonly, nonatomic) NSMutableSet *_contentQueue_suppressedTypes; // ivar: __contentQueue_suppressedTypes
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_packageContentQueue; // ivar: __packageContentQueue
@property (readonly, nonatomic) CGFloat aspectRatio;
@property (readonly, nonatomic) PFAssetAdjustments *assetAdjustments;
@property (readonly, copy, nonatomic) NSString *burstIdentifier;
@property (readonly, nonatomic) BOOL canPlayLoopingVideo;
@property (readonly, nonatomic) BOOL canPlayPhotoIris;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUInteger deferredLogInfo;
@property (readonly, nonatomic) unsigned short deferredProcessingNeeded;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property (readonly, nonatomic) BOOL hasPhotoColorAdjustments;
@property (readonly, nonatomic) BOOL hasSyndicationInformation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isAnimatedImage;
@property (readonly, nonatomic) BOOL isGuestAsset;
@property (readonly, nonatomic) BOOL isPhotoIrisPlaceholder;
@property (readonly, nonatomic) BOOL isTemporaryPlaceholder;
@property (readonly, nonatomic, getter=isLivePhoto) BOOL livePhoto;
@property (readonly, nonatomic) ? livePhotoDuration;
@property (readonly, nonatomic, getter=isLivePhotoPlaceholder) BOOL livePhotoPlaceholder;
@property (readonly, nonatomic) ? livePhotoSynchronizedDisplayTime;
@property (readonly, nonatomic) NSDate *localCreationDate;
@property (readonly, nonatomic) NSString *localizedGeoDescription;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSUInteger mediaSubtypes;
@property (readonly, nonatomic) NSUInteger mediaType;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) BOOL needsDeferredProcessing;
@property (readonly, nonatomic) NSUInteger numberOfRepresentedAssets;
@property (readonly, nonatomic) NSUInteger originalFilesize;
@property (readonly, nonatomic) ? photoIrisStillDisplayTime;
@property (readonly, nonatomic) ? photoIrisVideoDuration;
@property (readonly, nonatomic) NSUInteger pixelHeight;
@property (readonly, nonatomic) NSUInteger pixelWidth;
@property (readonly, nonatomic) NSInteger playbackStyle;
@property (readonly, nonatomic) NSInteger playbackVariation;
@property (readonly, nonatomic) AVAsset *providedAVAsset;
@property (readonly, nonatomic) AVAudioMix *providedAudioMix;
@property (readonly, nonatomic) NSURL *providedFullsizeImageURL;
@property (readonly, nonatomic) NSURL *providedFullsizeRenderImageURL;
@property (readonly, nonatomic) NSURL *providedFullsizeRenderVideoURL;
@property (readonly, nonatomic) NSDictionary *providedImageMetadata;
@property (readonly, nonatomic) PHLivePhoto *providedLivePhoto;
@property (readonly, nonatomic) UIImage *providedPreviewImage;
@property (readonly, nonatomic) NSURL *providedVideoURL;
@property (readonly, nonatomic) BOOL representsBurst;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniformTypeIdentifier;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) ? videoKeyFrameSourceTime;


+(BOOL)supportsSecureCoding;
+(id)unsuppressedURLsFromURLs:(id)arg0 ;
-(BOOL)containsLivePhotoContent;
-(BOOL)containsSuppressedLivePhoto;
-(BOOL)isURLSuppressedForType:(id)arg0 ;
-(NSInteger)_sendSourceFromMediaOrigin:(NSInteger)arg0 ;
-(NSInteger)mediaOrigin;
-(NSUInteger)isContentEqualTo:(id)arg0 ;
-(id)_sidecarObjectForKey:(id)arg0 ;
-(id)browserItemPayload;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currentURLForType:(id)arg0 ;
-(id)durableURLsSnapshot;
-(id)durableURLsSnapshotApplyingSuppression:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)reviewAssetFromPackageMetadata;
-(id)sidecarDateForKey:(id)arg0 ;
-(id)sidecarImageForKey:(id)arg0 ;
-(id)sidecarNumberForKey:(id)arg0 ;
-(id)sidecarPropertyListForKey:(id)arg0 ;
-(id)sidecarSnapshot;
-(id)suppressedTypesSnapshot;
-(struct ? )sidecarTimeForKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif