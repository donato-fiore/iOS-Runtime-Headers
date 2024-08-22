// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCURATEDLIBRARYCHAPTERHEADERLAYOUTSPEC_H
#define PXCURATEDLIBRARYCHAPTERHEADERLAYOUTSPEC_H

@class UIColor, UIFont;


#import "PXFeatureSpec.h"
#import "PXExtendedImageConfiguration.h"

@interface PXCuratedLibraryChapterHeaderLayoutSpec : PXFeatureSpec

@property (readonly, nonatomic) PXExtendedImageConfiguration *chevronImageConfiguration; // ivar: _chevronImageConfiguration
@property (readonly, nonatomic) CGSize contentInset; // ivar: _contentInset
@property (readonly, nonatomic) CGFloat floatingAppearanceCrossfadeDistance; // ivar: _floatingAppearanceCrossfadeDistance
@property (readonly, nonatomic) CGFloat floatingAppearanceCrossfadeDuration; // ivar: _floatingAppearanceCrossfadeDuration
@property (readonly, nonatomic) CGFloat floatingAppearanceCrossfadeStartDistance; // ivar: _floatingAppearanceCrossfadeStartDistance
@property (readonly, nonatomic) CGFloat floatingDistanceFromSafeAreaTop; // ivar: _floatingDistanceFromSafeAreaTop
@property (readonly, nonatomic) CGFloat floatingFadeOutDistance; // ivar: _floatingFadeOutDistance
@property (readonly, nonatomic) UIColor *floatingTitleDeemphasizedColor; // ivar: _floatingTitleDeemphasizedColor
@property (readonly, nonatomic) UIColor *floatingTitleEmphasizedColor; // ivar: _floatingTitleEmphasizedColor
@property (readonly, nonatomic) BOOL shouldAbbreviateMonth; // ivar: _shouldAbbreviateMonth
@property (readonly, nonatomic) BOOL shouldAlwaysShowFloatingVersion; // ivar: _shouldAlwaysShowFloatingVersion
@property (readonly, nonatomic) BOOL shouldFloat; // ivar: _shouldFloat
@property (readonly, nonatomic) CGFloat spacingBetweenTitleAndChevron; // ivar: _spacingBetweenTitleAndChevron
@property (readonly, nonatomic) CGFloat spacingBetweenTitleBottomAndNextCardTop; // ivar: _spacingBetweenTitleBottomAndNextCardTop
@property (readonly, nonatomic) CGFloat spacingBetweenTitleTopAndPreviousCardBottom; // ivar: _spacingBetweenTitleTopAndPreviousCardBottom
@property (readonly, nonatomic) UIColor *titleDeemphasizedColor; // ivar: _titleDeemphasizedColor
@property (readonly, nonatomic) UIColor *titleEmphasizedColor; // ivar: _titleEmphasizedColor
@property (readonly, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (readonly, nonatomic) CGFloat titleHeight; // ivar: _titleHeight


-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;


@end


#endif