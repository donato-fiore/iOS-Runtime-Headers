// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDECKSWITCHERVIEWCONTROLLER_H
#define SBDECKSWITCHERVIEWCONTROLLER_H

@class NSString;
@protocol SBSwitcherAppSuggestionViewControllerDelegate;


#import "SBFluidSwitcherViewController.h"
#import "SBSwitcherAppSuggestionViewController.h"
#import "SBAppSuggestionManager.h"

@interface SBDeckSwitcherViewController : SBFluidSwitcherViewController <SBSwitcherAppSuggestionViewControllerDelegate>



@property (retain, nonatomic) SBSwitcherAppSuggestionViewController *appSuggestionController; // ivar: _appSuggestionController
@property (weak, nonatomic) SBAppSuggestionManager *appSuggestionManager; // ivar: _appSuggestionManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)orientationForSuggestionViewController:(id)arg0 ;
-(id)_assertionReason;
-(id)bestAppSuggestion;
-(id)initWithSwitcherController:(id)arg0 rootModifier:(id)arg1 liveContentOverlayCoordinator:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4 shouldObserveChamoisWindowingChanges:(BOOL)arg5 debugName:(id)arg6 ;
-(void)_setBestAppSuggestion:(id)arg0 animationCompletion:(id)arg1 ;
-(void)handleFluidSwitcherGestureManager:(id)arg0 didBeginGesture:(id)arg1 ;
-(void)invalidate;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)performTransitionWithContext:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)setBestAppSuggestion:(id)arg0 ;
-(void)suggestionViewController:(id)arg0 activatedSuggestion:(id)arg1 ;
-(void)viewWillLayoutSubviews;


@end


#endif