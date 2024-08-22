// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMTOUCHINGGESTURERECOGNIZER_H
#define CAMTOUCHINGGESTURERECOGNIZER_H

@class UIGestureRecognizer;



@interface CAMTouchingGestureRecognizer : UIGestureRecognizer

@property (nonatomic, setter=_setTouchCount:) NSUInteger _touchCount; // ivar: __touchCount


-(void)_decrementTouchesBy:(NSUInteger)arg0 ;
-(void)_incrementTouchesBy:(NSUInteger)arg0 ;
-(void)_updateStateFromTouchCount:(NSUInteger)arg0 toTouchCount:(NSUInteger)arg1 ;
-(void)cancelGesture;
-(void)reset;
-(void)setEnabled:(BOOL)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif