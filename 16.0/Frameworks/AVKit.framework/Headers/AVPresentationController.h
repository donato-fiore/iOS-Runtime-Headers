// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPRESENTATIONCONTROLLER_H
#define AVPRESENTATIONCONTROLLER_H

@class UIPresentationController, UIView, UIWindow, UIViewController;

#import <Foundation/Foundation.h>

#import "AVPresentationContext.h"
#import "AVObservationController.h"

@interface AVPresentationController : NSObject {
    UIPresentationController *_presentationController;
}


@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) AVPresentationContext *context; // ivar: _context
@property (readonly, nonatomic) AVObservationController *observationController; // ivar: _observationController
@property (weak, nonatomic) UIWindow *presentationWindowForDisablingAutorotation; // ivar: _presentationWindowForDisablingAutorotation
@property (readonly, nonatomic) UIView *presentedView;
@property (readonly, nonatomic) UIViewController *presentedViewController;
@property (readonly, nonatomic) UIViewController *presentingViewController;


-(BOOL)dismissed;
-(BOOL)dismissing;
-(BOOL)presented;
-(BOOL)presenting;
-(BOOL)shouldPresentInFullscreen;
-(BOOL)shouldRemovePresentersView;
-(id)initWithPresentationController:(id)arg0 presentedViewController:(id)arg1 presentingViewController:(id)arg2 withConfiguration:(id)arg3 ;
-(void)_ensureOrientation:(NSInteger)arg0 enablingMixedOrientations:(BOOL)arg1 ;
-(void)_observeSceneDidBecomeActiveForRestoringRotatability;
-(void)_prepareDismissingTransitionContext;
-(void)dealloc;
-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)dismissalTransitionWillBegin;
-(void)presentationTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionWillBegin;


@end


#endif