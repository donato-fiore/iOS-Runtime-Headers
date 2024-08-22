// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKRULERGESTURERECOGNIZER_H
#define PKRULERGESTURERECOGNIZER_H

@class NSTimer;


#import "PKFreeTransformGestureRecognizer.h"

@interface PKRulerGestureRecognizer : PKFreeTransformGestureRecognizer {
    NSTimer *_startTimer;
    BOOL _initialSnap;
}


@property (nonatomic) CGFloat startDelay; // ivar: _startDelay
@property (nonatomic) CGFloat startSnapThreshold; // ivar: _startSnapThreshold


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(struct CGAffineTransform )freeTransform;
-(struct CGAffineTransform )rulerTransform;
-(struct CGAffineTransform )unscaledFreeTransform;
-(void)reset;
-(void)resetAndAccumulateTransform;
-(void)start;
-(void)stopTimer;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif