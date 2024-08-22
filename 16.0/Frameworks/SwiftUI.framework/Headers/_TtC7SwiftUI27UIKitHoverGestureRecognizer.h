// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7SWIFTUI27UIKITHOVERGESTURERECOGNIZER_H
#define _TTC7SWIFTUI27UIKITHOVERGESTURERECOGNIZER_H

@class UIHoverGestureRecognizer;



@interface _TtC7SwiftUI27UIKitHoverGestureRecognizer : UIHoverGestureRecognizer {
    ? eventBridge;
}




-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_hoverCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)_hoverEntered:(id)arg0 withEvent:(id)arg1 ;
-(void)_hoverExited:(id)arg0 withEvent:(id)arg1 ;
-(void)_hoverMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)reset;


@end


#endif