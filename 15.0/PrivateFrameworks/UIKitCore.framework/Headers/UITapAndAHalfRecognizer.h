// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITAPANDAHALFRECOGNIZER_H
#define UITAPANDAHALFRECOGNIZER_H

@class NSMutableSet;


#import "UIGestureRecognizer.h"
#import "UIDelayedAction.h"
#import "UITouch.h"

@interface UITapAndAHalfRecognizer : UIGestureRecognizer {
    CGPoint _startPoint;
    NSMutableSet *_activeTouches;
    int _currentNumberOfTaps;
    UIDelayedAction *_tapTimer;
}


@property (nonatomic) CGFloat allowableMovement; // ivar: _allowableMovement
@property (readonly, nonatomic) CGPoint locationOfFirstTap;
@property (nonatomic) CGFloat minimumFinalPressDuration; // ivar: _minimumFinalPressDuration
@property (nonatomic) int numberOfFullTaps; // ivar: _numberOfFullTaps
@property (retain, nonatomic) UITouch *touch; // ivar: _touch


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(struct CGPoint )translationInWindowCoordinates;
-(void)_resetGestureRecognizer;
-(void)_verifyMovementInAllowableRange;
-(void)clearTapTimer;
-(void)dealloc;
-(void)recognized:(id)arg0 ;
-(void)startRecognitionTimer:(CGFloat)arg0 ;
-(void)startTapTimer:(CGFloat)arg0 ;
-(void)tooSlow:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif