// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UILONGPRESSCLICKINTERACTIONDRIVER_H
#define _UILONGPRESSCLICKINTERACTIONDRIVER_H

@class NSString;
@protocol UIGestureRecognizerDelegatePrivate, _UIClickInteractionDriving, _UIClickInteractionDriverDelegate;

#import <Foundation/Foundation.h>

#import "_UITouchDurationObservingGestureRecognizer.h"
#import "UIGestureRecognizer.h"
#import "UIView.h"

@interface _UILongPressClickInteractionDriver : NSObject <UIGestureRecognizerDelegatePrivate, _UIClickInteractionDriving>

 {
    NSUInteger _currentState;
    ? _delegateImplements;
    NSUInteger _behavior;
}


@property (nonatomic) CGFloat allowableMovement;
@property (nonatomic) NSUInteger behavior;
@property (nonatomic) BOOL cancelsTouchesInView; // ivar: _cancelsTouchesInView
@property (nonatomic) CGFloat clickDownDuration; // ivar: _clickDownDuration
@property (readonly, nonatomic) CGFloat clickTimeoutDuration;
@property (readonly, nonatomic) BOOL clicksUpAutomaticallyAfterTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIClickInteractionDriverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger driverStyle;
@property (nonatomic) CGFloat forceMultiplier; // ivar: _forceMultiplier
@property (retain, nonatomic) _UITouchDurationObservingGestureRecognizer *gestureRecognizer; // ivar: _gestureRecognizer
@property (readonly, nonatomic) BOOL hasExceededAllowableMovement;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger inputPrecision;
@property (readonly, nonatomic) BOOL isCurrentlyAcceleratedByForce;
@property (readonly, nonatomic) CGFloat maximumEffectProgress;
@property (readonly, nonatomic) UIGestureRecognizer *primaryGestureRecognizer;
@property (nonatomic) BOOL reachedClickDownThreshold; // ivar: _reachedClickDownThreshold
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat touchDuration;
@property (weak, nonatomic) UIView *view; // ivar: _view


+(BOOL)prefersCancelsTouchesInView;
+(BOOL)requiresForceCapability;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(id)init;
-(struct CGPoint )locationInCoordinateSpace:(id)arg0 ;
-(void)_asyncGestureBegan;
-(void)_gestureRecognizerFailed:(id)arg0 ;
-(void)_handleGestureRecognizer:(id)arg0 ;
-(void)_notifyDelegateOfUpdatedClickDownProgress:(CGFloat)arg0 forceAdjustedClickDownDuration:(CGFloat)arg1 ;
-(void)_updateForActiveGestureRecognizer;
-(void)cancelInteraction;


@end


#endif