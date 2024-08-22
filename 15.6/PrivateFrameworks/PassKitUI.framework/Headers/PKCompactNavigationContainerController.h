// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKCOMPACTNAVIGATIONCONTAINERCONTROLLER_H
#define PKCOMPACTNAVIGATIONCONTAINERCONTROLLER_H

@class UIViewController, UIView, UITapGestureRecognizer, NSString;
@protocol UIViewControllerTransitioningDelegate, UINavigationControllerDelegate, UIGestureRecognizerDelegate, PKContentContainerObserver, PKViewWindowObserver, PKCompactNavigationContainerControllerDelegate, UICoordinateSpace;


#import "PKCompactNavigationContainedNavigationWrapperViewController.h"
#import "PKCompactNavigationContainedNavigationController.h"

@interface PKCompactNavigationContainerController : UIViewController <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate, UIGestureRecognizerDelegate, PKContentContainerObserver, PKViewWindowObserver>

 {
    BOOL _centeredCard;
    BOOL _hasExplicitlyDefinedSupportedInterfaceOrientations;
    NSUInteger _explicitlyDefinedSupportedInterfaceOrientations;
    BOOL _requiresMasking;
    UIView *_maskingContainerView;
    CGRect _maximumModalPresentationFrame;
    PKCompactNavigationContainedNavigationWrapperViewController *_presentationContextVC;
    ? _topVCInfo;
    CGRect _statusBarFrame;
    unsigned short _layoutGroupCounter;
    unsigned short _contentSizeUpdateDeferralCounter;
    BOOL _deferredContentSizeUpdate;
    BOOL _deferredContentSizeUpdateIsAnimated;
    BOOL _deferredContentSizeUpdateIsForced;
    UIViewController *_topVC;
    BOOL _topVCIsExpectedClass;
    BOOL _topVCIsInInitialLayout;
    UIViewController *_pendingTopVC;
    NSUInteger _pendingTopVCIdentifier;
    NSUInteger _updateChildViewControllerSizeCounter;
    UITapGestureRecognizer *_tapGestureRecognizer;
    unsigned char _visibility;
    BOOL _keyboardVisible;
    CGRect _keyboardFrame;
    CGRect _lastKeyboardFrame;
}


@property (readonly, nonatomic) PKCompactNavigationContainedNavigationController *containedNavigationController; // ivar: _containedNavigationController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKCompactNavigationContainerControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didMoveToWindowDirtiesLayout; // ivar: _didMoveToWindowDirtiesLayout
@property (readonly, nonatomic) NSObject<UICoordinateSpace> *exclusionCoordinateSpace; // ivar: _exclusionCoordinateSpace
@property (readonly, nonatomic) CGRect exclusionRect; // ivar: _exclusionRect
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isPresentingNavigationController) BOOL presentingNavigationController; // ivar: _presentingNavigationController
@property (readonly, nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;


+(id)dimmingColor;
-(BOOL)_canShowWhileLocked;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(NSInteger)preferredUserInterfaceStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_backgroundColor;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(id)init;
-(id)initWithNavigationController:(id)arg0 ;
-(id)initWithNavigationController:(id)arg0 style:(NSUInteger)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(struct ? )_infoForViewController:(id)arg0 ;
-(struct CGRect )_targetNavigationControllerFrameForInfo:(struct ? )arg0 ;
-(struct CGSize )_navigationControllerSizeForChildViewControllerInfo:(struct ? )arg0 withCurrentInfo:(struct ? )arg1 ;
-(struct CGSize )childViewControllerPreferredContentSizeForSize:(struct CGSize )arg0 isRoot:(BOOL)arg1 ;
-(struct CGSize )childViewControllerSizeForNavigationControllerSize:(struct CGSize )arg0 ;
-(struct CGSize )modalPresentationSize;
-(struct CGSize )navigationControllerSizeForChildViewControllerPreferredContentSize:(struct CGSize )arg0 isRoot:(BOOL)arg1 ;
-(void)_beginLayoutGroup;
-(void)_endLayoutGroup;
-(void)_updateForKeyboardIfNecessary;
-(void)_updateLayoutForKeyboardAction:(id)arg0 ;
-(void)_updateStatusBarFrame;
-(void)_updateTopViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateTopViewControllerAsync:(id)arg0 animated:(BOOL)arg1 ;
-(void)contentContainer:(id)arg0 preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)dealloc;
-(void)insertBackgroundLevelView:(id)arg0 ;
-(void)keyboardWillChange:(id)arg0 ;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)loadView;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)observedView:(id)arg0 didMoveToWindow:(id)arg1 ;
-(void)setSupportedInterfaceOrientations:(NSUInteger)arg0 ;
-(void)tapGestureRecognized:(id)arg0 ;
-(void)updateChildViewControllerSizeAnimated:(BOOL)arg0 ;
-(void)updateChildViewControllerSizeAnimated:(BOOL)arg0 forceUpdate:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif