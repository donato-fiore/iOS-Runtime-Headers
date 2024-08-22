// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIWINDOWSCENEACTIVATIONINTERACTION_H
#define UIWINDOWSCENEACTIVATIONINTERACTION_H

@class NSString;
@protocol UIInteraction_Internal, UIGestureRecognizerDelegate, _UIWindowSceneActivator_Internal, UIInteraction;

#import <Foundation/Foundation.h>

#import "UIWindowSceneActivationConfiguration.h"
#import "_UIWindowSceneActivationEffect.h"
#import "_UIWindowSceneActivationAnimator.h"
#import "UIPinchGestureRecognizer.h"
#import "UIView.h"

@interface UIWindowSceneActivationInteraction : NSObject <UIInteraction_Internal, UIGestureRecognizerDelegate, _UIWindowSceneActivator_Internal, UIInteraction>



@property (retain, nonatomic) UIWindowSceneActivationConfiguration *activeConfiguration; // ivar: _activeConfiguration
@property (retain, nonatomic) _UIWindowSceneActivationEffect *activeEffect; // ivar: _activeEffect
@property (retain, nonatomic) _UIWindowSceneActivationAnimator *animator; // ivar: _animator
@property (copy, nonatomic) id *configurationProvider; // ivar: _configurationProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGR; // ivar: _pinchGR
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


-(BOOL)_canAnimateSceneActivationWithConfiguration:(id)arg0 ;
-(BOOL)_shouldActivateForEndingPinch:(id)arg0 ;
-(BOOL)_supportsAssociation;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(id)_targetedPreviewForContinuingEffectWithPreview:(id)arg0 ;
// -(id)initWithConfigurationProvider:(id)arg0 errorHandler:(unk)arg1  ;
-(void)_animateExpansionWithVelocity:(CGFloat)arg0 ;
-(void)_cancelInteraction;
-(void)_handlePinchGesture:(id)arg0 ;
-(void)_prepareSceneActivationConfiguration:(id)arg0 ;
-(void)_prewarmAnimation;
-(void)_requestSceneActivationWithConfiguration:(id)arg0 animated:(BOOL)arg1 sender:(id)arg2 errorHandler:(id)arg3 ;
-(void)didMoveToView:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif