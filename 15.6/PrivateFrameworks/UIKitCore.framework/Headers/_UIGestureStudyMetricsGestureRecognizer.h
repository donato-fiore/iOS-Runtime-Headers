// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIGESTURESTUDYMETRICSGESTURERECOGNIZER_H
#define _UIGESTURESTUDYMETRICSGESTURERECOGNIZER_H

@class NSString;
@protocol _UIGestureStudyParticipating;


#import "UIGestureRecognizer.h"
#import "UITouch.h"

@interface _UIGestureStudyMetricsGestureRecognizer : UIGestureRecognizer <_UIGestureStudyParticipating>



@property (nonatomic) CGFloat allowableMovement; // ivar: _allowableMovement
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat movement;
@property (readonly, nonatomic) NSInteger observedTouchCount; // ivar: _observedTouchCount
@property (nonatomic) CGPoint originalPosition; // ivar: _originalPosition
@property (retain, nonatomic) UITouch *primaryTouch; // ivar: _primaryTouch
@property (nonatomic) CGFloat startTimestamp; // ivar: _startTimestamp
@property (readonly) Class superclass;


-(BOOL)_affectedByGesture:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(struct CGPoint )locationInCoordinateSpace:(id)arg0 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif