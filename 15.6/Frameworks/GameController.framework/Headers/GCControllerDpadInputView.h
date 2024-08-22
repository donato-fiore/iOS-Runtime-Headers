// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCCONTROLLERDPADINPUTVIEW_H
#define GCCONTROLLERDPADINPUTVIEW_H

@class UIView, UIVisualEffectView, UITouch;


#import "GCControllerDirectionPad.h"

@interface GCControllerDpadInputView : UIView {
    GCControllerDirectionPad *_dpadInput;
    UIView *_touchArea;
    UIVisualEffectView *_up;
    UIVisualEffectView *_down;
    UIVisualEffectView *_left;
    UIVisualEffectView *_right;
    UITouch *_currentTouch;
}


@property (retain) GCControllerDirectionPad *dpadInput;


-(id)createDpadButton:(struct CGPoint )arg0 backingMask:(id)arg1 fillMask:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)initButtons;
-(void)processTouch:(id)arg0 ;
-(void)setHighlight:(id)arg0 highlight:(BOOL)arg1 ;
-(void)setThumbstickPos:(struct CGPoint )arg0 center:(struct CGPoint )arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif