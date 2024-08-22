// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCCONTROLLERTHUMBSTICKINPUTVIEW_H
#define GCCONTROLLERTHUMBSTICKINPUTVIEW_H

@class UIView, UIVisualEffectView, UITouch;


#import "GCControllerDirectionPad.h"

@interface GCControllerThumbstickInputView : UIView {
    GCControllerDirectionPad *_dpadInput;
    UIVisualEffectView *_background;
    UIVisualEffectView *_touchTarget;
    UITouch *_currentTouch;
    CGPoint _touchStartPos;
    CGPoint _touchPrevPos;
    float _prevThumbstickMagnitude;
}


@property (retain) GCControllerDirectionPad *dpadInput;


-(BOOL)actsAsTouchpad;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)initButtons;
-(void)processTouch:(id)arg0 ;
-(void)setActsAsTouchpad:(BOOL)arg0 ;
-(void)setThumbstickPos:(struct CGPoint )arg0 center:(struct CGPoint )arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif