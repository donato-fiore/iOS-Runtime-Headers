// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCUIFLICKGESTURERECOGNIZER_H
#define CCUIFLICKGESTURERECOGNIZER_H

@class UIGestureRecognizer, UITouch, NSTimer;



@interface CCUIFlickGestureRecognizer : UIGestureRecognizer {
    UITouch *_touch;
    NSTimer *_timeoutTimer;
    CGFloat _initialTouchTimestamp;
    CGPoint _initialTouchLocation;
    BOOL _latched;
}


@property (nonatomic) NSUInteger allowedFlickDirections; // ivar: _allowedFlickDirections
@property (nonatomic) CGFloat maximumFlickTime; // ivar: _maximumFlickTime
@property (nonatomic) CGFloat minimumFlickVelocity; // ivar: _minimumFlickVelocity


-(BOOL)_validateFlickWithTouch:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_beginFlickWithTouch:(id)arg0 ;
-(void)_evaluateFlickAtTimeout;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif