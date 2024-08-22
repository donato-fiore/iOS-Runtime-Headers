// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCAUXILIARYOPTIONSBUTTON_H
#define NCAUXILIARYOPTIONSBUTTON_H

@class UIButton, UIView;



@interface NCAuxiliaryOptionsButton : UIButton {
    UIView *_backgroundView;
}




-(CGFloat)_continuousCornerRadius;
-(id)init;
-(void)_configureBackgroundViewIfNecessary;
-(void)_handleHoverGestureRecognizerEvent:(id)arg0 ;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_updateBackgroundVisualStyling;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif