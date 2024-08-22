// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITOUCHDOWNGESTURERECOGNIZER_H
#define _UITOUCHDOWNGESTURERECOGNIZER_H



#import "UIGestureRecognizer.h"
#import "UIDelayedAction.h"

@interface _UITouchDownGestureRecognizer : UIGestureRecognizer {
    CGPoint _locationInView;
    CGPoint _initialLocationInScreenSpace;
    UIDelayedAction *_activationDelay;
}


@property (nonatomic) CGFloat allowableMovement; // ivar: _allowableMovement


-(BOOL)gestureIsStillValid;
-(BOOL)locationIsMostlyInsideView:(struct CGPoint )arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(void)activationDelayHandler;
-(void)cancelActivationDelay;
-(void)recognizeOrFailForCurrentLocation;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif