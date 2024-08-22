// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBNESTINGVIEWCONTROLLER_H
#define SBNESTINGVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray, NSHashTable;
@protocol SBNestingViewControllerDelegate, SBViewControllerTransitionContextDelegate;


#import "SBViewControllerTransitionContext.h"
#import "SBNestingViewController.h"

@interface SBNestingViewController : UIViewController <SBNestingViewControllerDelegate, SBViewControllerTransitionContextDelegate>



@property (copy, nonatomic) id *clientOperationCompletion; // ivar: _clientOperationCompletion
@property (retain, nonatomic) SBViewControllerTransitionContext *currentTransition; // ivar: _currentTransition
@property (nonatomic) NSInteger currentTransitionOperation; // ivar: _currentTransitionOperation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SBNestingViewController *deepestNestedDescendantViewController;
@property (weak, nonatomic) NSObject<SBNestingViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isTransitioning;
@property (retain, nonatomic) SBNestingViewController *nestedViewController; // ivar: _nestedViewController
@property (readonly, copy, nonatomic) NSArray *nestedViewControllers;
@property (weak, nonatomic) SBNestingViewController *parentNestingViewController; // ivar: _parentNestingViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) NSHashTable *transitionObservers; // ivar: _transitionObservers
@property (readonly, nonatomic) SBNestingViewController *viewControllerCurrentlyDrivingTransition;
@property (readonly, nonatomic) BOOL wantsModalPresentation;


-(BOOL)_shouldAddTransitioningViewControllerAfterCurrentTransitionCompletes;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(id)_descriptionForOperation:(NSInteger)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)nestingViewController:(id)arg0 animationControllerForOperation:(NSInteger)arg1 onViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)nestingViewController:(id)arg0 interactionControllerForAnimationController:(id)arg1 ;
-(id)nestingViewController:(id)arg0 sourceViewForPresentingViewController:(id)arg1 ;
-(id)transitionCoordinator;
-(struct CGRect )frameForNestedViewController:(id)arg0 afterOperation:(NSInteger)arg1 withParentContainerSize:(struct CGSize )arg2 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_handleAddChildViewController:(id)arg0 ;
-(void)_handleRemoveChildViewController:(id)arg0 ;
-(void)_handleWillAddChildViewController:(id)arg0 ;
-(void)_handleWillRemoveChildViewController:(id)arg0 ;
-(void)_performOperation:(NSInteger)arg0 onViewController:(id)arg1 animated:(BOOL)arg2 withCompletion:(id)arg3 ;
-(void)_setFinalStateForTransitioningViewController:(id)arg0 ;
-(void)_updateStateForTransitioningViewController:(id)arg0 ;
-(void)addNestedViewController:(id)arg0 ;
-(void)addTransitionObserver:(id)arg0 ;
-(void)addViewToHierarchyForNestedViewController:(id)arg0 ;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)nestingViewController:(id)arg0 willPerformOperation:(NSInteger)arg1 onViewController:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)nestingViewController:(id)arg0 willPresentViewController:(id)arg1 ;
-(void)popNestedViewControllerAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)pushNestedViewController:(id)arg0 animated:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)removeNestedViewController:(id)arg0 ;
-(void)removeTransitionObserver:(id)arg0 ;
-(void)removeViewFromHierarchyForNestedViewController:(id)arg0 ;
-(void)transitionDidBegin:(id)arg0 ;
-(void)transitionDidFinish:(id)arg0 ;
-(void)transitionDidReverse:(id)arg0 ;
-(void)transitionWillBegin:(id)arg0 ;
-(void)transitionWillFinish:(id)arg0 ;
-(void)transitionWillReverse:(id)arg0 ;
-(void)traverseNestedViewControllersWithBlock:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 forOperation:(NSInteger)arg1 withTransitionCoordinator:(id)arg2 ;


@end


#endif