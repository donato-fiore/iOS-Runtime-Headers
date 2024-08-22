// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXUINUBBITCONTEXT_H
#define AXUINUBBITCONTEXT_H

@class UICollisionBehavior, AXAssertion, UIDynamicAnimator, UIDynamicItemBehavior, AXDispatchTimer, UIAttachmentBehavior, UIGravityBehavior, UIPanGestureRecognizer, UIView, UISnapBehavior;
@protocol AXUINubbitDelegate;

#import <Foundation/Foundation.h>


@interface AXUINubbitContext : NSObject

@property (retain, nonatomic) UICollisionBehavior *collisionBehavior; // ivar: _collisionBehavior
@property (weak, nonatomic) NSObject<AXUINubbitDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) AXAssertion *disableDashBoardSystemGesturesAssertion; // ivar: _disableDashBoardSystemGesturesAssertion
@property (retain, nonatomic) AXAssertion *disableSystemGesturesAssertion; // ivar: _disableSystemGesturesAssertion
@property (retain, nonatomic) UIDynamicAnimator *dynamicAnimator; // ivar: _dynamicAnimator
@property (retain, nonatomic) UIDynamicItemBehavior *dynamicItemBehavior; // ivar: _dynamicItemBehavior
@property (retain, nonatomic) AXDispatchTimer *fadeTimer; // ivar: _fadeTimer
@property (retain, nonatomic) UIAttachmentBehavior *followPanBehavior; // ivar: _followPanBehavior
@property (retain, nonatomic) UIGravityBehavior *gravityBehavior; // ivar: _gravityBehavior
@property (retain, nonatomic) UIPanGestureRecognizer *moveNubbitGestureRecognizer; // ivar: _moveNubbitGestureRecognizer
@property (retain, nonatomic) UIView *nubbit; // ivar: _nubbit
@property (nonatomic) CGFloat originalAlpha; // ivar: _originalAlpha
@property (retain, nonatomic) UISnapBehavior *snapToBoundaryBehavior; // ivar: _snapToBoundaryBehavior




@end


#endif