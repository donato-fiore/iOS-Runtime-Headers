// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIEXCLUSIVETOUCHGESTURERECOGNIZER_H
#define _UIEXCLUSIVETOUCHGESTURERECOGNIZER_H

@protocol _UIExclusiveTouchGestureRecognizerDelegate;


#import "UIGestureRecognizer.h"

@interface _UIExclusiveTouchGestureRecognizer : UIGestureRecognizer

@property (readonly, nonatomic) CGPoint accumulatedMovement; // ivar: _accumulatedMovement
@property (readonly, nonatomic) BOOL achievedMaximumAbsoluteAccumulatedMovement; // ivar: _achievedMaximumAbsoluteAccumulatedMovement
@property (weak, nonatomic) NSObject<_UIExclusiveTouchGestureRecognizerDelegate> *delegate;
@property (nonatomic) CGPoint maximumAbsoluteAccumulatedMovement; // ivar: _maximumAbsoluteAccumulatedMovement


-(BOOL)_shouldReceiveTouch:(id)arg0 withEvent:(id)arg1 ;
-(id)description;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif