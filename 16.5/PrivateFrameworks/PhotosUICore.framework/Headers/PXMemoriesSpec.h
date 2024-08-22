// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMEMORIESSPEC_H
#define PXMEMORIESSPEC_H

@class UIColor, UIFont;


#import "PXFeatureSpec.h"

@interface PXMemoriesSpec : PXFeatureSpec

@property (readonly, nonatomic) CGFloat _columnWidth; // ivar: __columnWidth
@property (readonly, nonatomic) CGFloat _displayScale; // ivar: __displayScale
@property (readonly, nonatomic) NSUInteger _style; // ivar: __style
@property (readonly, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (readonly, nonatomic) CGPoint borderOffset; // ivar: _borderOffset
@property (readonly, nonatomic) CGFloat borderWidth; // ivar: _borderWidth
@property (readonly, nonatomic) CGFloat bottomShadowPadding;
@property (readonly, nonatomic) CGFloat distanceBetweenHeaderBaselineAndImageTop; // ivar: _distanceBetweenHeaderBaselineAndImageTop
@property (readonly, nonatomic) UIEdgeInsets favoriteBadgeInset; // ivar: _favoriteBadgeInset
@property (readonly, nonatomic) CGSize favoriteBadgeSize; // ivar: _favoriteBadgeSize
@property (readonly, nonatomic) CGFloat feedAdditionalContentThreshold; // ivar: _feedAdditionalContentThreshold
@property (readonly, nonatomic) NSInteger feedAxis; // ivar: _feedAxis
@property (readonly, nonatomic) UIColor *feedBackgroundColor; // ivar: _feedBackgroundColor
@property (readonly, nonatomic) Class feedDataSourceManagerClass;
@property (readonly, nonatomic) UIEdgeInsets feedEntryEdgeInsets; // ivar: _feedEntryEdgeInsets
@property (readonly, nonatomic) CGFloat feedEntryHeaderHeight; // ivar: _feedEntryHeaderHeight
@property (readonly, nonatomic) CGFloat feedHeroImageAspectRatio; // ivar: _feedHeroImageAspectRatio
@property (readonly, nonatomic) CGFloat feedHeroImagePaddingBottom;
@property (readonly, nonatomic) CGFloat feedHeroImagePaddingTop;
@property (readonly, nonatomic) NSInteger feedHeroPosition; // ivar: _feedHeroPosition
@property (readonly, nonatomic) CGFloat feedInteritemSpacing; // ivar: _feedInteritemSpacing
@property (readonly, nonatomic) Class feedLayoutMetricsClass;
@property (readonly, nonatomic) NSUInteger feedMemoriesPerRow; // ivar: _feedMemoriesPerRow
@property (readonly, nonatomic) CGFloat feedSecondaryImagePaddingBottom;
@property (readonly, nonatomic) NSInteger feedSectionLayoutAxis;
@property (readonly, nonatomic) BOOL feedShouldAllowHeaders; // ivar: _feedShouldAllowHeaders
@property (readonly, nonatomic) Class feedTransitionAnimationCoordinatorClass;
@property (readonly, nonatomic) CGFloat firstFeedEntryHeaderHeight; // ivar: _firstFeedEntryHeaderHeight
@property (readonly, nonatomic) CGPoint highlightedSectionHeaderOffset; // ivar: _highlightedSectionHeaderOffset
@property (readonly, nonatomic) NSInteger idiom; // ivar: _idiom
@property (readonly, nonatomic) UIEdgeInsets layoutInsets;
@property (readonly, nonatomic) CGFloat orbPreviewSize; // ivar: _orbPreviewSize
@property (readonly, nonatomic) UIColor *selectionHighlightColor; // ivar: _selectionHighlightColor
@property (readonly, nonatomic) BOOL shouldRemoveHighlightOnScroll; // ivar: _shouldRemoveHighlightOnScroll
@property (readonly, nonatomic) CGFloat tabTitleBaselineOffset; // ivar: _tabTitleBaselineOffset
@property (readonly, nonatomic) UIFont *tabTitleFont; // ivar: _tabTitleFont
@property (readonly, nonatomic) UIColor *tabTitleTextColor; // ivar: _tabTitleTextColor
@property (readonly, nonatomic) CGFloat tabTopContentPadding; // ivar: _tabTopContentPadding


-(CGFloat)_feedInteritemSpacingForReferenceSize:(struct CGSize )arg0 ;
-(id)createViewSpecWithDescriptor:(struct PXViewSpecDescriptor )arg0 ;
-(id)feedCategoryLabelTextColor;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 style:(NSUInteger)arg2 ;
-(id)newLayoutGeneratorWithMetrics:(id)arg0 ;
-(void)_calculateSectionInsetWithExtendedTraitCollection:(id)arg0 ;


@end


#endif