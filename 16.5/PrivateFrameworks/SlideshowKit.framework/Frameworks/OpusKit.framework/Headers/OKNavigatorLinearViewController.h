// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKNAVIGATORLINEARVIEWCONTROLLER_H
#define OKNAVIGATORLINEARVIEWCONTROLLER_H

@class NSArray, OFPageViewController, NSMutableArray, NSMapTable, NSString;
@protocol OFPageViewControllerDelegate, OFPageViewControllerDataSource, OKPresentationLiveUpdateSupport, OKNavigatorViewControllerTransitionActionProtocol, OFViewControllerTransitioningDelegate;


#import "OKNavigatorViewController.h"
#import "OKTransition.h"

@interface OKNavigatorLinearViewController : OKNavigatorViewController <OFPageViewControllerDelegate, OFPageViewControllerDataSource, OKPresentationLiveUpdateSupport, OKNavigatorViewControllerTransitionActionProtocol, OFViewControllerTransitioningDelegate>

 {
    NSArray *_transitions;
    OKTransition *_currentTransition;
    OFPageViewController *_pagesViewController;
    NSMutableArray *_orderedPagesNames;
    NSMapTable *_registeredActionBindingTransitions;
    NSMapTable *_actionRespondersTransitionContexts;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) OKTransition *defaultTransition; // ivar: _defaultTransition
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat interactiveTransitionProgressThreshold;
@property (nonatomic) CGFloat interactiveTransitionTrackingBoxRadius;
@property (nonatomic) CGFloat interactiveTransitionVelocityThreshold;
@property (nonatomic) BOOL keyboardIsEnabled; // ivar: _keyboardIsEnabled
@property (nonatomic) NSInteger navigationOrientation; // ivar: _navigationOrientation
@property (retain, nonatomic) OKTransition *overrideTransition; // ivar: _overrideTransition
@property (nonatomic) BOOL panIsEnabled; // ivar: _panIsEnabled
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsPageControl; // ivar: _wantsPageControl
@property (nonatomic) BOOL wraps; // ivar: _wraps


+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(BOOL)canPerformAction:(id)arg0 ;
-(BOOL)pageViewController:(id)arg0 canAutomaticallyHandleGestureRecognizer:(id)arg1 ;
-(BOOL)prepareForDisplay;
-(BOOL)prepareForUnload;
-(BOOL)prepareForWarmup;
-(NSInteger)presentationCountForPageViewController:(id)arg0 ;
-(NSInteger)presentationIndexForPageViewController:(id)arg0 ;
-(id)_pageViewControllerForActionResponder:(id)arg0 ;
-(id)initNavigationWithKey:(id)arg0 isKeyUp:(BOOL)arg1 andMethod:(SEL)arg2 ;
-(id)nameForPageAfterPage:(id)arg0 ;
-(id)nameForPageBeforePage:(id)arg0 ;
-(id)navigationController:(id)arg0 animationControllerForDirection:(NSInteger)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(id)navigationController:(id)arg0 interactionControllerForAnimationController:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerAfterViewController:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerAfterViewController:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)pageViewController:(id)arg0 viewControllerBeforeViewController:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerBeforeViewController:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)transitionAfterPage:(id)arg0 ;
-(id)transitionBeforePage:(id)arg0 ;
-(void)_navigateToPrevious:(BOOL)arg0 withAction:(id)arg1 overridingTransition:(BOOL)arg2 ;
-(void)applySettings;
-(void)commonInit;
-(void)dealloc;
-(void)goToNext:(id)arg0 ;
-(void)goToPrevious:(id)arg0 ;
-(void)gotoPageWithName:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)navigateToNext:(id)arg0 ;
-(void)navigateToPageWithName:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)navigateToPrevious:(id)arg0 ;
-(void)pageViewController:(id)arg0 didFinishAnimating:(BOOL)arg1 fromViewController:(id)arg2 transitionCompleted:(BOOL)arg3 ;
-(void)pageViewController:(id)arg0 didFinishTransitioningToViewController:(id)arg1 fromViewController:(id)arg2 transitionCompleted:(BOOL)arg3 ;
-(void)pageViewController:(id)arg0 didStartTransitioningToViewController:(id)arg1 fromViewController:(id)arg2 ;
-(void)pageViewController:(id)arg0 didUpdateTransitioningToViewController:(id)arg1 fromViewController:(id)arg2 withProgress:(CGFloat)arg3 andVelocity:(CGFloat)arg4 ;
-(void)pageViewController:(id)arg0 willFinishTransitioningToViewController:(id)arg1 fromViewController:(id)arg2 transitionWillComplete:(BOOL)arg3 ;
-(void)pageViewController:(id)arg0 willStartBouncingWithDirection:(NSInteger)arg1 ;
-(void)pageViewController:(id)arg0 willStartTransitioningToViewController:(id)arg1 fromViewController:(id)arg2 withDirection:(NSInteger)arg3 ;
-(void)pageViewControllerDidFinishBouncing:(id)arg0 ;
-(void)prepareAdjacentPageViewControllers;
-(void)presentationDidLiveUpdate;
-(void)registerActionBindingTransition:(id)arg0 ;
-(void)reloadPagesViewController;
-(void)setCurrentPageToPageWithName:(id)arg0 direction:(NSInteger)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)setSettingDefaultTransition:(id)arg0 ;
-(void)setSettingInteractiveTransitionSettings:(id)arg0 ;
-(void)setSettingKeyboardIsEnabled:(BOOL)arg0 ;
-(void)setSettingOrientation:(NSInteger)arg0 ;
-(void)setSettingOverrideTransition:(id)arg0 ;
-(void)setSettingPanIsEnabled:(BOOL)arg0 ;
-(void)setSettingTransitions:(id)arg0 ;
-(void)setSettingWantsPageControl:(BOOL)arg0 ;
-(void)setSettingWraps:(BOOL)arg0 ;
-(void)unregisterActionBindingTransition:(id)arg0 ;
-(void)updatePagesViewController;
-(void)viewDidLoad;


@end


#endif