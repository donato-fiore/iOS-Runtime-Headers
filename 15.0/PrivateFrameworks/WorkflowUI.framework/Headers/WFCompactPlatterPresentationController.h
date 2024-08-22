// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCOMPACTPLATTERPRESENTATIONCONTROLLER_H
#define WFCOMPACTPLATTERPRESENTATIONCONTROLLER_H

@class UIPresentationController, NSString, UIViewController<WFCompactPlatterPresentation>;
@protocol WFCompactPlatterContentContainer, UIViewControllerTransitionCoordinator;



@interface WFCompactPlatterPresentationController : UIPresentationController <WFCompactPlatterContentContainer>



@property (weak, nonatomic) NSObject<UIViewControllerTransitionCoordinator> *activeTransitionCoordinator; // ivar: _activeTransitionCoordinator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIViewController<WFCompactPlatterPresentation> *presentedViewController;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger transitionState; // ivar: _transitionState


+(struct CGRect )usableFrameForPresentingInContainerViewOfSize:(struct CGSize )arg0 ;
-(BOOL)_containerIgnoresDirectTouchEvents;
-(BOOL)_shouldDisableInteractionDuringTransitions;
-(CGFloat)maximumExpectedHeightForPlatterPresentation:(id)arg0 ;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 ;
-(struct CGRect )frameOfDismissedViewInContainerView;
-(struct CGRect )frameOfPresentedViewInContainerView;
-(struct CGRect )presentedViewFrameInContainerViewOfSize:(struct CGSize )arg0 withSizeCalculation:(BOOL)arg1 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)dealloc;
-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)dismissalTransitionWillBegin;
-(void)keyboardWillChange;
-(void)platterPresentationDidInvalidateSize:(id)arg0 ;
-(void)presentationTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionWillBegin;
-(void)updatePresentedViewFrameAnimatedAlongsideKeyboard:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif