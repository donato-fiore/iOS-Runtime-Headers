// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUGRIDBANNERCELLLAYOUTOPTIONS_H
#define HUGRIDBANNERCELLLAYOUTOPTIONS_H

@class UIFont;


#import "HUGridCellLayoutOptions.h"

@interface HUGridBannerCellLayoutOptions : HUGridCellLayoutOptions

@property (nonatomic) CGFloat cellHeight; // ivar: _cellHeight
@property (retain, nonatomic) UIFont *descriptionFont; // ivar: _descriptionFont
@property (nonatomic) CGFloat dismissButtonHeightAndWidth; // ivar: _dismissButtonHeightAndWidth
@property (nonatomic) CGFloat dismissButtonTopInset; // ivar: _dismissButtonTopInset
@property (nonatomic) CGFloat dismissButtonTrailingInset; // ivar: _dismissButtonTrailingInset
@property (retain, nonatomic) UIFont *footerViewLabelFont; // ivar: _footerViewLabelFont
@property (nonatomic) CGFloat horizontalItemSpacing; // ivar: _horizontalItemSpacing
@property (retain, nonatomic) UIFont *iconDescriptionFont; // ivar: _iconDescriptionFont
@property (nonatomic) CGFloat iconDescriptionInset; // ivar: _iconDescriptionInset
@property (nonatomic) CGFloat iconHeight; // ivar: _iconHeight
@property (nonatomic) CGFloat iconTopInset; // ivar: _iconTopInset
@property (nonatomic) CGFloat iconTrailingInset; // ivar: _iconTrailingInset
@property (nonatomic) CGFloat iconWidth; // ivar: _iconWidth
@property (nonatomic) CGFloat leadingInset; // ivar: _leadingInset
@property (nonatomic) NSUInteger maxNumberOfDescriptionLines; // ivar: _maxNumberOfDescriptionLines
@property (nonatomic) NSUInteger maxNumberOfTitleLines; // ivar: _maxNumberOfTitleLines
@property (nonatomic) CGFloat titleInterLineSpacing; // ivar: _titleInterLineSpacing
@property (nonatomic) CGFloat titleTopInset; // ivar: _titleTopInset
@property (nonatomic) CGFloat trailingInset; // ivar: _trailingInset
@property (nonatomic) CGFloat verticalLabelSpacing; // ivar: _verticalLabelSpacing
@property (nonatomic) CGFloat verticalSpacingForLineView; // ivar: _verticalSpacingForLineView
@property (nonatomic) CGFloat verticalSpacingForLipElements; // ivar: _verticalSpacingForLipElements


+(id)defaultOptionsForCellSizeSubclass:(NSInteger)arg0 ;
-(CGFloat)bannerCellHeightForWidth:(CGFloat)arg0 title:(id)arg1 description:(id)arg2 footer:(id)arg3 forContentSizeCategory:(id)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif