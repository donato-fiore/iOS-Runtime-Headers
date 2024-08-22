// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLCIRCLEBUTTON_H
#define HUQUICKCONTROLCIRCLEBUTTON_H

@class UIButton, UIView, UIColor;



@interface HUQuickControlCircleButton : UIButton

@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (nonatomic) CGFloat fontSize;
@property (retain, nonatomic) UIColor *selectedColor; // ivar: _selectedColor
@property (retain, nonatomic) UIColor *standardBackgroundColor; // ivar: _standardBackgroundColor


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_adjustTitleColor;
-(void)_controlStateChanged;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif