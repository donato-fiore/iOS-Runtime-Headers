// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPIPPINCHGESTURERECOGNIZER_H
#define SBPIPPINCHGESTURERECOGNIZER_H

@class UIPinchGestureRecognizer, NSMutableSet;
@protocol SBPIPSystemGestureRecognizerDelegate;



@interface SBPIPPinchGestureRecognizer : UIPinchGestureRecognizer {
    NSMutableSet *_touches;
    CGPoint _accumulatedMovement;
    CGPoint _maximumAbsoluteAccumulatedMovement;
    BOOL _achievedMaximumAbsoluteAccumulatedMovement;
}


@property (nonatomic) NSObject<SBPIPSystemGestureRecognizerDelegate> *delegate;
@property (nonatomic) BOOL failsPastHysteresis; // ivar: _failsPastHysteresis
@property (nonatomic) NSUInteger maximumNumberOfTouches; // ivar: _maximumNumberOfTouches


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif