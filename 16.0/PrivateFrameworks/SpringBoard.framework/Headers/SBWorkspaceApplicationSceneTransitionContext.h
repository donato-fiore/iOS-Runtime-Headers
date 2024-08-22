// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBWORKSPACEAPPLICATIONSCENETRANSITIONCONTEXT_H
#define SBWORKSPACEAPPLICATIONSCENETRANSITIONCONTEXT_H

@class NSMutableDictionary, NSMapTable, BKSAnimationFenceHandle, NSSet, NSString, FBSDisplayIdentity, NSArray, NSDictionary;
@protocol SBDisplayLayoutContext, SBWorkspaceApplicationSceneTransitionContextDelegate;


#import "SBWorkspaceTransitionContext.h"
#import "SBLayoutState.h"
#import "SBWorkspaceEntity.h"
#import "SBMainWorkspaceTransitionRequest.h"

@interface SBWorkspaceApplicationSceneTransitionContext : SBWorkspaceTransitionContext <SBDisplayLayoutContext>

 {
    BOOL _sentActivationResult;
    SBLayoutState *_layoutState;
    SBLayoutState *_previousLayoutState;
    NSMutableDictionary *_requestedWorkspaceEntityForLayoutRoleMutableDictionary;
    NSMutableDictionary *_requestedEntityIdentifierToLayoutAttributes;
    NSMapTable *_entityToRemovalContext;
}


@property (nonatomic, setter=_setAlreadyPopulatedRequestedWorkspaceEntities:) BOOL _alreadyPopulatedRequestedWorkspaceEntities; // ivar: __alreadyPopulatedRequestedWorkspaceEntities
@property (retain, nonatomic) SBWorkspaceEntity *activatingEntity;
@property (nonatomic) BOOL alwaysRunsWatchdog; // ivar: _alwaysRunsWatchdog
@property (retain, nonatomic) BKSAnimationFenceHandle *animationFence; // ivar: _animationFence
@property (readonly, copy, nonatomic) NSSet *applicationSceneEntities;
@property (nonatomic, getter=isBackground) BOOL background; // ivar: _background
@property (retain, nonatomic) SBWorkspaceEntity *deactivatingEntity; // ivar: _deactivatingEntity
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBWorkspaceApplicationSceneTransitionContextDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disablesAutoPIP; // ivar: _disablesAutoPIP
@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (copy, nonatomic) NSArray *entitiesWithRemovalContexts; // ivar: _entitiesWithRemovalContexts
@property (nonatomic) BOOL fencesAnimations; // ivar: _fencesAnimations
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInLiveResize) BOOL inLiveResize; // ivar: _inLiveResize
@property (nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation
@property (readonly, nonatomic) SBLayoutState *layoutState;
@property (nonatomic) NSInteger preferredInterfaceOrientation; // ivar: _preferredInterfaceOrientation
@property (nonatomic) BOOL prefersCrossfadeTransition; // ivar: _prefersCrossfadeTransition
@property (nonatomic) BOOL prefersTouchCancellationDisabled; // ivar: _prefersTouchCancellationDisabled
@property (readonly, copy, nonatomic) NSSet *previousApplicationSceneEntities;
@property (readonly, nonatomic) SBLayoutState *previousLayoutState;
@property (readonly, weak, nonatomic) SBMainWorkspaceTransitionRequest *request;
@property (retain, nonatomic, setter=_setRequestedActivatingWorkspaceEntity:) SBWorkspaceEntity *requestedActivatingWorkspaceEntity;
@property (copy, nonatomic) NSString *requestedAppExposeBundleID; // ivar: _requestedAppExposeBundleID
@property (nonatomic) NSInteger requestedCenterConfiguration; // ivar: _requestedCenterConfiguration
@property (nonatomic) NSInteger requestedCenterEntityModal; // ivar: _requestedCenterEntityModal
@property (copy, nonatomic) NSDictionary *requestedEntityIdentifierToLayoutAttributes;
@property (nonatomic) NSInteger requestedFloatingConfiguration; // ivar: _requestedFloatingConfiguration
@property (nonatomic) NSInteger requestedFloatingSwitcherVisible; // ivar: _requestedFloatingSwitcherVisible
@property (nonatomic) NSInteger requestedPeekConfiguration; // ivar: _requestedPeekConfiguration
@property (nonatomic) NSInteger requestedSpaceConfiguration; // ivar: _requestedSpaceConfiguration
@property (nonatomic) NSInteger requestedUnlockedEnvironmentMode; // ivar: _requestedUnlockedEnvironmentMode
@property (nonatomic) NSInteger requestedWindowPickerRole; // ivar: _requestedWindowPickerRole
@property (readonly, nonatomic) SBWorkspaceEntity *resolvedActivatingWorkspaceEntity;
@property (copy, nonatomic) id *resultBlock; // ivar: _resultBlock
@property (nonatomic, getter=retainsSiri) BOOL retainsSiri; // ivar: _retainsSiri
@property (nonatomic, getter=isSceneless) BOOL sceneless; // ivar: _sceneless
@property (readonly) Class superclass;
@property (nonatomic, getter=isTransitioningToLessRecentSpace) NSInteger transitioningToLessRecentSpace; // ivar: _transitioningToLessRecentSpace
@property (nonatomic) BOOL waitsForSceneUpdates; // ivar: _waitsForSceneUpdates
@property (readonly, nonatomic) CGFloat watchdogScaleFactor;


-(BOOL)needsToSendActivationResult;
-(NSInteger)_lockedInterfaceOrientation;
-(id)_displayConfiguration;
-(id)appClipPlaceholderEntities;
-(id)appClipPlaceholderEntityForBundleID:(id)arg0 ;
-(id)applicationSceneEntityForBundleID:(id)arg0 ;
-(id)applicationSceneEntityForLayoutRole:(NSInteger)arg0 ;
-(id)compactDescriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)entityForLayoutRole:(NSInteger)arg0 ;
-(id)init;
-(id)previousAppClipPlaceholderEntities;
-(id)previousAppClipPlaceholderEntityForBundleID:(id)arg0 ;
-(id)previousApplicationSceneEntityForBundleID:(id)arg0 ;
-(id)previousApplicationSceneEntityForLayoutRole:(NSInteger)arg0 ;
-(id)previousEntityForLayoutRole:(NSInteger)arg0 ;
-(id)removalContextForEntity:(id)arg0 ;
-(id)requestedLayoutAttributesForEntity:(id)arg0 ;
-(id)requestedWorkspaceEntityForLayoutRole:(NSInteger)arg0 ;
-(id)succinctDescriptionBuilder;
-(struct CGRect )frameForApplicationSceneEntity:(id)arg0 ;
-(void)dealloc;
-(void)finalize;
-(void)sendActivationResultError:(id)arg0 ;
-(void)setEntities:(id)arg0 startingAtLayoutRole:(NSInteger)arg1 withPolicy:(NSInteger)arg2 centerEntity:(id)arg3 floatingEntity:(id)arg4 ;
-(void)setEntities:(id)arg0 withPolicy:(NSInteger)arg1 centerEntity:(id)arg2 floatingEntity:(id)arg3 ;
-(void)setEntity:(id)arg0 forLayoutRole:(NSInteger)arg1 ;
-(void)setPreviousEntity:(id)arg0 forLayoutRole:(NSInteger)arg1 ;
-(void)setRemovalContext:(id)arg0 forEntity:(id)arg1 ;


@end


#endif