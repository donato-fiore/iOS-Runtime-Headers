// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBGESTURESWITCHERMODIFIEREVENT_H
#define SBGESTURESWITCHERMODIFIEREVENT_H

@class NSString, NSUUID;
@protocol SBGestureRecognizerTouchHistoryProviding;


#import "SBSwitcherModifierEvent.h"
#import "SBAppLayout.h"

@interface SBGestureSwitcherModifierEvent : SBSwitcherModifierEvent <SBGestureRecognizerTouchHistoryProviding>



@property (nonatomic, getter=isCanceled) BOOL canceled; // ivar: _canceled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUUID *gestureID; // ivar: _gestureID
@property (readonly, nonatomic) NSInteger gestureType; // ivar: _gestureType
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat hysteresis; // ivar: _hysteresis
@property (nonatomic) CGFloat lastTouchTimestamp; // ivar: _lastTouchTimestamp
@property (nonatomic) CGPoint locationInContainerView; // ivar: _locationInContainerView
@property (nonatomic, getter=isMouseEvent) BOOL mouseEvent; // ivar: _mouseEvent
@property (nonatomic) NSUInteger phase; // ivar: _phase
@property (nonatomic, getter=isPointerTouch) BOOL pointerTouch; // ivar: _pointerTouch
@property (readonly, nonatomic) SBAppLayout *selectedAppLayout; // ivar: _selectedAppLayout
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<SBGestureRecognizerTouchHistoryProviding> *touchHistoryProvider; // ivar: _touchHistoryProvider
@property (nonatomic) NSInteger touchType; // ivar: _touchType
@property (nonatomic) CGPoint translationInContainerView; // ivar: _translationInContainerView
@property (nonatomic) CGPoint velocityInContainerView; // ivar: _velocityInContainerView


-(BOOL)isGestureEvent;
-(CGFloat)averageTouchPathAngleOverTimeDuration:(CGFloat)arg0 ;
-(CGFloat)peakSpeed;
-(NSInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithGestureID:(id)arg0 selectedAppLayout:(id)arg1 gestureType:(NSInteger)arg2 phase:(NSUInteger)arg3 ;
-(struct CGPoint )averageTouchVelocityOverTimeDuration:(CGFloat)arg0 ;
-(void)conformsToSBGestureRecognizerTouchHistoryProviding;


@end


#endif