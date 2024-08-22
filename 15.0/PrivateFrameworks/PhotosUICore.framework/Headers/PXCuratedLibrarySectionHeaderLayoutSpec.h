// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCURATEDLIBRARYSECTIONHEADERLAYOUTSPEC_H
#define PXCURATEDLIBRARYSECTIONHEADERLAYOUTSPEC_H

@class NSDateFormatter;


#import "PXFeatureSpec.h"
#import "PXTitleSubtitleLabelSpec.h"
#import "PXCuratedLibrarySectionHeaderLayoutSpec.h"
#import "PXExtendedImageConfiguration.h"
#import "PXCuratedLibraryStyleGuide.h"

@interface PXCuratedLibrarySectionHeaderLayoutSpec : PXFeatureSpec

@property (nonatomic) CGFloat buttonHeight; // ivar: _buttonHeight
@property (nonatomic) CGFloat buttonHorizontalPadding; // ivar: _buttonHorizontalPadding
@property (nonatomic) CGFloat buttonSpacing; // ivar: _buttonSpacing
@property (nonatomic) UIEdgeInsets contentPadding; // ivar: _contentPadding
@property (nonatomic) ? cornerRadius; // ivar: _cornerRadius
@property (copy, nonatomic) PXTitleSubtitleLabelSpec *debugInterestingTitleSubtitleLabelSpec; // ivar: _debugInterestingTitleSubtitleLabelSpec
@property (copy, nonatomic) PXTitleSubtitleLabelSpec *debugNonInterestingTitleSubtitleLabelSpec; // ivar: _debugNonInterestingTitleSubtitleLabelSpec
@property (nonatomic) CGFloat fadeOutDistance; // ivar: _fadeOutDistance
@property (nonatomic) CGFloat fadeOutDistanceFromSafeAreaTop; // ivar: _fadeOutDistanceFromSafeAreaTop
@property (nonatomic) CGFloat fadeOutMinimumAlpha; // ivar: _fadeOutMinimumAlpha
@property (retain, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *firstCardVariantSpec; // ivar: _firstCardVariantSpec
@property (nonatomic) CGFloat gradientAlpha; // ivar: _gradientAlpha
@property (nonatomic) CGFloat gradientHeight; // ivar: _gradientHeight
@property (nonatomic) BOOL gradientRespectsSafeArea; // ivar: _gradientRespectsSafeArea
@property (readonly, nonatomic) PXExtendedImageConfiguration *headerGradientImageConfiguration; // ivar: _headerGradientImageConfiguration
@property (nonatomic) NSUInteger inlineHeaderStyle; // ivar: _inlineHeaderStyle
@property (nonatomic) BOOL isFloating; // ivar: _isFloating
@property (readonly, nonatomic) CGFloat maximumTitleSubtitleHeight;
@property (readonly, nonatomic) CGFloat minimumSpacingBetweenTopSafeAreaAndContentTop; // ivar: _minimumSpacingBetweenTopSafeAreaAndContentTop
@property (readonly, nonatomic) CGFloat minimumSpacingBetweenTopSafeAreaAndTitleTop; // ivar: _minimumSpacingBetweenTopSafeAreaAndTitleTop
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (nonatomic) BOOL requiresTitleRenderedAsView; // ivar: _requiresTitleRenderedAsView
@property (nonatomic) BOOL shouldAccommodateLeadingButtonsLayout; // ivar: _shouldAccommodateLeadingButtonsLayout
@property (nonatomic) BOOL shouldAvoidOverlapWithSecondaryToolbar; // ivar: _shouldAvoidOverlapWithSecondaryToolbar
@property (nonatomic) BOOL shouldFadeOutWhenReachingTop; // ivar: _shouldFadeOutWhenReachingTop
@property (nonatomic) BOOL shouldOmitYear; // ivar: _shouldOmitYear
@property (nonatomic) BOOL showAspectFitButtons; // ivar: _showAspectFitButtons
@property (nonatomic) BOOL showZoomButtons; // ivar: _showZoomButtons
@property (retain, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *smallVariantSpec; // ivar: _smallVariantSpec
@property (readonly, nonatomic) PXCuratedLibraryStyleGuide *styleGuide; // ivar: _styleGuide
@property (copy, nonatomic) NSDateFormatter *subtitleDateFormatter; // ivar: _subtitleDateFormatter
@property (nonatomic) BOOL swapTitleWithSubtitle; // ivar: _swapTitleWithSubtitle
@property (copy, nonatomic) NSDateFormatter *titleDateFormatter; // ivar: _titleDateFormatter
@property (nonatomic) UIEdgeInsets titlePadding; // ivar: _titlePadding
@property (copy, nonatomic) PXTitleSubtitleLabelSpec *titleSubtitleLabelSpec; // ivar: _titleSubtitleLabelSpec
@property (nonatomic) BOOL wantsInlineHeader; // ivar: _wantsInlineHeader
@property (nonatomic) BOOL wantsSubtitle; // ivar: _wantsSubtitle
@property (nonatomic) BOOL wantsTitle; // ivar: _wantsTitle


-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;


@end


#endif