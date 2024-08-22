// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PKSPRINGLOADINGGESTURERECOGNIZER_H
#define _PKSPRINGLOADINGGESTURERECOGNIZER_H

@class UIGestureRecognizer, UITouch;



@interface _PKSpringLoadingGestureRecognizer : UIGestureRecognizer

@property (retain, nonatomic) UITouch *gestureTouch; // ivar: _gestureTouch
@property (nonatomic) BOOL hasRecognized; // ivar: _hasRecognized
@property (nonatomic) CGPoint startLocation; // ivar: _startLocation
@property (nonatomic) CGFloat stationaryFingerTimeout; // ivar: _stationaryFingerTimeout


-(BOOL)_pointInsideRecognitionPossibleArea:(struct CGPoint )arg0 ;
-(BOOL)_pointShouldBeRecognized:(struct CGPoint )arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_stationaryFingerTimerFired;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif