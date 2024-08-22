// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMMODEDIALITEM_H
#define CAMMODEDIALITEM_H

@class UIView, CAShapeLayer, UIFont, NSString;



@interface CAMModeDialItem : UIView

@property (readonly, nonatomic) *__CFAttributedString _attributedTitle;
@property (readonly, nonatomic) CAShapeLayer *_scalableTextLayer; // ivar: __scalableTextLayer
@property (nonatomic, setter=_setTextFrameSize:) CGSize _textFrameSize; // ivar: __textFrameSize
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (nonatomic) BOOL shouldShadowTitleText; // ivar: _shouldShadowTitleText
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGColor *)_textColor;
-(struct CGPath *)_pathForAttributedString:(struct __CFAttributedString *)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_commonCAMModeDialItemInitialization;
-(void)_updateScalableTextPathFromAttributedTitle;
-(void)layoutSubviews;
-(void)tintColorDidChange;


@end


#endif