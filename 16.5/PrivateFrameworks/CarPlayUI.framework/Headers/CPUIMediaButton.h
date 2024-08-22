// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPUIMEDIABUTTON_H
#define CPUIMEDIABUTTON_H

@class UIButton, CALayer, NSUUID;



@interface CPUIMediaButton : UIButton {
    CALayer *_focusColorLayer;
}


@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) BOOL showBezelInTouch; // ivar: _showBezelInTouch
@property (nonatomic) BOOL showHighlight; // ivar: _showHighlight


-(BOOL)canBecomeFocused;
-(BOOL)canShowHighlight;
-(BOOL)shouldUpdateButtonOpacityForKnobUnfocused;
-(CGFloat)focusLayerCornerRadius;
-(id)_buttonBackGroundColorTouch;
-(id)colorForKnobContentSelected;
-(id)colorForKnobFocusLayer;
-(id)colorForKnobFocusLayerSelected;
-(id)colorForKnobFocused;
-(id)colorForTouchContentSelected;
-(id)colorForTouchFocusLayer;
-(id)colorForTouchFocusLayerSelected;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)tintColorForUnhighlightedTextLabel;
-(struct CGSize )intrinsicContentSize;
-(void)_updateButtonStyle;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHidden:(BOOL)arg0 ;
-(void)updateButtonOpacityForKnobUnfocused;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif