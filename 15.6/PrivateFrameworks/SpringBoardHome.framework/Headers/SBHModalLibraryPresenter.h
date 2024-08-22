// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHMODALLIBRARYPRESENTER_H
#define SBHMODALLIBRARYPRESENTER_H

@class NSMutableArray, NSCountedSet, NSTimer, MTMaterialView, UIView, UIViewController, NSString, UIPanGestureRecognizer, UIScrollView;
@protocol SBHModalLibraryPresentationContext, SBHViewControllerTransitionDelegate, UIGestureRecognizerDelegate, BSDescriptionProviding, BSInvalidatable, SBHModalLibraryPresenterContextProviding, SBHModalLibraryPresentationDelegate;

#import <Foundation/Foundation.h>

#import "SBHAppLibrarySettings.h"
#import "SBIconListView.h"
#import "SBHLibraryIconViewController.h"
#import "SBIconView.h"
#import "SBHLibraryViewController.h"
#import "SBHSearchBar.h"
#import "SBHViewControllerTransition.h"

@interface SBHModalLibraryPresenter : NSObject <SBHModalLibraryPresentationContext, SBHViewControllerTransitionDelegate, UIGestureRecognizerDelegate, BSDescriptionProviding>

 {
    NSMutableArray *_didPresentCompletions;
    NSMutableArray *_didDismissCompletions;
    NSCountedSet *_reasonsToSnapshotBackgroundView;
    id<BSInvalidatable> *_librarySearchPrewarmAssertion;
    SBHAppLibrarySettings *_librarySettings;
    NSTimer *_criticalDismissalNotifyTimer;
}


@property (retain, nonatomic) MTMaterialView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) UIViewController *containerViewController; // ivar: _containerViewController
@property (weak, nonatomic) NSObject<SBHModalLibraryPresenterContextProviding> *contextProvider; // ivar: _contextProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIPanGestureRecognizer *dismissPanGestureRecognizer; // ivar: _dismissPanGestureRecognizer
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBIconListView *iconListView;
@property (readonly, nonatomic, getter=isLibraryContainedInForeground) BOOL libraryContainedInForeground;
@property (readonly, nonatomic) SBHLibraryIconViewController *libraryIconViewController;
@property (readonly, nonatomic) SBIconView *libraryPodIconView;
@property (readonly, nonatomic) UIView *libraryView;
@property (readonly, nonatomic) SBHLibraryViewController *libraryViewController; // ivar: _libraryViewController
@property (retain, nonatomic) UIViewController *overrideContainerViewController;
@property (readonly, nonatomic) UIScrollView *podScrollView;
@property (nonatomic) NSUInteger preferredTransitionStyle; // ivar: _preferredTransitionStyle
@property (weak, nonatomic) NSObject<SBHModalLibraryPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (readonly, nonatomic, getter=isPresentingLibrary) BOOL presentingLibrary;
@property (readonly, nonatomic) SBHSearchBar *searchBar;
@property (nonatomic) BOOL shouldUseTranslatingAnimationBehavior; // ivar: _shouldUseTranslatingAnimationBehavior
@property (readonly, nonatomic) UIView *sourceContainerView;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBHViewControllerTransition *transition; // ivar: _transition


-(BOOL)_dismissLibraryIfNecessaryForTranslation:(CGFloat)arg0 velocity:(CGFloat)arg1 ;
-(BOOL)_isPanGestureQuantityTowardDismissalDirection:(CGFloat)arg0 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)acquireOrderPresentationSourceContainerViewBeforeLibraryViewAssertionForReason:(id)arg0 ;
-(id)acquireUseSnapshotAsBackgroundViewAssertionForReason:(id)arg0 ;
-(id)animatorForTransition:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithContainerViewController:(id)arg0 libraryViewController:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_fireDismissCompletionsWithResult:(BOOL)arg0 ;
-(void)_firePresentCompletionWithResult:(BOOL)arg0 ;
-(void)_handlePanGestureRecognizerUpdated:(id)arg0 ;
-(void)_updateBackgroundViewSnapshotted;
-(void)_updateLibraryTranslation:(CGFloat)arg0 withVelocity:(CGFloat)arg1 animated:(BOOL)arg2 ;
-(void)dismissLibraryWithAnimation:(BOOL)arg0 completion:(id)arg1 ;
-(void)dismissLibraryWithTransition:(NSUInteger)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)dismissLibraryWithTransition:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)noteWillAnimateToEndpoint:(NSInteger)arg0 withAnimationDuration:(CGFloat)arg1 ;
-(void)prepareTransition:(id)arg0 ;
-(void)presentLibraryWithAnimation:(BOOL)arg0 completion:(id)arg1 ;
-(void)toggleLibraryPresentedInForegroundWithAnimation:(BOOL)arg0 completion:(id)arg1 ;
-(void)transitionDidProgressToEndState:(id)arg0 ;
-(void)transitionDidReturnToBeginningState:(id)arg0 ;
-(void)transitionWillProgressToEndState:(id)arg0 ;
-(void)transitionWillReturnToBeginningState:(id)arg0 ;


@end


#endif