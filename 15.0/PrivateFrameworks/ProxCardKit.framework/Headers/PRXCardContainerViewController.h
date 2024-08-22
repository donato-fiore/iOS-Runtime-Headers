// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRXCARDCONTAINERVIEWCONTROLLER_H
#define PRXCARDCONTAINERVIEWCONTROLLER_H

@class UIViewController, NSString, UINavigationController;
@protocol PRXPullDismissalProvider, PRXCardContainerViewDelegate, UINavigationControllerDelegate, PRXFlowDelegate;


#import "PRXTransitioningController.h"
#import "PRXCardContainerView.h"
#import "PRXFlowConfiguration.h"
#import "PRXPullDismissalInteractionDriver.h"

@interface PRXCardContainerViewController : UIViewController <PRXPullDismissalProvider, PRXCardContainerViewDelegate, UINavigationControllerDelegate>

 {
    PRXTransitioningController *_transitionController;
    PRXCardContainerView *_container;
    NSDirectionalEdgeInsets _containerLayoutMargins;
    BOOL _legacyCard;
}


@property (readonly, nonatomic) PRXFlowConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didShowViewController; // ivar: _didShowViewController
@property (weak, nonatomic) NSObject<PRXFlowDelegate> *flowDelegate; // ivar: _flowDelegate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UINavigationController *mainNavigationController; // ivar: _mainNavigationController
@property (readonly, nonatomic) PRXPullDismissalInteractionDriver *pullDismissalInteractionDriver; // ivar: _pullDismissalInteractionDriver
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)_shouldLayoutViewControllerBeforeCalculatingSize:(id)arg0 ;
-(NSInteger)_cardStyleForContentContainer:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)init;
-(id)initAsSingleCardWithContentViewController:(id)arg0 containerLayoutMargins:(struct NSDirectionalEdgeInsets )arg1 configuration:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)navigationController:(id)arg0 animationControllerForOperation:(NSInteger)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(struct CGSize )_maximumCardSizeForContainerSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_commonInit;
-(void)_updateCardSizeClassForContainerSize:(struct CGSize )arg0 ;
-(void)_updateContainerPreferredContentSize;
-(void)_updatePreferredContentSizeForViewController:(id)arg0 containerSize:(struct CGSize )arg1 ;
-(void)backgroundTapped:(id)arg0 ;
-(void)loadView;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif