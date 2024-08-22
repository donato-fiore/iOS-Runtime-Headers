// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITOUCHDOWNCLICKINTERACTIONDRIVER_H
#define _UITOUCHDOWNCLICKINTERACTIONDRIVER_H

@class NSString;
@protocol _UIClickInteractionDriving, UIGestureRecognizerDelegate, _UIClickInteractionDriverDelegate;

#import <Foundation/Foundation.h>

#import "_UITouchDownGestureRecognizer.h"
#import "UIGestureRecognizer.h"
#import "UIView.h"

@interface _UITouchDownClickInteractionDriver : NSObject <_UIClickInteractionDriving, UIGestureRecognizerDelegate>

 {
    _UITouchDownGestureRecognizer *_gesture;
}


@property (nonatomic) CGFloat allowableMovement; // ivar: _allowableMovement
@property (nonatomic) NSUInteger behavior;
@property (nonatomic) BOOL cancelsTouchesInView; // ivar: _cancelsTouchesInView
@property (readonly, nonatomic) BOOL clicksUpAutomaticallyAfterTimeout; // ivar: _clicksUpAutomaticallyAfterTimeout
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIClickInteractionDriverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger driverStyle;
@property (readonly, nonatomic) BOOL hasExceededAllowableMovement;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger inputPrecision; // ivar: _inputPrecision
@property (readonly, nonatomic) BOOL isCurrentlyAcceleratedByForce;
@property (readonly, nonatomic) CGFloat maximumEffectProgress;
@property (readonly, nonatomic) UIGestureRecognizer *primaryGestureRecognizer;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat touchDuration;
@property (weak, nonatomic) UIView *view; // ivar: _view


+(BOOL)prefersCancelsTouchesInView;
+(BOOL)requiresForceCapability;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(id)init;
-(struct CGPoint )locationInCoordinateSpace:(id)arg0 ;
-(void)_handleGestureRecognizer:(id)arg0 ;
-(void)cancelInteraction;


@end


#endif