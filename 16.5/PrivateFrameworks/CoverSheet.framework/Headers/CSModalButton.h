// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSMODALBUTTON_H
#define CSMODALBUTTON_H

@class UIButton, UIColor, UIVisualEffectView, UIVisualEffect;



@interface CSModalButton : UIButton {
    UIColor *_backgroundColor;
    UIVisualEffectView *_effectView;
    BOOL _isPressed;
}


@property (retain, nonatomic) UIVisualEffect *visualEffect;


-(id)backgroundColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_buttonPressed:(id)arg0 ;
-(void)_buttonReleased:(id)arg0 ;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif