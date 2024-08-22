// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFORYOUSUGGESTIONDISPLAYASSET_H
#define PXFORYOUSUGGESTIONDISPLAYASSET_H

@class NSString, NSDate, NSData, NSNumber, PHAsset;
@protocol PXPhotoKitAdjustedDisplayAsset, PXDisplayAsset, PXDisplaySuggestion;

#import <Foundation/Foundation.h>


@interface PXForYouSuggestionDisplayAsset : NSObject <PXPhotoKitAdjustedDisplayAsset>



@property (readonly, nonatomic) CGRect acceptableCropRect;
@property (readonly, nonatomic) NSString *adjustedContentIdentifier; // ivar: _adjustedContentIdentifier
@property (readonly, nonatomic) CGFloat aspectRatio;
@property (readonly, nonatomic) NSUInteger burstSelectionTypes;
@property (readonly, nonatomic) BOOL canPlayLoopingVideo;
@property (readonly, nonatomic) BOOL canPlayPhotoIris;
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
@property (readonly, nonatomic) BOOL isApplied;
@property (readonly, nonatomic) BOOL isAutoPlaybackEligibilityEstimated;
@property (readonly, nonatomic) BOOL isEligibleForAutoPlayback;
@property (readonly, nonatomic) BOOL isInCloud;
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *keyAsset; // ivar: _keyAsset
@property (readonly, nonatomic) ? livePhotoVideoDuration;
@property (readonly, nonatomic) NSDate *localCreationDate;
@property (readonly, nonatomic) NSString *localizedGeoDescription;
@property (readonly, nonatomic) NSUInteger mediaSubtypes;
@property (readonly, nonatomic) NSInteger mediaType;
@property (readonly, nonatomic) BOOL needsDeferredProcessing;
@property (readonly, nonatomic) PHAsset *photoKitAsset; // ivar: _photoKitAsset
@property (readonly, nonatomic) NSUInteger pixelHeight;
@property (readonly, nonatomic) NSUInteger pixelWidth;
@property (readonly, nonatomic) NSInteger playbackStyle;
@property (readonly, nonatomic) NSInteger playbackVariation;
@property (readonly, nonatomic) CGRect preferredCropRect;
@property (readonly, nonatomic) BOOL representsBurst;
@property (readonly, nonatomic) BOOL shouldInvert; // ivar: _shouldInvert
@property (readonly, nonatomic) NSObject<PXDisplaySuggestion> *suggestion; // ivar: _suggestion
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger thumbnailIndex;
@property (readonly, nonatomic) NSUInteger thumbnailVersion;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL wantsAdjustments;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSuggestionDisplayAsset:(id)arg0 ;
-(NSInteger)isContentEqualTo:(id)arg0 ;
-(id)_computedPortraitEffectSettingsForCompositionController:(id)arg0 ;
-(id)applyAdjustmentsToCompositionController:(id)arg0 renderer:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSuggestion:(id)arg0 keyAsset:(id)arg1 ;
-(id)initWithSuggestion:(id)arg0 keyAsset:(id)arg1 shouldRevert:(BOOL)arg2 ;
-(id)inverseSuggestionAsset;
-(struct CGRect )bestCropRectForAspectRatio:(CGFloat)arg0 ;
-(struct CGRect )bestCropRectForAspectRatio:(CGFloat)arg0 verticalContentMode:(NSInteger)arg1 cropMode:(NSInteger)arg2 ;


@end


#endif