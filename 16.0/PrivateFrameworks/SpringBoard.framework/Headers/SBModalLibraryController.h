// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBMODALLIBRARYCONTROLLER_H
#define SBMODALLIBRARYCONTROLLER_H

@class NSString, SBHIconManager, SBHModalLibraryPresenter, SBHLibraryViewController, UIApplicationSceneDeactivationAssertion;
@protocol SBLayoutStateTransitionObserver, SBHLibraryViewControllerObserver, SBHModalLibraryPresentationDelegate, SBHModalLibraryPresentationObserver, SBIdleTimerProviding, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBFloatingDockBehaviorAssertion.h"
#import "SBFloatingDockController.h"
#import "SBMedusaHostedKeyboardWindowLevelAssertion.h"
#import "SBSceneManager.h"

@interface SBModalLibraryController : NSObject <SBLayoutStateTransitionObserver, SBHLibraryViewControllerObserver, SBHModalLibraryPresentationDelegate, SBHModalLibraryPresentationObserver, SBIdleTimerProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SBFloatingDockBehaviorAssertion *floatingDockBehaviorAssertion; // ivar: _floatingDockBehaviorAssertion
@property (readonly, weak, nonatomic) SBFloatingDockController *floatingDockController; // ivar: _floatingDockController
@property (readonly, nonatomic) BOOL hasIdleTimerBehaviors;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBHIconManager *iconManager; // ivar: _iconManager
@property (retain, nonatomic) SBMedusaHostedKeyboardWindowLevelAssertion *keyboardWindowLevelAssertion; // ivar: _keyboardWindowLevelAssertion
@property (retain, nonatomic) NSObject<BSInvalidatable> *libraryDisplayLayoutElementAssertion; // ivar: _libraryDisplayLayoutElementAssertion
@property (readonly, nonatomic) SBHModalLibraryPresenter *libraryPresenter; // ivar: _libraryPresenter
@property (readonly, nonatomic) SBHLibraryViewController *libraryViewController; // ivar: _libraryViewController
@property (retain, nonatomic) NSObject<BSInvalidatable> *libraryWindowKeyboardFocusAssertion; // ivar: _libraryWindowKeyboardFocusAssertion
@property (readonly, nonatomic, getter=isPresentingLibrary) BOOL presentingLibrary;
@property (readonly, nonatomic, getter=isPresentingLibraryInForeground) BOOL presentingLibraryInForeground;
@property (nonatomic, getter=isPresentingOrTransitioningSearch) BOOL presentingOrTransitioningSearch; // ivar: _presentingOrTransitioningSearch
@property (readonly, nonatomic) UIApplicationSceneDeactivationAssertion *resignActiveAssertion; // ivar: _resignActiveAssertion
@property (readonly, weak, nonatomic) SBSceneManager *sceneManager; // ivar: _sceneManager
@property (readonly) Class superclass;


-(BOOL)modalLibraryPresenterShouldAllowSwipeToDismissGesture:(id)arg0 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg0 ;
-(id)initWithIconManager:(id)arg0 libraryViewController:(id)arg1 floatingDockController:(id)arg2 sceneManager:(id)arg3 ;
-(void)_configureFloatingDockBehaviorAssertionForPresented:(BOOL)arg0 ;
-(void)_didCompleteTransitionWithLibraryToPresented:(BOOL)arg0 ;
-(void)_evaluateKeyboardWindowLevelAssertion;
-(void)_evaluateResignActiveAssertion;
-(void)_evaluateWindowStatus;
-(void)_prepareLibraryViewControllerForDismissal:(id)arg0 ;
-(void)_setLibraryDisplayLayoutElementActive:(BOOL)arg0 ;
-(void)_willPerformTransitionWithLibraryToPresented:(BOOL)arg0 ;
-(void)dealloc;
-(void)dismissLibraryAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)libraryViewController:(id)arg0 didDismissSearchController:(id)arg1 ;
-(void)libraryViewController:(id)arg0 willPresentSearchController:(id)arg1 ;
-(void)modalLibraryPresenter:(id)arg0 didDismissLibrary:(id)arg1 ;
-(void)modalLibraryPresenter:(id)arg0 didPassCriticalDismissalPoint:(id)arg1 ;
-(void)modalLibraryPresenter:(id)arg0 didPresentLibrary:(id)arg1 ;
-(void)modalLibraryPresenter:(id)arg0 willDismissLibrary:(id)arg1 ;
-(void)modalLibraryPresenter:(id)arg0 willPresentLibrary:(id)arg1 ;
-(void)presentLibraryAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)presentLibraryCategoryPodForCategoryIdentifier:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)toggleLibraryPresentedAnimated:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif