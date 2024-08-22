// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUFEEDVIEWCONTROLLERSPEC_H
#define PUFEEDVIEWCONTROLLERSPEC_H

@class NSIndexSet;

#import <Foundation/Foundation.h>

#import "PUPhotosGridViewControllerSpec.h"
#import "PUFeedViewControllerSpec.h"

@interface PUFeedViewControllerSpec : NSObject {
    unsigned short _squareThumbnailFastImageFormat;
    unsigned short _squareThumbnailQualityImageFormat;
    unsigned short _smallTileFastImageFormat;
    unsigned short _smallTileQualityImageFormat;
    unsigned short _smallTilePanoQualityImageFormat;
    unsigned short _mediumTileFastImageFormat;
    unsigned short _mediumTileQualityImageFormat;
    unsigned short _largeTileFastImageFormat;
    unsigned short _largeTileQualityImageFormat;
    unsigned short _veryLargeTileFastImageFormat;
    unsigned short _veryLargeTileQualityImageFormat;
    CGSize _squareThumbnailMaximumSize;
    CGSize _smallTileMaximumFittingSize;
    CGFloat _smallTilePanoAspectRatio;
    CGSize _mediumTileMaximumFillingSize;
    CGSize _largeTileMaximumFillingSize;
}


@property (readonly, nonatomic) PUPhotosGridViewControllerSpec *gridSpec; // ivar: _gridSpec
@property (readonly, nonatomic) NSInteger largeNumberOfSubjectsForLikes; // ivar: _largeNumberOfSubjectsForLikes
@property (readonly, nonatomic) CGSize minimumVideoTileSize; // ivar: _minimumVideoTileSize
@property (readonly, nonatomic) PUFeedViewControllerSpec *popoverFeedViewControllerSpec; // ivar: _popoverFeedViewControllerSpec
@property (readonly, nonatomic) NSInteger promptStyle; // ivar: _promptStyle
@property (copy, nonatomic, setter=_setQualityImageFormats:) NSIndexSet *qualityImageFormats; // ivar: _qualityImageFormats
@property (readonly, nonatomic) BOOL shouldHideBarsInLandscape; // ivar: _shouldHideBarsInLandscape
@property (readonly, nonatomic) BOOL shouldShowInvitationsInPopover; // ivar: _shouldShowInvitationsInPopover
@property (readonly, nonatomic) BOOL shouldUseAspectThumbnails; // ivar: _shouldUseAspectThumbnails
@property (readonly, nonatomic) BOOL shouldUseFullscreenLayout; // ivar: _shouldUseFullscreenLayout
@property (readonly, nonatomic) CGFloat standardSideMargins; // ivar: _standardSideMargins
@property (readonly, nonatomic) CGSize thumbnailSize; // ivar: _thumbnailSize


-(BOOL)canUseSimplePreheatManager;
-(BOOL)shouldShowCommentBadgesInCollectionViewType:(NSInteger)arg0 ;
-(CGFloat)spacingBetweenSectionWithInfo:(id)arg0 andHeaderWithGroupID:(id)arg1 ;
-(CGFloat)textSpacingBetweenText:(id)arg0 detailText:(id)arg1 ;
-(NSInteger)configurationForSectionHeaderType:(NSInteger)arg0 collectionViewType:(NSInteger)arg1 ;
-(id)defaultSubTitleTextAttributesForCollectionViewType:(NSInteger)arg0 ;
-(id)defaultTextAttributesForCollectionViewType:(NSInteger)arg0 ;
-(id)emphasizedTextAttributesForCollectionViewType:(NSInteger)arg0 ;
-(id)init;
-(struct CGSize )thumbnailSizeForImageSize:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )contentInsetsForSectionType:(NSInteger)arg0 collectionViewType:(NSInteger)arg1 ;
-(struct UIEdgeInsets )textInsetsForHeadersAndFootersInSectionType:(NSInteger)arg0 collectionViewType:(NSInteger)arg1 ;
-(void)configureCommentSeparatorMetrics:(struct PUFeedSeparatorMetrics *)arg0 ;
-(void)configureFeedCollectionViewLayout:(id)arg0 forCollectionViewType:(NSInteger)arg1 collectionViewSize:(struct CGSize )arg2 collectionViewContentInset:(struct UIEdgeInsets *)arg3 ;
-(void)configureGradientCell:(id)arg0 forSectionHeaderBackgroundInCollectionViewType:(NSInteger)arg1 ;
-(void)configureSeparatorMetrics:(struct PUFeedSeparatorMetrics *)arg0 betweenSectionWithInfo:(id)arg1 andSectionWithInfo:(id)arg2 joined:(BOOL)arg3 collectionViewType:(NSInteger)arg4 ;
-(void)configureTextCell:(id)arg0 forCaption:(id)arg1 date:(id)arg2 ;
-(void)configureTextCell:(id)arg0 forCommentWithDescriptionPhrase:(id)arg1 date:(id)arg2 ;
-(void)configureTextCell:(id)arg0 forEventWithDescriptionPhrase:(id)arg1 ;
-(void)configureTextCell:(id)arg0 forLikesWithDescriptionPhrase:(id)arg1 date:(id)arg2 ;
-(void)configureTextCell:(id)arg0 forSectionFooterWithActionText:(id)arg1 collectionViewType:(NSInteger)arg2 ;
-(void)configureTextCell:(id)arg0 forSectionFooterWithDateText:(id)arg1 collectionViewType:(NSInteger)arg2 ;
-(void)configureTextCell:(id)arg0 forSectionGroupHeaderWithText:(id)arg1 collectionViewType:(NSInteger)arg2 ;
-(void)configureTextCell:(id)arg0 forSectionHeaderWithDescriptionPhrase:(id)arg1 streamDisclosureLabel:(id)arg2 actionText:(id)arg3 buttonType:(NSInteger)arg4 collectionViewType:(NSInteger)arg5 animated:(BOOL)arg6 ;
-(void)getFastImageFormat:(*unsigned short)arg0 qualityImageFormat:(*unsigned short)arg1 forSourceSize:(struct CGSize )arg2 destinationSize:(struct CGSize )arg3 allowCrop:(BOOL)arg4 ;
-(void)getReferenceMaximumLength:(*CGFloat)arg0 minimumNumberOfTilesToOmit:(*NSInteger)arg1 forSectionType:(NSInteger)arg2 collectionViewType:(NSInteger)arg3 ;
-(void)setLayoutReferenceWidth:(CGFloat)arg0 ;
-(void)updateFormats;


@end


#endif