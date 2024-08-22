// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPREVIEWTRANSITIONCONTROLLER_H
#define _UIPREVIEWTRANSITIONCONTROLLER_H

@class NSMutableDictionary, NSString, NSDictionary;
@protocol UIInteractionProgressObserver, UIViewControllerAnimatedTransitioning, UIForceInteractionController, UIViewControllerContextTransitioning;


#import "UIPercentDrivenInteractiveTransition.h"
#import "_UIStatesFeedbackGenerator.h"
#import "UIInteractionProgress.h"

@interface _UIPreviewTransitionController : UIPercentDrivenInteractiveTransition <UIInteractionProgressObserver, UIViewControllerAnimatedTransitioning, UIForceInteractionController>



@property (retain, nonatomic) NSMutableDictionary *animationsByPresentationPhase; // ivar: _animationsByPresentationPhase
@property (readonly, nonatomic) NSInteger completionCurve;
@property (readonly, nonatomic) CGFloat completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _UIStatesFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIInteractionProgress *interactionProgress; // ivar: _interactionProgress
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger targetPresentationPhase; // ivar: _targetPresentationPhase
@property (weak, nonatomic) NSObject<UIViewControllerContextTransitioning> *transitionContext; // ivar: _transitionContext
@property (retain, nonatomic) NSDictionary *viewsParticipatingInCommitTransition; // ivar: _viewsParticipatingInCommitTransition
@property (readonly, nonatomic) BOOL wantsInteractiveStart;


+(id)performCommitTransitionWithDelegate:(id)arg0 forViewController:(id)arg1 previewViewController:(id)arg2 previewInteractionController:(id)arg3 completion:(id)arg4 ;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)init;
-(id)initWithInteractionProgress:(id)arg0 targetPresentationPhase:(NSUInteger)arg1 ;
-(void)_animateCommitTransition:(id)arg0 ;
-(void)_animateDismissTransition:(id)arg0 ;
-(void)_animatePreviewTransition:(id)arg0 ;
-(void)_animateRevealTransition:(id)arg0 ;
-(void)_completeAnimationWithPresentationPhase:(NSUInteger)arg0 finished:(BOOL)arg1 ;
-(void)_layoutForPresentationPhase:(NSUInteger)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)animationEnded:(BOOL)arg0 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)interactionProgress:(id)arg0 didEnd:(BOOL)arg1 ;
-(void)interactionProgressDidUpdate:(id)arg0 ;
// -(void)setAnimations:(id)arg0 completion:(unk)arg1 forPresentationPhase:(id)arg2  ;
-(void)startInteractiveTransition:(id)arg0 ;
-(void)updateInteractiveTransition:(CGFloat)arg0 ;


@end


#endif