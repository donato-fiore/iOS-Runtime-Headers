// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKMULTITOUCHPRESSGESTURERECOGNIZER_H
#define HKMULTITOUCHPRESSGESTURERECOGNIZER_H

@class UIGestureRecognizer, NSTimer, NSArray, NSSet;
@protocol HKMultiTouchPressGestureRecognizerDelegate;



@interface HKMultiTouchPressGestureRecognizer : UIGestureRecognizer {
    NSTimer *_touchDelayTimer;
    CGPoint _startingPosition;
}


@property (weak, nonatomic) NSObject<HKMultiTouchPressGestureRecognizerDelegate> *delegate;
@property (nonatomic) NSUInteger maximumNumberOfTouches; // ivar: _maximumNumberOfTouches
@property (nonatomic) NSUInteger minimumNumberOfTouches; // ivar: _minimumNumberOfTouches
@property (readonly, nonatomic) NSArray *orderedTouches;
@property (nonatomic) CGFloat requiredPressDelay; // ivar: _requiredPressDelay
@property (nonatomic) CGRect touchableBounds; // ivar: _touchableBounds
@property (readonly, nonatomic) NSSet *touches; // ivar: _touches


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(id)touchAtIndex:(NSUInteger)arg0 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(void)reset;
-(void)touchDelayTimerFired:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif