// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STOCKSTAPDRAGGESTURERECOGNIZER_H
#define STOCKSTAPDRAGGESTURERECOGNIZER_H

@class UIGestureRecognizer, NSTimer, NSSet;



@interface StocksTapDragGestureRecognizer : UIGestureRecognizer {
    NSTimer *_touchDelayTimer;
    CGPoint _startingPosition;
}


@property (nonatomic) NSUInteger maximumNumberOfTouches; // ivar: _maximumNumberOfTouches
@property (nonatomic) NSUInteger minimumNumberOfTouches; // ivar: _minimumNumberOfTouches
@property (nonatomic) CGFloat requiredPressDelay; // ivar: _requiredPressDelay
@property (nonatomic) CGRect touchableBounds; // ivar: _touchableBounds
@property (readonly, nonatomic) NSSet *touches; // ivar: _touches


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)reset;
-(void)touchDelayTimerFired:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif