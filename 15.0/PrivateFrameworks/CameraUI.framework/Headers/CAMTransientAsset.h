// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMTRANSIENTASSET_H
#define CAMTRANSIENTASSET_H

@class NSString, NSDate, CLLocation, NSURL, UIImage;
@protocol PUTransientDisplayAsset;

#import <Foundation/Foundation.h>


@interface CAMTransientAsset : NSObject <PUTransientDisplayAsset>



@property (readonly, nonatomic, getter=isHDR) BOOL HDR; // ivar: _HDR
@property (readonly, nonatomic) CGFloat aspectRatio;
@property (readonly, copy, nonatomic) NSString *burstIdentifier; // ivar: _burstIdentifier
@property (readonly, nonatomic) BOOL canPlayLoopingVideo; // ivar: _canPlayLoopingVideo
@property (readonly, nonatomic) BOOL canPlayPhotoIris; // ivar: _canPlayPhotoIris
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
@property (readonly, nonatomic) BOOL isAnimatedImage;
@property (readonly, nonatomic) BOOL isGuestAsset;
@property (readonly, nonatomic) BOOL isLivePhoto;
@property (readonly, nonatomic) BOOL isPhotoIrisPlaceholder; // ivar: _isPhotoIrisPlaceholder
@property (readonly, nonatomic) BOOL isTemporaryPlaceholder; // ivar: _isTemporaryPlaceholder
@property (readonly, nonatomic, getter=isLivePhoto) BOOL livePhoto;
@property (readonly, nonatomic) NSDate *localCreationDate; // ivar: _localCreationDate
@property (readonly, nonatomic) NSString *localizedGeoDescription;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSUInteger mediaSubtypes; // ivar: _mediaSubtypes
@property (readonly, nonatomic) NSUInteger mediaType; // ivar: _mediaType
@property (readonly, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (readonly, nonatomic) BOOL needsDeferredProcessing;
@property (readonly, nonatomic) NSUInteger numberOfRepresentedAssets; // ivar: _numberOfRepresentedAssets
@property (readonly, nonatomic) NSUInteger originalFilesize;
@property (readonly, copy, nonatomic) NSURL *persistenceURL; // ivar: _persistenceURL
@property (readonly, nonatomic) ? photoIrisStillDisplayTime; // ivar: _photoIrisStillDisplayTime
@property (readonly, nonatomic) ? photoIrisVideoDuration; // ivar: _photoIrisVideoDuration
@property (readonly, nonatomic) NSUInteger pixelHeight; // ivar: _pixelHeight
@property (readonly, nonatomic) NSUInteger pixelWidth; // ivar: _pixelWidth
@property (readonly, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (readonly, nonatomic) NSInteger playbackStyle; // ivar: _playbackStyle
@property (readonly, nonatomic) NSInteger playbackVariation; // ivar: _playbackVariation
@property (readonly, nonatomic) BOOL representsBurst; // ivar: _representsBurst
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniformTypeIdentifier;
@property (readonly, nonatomic) NSString *uuid; // ivar: _uuid
@property (readonly, nonatomic) ? videoKeyFrameSourceTime;


-(NSUInteger)isContentEqualTo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAsset:(id)arg0 convertible:(id)arg1 ;
-(id)initWithAsset:(id)arg0 uuid:(id)arg1 ;
-(id)initWithUUID:(id)arg0 ;
-(void)_populateStillImageTransientAssetFromConvertible:(id)arg0 ;
-(void)_populateVideoTransientAssetFromConvertible:(id)arg0 ;


@end


#endif