// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSENHANCEDMODALBUTTON_H
#define CSENHANCEDMODALBUTTON_H

@class UIButton, UIVisualEffectView, UIView;



@interface CSEnhancedModalButton : UIButton {
    UIVisualEffectView *_effectView;
    UIView *_highlightedView;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_addBackgroundHighlightView;
-(void)_addVisualEffect;
-(void)_buttonPressed:(id)arg0 ;
-(void)_buttonReleased:(id)arg0 ;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)layoutSubviews;


@end


#endif