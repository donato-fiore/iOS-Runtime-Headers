// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIFOCUSEDTOUCHGESTURERECOGNIZER_H
#define SKUIFOCUSEDTOUCHGESTURERECOGNIZER_H

@class UIGestureRecognizer, NSMutableSet, UIView;



@interface SKUIFocusedTouchGestureRecognizer : UIGestureRecognizer {
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