// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKACTIONMENUGESTURERECOGNIZER_H
#define CKACTIONMENUGESTURERECOGNIZER_H

@class UILongPressGestureRecognizer;


#import "CKActionMenuGestureVelocitySample.h"

@interface CKActionMenuGestureRecognizer : UILongPressGestureRecognizer {
    CKActionMenuGestureVelocitySample *_velocitySample;
    CKActionMenuGestureVelocitySample *_previousVelocitySample;
    CGFloat _lastTouchTime;
    CGPoint _lastScreenLocation;
}




+(id)actionMenuGestureRecognizer;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(struct CGPoint )_convertVelocitySample:(id)arg0 fromScreenCoordinatesToView:(id)arg1 ;
-(struct CGPoint )velocityInView:(id)arg0 ;
-(void)reset;
-(void)setAllowableMovement:(CGFloat)arg0 ;
-(void)setNumberOfTouchesRequired:(NSUInteger)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif