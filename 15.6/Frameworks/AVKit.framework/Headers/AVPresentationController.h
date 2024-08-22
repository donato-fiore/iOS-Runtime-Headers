// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPRESENTATIONCONTROLLER_H
#define AVPRESENTATIONCONTROLLER_H

@class UIPresentationController, UIWindow;


#import "AVPresentationContext.h"
#import "AVObservationController.h"

@interface AVPresentationController : UIPresentationController

@property (readonly, nonatomic) AVPresentationContext *context; // ivar: _context
@property (readonly, nonatomic) AVObservationController *observationController; // ivar: _observationController
@property (weak, nonatomic) UIWindow *presentationWindowForDisablingAutorotation; // ivar: _presentationWindowForDisablingAutorotation


-(BOOL)shouldPresentInFullscreen;
-(BOOL)shouldRemovePresentersView;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 withConfiguration:(id)arg2 ;
-(void)_ensureOrientation:(NSInteger)arg0 enablingMixedOrientations:(BOOL)arg1 ;
-(void)_observeSceneDidBecomeActiveForRestoringRotatability;
-(void)_prepareDismissingTransitionContext;
-(void)containerViewWillLayoutSubviews;
-(void)dealloc;
-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)dismissalTransitionWillBegin;
-(void)presentationTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionWillBegin;


@end


#endif