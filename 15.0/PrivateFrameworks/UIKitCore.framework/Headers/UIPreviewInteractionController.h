// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPREVIEWINTERACTIONCONTROLLER_H
#define UIPREVIEWINTERACTIONCONTROLLER_H

@class UIPresentationController<UIForcePresentationController>, NSString, NSArray;
@protocol UIGestureRecognizerDelegate, UIInteractionProgressObserver, _UIForcePresentationControllerDelegate, UIPreviewInteractionDelegate, UIForceTransitioningDelegate, UIPreviewInteractionControllerDelegate, UIViewControllerPreviewing_Internal;

#import <Foundation/Foundation.h>

#import "UIGestureRecognizer.h"
#import "UIViewController.h"
#import "_UIDeepPressAnalyzer.h"
#import "_UIStatesFeedbackGenerator.h"
#import "UIInteractionProgress.h"
#import "UIPanGestureRecognizer.h"
#import "_UIPreviewGestureRecognizer.h"
#import "UIPreviewInteraction.h"
#import "_UIRevealGestureRecognizer.h"
#import "UIView.h"
#import "_UITouchesObservingGestureRecognizer.h"
#import "UIWindow.h"

@interface UIPreviewInteractionController : NSObject <UIGestureRecognizerDelegate, UIInteractionProgressObserver, _UIForcePresentationControllerDelegate, UIPreviewInteractionDelegate>

 {
    BOOL _isCommitting;
    BOOL _generatorTurnedOn;
}


@property (readonly, nonatomic) UIGestureRecognizer *beginPreviewGestureRecognizer;
@property (retain, nonatomic) id *currentCommitTransition; // ivar: _currentCommitTransition
@property (retain, nonatomic) UIPresentationController<UIForcePresentationController> *currentPresentationController; // ivar: _currentPresentationController
@property (retain, nonatomic) UIViewController *currentPreviewViewController; // ivar: _currentPreviewViewController
@property (retain, nonatomic) NSObject<UIForceTransitioningDelegate> *currentTransitionDelegate; // ivar: _currentTransitionDelegate
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _UIDeepPressAnalyzer *deepPressAnalyzer; // ivar: _deepPressAnalyzer
@property (weak, nonatomic) NSObject<UIPreviewInteractionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSendDelegateWillDismissViewController; // ivar: _didSendDelegateWillDismissViewController
@property (retain, nonatomic) _UIStatesFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (readonly, nonatomic) NSArray *gestureRecognizers;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIInteractionProgress *interactionProgressForCommit; // ivar: _interactionProgressForCommit
@property (retain, nonatomic) UIInteractionProgress *interactionProgressForPresentation; // ivar: _interactionProgressForPresentation
@property (nonatomic) CGPoint location; // ivar: _location
@property (retain, nonatomic) UIPanGestureRecognizer *modalPanGestureRecognizer; // ivar: _modalPanGestureRecognizer
@property (readonly, nonatomic) UIGestureRecognizer *presentationGestureRecognizer;
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (retain, nonatomic) _UIPreviewGestureRecognizer *previewGestureRecognizer; // ivar: _previewGestureRecognizer
@property (retain, nonatomic) UIPreviewInteraction *previewInteraction; // ivar: _previewInteraction
@property (weak, nonatomic) NSObject<UIViewControllerPreviewing_Internal> *previewingContext; // ivar: _previewingContext
@property (retain, nonatomic) _UIRevealGestureRecognizer *revealGestureRecognizer; // ivar: _revealGestureRecognizer
@property (weak, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (nonatomic) BOOL statusBarWasHidden; // ivar: _statusBarWasHidden
@property (readonly) Class superclass;
@property (retain, nonatomic) _UITouchesObservingGestureRecognizer *touchObservingGestureRecognizer; // ivar: _touchObservingGestureRecognizer
@property (retain, nonatomic) UIWindow *windowForPreviewPresentation; // ivar: _windowForPreviewPresentation


-(BOOL)_previewingIsPossibleForView:(id)arg0 ;
-(BOOL)_usesPreviewInteraction;
-(BOOL)_usesPreviewPresentationController;
-(BOOL)_viewControllerIsChildOfExpandedSplitViewController:(id)arg0 ;
-(BOOL)configureRevealTransformSourceViewSnapshotSuppressionFromLocation:(struct CGPoint )arg0 inView:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)previewInteractionShouldBegin:(id)arg0 ;
-(BOOL)startInteractivePreviewAtLocation:(struct CGPoint )arg0 inView:(id)arg1 ;
-(BOOL)startInteractivePreviewWithGestureRecognizer:(id)arg0 ;
-(id)_transitionDelegateForPreviewViewController:(id)arg0 atPosition:(struct CGPoint )arg1 inView:(id)arg2 ;
-(id)init;
-(id)initWithView:(id)arg0 ;
-(void)_activateFeedback;
-(void)_activateFeedbackIfNeeded;
-(void)_configureCommitInteractionProgressForView:(id)arg0 ;
-(void)_deactivateFeedbackIfNeeded;
-(void)_finalizeInteractivePreview;
-(void)_gestureRecognizerFailed:(id)arg0 ;
-(void)_handleRevealGesture:(id)arg0 ;
-(void)_handleTouchObservingGesture:(id)arg0 ;
-(void)_previewPresentationControllerDidScheduleDismiss;
-(void)_resetCustomPresentationHooks;
-(void)_setCalloutBarHidden:(BOOL)arg0 ;
-(void)_setStatusBarHidden:(BOOL)arg0 ;
-(void)_turnOffFeedbackGenerator;
-(void)_turnOnFeedbackGenerator;
-(void)cancelInteractivePreview;
-(void)commitInteractivePreview;
-(void)configureRevealTransformWithInteractionProgress:(id)arg0 forLocation:(struct CGPoint )arg1 inView:(id)arg2 containerView:(id)arg3 ;
-(void)dealloc;
-(void)forcePresentationController:(id)arg0 didSelectMenuItem:(id)arg1 ;
-(void)forcePresentationControllerDidDismiss:(id)arg0 ;
-(void)forcePresentationControllerWantsToCommit:(id)arg0 ;
-(void)forcePresentationControllerWillDismiss:(id)arg0 ;
-(void)forcePresentationTransitionWillBegin:(id)arg0 ;
-(void)initGestureRecognizers;
-(void)interactionProgress:(id)arg0 didEnd:(BOOL)arg1 ;
-(void)interactionProgressDidUpdate:(id)arg0 ;
-(void)previewInteraction:(id)arg0 didUpdateCommitTransition:(CGFloat)arg1 ended:(BOOL)arg2 ;
-(void)previewInteraction:(id)arg0 didUpdatePreviewTransition:(CGFloat)arg1 ended:(BOOL)arg2 ;
-(void)previewInteractionDidCancel:(id)arg0 ;


@end


#endif