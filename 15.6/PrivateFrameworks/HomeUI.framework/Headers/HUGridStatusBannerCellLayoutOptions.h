// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUGRIDSTATUSBANNERCELLLAYOUTOPTIONS_H
#define HUGRIDSTATUSBANNERCELLLAYOUTOPTIONS_H

@class UIFont;


#import "HUGridBannerCellLayoutOptions.h"

@interface HUGridStatusBannerCellLayoutOptions : HUGridBannerCellLayoutOptions

@property (nonatomic) CGFloat cellHeight; // ivar: _cellHeight
@property (retain, nonatomic) UIFont *descriptionFont; // ivar: _descriptionFont
@property (retain, nonatomic) UIFont *footerViewLabelFont; // ivar: _footerViewLabelFont
@property (nonatomic) CGFloat horizontalItemSpacing; // ivar: _horizontalItemSpacing
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
-(CGFloat)statusBannerCellHeightForWidth:(CGFloat)arg0 title:(id)arg1 description:(id)arg2 forContentSizeCategory:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif