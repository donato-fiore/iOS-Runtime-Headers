// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PKINKATTRIBUTESOPACITYLABEL_H
#define _PKINKATTRIBUTESOPACITYLABEL_H

@class UIView, UILabel;



@interface _PKInkAttributesOpacityLabel : UIView

@property (nonatomic) CGFloat opacityValue; // ivar: _opacityValue
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UILabel *valueLabel; // ivar: _valueLabel


-(BOOL)isRTLLanguage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif