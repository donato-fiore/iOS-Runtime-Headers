// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFLUIDSWITCHERLAYOUTCONTEXT_H
#define SBFLUIDSWITCHERLAYOUTCONTEXT_H

@class NSString, NSDate;
@protocol BSDescriptionProviding, SBMainDisplayWorkspaceAppInteractionEventSourceObserving;

#import <Foundation/Foundation.h>

#import "SBFluidSwitcherGesture.h"
#import "SBWorkspaceApplicationSceneTransitionContext.h"
#import "SBAppLayout.h"
#import "SBMainDisplayLayoutState.h"
#import "SBHomeGestureSettings.h"

@interface SBFluidSwitcherLayoutContext : NSObject <BSDescriptionProviding, SBMainDisplayWorkspaceAppInteractionEventSourceObserving>



@property (retain, nonatomic) SBFluidSwitcherGesture *activeGesture; // ivar: _activeGesture
@property (readonly, nonatomic) SBWorkspaceApplicationSceneTransitionContext *activeTransitionContext; // ivar: _activeTransitionContext
@property (retain, nonatomic) SBAppLayout *currentAppLayout; // ivar: _currentAppLayout
@property (retain, nonatomic) SBMainDisplayLayoutState *currentLayoutState; // ivar: _currentLayoutState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasUserInteractedWithActiveApplication; // ivar: _hasUserInteractedWithActiveApplication
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBHomeGestureSettings *homeGestureSettings; // ivar: _homeGestureSettings
@property (retain, nonatomic) NSDate *lastTransitionCompletionDate; // ivar: _lastTransitionCompletionDate
@property (readonly, nonatomic) SBMainDisplayLayoutState *layoutState;
@property (nonatomic) NSInteger previousInterfaceOrientation; // ivar: _previousInterfaceOrientation
@property (retain, nonatomic) SBMainDisplayLayoutState *previousLayoutState; // ivar: _previousLayoutState
@property (readonly, nonatomic) CGFloat secondsSinceLastTransitionCompletion;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger supportedOrientationsForGesture;
@property (retain, nonatomic) SBAppLayout *transitioningFromAppLayout; // ivar: _transitioningFromAppLayout
@property (readonly, nonatomic) SBMainDisplayLayoutState *transitioningFromLayoutState;
@property (retain, nonatomic) SBAppLayout *transitioningToAppLayout; // ivar: _transitioningToAppLayout
@property (readonly, nonatomic) SBMainDisplayLayoutState *transitioningToLayoutState;


-(BOOL)_shouldUpdateSwitcherModelBasedOnTimeOrUserInteraction;
-(BOOL)shouldAddAppLayoutToFront:(id)arg0 forTransitionWithContext:(id)arg1 currentAppLayouts:(id)arg2 transitionCompleted:(BOOL)arg3 ;
-(BOOL)shouldAddAppLayoutToFront:(id)arg0 whenBeginningGestureOfType:(NSInteger)arg1 layoutContext:(id)arg2 ;
-(BOOL)shouldAddAppLayoutToFront:(id)arg0 whenEndingGestureOfType:(NSInteger)arg1 layoutContext:(id)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithLayoutState:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)didEndTransitioningToLayoutStateWithContext:(id)arg0 ;
-(void)eventSource:(id)arg0 userTouchedApplication:(id)arg1 ;
-(void)willBeginTransitioningToLayoutStateWithContext:(id)arg0 ;


@end


#endif