// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPENCILOBSERVERGESTURERECOGNIZER_H
#define PKPENCILOBSERVERGESTURERECOGNIZER_H

@class UIGestureRecognizer, UITouch;



@interface PKPencilObserverGestureRecognizer : UIGestureRecognizer {
    UITouch *_drawingTouch;
    BOOL _delegateRespondsToDidBegin;
    BOOL _delegateRespondsToDidMove;
    BOOL _delegateRespondsToDidEnd;
}




-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg0 ;
-(BOOL)shouldRequireFailureOfGestureRecognizer:(id)arg0 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(void)reset;
-(void)setDelegate:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif