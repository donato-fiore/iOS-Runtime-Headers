// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFILEBACKEDASSET_H
#define PXFILEBACKEDASSET_H

@class NSString, NSDate, NSData, NSNumber, CLLocation, NSURL;
@protocol PXDisplayAsset, PXLayoutItemInput, PXMetadataAsset;

#import <Foundation/Foundation.h>

#import "_PXFileBackedAssetMetadata.h"
#import "PXFileBackedAssetDescription.h"

@interface PXFileBackedAsset : NSObject <PXDisplayAsset, PXLayoutItemInput, PXMetadataAsset>

 {
    _PXFileBackedAssetMetadata *_metadata;
    PXFileBackedAssetDescription *_description;
    NSString *_fileBackedUUID;
}


@property (readonly, nonatomic) CGRect acceptableCropRect;
@property (readonly, nonatomic) CGFloat aspectRatio;
@property (readonly, nonatomic) NSUInteger burstSelectionTypes;
@property (readonly, nonatomic) BOOL canPlayLoopingVideo;
@property (readonly, nonatomic) BOOL canPlayPhotoIris;
@property (readonly, nonatomic) BOOL cloudIsDeletable;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) Class defaultImageProviderClass;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic) CGRect faceAreaRect;
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property (readonly, nonatomic) NSData *fetchColorNormalizationData;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *hdrGain;
@property (readonly, nonatomic) NSDate *importDate;
@property (readonly, nonatomic) BOOL isAnimatedImage;
@property (readonly, nonatomic) BOOL isAutoPlaybackEligibilityEstimated;
@property (readonly, nonatomic) BOOL isEligibleForAutoPlayback;
@property (readonly, nonatomic) BOOL isInCloud;
@property (readonly, nonatomic) ? livePhotoVideoDuration;
@property (readonly, nonatomic) NSDate *localCreationDate;
@property (readonly, nonatomic) NSString *localizedGeoDescription;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSUInteger mediaSubtypes;
@property (readonly, nonatomic) NSInteger mediaType;
@property (readonly, nonatomic) NSUInteger pixelHeight;
@property (readonly, nonatomic) NSUInteger pixelWidth;
@property (readonly, nonatomic) NSInteger playbackStyle;
@property (readonly, nonatomic) NSInteger playbackVariation;
@property (readonly, nonatomic) CGPoint positionOffset;
@property (readonly, nonatomic) CGRect preferredCropRect;
@property (readonly, nonatomic) BOOL representsBurst;
@property (readonly, nonatomic) CGSize size;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger thumbnailIndex;
@property (readonly, nonatomic) NSUInteger thumbnailVersion;
@property (readonly, nonatomic) CGAffineTransform transform;
@property (readonly, nonatomic) NSString *uniformTypeIdentifier; // ivar: _uniformTypeIdentifier
@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) CGFloat weight;


+(id)_creationDateFromImageProperties:(id)arg0 ;
+(id)_exifDateFormatter;
+(id)_globalCache;
+(id)_locationFromImageProperties:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFileBackedAsset:(id)arg0 ;
-(CGFloat)weightUsingCriterion:(NSInteger)arg0 ;
-(NSInteger)isContentEqualTo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDescription:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(struct CGRect )bestCropRectForAspectRatio:(CGFloat)arg0 ;
-(void)_loadFileMetadataIfNeeded;


@end


#endif