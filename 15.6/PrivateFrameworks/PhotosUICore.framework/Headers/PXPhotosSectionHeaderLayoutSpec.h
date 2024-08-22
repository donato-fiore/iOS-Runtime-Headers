// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOSSECTIONHEADERLAYOUTSPEC_H
#define PXPHOTOSSECTIONHEADERLAYOUTSPEC_H

@class UIColor, UIFont;


#import "PXFeatureSpec.h"
#import "PXExtendedImageConfiguration.h"
#import "PXCuratedLibrarySectionHeaderLayoutSpec.h"

@interface PXPhotosSectionHeaderLayoutSpec : PXFeatureSpec

@property (readonly, nonatomic) CGFloat chevronAlpha; // ivar: _chevronAlpha
@property (readonly, nonatomic) PXExtendedImageConfiguration *chevronImageConfiguration; // ivar: _chevronImageConfiguration
@property (readonly, nonatomic) CGSize chevronSize; // ivar: _chevronSize
@property (readonly, nonatomic) CGFloat chevronSpacing; // ivar: _chevronSpacing
@property (readonly, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *curatedLibraryHeaderSpec; // ivar: _curatedLibraryHeaderSpec
@property (readonly, nonatomic) CGFloat dividerBaselineToTextBaselineSpacing; // ivar: _dividerBaselineToTextBaselineSpacing
@property (readonly, nonatomic) UIColor *dividerColor; // ivar: _dividerColor
@property (readonly, nonatomic) CGFloat gradientAlpha; // ivar: _gradientAlpha
@property (readonly, nonatomic) CGFloat gradientOverhang; // ivar: _gradientOverhang
@property (readonly, nonatomic) CGFloat minimumHeaderContentHeight; // ivar: _minimumHeaderContentHeight
@property (readonly, nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (readonly, nonatomic) UIColor *subtitleColor; // ivar: _subtitleColor
@property (readonly, nonatomic) UIFont *subtitleFont; // ivar: _subtitleFont
@property (readonly, nonatomic) UIColor *titleColor; // ivar: _titleColor
@property (readonly, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (readonly, nonatomic) CGFloat titleHorizontalInset; // ivar: _titleHorizontalInset
@property (readonly, nonatomic) CGFloat titleSubtitleHorizontalSpacing; // ivar: _titleSubtitleHorizontalSpacing


-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;


@end


#endif