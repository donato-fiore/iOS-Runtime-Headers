// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCLONGLOOKDEFAULTPRESENTATIONCONTROLLER_H
#define NCLONGLOOKDEFAULTPRESENTATIONCONTROLLER_H

@class PLExpandedPlatterPresentationController, UIViewController, MTMaterialView;
@protocol NCLongLookDefaultPresentationControllerDelegate;



@interface NCLongLookDefaultPresentationController : PLExpandedPlatterPresentationController {
    UIViewController *_sourceViewController;
    MTMaterialView *_backgroundMaterialView;
}


@property (weak, nonatomic) NSObject<NCLongLookDefaultPresentationControllerDelegate> *presentationControllerDelegate;
@property (nonatomic, getter=isPresenting) BOOL presenting; // ivar: _presenting


-(BOOL)_shouldPresentInCurrentContext;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(BOOL)shouldPresentInFullscreen;
-(BOOL)shouldRemovePresentersView;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 ;
-(struct CGRect )_frameForTransitionViewInPresentationSuperview:(id)arg0 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionWillBegin;
-(void)viewControllerAnimator:(id)arg0 willBeginDismissalAnimationWithTransitionContext:(id)arg1 ;
-(void)viewControllerAnimator:(id)arg0 willBeginPresentationAnimationWithTransitionContext:(id)arg1 ;


@end


#endif