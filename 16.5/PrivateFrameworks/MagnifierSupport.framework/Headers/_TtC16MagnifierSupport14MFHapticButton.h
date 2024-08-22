// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16MAGNIFIERSUPPORT14MFHAPTICBUTTON_H
#define _TTC16MAGNIFIERSUPPORT14MFHAPTICBUTTON_H

@class UIButton;



@interface _TtC16MagnifierSupport14MFHapticButton : UIButton {
    ? buttonFeedbackGenerator;
}




-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)shutterButtonDown:(id)arg0 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif