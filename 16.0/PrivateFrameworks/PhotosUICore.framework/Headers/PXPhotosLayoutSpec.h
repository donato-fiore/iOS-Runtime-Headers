// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOSLAYOUTSPEC_H
#define PXPHOTOSLAYOUTSPEC_H

@class UIFont, UIColor, NSString;


#import "PXFeatureSpec.h"
#import "PXAssetsSectionLayoutSpec.h"
#import "PXExtendedImageConfiguration.h"
#import "PXPhotosSectionHeaderLayoutSpec.h"

@interface PXPhotosLayoutSpec : PXFeatureSpec

@property (readonly, nonatomic) CGFloat aspectFitContentVerticalPadding; // ivar: _aspectFitContentVerticalPadding
@property (readonly, nonatomic) PXAssetsSectionLayoutSpec *assetsSpec; // ivar: _assetsSpec
@property (readonly, nonatomic) PXExtendedImageConfiguration *backgroundGradientImageConfiguration; // ivar: _backgroundGradientImageConfiguration
@property (readonly, nonatomic) PXExtendedImageConfiguration *behindContentBackgroundGradientImageConfiguration; // ivar: _behindContentBackgroundGradientImageConfiguration
@property (readonly, nonatomic) CGFloat endButtonSpacing; // ivar: _endButtonSpacing
@property (readonly, nonatomic) UIFont *headerSubtitleFont; // ivar: _headerSubtitleFont
@property (readonly, nonatomic) CGFloat headerTitleBottomSpacing; // ivar: _headerTitleBottomSpacing
@property (readonly, nonatomic) CGFloat headerTitleButtonAlignmentSpacing; // ivar: _headerTitleButtonAlignmentSpacing
@property (readonly, nonatomic) UIFont *headerTitleFont; // ivar: _headerTitleFont
@property (readonly, nonatomic) CGFloat headerTitleLeadingSpacing; // ivar: _headerTitleLeadingSpacing
@property (readonly, nonatomic) UIColor *headerTitleOverBackgroundColor; // ivar: _headerTitleOverBackgroundColor
@property (readonly, nonatomic) UIColor *headerTitleOverContentColor; // ivar: _headerTitleOverContentColor
@property (readonly, nonatomic) CGFloat headerTitleTopSpacing; // ivar: _headerTitleTopSpacing
@property (readonly, nonatomic) CGFloat interButtonSpacing; // ivar: _interButtonSpacing
@property (readonly, nonatomic) CGFloat interSectionSpacing; // ivar: _interSectionSpacing
@property (readonly, nonatomic) BOOL isTV; // ivar: _isTV
@property (readonly, nonatomic) PXPhotosSectionHeaderLayoutSpec *sectionHeaderSpec;
@property (readonly, nonatomic) CGFloat squareContentVerticalPadding; // ivar: _squareContentVerticalPadding
@property (readonly, nonatomic) NSString *visualEffectViewGroupName;


-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;


@end


#endif