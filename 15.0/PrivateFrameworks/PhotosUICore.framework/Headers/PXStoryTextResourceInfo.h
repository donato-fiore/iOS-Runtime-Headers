// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYTEXTRESOURCEINFO_H
#define PXSTORYTEXTRESOURCEINFO_H

@class NSAttributedString, NSStringDrawingContext, NSString;
@protocol PXDisplayAssetCollection;

#import <Foundation/Foundation.h>


@interface PXStoryTextResourceInfo : NSObject

@property (readonly, nonatomic) NSObject<PXDisplayAssetCollection> *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) NSAttributedString *attributedString; // ivar: _attributedString
@property (readonly, nonatomic) CGFloat boundingRectPadding;
@property (readonly, nonatomic) CGSize boundingSize; // ivar: _boundingSize
@property (readonly, nonatomic) NSStringDrawingContext *drawingContext; // ivar: _drawingContext
@property (readonly, nonatomic) NSInteger drawingOptions;
@property (nonatomic) NSInteger forcedPositionIndex; // ivar: _forcedPositionIndex
@property (nonatomic) BOOL hasForcedPositioning; // ivar: _hasForcedPositioning
@property (readonly, nonatomic) CGPoint origin; // ivar: _origin
@property (readonly, nonatomic) NSString *string; // ivar: _string
@property (readonly, nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSInteger verticalAlignment;


+(id)_allowedSubtitleCharacterSetWithKind:(NSUInteger)arg0 ;
+(id)_allowedTitleCharacterSetWithStylePairing:(NSInteger)arg0 kind:(NSUInteger)arg1 ;
+(id)_rangesAndStylesForTitle:(id)arg0 ;
+(id)_subtitleFontCacheKeyForKind:(NSUInteger)arg0 ;
+(id)_subtitleFontForKind:(NSUInteger)arg0 scale:(CGFloat)arg1 hasExtendedCharacterSet:(BOOL)arg2 ;
+(id)_titleFontCacheKeyForStylePairing:(NSInteger)arg0 kind:(NSUInteger)arg1 ;
+(id)_titleFontDescriptorForStylePairing:(NSInteger)arg0 kind:(NSUInteger)arg1 ;
+(id)_titleFontForStylePairing:(NSInteger)arg0 scale:(CGFloat)arg1 kind:(NSUInteger)arg2 ;
+(id)_titlePrimaryAttributesForStylePairing:(NSInteger)arg0 scale:(CGFloat)arg1 kind:(NSUInteger)arg2 allowHyphenation:(BOOL)arg3 ;
+(id)subtitleAttributesForSize:(struct CGSize )arg0 string:(id)arg1 scale:(CGFloat)arg2 kind:(NSUInteger)arg3 extendedTraitCollectionSnapshot:(id)arg4 ;
+(id)subtitleCachedCharacterSetByKind;
+(id)titleCachedCharacterSetByStyleAndKind;
+(void)_increaseMaximumLineHeightToAvoidOverlapForLines:(id)arg0 attributes:(id)arg1 attributedString:(*id)arg2 ;
-(BOOL)_isUserInterfaceIdiomPadOrMacOrTV:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)_paddingBottomForKind:(NSUInteger)arg0 extendedTraitCollectionSnapshot:(id)arg1 rect:(struct CGRect )arg2 fixedBottomPadding:(CGFloat)arg3 ;
-(CGFloat)_paddingBottomScaleForKind:(NSUInteger)arg0 extendedTraitCollectionSnapshot:(id)arg1 ;
-(CGFloat)_paddingLeadingMinimumForKind:(NSUInteger)arg0 orientationIsLandscape:(BOOL)arg1 ;
-(CGFloat)_paddingLeftOrRightAlignmentLeadingForKind:(NSUInteger)arg0 extendedTraitCollectionSnapshot:(id)arg1 rect:(struct CGRect )arg2 ;
-(CGFloat)_paddingLeftOrRightAlignmentLeadingScaleForKind:(NSUInteger)arg0 orientationIsLandscape:(BOOL)arg1 ;
-(CGFloat)_paddingTopForKind:(NSUInteger)arg0 extendedTraitCollectionSnapshot:(id)arg1 rect:(struct CGRect )arg2 ;
-(CGFloat)_paddingTopMinimumForKind:(NSUInteger)arg0 ;
-(CGFloat)_paddingTopScaleForKind:(NSUInteger)arg0 extendedTraitCollectionSnapshot:(id)arg1 ;
-(CGFloat)_sizeWidthMaximumForKind:(NSUInteger)arg0 orientationIsLandscape:(BOOL)arg1 ;
-(CGFloat)_sizeWidthMinimumForKind:(NSUInteger)arg0 orientationIsLandscape:(BOOL)arg1 ;
-(CGFloat)_sizeWidthScaleForKind:(NSUInteger)arg0 extendedTraitCollectionSnapshot:(id)arg1 ;
-(CGFloat)_subtitleLineSpacingForKind:(NSUInteger)arg0 size:(struct CGSize )arg1 extendedTraitCollectionSnapshot:(id)arg2 fixedBottomPadding:(CGFloat)arg3 ;
-(CGFloat)_subtitleScalingFactorForKind:(NSUInteger)arg0 size:(struct CGSize )arg1 extendedTraitCollectionSnapshot:(id)arg2 fixedBottomPadding:(CGFloat)arg3 ;
-(CGFloat)_titleScalingFactorForKind:(NSUInteger)arg0 size:(struct CGSize )arg1 extendedTraitCollectionSnapshot:(id)arg2 fixedBottomPadding:(CGFloat)arg3 ;
-(NSInteger)_fullScreenTitlePositionWithTitleCategory:(id)arg0 displayAsset:(id)arg1 currentAssetCropRect:(struct CGRect )arg2 relativeTo:(id)arg3 extendedTraitCollectionSnapshot:(id)arg4 fixedBottomPadding:(CGFloat)arg5 ;
-(NSInteger)_stylePairingFromTitleCategory:(id)arg0 string:(id)arg1 kind:(NSUInteger)arg2 ;
-(id)_possibleTitlePositionsForRect:(struct CGRect )arg0 boudingSize:(struct CGSize )arg1 occlusionSize:(struct CGSize )arg2 kind:(NSUInteger)arg3 extendedTraitCollectionSnapshot:(id)arg4 fixedBottomPadding:(CGFloat)arg5 ;
-(id)attributedStringBoundingSizeForSubtitle:(id)arg0 size:(struct CGSize )arg1 kind:(NSUInteger)arg2 extendedTraitCollectionSnapshot:(id)arg3 fixedBottomPadding:(CGFloat)arg4 ;
-(id)attributedStringBoundingSizeForTitle:(id)arg0 stylePairing:(NSInteger)arg1 size:(struct CGSize )arg2 kind:(NSUInteger)arg3 extendedTraitCollectionSnapshot:(id)arg4 fixedBottomPadding:(CGFloat)arg5 ;
-(id)initWithAssetCollection:(id)arg0 type:(NSInteger)arg1 ;
-(struct CGPoint )_subtitlePositionInFrame:(struct CGRect )arg0 titleCategory:(id)arg1 displayAsset:(id)arg2 currentAssetCropRect:(struct CGRect )arg3 kind:(NSUInteger)arg4 relativeTo:(id)arg5 extendedTraitCollectionSnapshot:(id)arg6 fixedBottomPadding:(CGFloat)arg7 ;
-(struct CGPoint )bestPositionInFrame:(struct CGRect )arg0 occlusionSize:(struct CGSize )arg1 possiblePositions:(id)arg2 displayAsset:(id)arg3 currentAssetCropRect:(struct CGRect )arg4 layoutOrientation:(NSInteger)arg5 ;
-(struct CGRect )attributedStringFrameInRect:(struct CGRect )arg0 titleCategory:(id)arg1 displayAsset:(id)arg2 currentAssetCropRect:(struct CGRect )arg3 kind:(NSUInteger)arg4 relativeTo:(id)arg5 extendedTraitCollectionSnapshot:(id)arg6 fixedBottomPadding:(CGFloat)arg7 ;
-(struct CGSize )_availableSizeForRect:(struct CGRect )arg0 extendedTraitCollectionSnapshot:(id)arg1 kind:(NSUInteger)arg2 fixedBottomPadding:(CGFloat)arg3 ;
-(struct CGSize )_fullScreenAvailableSizeForExtendedTraitCollectionSnapshot:(id)arg0 fixedBottomPadding:(CGFloat)arg1 ;
-(struct CGSize )_occlusionSizeForSize:(struct CGSize )arg0 kind:(NSUInteger)arg1 size:(struct CGSize )arg2 stylePairing:(NSInteger)arg3 extendedTraitCollectionSnapshot:(id)arg4 fixedBottomPadding:(CGFloat)arg5 ;
-(void)_checkForForcedPositioning:(*id)arg0 ;


@end


#endif