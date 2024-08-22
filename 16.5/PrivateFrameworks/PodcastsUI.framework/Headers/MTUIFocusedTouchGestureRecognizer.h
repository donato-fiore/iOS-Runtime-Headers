// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTUIFOCUSEDTOUCHGESTURERECOGNIZER_H
#define MTUIFOCUSEDTOUCHGESTURERECOGNIZER_H

@class UIGestureRecognizer, NSMutableSet, UIView;



@interface MTUIFocusedTouchGestureRecognizer : UIGestureRecognizer {
    NSMutableSet *_activeTouches;
    BOOL _didTouchOutside;
}


@property (readonly, nonatomic) UIView *focusedView; // ivar: _focusedView
@property (nonatomic) UIEdgeInsets touchAllowance; // ivar: _touchAllowance


-(id)initWithFocusedView:(id)arg0 touchAllowance:(struct UIEdgeInsets )arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif