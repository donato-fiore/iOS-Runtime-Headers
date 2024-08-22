// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMOMENTSHAREPLACEHOLDERASSET_H
#define CKMOMENTSHAREPLACEHOLDERASSET_H

@class UIImage, NSDate, NSString, NSData, NSNumber;
@protocol PXDisplayAsset;

#import <Foundation/Foundation.h>


@interface CKMomentSharePlaceholderAsset : NSObject <PXDisplayAsset>

 {
    UIImage *_cachedImage;
}


@property (readonly, nonatomic) CGRect acceptableCropRect;
@property (readonly, nonatomic) CGFloat aspectRatio;
@property (readonly, nonatomic) float audioScore; // ivar: _audioScore
@property (readonly, nonatomic) NSUInteger burstSelectionTypes;
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
@property (readonly, nonatomic) BOOL isAutoPlaybackEligibilityEstimated;
@property (readonly, nonatomic) BOOL isEligibleForAutoPlayback;
@property (readonly, nonatomic) BOOL isInCloud;
@property (readonly, nonatomic) BOOL isInSharedLibrary;
@property (readonly, nonatomic) ? livePhotoVideoDuration;
@property (readonly, nonatomic) NSDate *localCreationDate;
@property (readonly, nonatomic) NSString *localizedGeoDescription;
@property (readonly, nonatomic) NSUInteger mediaSubtypes;
@property (readonly, nonatomic) NSInteger mediaType;
@property (readonly, nonatomic) NSInteger originalFileSize;
@property (readonly, nonatomic) NSUInteger pixelHeight;
@property (readonly, nonatomic) NSUInteger pixelWidth;
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) NSInteger playbackStyle;
@property (readonly, nonatomic) NSInteger playbackVariation;
@property (readonly, nonatomic) CGRect preferredCropRect;
@property (readonly, nonatomic) BOOL representsBurst;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger thumbnailIndex;
@property (readonly, nonatomic) NSUInteger thumbnailVersion;
@property (readonly, nonatomic) NSString *uuid;


+(id)sharedInstance;
-(NSInteger)isContentEqualTo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(struct CGRect )bestCropRectForAspectRatio:(CGFloat)arg0 ;
-(struct CGSize )size;


@end


#endif