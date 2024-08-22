// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLEXPANDEDPLATTERPRESENTATIONCONTROLLER_H
#define PLEXPANDEDPLATTERPRESENTATIONCONTROLLER_H

@class UIPresentationController, UIView, UIView<PLExpandedPlatter>, UILabel, _UIStatesFeedbackGenerator, UINotificationFeedbackGenerator, MTLumaDodgePillView, NSString, UIPanGestureRecognizer;
@protocol PLViewControllerAnimatorObserving, UIViewControllerTransitionCoordinator, PLKeyboardHomeAffordanceAssertion, PLExpandedPlatterPresentationControllerDelegate;



@interface PLExpandedPlatterPresentationController : UIPresentationController <PLViewControllerAnimatorObserving>

 {
    UIView *_sourceView;
    UIView<PLExpandedPlatter> *_presentedExpandedPlatter;
    CGRect _sourceViewInitialPresentationFrame;
    CGRect _sourceViewFinalPresentationFrame;
    CGRect _sourceViewFinalDismissalFrame;
    CGAffineTransform _sourceViewInitialTransform;
    id<UIViewControllerTransitionCoordinator> *_activeTransitionCoordinator;
    UIView *_dismissLabelContainerView;
    UILabel *_dismissLabel;
    _UIStatesFeedbackGenerator *_dismissFeedbackBehavior;
    UINotificationFeedbackGenerator *_homeAffordanceFeedbackGenerator;
    BOOL _didPlayDismissHaptic;
    CGSize _childPreferredContentSize;
    MTLumaDodgePillView *_homeAffordanceView;
    BOOL _listenToKeyboardEvents;
    ? _expandedPlatterPresentationControllerHelperFlags;
}


@property (nonatomic) CGPoint additionalContentTranslation; // ivar: _additionalContentTranslation
@property (nonatomic) CGFloat additionalHomeAffordanceSpacing; // ivar: _additionalHomeAffordanceSpacing
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIPanGestureRecognizer *homeAffordancePanGesture; // ivar: _homeAffordancePanGesture
@property (nonatomic, getter=isHomeAffordanceVisible) BOOL homeAffordanceVisible; // ivar: _homeAffordanceVisible
@property (nonatomic, getter=_keyboardFrame, setter=_setKeyboardFrame:) CGRect keyboardFrame; // ivar: _keyboardFrame
@property (retain, nonatomic, getter=_keyboardHomeAffordance, setter=_setKeyboardHomeAffordance:) NSObject<PLKeyboardHomeAffordanceAssertion> *keyboardHomeAffordance; // ivar: _keyboardHomeAffordance
@property (weak, nonatomic) NSObject<PLExpandedPlatterPresentationControllerDelegate> *presentationControllerDelegate; // ivar: _presentationControllerDelegate
@property (readonly) Class superclass;


+(struct CGRect )useableContainerViewBoundsForExpandedPlatter:(id)arg0 inContainerViewWithBounds:(struct CGRect )arg1 ;
+(struct CGSize )_sizeOfExpandedPlatter:(id)arg0 withPreferredContentSize:(struct CGSize )arg1 inContainerViewWithBounds:(struct CGRect )arg2 ;
+(struct CGSize )_sizeOfViewWithPreferredContentSize:(struct CGSize )arg0 inUseableContainerViewBounds:(struct CGRect )arg1 ;
-(BOOL)_actuateFeedbackForDismissalIfNecessary;
-(BOOL)_isKeyboardHomeAffordanceVisible;
-(BOOL)_isLocalHomeAffordanceVisible;
-(BOOL)_shouldDisableInteractionDuringTransitions;
-(BOOL)_shouldMakePresentedViewControllerFirstResponder;
-(id)_clickPresentationInteractionManager;
-(id)_presentedExpandedPlatter;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 ;
-(struct CGPoint )_contentOffsetForPresentedExpandedPlatterView:(id)arg0 ;
-(struct CGRect )_dismissLabelContainerViewFrameForPresentedViewFrame:(struct CGRect )arg0 ;
-(struct CGRect )_frameOfPresentedViewInContainerViewWithBounds:(struct CGRect )arg0 ;
-(struct CGRect )_sourceViewFinalDismissalFrame;
-(struct CGRect )_sourceViewFinalPresentationFrame;
-(struct CGRect )_sourceViewInitialPresentationFrame;
-(struct CGRect )finalDismissalFrameOfPresentingViewInContainerView;
-(struct CGRect )finalPresentationFrameOfPresentingViewInContainerView;
-(struct CGRect )frameOfPresentedViewInContainerView;
-(struct CGRect )initialFrameOfPresentedViewInContainerView;
-(struct CGRect )initialPresentationFrameOfPresentingViewInContainerView;
-(struct UIEdgeInsets )_contentInsetWithPresentedFrame:(struct CGRect )arg0 inContainerViewWithBounds:(struct CGRect )arg1 ;
-(void)_actuateFeedbackForDismissalInvalidationIfNecessary;
-(void)_configureDismissFeedbackIfNecessary;
-(void)_configureDismissLabelIfNecessary;
-(void)_dismissExpandedPlatterWithTrigger:(NSInteger)arg0 ;
-(void)_fireHomeGesture;
-(void)_handleBackgroundTap:(id)arg0 ;
-(void)_handleHomeAffordancePan:(id)arg0 ;
-(void)_popDismissLabel;
-(void)_setKeyboardHomeAffordanceVisible:(BOOL)arg0 ;
-(void)_setLocalHomeAffordanceVisible:(BOOL)arg0 ;
-(void)_settleHomeAffordance;
-(void)completeDismissal;
-(void)containerViewWillLayoutSubviews;
-(void)dismissalTransitionWillBegin;
-(void)hintDismissalWithCommitProgress:(CGFloat)arg0 overallProgress:(CGFloat)arg1 ;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)presentationTransitionWillBegin;
-(void)viewControllerAnimator:(id)arg0 willBeginDismissalAnimationWithTransitionContext:(id)arg1 ;
-(void)viewControllerAnimator:(id)arg0 willBeginPresentationAnimationWithTransitionContext:(id)arg1 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif