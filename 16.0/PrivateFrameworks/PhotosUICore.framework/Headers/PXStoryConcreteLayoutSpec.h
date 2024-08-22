// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYCONCRETELAYOUTSPEC_H
#define PXSTORYCONCRETELAYOUTSPEC_H

@class UIColor, NSDictionary, NSShadow;
@protocol PXStoryLayoutSpec;


#import "PXFeatureSpec.h"
#import "PXExploreLayoutMetrics.h"
#import "PXStoryChromeButtonSpec.h"

@interface PXStoryConcreteLayoutSpec : PXFeatureSpec <PXStoryLayoutSpec>



@property (readonly, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) CGFloat bottomTitleContentOffset; // ivar: _bottomTitleContentOffset
@property (readonly, nonatomic) CGFloat browserGridCellCornersRadius; // ivar: _browserGridCellCornersRadius
@property (readonly, nonatomic) PXExploreLayoutMetrics *browserGridLayoutMetrics; // ivar: _browserGridLayoutMetrics
@property (readonly, nonatomic) NSInteger browserGridScrollDecelerationRate; // ivar: _browserGridScrollDecelerationRate
@property (readonly, nonatomic) CGSize bufferingIndicatorSize; // ivar: _bufferingIndicatorSize
@property (readonly, nonatomic) CGFloat distanceBetweenBufferingIndicatorCenterAndBottom; // ivar: _distanceBetweenBufferingIndicatorCenterAndBottom
@property (readonly, nonatomic) CGFloat distanceBetweenChapterTitleBaselineAndBottomWithChrome; // ivar: _distanceBetweenChapterTitleBaselineAndBottomWithChrome
@property (readonly, nonatomic) CGFloat distanceBetweenChapterTitleBaselineAndBottomWithoutChrome; // ivar: _distanceBetweenChapterTitleBaselineAndBottomWithoutChrome
@property (readonly, nonatomic) CGFloat interpageSpacing; // ivar: _interpageSpacing
@property (readonly, nonatomic) NSInteger scrollDecelerationRate; // ivar: _scrollDecelerationRate
@property (readonly, nonatomic) CGSize scrubberCurrentAssetSize; // ivar: _scrubberCurrentAssetSize
@property (readonly, nonatomic) CGFloat scrubberVerticalPadding; // ivar: _scrubberVerticalPadding
@property (readonly, nonatomic) CGFloat styleSwitcherChromeButtonHorizontalMargin; // ivar: _styleSwitcherChromeButtonHorizontalMargin
@property (readonly, nonatomic) PXStoryChromeButtonSpec *styleSwitcherChromeButtonSpec; // ivar: _styleSwitcherChromeButtonSpec
@property (readonly, nonatomic) UIEdgeInsets styleSwitcherChromeInset; // ivar: _styleSwitcherChromeInset
@property (readonly, nonatomic) NSInteger styleSwitcherLayoutDirection; // ivar: _styleSwitcherLayoutDirection
@property (readonly, nonatomic) CGFloat styleSwitcherPageControlHeight; // ivar: _styleSwitcherPageControlHeight
@property (readonly, nonatomic) UIEdgeInsets styleSwitcherPageControlInset; // ivar: _styleSwitcherPageControlInset
@property (readonly, nonatomic) BOOL styleSwitcherShowsRestartButton; // ivar: _styleSwitcherShowsRestartButton
@property (readonly, nonatomic) BOOL styleSwitcherShowsTitle; // ivar: _styleSwitcherShowsTitle
@property (readonly, nonatomic) NSDictionary *styleSwitcherTitleAttributes; // ivar: _styleSwitcherTitleAttributes
@property (readonly, nonatomic) UIEdgeInsets styleSwitcherViewportInset; // ivar: _styleSwitcherViewportInset
@property (readonly, nonatomic) CGFloat styleSwitcherViewportSpacing; // ivar: _styleSwitcherViewportSpacing
@property (readonly, nonatomic) CGFloat thumbnailChromeButtonSpacing; // ivar: _thumbnailChromeButtonSpacing
@property (readonly, nonatomic) PXStoryChromeButtonSpec *thumbnailChromeButtonSpec; // ivar: _thumbnailChromeButtonSpec
@property (readonly, nonatomic) CGSize thumbnailChromePadding; // ivar: _thumbnailChromePadding
@property (readonly, nonatomic) PXStoryChromeButtonSpec *thumbnailChromePlayButtonSpec; // ivar: _thumbnailChromePlayButtonSpec
@property (readonly, nonatomic) BOOL thumbnailChromeShowsActionMenuButton; // ivar: _thumbnailChromeShowsActionMenuButton
@property (readonly, nonatomic) BOOL thumbnailChromeShowsFavoriteButton; // ivar: _thumbnailChromeShowsFavoriteButton
@property (readonly, nonatomic) BOOL thumbnailChromeShowsPlayButton; // ivar: _thumbnailChromeShowsPlayButton
@property (readonly, nonatomic) CGFloat thumbnailCornerRadius; // ivar: _thumbnailCornerRadius
@property (readonly, nonatomic) BOOL thumbnailMenuIncludesFavoriteAction; // ivar: _thumbnailMenuIncludesFavoriteAction
@property (readonly, nonatomic) BOOL thumbnailMenuPrefersFeatureLessActionDisambiguationSubmenu; // ivar: _thumbnailMenuPrefersFeatureLessActionDisambiguationSubmenu
@property (readonly, nonatomic) CGSize thumbnailPlayButtonPadding; // ivar: _thumbnailPlayButtonPadding
@property (readonly, nonatomic) NSShadow *thumbnailShadow; // ivar: _thumbnailShadow


-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 storyConfigurationOptions:(NSUInteger)arg2 ;


@end


#endif