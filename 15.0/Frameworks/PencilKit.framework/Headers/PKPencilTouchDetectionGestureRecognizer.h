// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPENCILTOUCHDETECTIONGESTURERECOGNIZER_H
#define PKPENCILTOUCHDETECTIONGESTURERECOGNIZER_H

@class UIGestureRecognizer;



@interface PKPencilTouchDetectionGestureRecognizer : UIGestureRecognizer



-(BOOL)_affectedByGesture:(id)arg0 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)updateTimestampsforTouches:(id)arg0 withEvent:(id)arg1 ;


@end


#endif