// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDECKSWITCHERVIEWCONTROLLER_H
#define SBDECKSWITCHERVIEWCONTROLLER_H

@class NSString;
@protocol SBSwitcherAppSuggestionViewControllerDelegate;


#import "SBFluidSwitcherViewController.h"
#import "SBSwitcherAppSuggestionViewController.h"

@interface SBDeckSwitcherViewController : SBFluidSwitcherViewController <SBSwitcherAppSuggestionViewControllerDelegate>



@property (retain, nonatomic) SBSwitcherAppSuggestionViewController *appSuggestionController; // ivar: _appSuggestionController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)orientationForSuggestionViewController:(id)arg0 ;
-(id)bestAppSuggestion;
-(id)initWithRootModifier:(id)arg0 liveContentOverlayCoordinator:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3 debugName:(id)arg4 ;
-(void)_setBestAppSuggestion:(id)arg0 animationCompletion:(id)arg1 ;
-(void)handleGestureDidBegin:(id)arg0 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)performTransitionWithContext:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)setBestAppSuggestion:(id)arg0 ;
-(void)suggestionViewController:(id)arg0 activatedSuggestion:(id)arg1 ;
-(void)viewWillLayoutSubviews;


@end


#endif