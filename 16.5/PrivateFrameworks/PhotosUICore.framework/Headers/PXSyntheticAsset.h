// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSYNTHETICASSET_H
#define PXSYNTHETICASSET_H

@class NSDate, NSString, NSData, NSNumber, NSSet, PFVideoAdjustments, UIColor;
@protocol PXStoryDisplayAssetResource, PXMutableSyntheticAsset, PXDisplayAsset, NSSecureCoding, PXLayoutItemInput;

#import <Foundation/Foundation.h>


@interface PXSyntheticAsset : NSObject <PXStoryDisplayAssetResource, PXMutableSyntheticAsset, PXDisplayAsset, NSSecureCoding, PXLayoutItemInput>



@property (readonly, nonatomic) CGRect acceptableCropAssetRect;
@property (readonly, nonatomic) CGRect acceptableCropRect; // ivar: _acceptableCropRect
@property (readonly, nonatomic) CGFloat aspectRatio;
@property (nonatomic) float audioScore; // ivar: _audioScore
@property (readonly, nonatomic) CGRect bestPlaybackAssetRect;
@property (readonly, nonatomic) CGRect bestPlaybackRect; // ivar: _bestPlaybackRect
@property (readonly, nonatomic) NSUInteger burstSelectionTypes;
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) CGFloat curationScore; // ivar: _curationScore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) Class defaultImageProviderClass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic) CGRect faceAreaAssetRect;
@property (readonly, nonatomic) CGRect faceAreaRect; // ivar: _faceAreaRect
@property (readonly, nonatomic) NSInteger faceCount; // ivar: _faceCount
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property (readonly, nonatomic) NSData *fetchColorNormalizationData;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash; // ivar: _hash
@property (readonly, nonatomic) NSNumber *hdrGain;
@property (readonly, nonatomic) NSDate *importDate;
@property (readonly, nonatomic) BOOL isAutoPlaybackEligibilityEstimated;
@property (readonly, nonatomic) BOOL isEligibleForAutoPlayback;
@property (readonly, nonatomic) BOOL isInCloud;
@property (readonly, nonatomic) BOOL isInSharedLibrary;
@property (readonly, copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) ? livePhotoVideoDuration;
@property (copy, nonatomic) NSDate *localCreationDate; // ivar: _localCreationDate
@property (copy, nonatomic) NSString *localizedGeoDescription; // ivar: _localizedGeoDescription
@property (readonly, nonatomic) NSUInteger mediaSubtypes; // ivar: _mediaSubtypes
@property (nonatomic) NSInteger mediaType; // ivar: _mediaType
@property (readonly, nonatomic) NSInteger originalFileSize;
@property (readonly, nonatomic) NSUInteger pixelHeight;
@property (readonly, nonatomic) NSUInteger pixelWidth;
@property (readonly, nonatomic) NSInteger playbackStyle; // ivar: _playbackStyle
@property (readonly, nonatomic) NSInteger playbackVariation;
@property (readonly, nonatomic) CGPoint positionOffset;
@property (readonly, nonatomic) CGRect preferredCropAssetRect;
@property (readonly, nonatomic) CGRect preferredCropRect; // ivar: _preferredCropRect
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *px_storyResourceDisplayAsset;
@property (readonly, nonatomic) ? px_storyResourceFetchBestPlaybackRange;
@property (readonly, nonatomic) CGRect px_storyResourceFetchBestPlaybackRect;
@property (readonly, nonatomic) CGFloat px_storyResourceFetchCurationScore;
@property (readonly, nonatomic) NSInteger px_storyResourceFetchFaceCount;
@property (readonly, nonatomic) NSData *px_storyResourceFetchNormalizationData;
@property (readonly, nonatomic) NSSet *px_storyResourceFetchSceneClassifications;
@property (readonly, nonatomic) PFVideoAdjustments *px_storyResourceFetchVideoAdjustments;
@property (readonly, nonatomic) NSString *px_storyResourceIdentifier;
@property (readonly, nonatomic) NSInteger px_storyResourceKind;
@property (readonly, nonatomic) BOOL representsBurst;
@property (readonly, copy, nonatomic) NSSet *sceneClassifications; // ivar: _sceneClassifications
@property (readonly, nonatomic) NSString *serializableDescription;
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger thumbnailIndex;
@property (readonly, nonatomic) NSUInteger thumbnailVersion;
@property (readonly, copy, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (readonly, nonatomic) CGAffineTransform transform;
@property (copy, nonatomic) NSString *uuid; // ivar: _uuid
@property (readonly, nonatomic) CGFloat weight;


+(BOOL)supportsSecureCoding;
+(id)syntheticAssetWithSerializableDescription:(id)arg0 ;
-(BOOL)hasAdjustments;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)weightUsingCriterion:(NSInteger)arg0 ;
-(NSInteger)isContentEqualTo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)localIdentifier;
-(id)photoLibrary;
-(id)vcp_fingerprint:(id)arg0 ;
-(struct CGRect )_cropAssetRectFromCropRect:(struct CGRect )arg0 ;
-(struct CGRect )_cropRectFromCropAssetRect:(struct CGRect )arg0 ;
-(struct CGRect )bestCropRectForAspectRatio:(CGFloat)arg0 ;
-(struct CGRect )bestCropRectForAspectRatio:(CGFloat)arg0 verticalContentMode:(NSInteger)arg1 cropMode:(NSInteger)arg2 ;
-(struct CGRect )bestCropRectForAspectRatioV2:(CGFloat)arg0 verticalContentMode:(NSInteger)arg1 cropMode:(NSInteger)arg2 ;
-(struct CGRect )suggestedCropForTargetSize:(struct CGSize )arg0 withFocusRegion:(struct CGRect )arg1 ;
-(struct CGRect )suggestedCropForTargetSize:(struct CGSize )arg0 withOcclusionRegion:(struct CGRect )arg1 andOutputCropScore:(*CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif