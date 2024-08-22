// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISPRINGLOADEDINTERACTION_H
#define UISPRINGLOADEDINTERACTION_H

@class NSString;
@protocol UISpringLoadedInteractionBehaviorDelegate, UIInteraction_Internal, UIDragGestureRecognizerDelegate, UIInteraction, UISpringLoadedInteractionBehavior, UISpringLoadedInteractionEffect;

#import <Foundation/Foundation.h>

#import "UIDelayedAction.h"
#import "UISpringLoadedInteractionContextImpl.h"
#import "UIView.h"

@interface UISpringLoadedInteraction : NSObject <UISpringLoadedInteractionBehaviorDelegate, UIInteraction_Internal, UIDragGestureRecognizerDelegate, UIInteraction>



@property (nonatomic, setter=_setPossibleStateDuration:) CGFloat _possibleStateDuration; // ivar: _possibleStateDuration
@property (retain, nonatomic) UIDelayedAction *activateAction; // ivar: _activateAction
@property (retain, nonatomic) UISpringLoadedInteractionContextImpl *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIDelayedAction *emphasizeAction; // ivar: _emphasizeAction
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<UISpringLoadedInteractionBehavior> *interactionBehavior; // ivar: _interactionBehavior
@property (readonly, nonatomic) NSObject<UISpringLoadedInteractionEffect> *interactionEffect; // ivar: _interactionEffect
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // ivar: _view


+(id)_blinkEffect;
+(id)_defaultInteractionBehavior;
+(id)hysteresisBehaviorWithBeginningVelocity:(CGFloat)arg0 cancelingVelocity:(CGFloat)arg1 ;
+(id)springLoadedInteractionWithHandler:(id)arg0 ;
-(BOOL)_shouldAllowInteractionWithContext:(id)arg0 ;
-(id)_dynamicGestureRecognizersForEvent:(id)arg0 ;
-(id)initWithActivationHandler:(id)arg0 ;
-(id)initWithInteractionBehavior:(id)arg0 interactionEffect:(id)arg1 activationHandler:(id)arg2 ;
-(void)_activateSpringLoading:(id)arg0 ;
-(void)_cancelActions;
-(void)_emphasizeSpringLoading:(id)arg0 ;
-(void)_reloadSpringLoadedInteractionBehavior;
-(void)_resetBehavior;
-(void)_springloadedStateChanged:(id)arg0 ;
-(void)_startActivateAction;
-(void)_startEmphasizeAction;
-(void)didMoveToView:(id)arg0 ;
-(void)setState:(NSInteger)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif