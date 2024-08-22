// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PKINKTOOLOPACITYLABEL_H
#define _PKINKTOOLOPACITYLABEL_H

@class UIView, UILabel;



@interface _PKInkToolOpacityLabel : UIView

@property (nonatomic) CGFloat inkOpacity; // ivar: _inkOpacity
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (nonatomic) NSUInteger sizeState; // ivar: _sizeState


+(BOOL)_shouldHideLabel:(CGFloat)arg0 ;
+(CGFloat)_labelAlphaForInkOpacity:(CGFloat)arg0 ;
+(CGFloat)_labelOffsetFromBottomEdgeForSizeState:(NSUInteger)arg0 ;
+(CGFloat)_maxLabelHeightForSizeState:(NSUInteger)arg0 ;
+(CGFloat)_toolOffsetForSizeState:(NSUInteger)arg0 ;
+(id)_fontForSizeState:(NSUInteger)arg0 ;
+(id)_formattedStringForInkOpacity:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_frameForRotatedLabel;
-(void)layoutSubviews;


@end


#endif