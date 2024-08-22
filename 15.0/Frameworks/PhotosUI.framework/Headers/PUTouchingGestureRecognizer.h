// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUTOUCHINGGESTURERECOGNIZER_H
#define PUTOUCHINGGESTURERECOGNIZER_H

@class UIGestureRecognizer;



@interface PUTouchingGestureRecognizer : UIGestureRecognizer

@property (nonatomic, setter=_setTouchCount:) NSUInteger _touchCount; // ivar: __touchCount


-(void)_decrementTouchesBy:(NSUInteger)arg0 ;
-(void)_incrementTouchesBy:(NSUInteger)arg0 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif