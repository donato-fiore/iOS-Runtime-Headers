// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITOUCHDURATIONOBSERVINGGESTURERECOGNIZER_H
#define _UITOUCHDURATIONOBSERVINGGESTURERECOGNIZER_H

@class CADisplayLink;


#import "UIGestureRecognizer.h"
#import "UIDelayedAction.h"

@interface _UITouchDurationObservingGestureRecognizer : UIGestureRecognizer

@property (nonatomic) CGFloat allowableMovement; // ivar: _allowableMovement
@property (readonly, nonatomic) UIDelayedAction *delayedAction; // ivar: _delayedAction
@property (readonly, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (readonly, nonatomic) BOOL hasExceededAllowableMovement; // ivar: _hasExceededAllowableMovement
@property (nonatomic) CGFloat minimumDurationRequired; // ivar: _minimumDurationRequired
@property (nonatomic) CGPoint originalCentroid; // ivar: _originalCentroid
@property (readonly, nonatomic) CGFloat touchDuration;
@property (readonly, nonatomic) CGFloat touchForce; // ivar: _touchForce
@property (nonatomic) CGFloat touchStartTimestamp; // ivar: _touchStartTimestamp


-(BOOL)_exceededNumberOfTouchesForEvent:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(id)_allTouchesMatchingRequirementsForEvent:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_cancelOrFail;
-(void)_displayLinkDidFire:(id)arg0 ;
-(void)_performDelayedBegin;
-(void)dealloc;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif