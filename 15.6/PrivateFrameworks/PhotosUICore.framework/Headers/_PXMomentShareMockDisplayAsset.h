// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXMOMENTSHAREMOCKDISPLAYASSET_H
#define _PXMOMENTSHAREMOCKDISPLAYASSET_H

@class NSDate, NSString, NSData, NSNumber;
@protocol PXDisplayAsset;

#import <Foundation/Foundation.h>


@interface _PXMomentShareMockDisplayAsset : NSObject <PXDisplayAsset>



@property (readonly, nonatomic) CGRect acceptableCropRect;
@property (readonly, nonatomic) CGFloat aspectRatio;
@property (readonly, nonatomic) NSUInteger burstSelectionTypes;
@property (readonly, nonatomic) NSDate *creationDate; // ivar: creationDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) Class defaultImageProviderClass;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic) CGRect faceAreaRect;
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite; // ivar: favorite
@property (readonly, nonatomic) NSData *fetchColorNormalizationData;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *hdrGain;
@property (readonly, nonatomic) NSDate *importDate;
@property (readonly, nonatomic) BOOL isAutoPlaybackEligibilityEstimated;
@property (readonly, nonatomic) BOOL isEligibleForAutoPlayback; // ivar: isEligibleForAutoPlayback
@property (readonly, nonatomic) BOOL isInCloud; // ivar: isInCloud
@property (readonly, nonatomic) ? livePhotoVideoDuration;
@property (readonly, nonatomic) NSDate *localCreationDate; // ivar: localCreationDate
@property (readonly, nonatomic) NSString *localizedGeoDescription;
@property (readonly, nonatomic) NSUInteger mediaSubtypes; // ivar: mediaSubtypes
@property (nonatomic) NSInteger mediaType; // ivar: _mediaType
@property (readonly, nonatomic) NSUInteger pixelHeight; // ivar: pixelHeight
@property (readonly, nonatomic) NSUInteger pixelWidth; // ivar: pixelWidth
@property (readonly, nonatomic) NSInteger playbackStyle;
@property (readonly, nonatomic) NSInteger playbackVariation;
@property (readonly, nonatomic) CGRect preferredCropRect;
@property (readonly, nonatomic) BOOL representsBurst; // ivar: representsBurst
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger thumbnailIndex;
@property (readonly, nonatomic) NSUInteger thumbnailVersion;
@property (readonly, nonatomic) NSString *uuid;


-(NSInteger)isContentEqualTo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif