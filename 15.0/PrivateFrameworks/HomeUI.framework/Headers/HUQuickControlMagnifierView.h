// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUQUICKCONTROLMAGNIFIERVIEW_H
#define HUQUICKCONTROLMAGNIFIERVIEW_H

@class UIView, UIColor;



@interface HUQuickControlMagnifierView : UIView

@property (nonatomic) CGFloat innerRadius; // ivar: _innerRadius
@property (retain, nonatomic) UIColor *selectedColor;


-(CGFloat)_outlineWidth;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif