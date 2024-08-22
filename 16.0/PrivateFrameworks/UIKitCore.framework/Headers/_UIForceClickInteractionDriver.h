// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFORCECLICKINTERACTIONDRIVER_H
#define _UIFORCECLICKINTERACTIONDRIVER_H

@class NSString;
@protocol UIGestureRecognizerDelegatePrivate, _UIClickInteractionDriving, _UIClickInteractionDriverDelegate;

#import <Foundation/Foundation.h>

#import "UITouchForceGestureRecognizer.h"
#import "UIGestureRecognizer.h"
#import "UIView.h"

@interface _UIForceClickInteractionDriver : NSObject <UIGestureRecognizerDelegatePrivate, _UIClickInteractionDriving>

 {
    NSUInteger _currentState;
}


@property (nonatomic) CGFloat allowableMovement;
@property (nonatomic) NSUInteger behavior;
@property (nonatomic) BOOL cancelsTouchesInView; // ivar: _cancelsTouchesInView
@property (readonly, nonatomic) BOOL clicksUpAutomaticallyAfterTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIClickInteractionDriverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger driverStyle;
@property (retain, nonatomic) UITouchForceGestureRecognizer *gestureRecognizer; // ivar: _gestureRecognizer
@property (readonly, nonatomic) BOOL hasExceededAllowableMovement;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger inputPrecision;
@property (readonly, nonatomic) BOOL isCurrentlyAcceleratedByForce;
@property (readonly, nonatomic) CGFloat maximumEffectProgress;
@property (readonly, nonatomic) UIGestureRecognizer *primaryGestureRecognizer;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat touchDuration;
@property (readonly, nonatomic) CGFloat touchForce;
@property (weak, nonatomic) UIView *view; // ivar: _view


+(BOOL)prefersCancelsTouchesInView;
+(BOOL)requiresForceCapability;
-(BOOL)allowsRepeatedClicks;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(id)init;
-(struct CGPoint )locationInCoordinateSpace:(id)arg0 ;
-(void)_gestureRecognizerFailed:(id)arg0 ;
-(void)_handleGestureRecognizer:(id)arg0 ;
-(void)cancelInteraction;


@end


#endif