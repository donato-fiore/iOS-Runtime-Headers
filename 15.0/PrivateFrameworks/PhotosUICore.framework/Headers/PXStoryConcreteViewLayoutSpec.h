// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYCONCRETEVIEWLAYOUTSPEC_H
#define PXSTORYCONCRETEVIEWLAYOUTSPEC_H

@class UIColor, NSDictionary, NSString, UIImageConfiguration, NSAttributedString, UIImage, NSNumberFormatter;
@protocol PXStoryViewLayoutSpec;


#import "PXFeatureSpec.h"
#import "PXStoryChromeButtonSpec.h"
#import "PXExtendedImageConfiguration.h"
#import "PXStoryPlayButtonSpec.h"
#import "PXStoryRelatedLayoutMetrics.h"

@interface PXStoryConcreteViewLayoutSpec : PXFeatureSpec <PXStoryViewLayoutSpec>



@property (readonly, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) CGFloat bottomLegibilityGradientHeight; // ivar: _bottomLegibilityGradientHeight
@property (readonly, nonatomic) NSInteger browseChromeSubtitleNumberOfLines; // ivar: _browseChromeSubtitleNumberOfLines
@property (readonly, nonatomic) NSInteger browseChromeTitleNumberOfLines; // ivar: _browseChromeTitleNumberOfLines
@property (readonly, nonatomic) CGFloat bufferingIndicatorCornerRadius; // ivar: _bufferingIndicatorCornerRadius
@property (readonly, nonatomic) BOOL canShowCloseButton; // ivar: _canShowCloseButton
@property (readonly, nonatomic) BOOL canShowStyleSwitcherButton; // ivar: _canShowStyleSwitcherButton
@property (readonly, nonatomic) CGSize chromeButtonPadding; // ivar: _chromeButtonPadding
@property (readonly, nonatomic) CGSize chromeButtonSize; // ivar: _chromeButtonSize
@property (readonly, nonatomic) PXStoryChromeButtonSpec *chromeButtonSpec; // ivar: _chromeButtonSpec
@property (readonly, nonatomic) NSDictionary *chromeSubtitleAttributes; // ivar: _chromeSubtitleAttributes
@property (readonly, nonatomic) NSDictionary *chromeTitleAttributes; // ivar: _chromeTitleAttributes
@property (readonly, nonatomic) NSString *chromeTitleLocalizedSongFormat; // ivar: _chromeTitleLocalizedSongFormat
@property (readonly, nonatomic) UIImageConfiguration *chromeTitleMusicSystemImageConfiguration; // ivar: _chromeTitleMusicSystemImageConfiguration
@property (readonly, nonatomic) CGFloat distanceFromBottomChromeTextToGrid; // ivar: _distanceFromBottomChromeTextToGrid
@property (readonly, nonatomic) CGFloat distanceFromLateralEdgesToTopButtonCenter; // ivar: _distanceFromLateralEdgesToTopButtonCenter
@property (readonly, nonatomic) CGFloat distanceFromTopEdgeToTopButtonCenter; // ivar: _distanceFromTopEdgeToTopButtonCenter
@property (readonly, nonatomic) CGFloat edgeHighlightAlpha; // ivar: _edgeHighlightAlpha
@property (readonly, nonatomic) NSInteger generalChromeSubtitleNumberOfLines; // ivar: _generalChromeSubtitleNumberOfLines
@property (readonly, nonatomic) NSInteger generalChromeTitleNumberOfLines; // ivar: _generalChromeTitleNumberOfLines
@property (readonly, nonatomic) NSUInteger hash;
@property (readonly, nonatomic) CGFloat interChromeButtonSpacing; // ivar: _interChromeButtonSpacing
@property (readonly, nonatomic) CGFloat interPlaybackEndButtonSpacing; // ivar: _interPlaybackEndButtonSpacing
@property (readonly, nonatomic) PXExtendedImageConfiguration *legibilityGradientImageConfiguration; // ivar: _legibilityGradientImageConfiguration
@property (readonly, nonatomic) CGFloat minimumWidthRequiredForChromeText; // ivar: _minimumWidthRequiredForChromeText
@property (readonly, nonatomic) PXStoryPlayButtonSpec *playButtonSpec; // ivar: _playButtonSpec
@property (readonly, nonatomic) CGSize playbackEndButtonPadding; // ivar: _playbackEndButtonPadding
@property (readonly, nonatomic) CGSize playbackEndButtonSize; // ivar: _playbackEndButtonSize
@property (readonly, nonatomic) PXStoryChromeButtonSpec *playbackEndButtonSpec; // ivar: _playbackEndButtonSpec
@property (readonly, nonatomic) NSInteger playbackEndChromeSubtitleNumberOfLines; // ivar: _playbackEndChromeSubtitleNumberOfLines
@property (readonly, nonatomic) NSInteger playbackEndChromeTitleNumberOfLines; // ivar: _playbackEndChromeTitleNumberOfLines
@property (readonly, nonatomic) NSDictionary *playbackEndSubtitleAttributes; // ivar: _playbackEndSubtitleAttributes
@property (readonly, nonatomic) NSDictionary *playbackEndTitleAttributes; // ivar: _playbackEndTitleAttributes
@property (readonly, nonatomic) CGFloat predictedBrowseChromeTextHeight; // ivar: _predictedBrowseChromeTextHeight
@property (readonly, nonatomic) NSAttributedString *relatedAttributedTitle; // ivar: _relatedAttributedTitle
@property (readonly, nonatomic) PXStoryRelatedLayoutMetrics *relatedLayoutMetrics; // ivar: _relatedLayoutMetrics
@property (readonly, nonatomic) CGSize relatedTitleSize; // ivar: _relatedTitleSize
@property (readonly, nonatomic) PXExtendedImageConfiguration *rightEdgeHighlightImageConfiguration; // ivar: _rightEdgeHighlightImageConfiguration
@property (readonly, nonatomic) CGSize rightEdgeHighlightImageSize; // ivar: _rightEdgeHighlightImageSize
@property (readonly, nonatomic) unsigned short rightEdgeHighlightImageVersion; // ivar: _rightEdgeHighlightImageVersion
@property (readonly, nonatomic) CGFloat scrubberAssetCornerRadius; // ivar: _scrubberAssetCornerRadius
@property (readonly, nonatomic) CGFloat scrubberCurrentAssetPadding; // ivar: _scrubberCurrentAssetPadding
@property (readonly, nonatomic) UIEdgeInsets scrubberFadeAreaInsets; // ivar: _scrubberFadeAreaInsets
@property (readonly, nonatomic) CGFloat scrubberRegularAssetPadding; // ivar: _scrubberRegularAssetPadding
@property (readonly, nonatomic) CGSize scrubberRegularAssetSize; // ivar: _scrubberRegularAssetSize
@property (readonly, nonatomic) BOOL shouldHideChromeItemsWhenRelatedOverlayIsScrolledIntoView; // ivar: _shouldHideChromeItemsWhenRelatedOverlayIsScrolledIntoView
@property (readonly, nonatomic) BOOL shouldHorizontallyCenterPlayButton; // ivar: _shouldHorizontallyCenterPlayButton
@property (readonly, nonatomic) BOOL shouldHorizontallyCenterPlaybackEndButtons; // ivar: _shouldHorizontallyCenterPlaybackEndButtons
@property (readonly, nonatomic) BOOL shouldVerticallyCenterPlayButton; // ivar: _shouldVerticallyCenterPlayButton
@property (readonly, nonatomic) CGFloat spacingBetweenPlaybackEndButtonAndTitles; // ivar: _spacingBetweenPlaybackEndButtonAndTitles
@property (readonly, nonatomic) CGFloat spacingBetweenRelatedTitleAndMainRelated; // ivar: _spacingBetweenRelatedTitleAndMainRelated
@property (readonly, nonatomic) CGFloat spacingBetweenRelatedTitleAndUpNextCountDown; // ivar: _spacingBetweenRelatedTitleAndUpNextCountDown
@property (readonly, nonatomic) BOOL styleSwitcherCanShowEditButtons; // ivar: _styleSwitcherCanShowEditButtons
@property (readonly, nonatomic) NSInteger styleSwitcherChromeArrangement; // ivar: _styleSwitcherChromeArrangement
@property (readonly, nonatomic) UIImage *styleSwitcherColorGradeNameGlyphImage; // ivar: _styleSwitcherColorGradeNameGlyphImage
@property (readonly, nonatomic) NSDictionary *styleSwitcherDetailsLabelAttributesA; // ivar: _styleSwitcherDetailsLabelAttributesA
@property (readonly, nonatomic) NSDictionary *styleSwitcherDetailsLabelAttributesAAccessory; // ivar: _styleSwitcherDetailsLabelAttributesAAccessory
@property (readonly, nonatomic) NSDictionary *styleSwitcherDetailsLabelAttributesB; // ivar: _styleSwitcherDetailsLabelAttributesB
@property (readonly, nonatomic) NSDictionary *styleSwitcherDetailsLabelAttributesC; // ivar: _styleSwitcherDetailsLabelAttributesC
@property (readonly, nonatomic) CGFloat styleSwitcherDetailsTitleAccessoryPadding; // ivar: _styleSwitcherDetailsTitleAccessoryPadding
@property (readonly, nonatomic) CGFloat styleSwitcherDistanceBetweenAlbumArtAndLabels; // ivar: _styleSwitcherDistanceBetweenAlbumArtAndLabels
@property (readonly, nonatomic) CGFloat styleSwitcherDistanceBetweenEditButtons; // ivar: _styleSwitcherDistanceBetweenEditButtons
@property (readonly, nonatomic) UIEdgeInsets tapNavigationAreaInsets; // ivar: _tapNavigationAreaInsets
@property (readonly, nonatomic) CGFloat tapNavigationAreaWidth; // ivar: _tapNavigationAreaWidth
@property (readonly, nonatomic) CGFloat topLegibilityGradientHeight; // ivar: _topLegibilityGradientHeight
@property (readonly, nonatomic) CGFloat upNextCountDownAppearDelay; // ivar: _upNextCountDownAppearDelay
@property (readonly, nonatomic) NSDictionary *upNextCountDownAttributes; // ivar: _upNextCountDownAttributes
@property (readonly, nonatomic) PXExtendedImageConfiguration *upNextCountDownDecorationImageConfiguration; // ivar: _upNextCountDownDecorationImageConfiguration
@property (readonly, nonatomic) CGFloat upNextCountDownFadeOutDuration; // ivar: _upNextCountDownFadeOutDuration
@property (readonly, nonatomic) NSNumberFormatter *upNextCountDownFormatter; // ivar: _upNextCountDownFormatter
@property (readonly, nonatomic) CGFloat upNextCountDownInitialVisibleValue; // ivar: _upNextCountDownInitialVisibleValue
@property (readonly, nonatomic) CGSize upNextCountDownSize; // ivar: _upNextCountDownSize
@property (readonly, nonatomic) CGFloat upNextCountDownVerticalOffset; // ivar: _upNextCountDownVerticalOffset
@property (readonly, nonatomic) NSUInteger upNextTargetMemoryCount; // ivar: _upNextTargetMemoryCount


-(CGFloat)_calculatePredictedBrowseChromeTextHeight;
-(CGFloat)_predictedChromeTextBoxHeightWithAttributes:(id)arg0 numberOfLines:(NSInteger)arg1 ;
-(id)chromeSongAttributedStringWithTitle:(id)arg0 artist:(id)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 storyConfigurationOptions:(NSUInteger)arg2 ;


@end


#endif