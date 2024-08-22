// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPRESSCLICKINTERACTIONDRIVER_H
#define _UIPRESSCLICKINTERACTIONDRIVER_H

@class NSString, NSArray;
@protocol UIGestureRecognizerDelegate, _UIClickInteractionDriving, _UIClickInteractionDriverDelegate;

#import <Foundation/Foundation.h>

#import "_UISimplePressGestureRecognizer.h"
#import "UIGestureRecognizer.h"
#import "UIView.h"

@interface _UIPressClickInteractionDriver : NSObject <UIGestureRecognizerDelegate, _UIClickInteractionDriving>



@property (nonatomic) CGFloat allowableMovement; // ivar: _allowableMovement
@property (nonatomic) NSUInteger behavior;
@property (nonatomic) BOOL cancelsTouchesInView; // ivar: _cancelsTouchesInView
@property (readonly, nonatomic) BOOL clicksUpAutomaticallyAfterTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIClickInteractionDriverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger driverStyle;
@property (readonly, nonatomic) BOOL hasExceededAllowableMovement;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger inputPrecision;
@property (readonly, nonatomic) BOOL isCurrentlyAcceleratedByForce;
@property (readonly, nonatomic) CGFloat maximumEffectProgress;
@property (retain, nonatomic) _UISimplePressGestureRecognizer *pressGR; // ivar: _pressGR
@property (readonly, nonatomic) UIGestureRecognizer *primaryGestureRecognizer;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat touchDuration;
@property (retain, nonatomic) NSArray *triggers; // ivar: _triggers
@property (weak, nonatomic) UIView *view; // ivar: _view


+(BOOL)prefersCancelsTouchesInView;
+(BOOL)requiresForceCapability;
-(id)init;
-(struct CGPoint )locationInCoordinateSpace:(id)arg0 ;
-(void)_addToView:(id)arg0 ;
-(void)_handlePressGesture:(id)arg0 ;
-(void)_removeFromView;
-(void)cancelInteraction;


@end


#endif