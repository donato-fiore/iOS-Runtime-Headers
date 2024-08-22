// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKINVISIBLEINKGESTURERECOGNIZER_H
#define CKINVISIBLEINKGESTURERECOGNIZER_H

@class UIGestureRecognizer, UITouch;



@interface CKInvisibleInkGestureRecognizer : UIGestureRecognizer

@property (retain, nonatomic) UITouch *firstTouch; // ivar: _firstTouch
@property (nonatomic) CGPoint startLocation; // ivar: _startLocation
@property (nonatomic) CGFloat startTime; // ivar: _startTime


-(BOOL)_hasActiveTouchesInEvent:(id)arg0 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg0 ;
-(BOOL)shouldRequireFailureOfGestureRecognizer:(id)arg0 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif