// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIGESTURESTUDYCLICKINTERACTION_H
#define _UIGESTURESTUDYCLICKINTERACTION_H

@class NSString;
@protocol _UIClickInteractionDriverDelegate, UIInteraction, _UIGestureStudyParticipating, _UIClickInteractionDriving;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface _UIGestureStudyClickInteraction : NSObject <_UIClickInteractionDriverDelegate, UIInteraction, _UIGestureStudyParticipating>



@property (nonatomic) SEL action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<_UIClickInteractionDriving> *driver; // ivar: _driver
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat movement;
@property (nonatomic) CGPoint originalCentroid; // ivar: _originalCentroid
@property (nonatomic) CGFloat startTimestamp; // ivar: _startTimestamp
@property (readonly) Class superclass;
@property (weak, nonatomic) id *target; // ivar: _target
@property (nonatomic) BOOL usesForce; // ivar: _usesForce
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 useForce:(BOOL)arg2 ;
-(struct CGPoint )locationInCoordinateSpace:(id)arg0 ;
-(void)clickDriver:(id)arg0 didPerformEvent:(NSUInteger)arg1 ;
-(void)clickDriver:(id)arg0 shouldBegin:(id)arg1 ;
-(void)didMoveToView:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif