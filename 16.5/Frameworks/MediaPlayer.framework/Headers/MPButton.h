// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPBUTTON_H
#define MPBUTTON_H

@class UIButton, UIView;



@interface MPButton : UIButton {
    BOOL _holding;
    UIView *_hitTestDebugView;
}


@property (nonatomic) UIEdgeInsets alignmentRectInsets; // ivar: _alignmentRectInsets
@property (nonatomic) UIEdgeInsets hitRectInsets; // ivar: _hitRectInsets
@property (nonatomic) BOOL hitTestDebugEnabled; // ivar: _hitTestDebugEnabled
@property (nonatomic) CGFloat holdDelayInterval; // ivar: _holdDelayInterval
@property (readonly, nonatomic, getter=isHolding) BOOL holding;


+(id)easyTouchButtonWithType:(NSInteger)arg0 ;
+(struct UIEdgeInsets )easyTouchDefaultHitRectInsets;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )hitRect;
-(void)_delayedTriggerHold;
-(void)_handleTouchCancel;
-(void)_handleTouchDown;
-(void)_handleTouchUp;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif