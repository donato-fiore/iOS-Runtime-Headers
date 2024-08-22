// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSVIBRANTBUTTON_H
#define CPSVIBRANTBUTTON_H

@class UIView, UIVisualEffectView, UIButton;



@interface CPSVibrantButton : UIView {
    UIVisualEffectView *_effectView;
    UIButton *_button;
}


@property (readonly, nonatomic) UIButton *uiButton;


-(id)initWithButtonType:(NSInteger)arg0 ;
-(void)setAdjustFontSizeToFitWidth:(BOOL)arg0 ;
-(void)updateCornerRadius;


@end


#endif