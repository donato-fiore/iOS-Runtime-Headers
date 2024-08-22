// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTOUCHGESTURERECOGNIZER_H
#define AVTOUCHGESTURERECOGNIZER_H

@class UIGestureRecognizer, NSTimer, NSMutableArray;



@interface AVTouchGestureRecognizer : UIGestureRecognizer {
    NSTimer *_gestureWarmUpDelayTimer;
    NSMutableArray *_candidateGestureIncrementsMultiTouchInfo;
}




-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif