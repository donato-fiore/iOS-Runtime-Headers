// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC5TEAUI14TWOLABELBUTTON_H
#define _TTC5TEAUI14TWOLABELBUTTON_H

@class UIControl;



@interface _TtC5TeaUI14TwoLabelButton : UIControl {
    ? highlightMask;
    ? animationState;
    ? buttonState;
    ? animationTrigger;
    ? titleLabelNormal;
    ? titleLabelHighlighted;
    ? labelNormal;
    ? labelHighlighted;
    ? borderColor;
    ? backgroundColorNormal;
    ? backgroundColorHighlighted;
    ? onTap;
    ? currentBorderColor;
    ? currentBackgroundColorNormal;
    ? currentBackgroundColorHighlighted;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif