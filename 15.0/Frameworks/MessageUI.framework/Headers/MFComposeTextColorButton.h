// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFCOMPOSETEXTCOLORBUTTON_H
#define MFCOMPOSETEXTCOLORBUTTON_H

@class UIButton, UIColor, UIView;



@interface MFComposeTextColorButton : UIButton

@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) UIView *colorRingView; // ivar: _colorRingView
@property (retain, nonatomic) UIView *colorView; // ivar: _colorView


+(id)buttonWithColor:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif