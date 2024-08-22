// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHBACKLIGHTFBSCENEHOSTENVIRONMENT_H
#define BLSHBACKLIGHTFBSCENEHOSTENVIRONMENT_H

@class FBScene, NSString, RBSProcessIdentity, NSHashTable, NSDate, BLSBacklightSceneVisualState;
@protocol FBSceneObserver, BLSHBacklightSceneHostEnvironment;

#import <Foundation/Foundation.h>

#import "BLSHBacklightSceneClientSettingsDiffInspector.h"
#import "BLSHAggregatedProcessAssertion.h"

@interface BLSHBacklightFBSceneHostEnvironment : NSObject <FBSceneObserver, BLSHBacklightSceneHostEnvironment>

 {
    FBScene *_fbScene;
    BLSHBacklightSceneClientSettingsDiffInspector *_lock_diffInspector;
    NSString *_nilSceneIdentifier;
    BLSHAggregatedProcessAssertion *_lock_secondsFidelityAssertion;
    BLSHAggregatedProcessAssertion *_lock_renderSessionAssertion;
    RBSProcessIdentity *_budgetProcessIdentity;
    NSHashTable *_lock_observers;
    os_unfair_lock_s _lock;
    NSUInteger _lock_renderSeed;
    unsigned int _lock_requestDateSpecifierFailureCount;
    BOOL _lock_shouldInvalidateWhenActivated;
}


@property (getter=isAlwaysOnEnabledForEnvironment) BOOL alwaysOnEnabledForEnvironment;
@property (readonly) RBSProcessIdentity *budgetProcessIdentity;
@property (readonly, getter=isClientActive) BOOL clientActive;
@property (readonly) BOOL clientHasDelegate;
@property (readonly) BOOL clientSupportsAlwaysOn;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisplayBlanked) BOOL displayBlanked;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *identifier;
@property (getter=isLiveUpdating) BOOL liveUpdating;
@property (readonly) NSDate *presentationDate;
@property (readonly) Class superclass;
@property (getter=hasUnrestrictedFramerateUpdates) BOOL unrestrictedFramerateUpdates;
@property (readonly) BLSBacklightSceneVisualState *visualState;


+(void)setAmendSceneSettingsDelegate:(id)arg0 ;
-(id)initWithFBScene:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)amendSceneSettings:(id)arg0 ;
-(void)clearPresentationDate;
-(void)clientDidRequestInvalidationForReason:(id)arg0 ;
-(void)deactivateClient;
-(void)dealloc;
-(void)invalidateContentForReason:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)requestDateSpecifiersForDateInterval:(id)arg0 previousPresentationDate:(id)arg1 shouldReset:(BOOL)arg2 completion:(id)arg3 ;
-(void)requestedFidelityForInactiveContentWithCompletion:(id)arg0 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneDidActivate:(id)arg0 ;
-(void)sceneDidInvalidate:(id)arg0 ;
-(void)updateToDateSpecifier:(id)arg0 sceneContentsUpdated:(id)arg1 ;
// -(void)updateToVisualState:(id)arg0 presentationDateSpecifier:(id)arg1 animated:(BOOL)arg2 triggerEvent:(id)arg3 touchTargetable:(BOOL)arg4 sceneContentsUpdated:(id)arg5 performBacklightRamp:(unk)arg6 animationComplete:(id)arg7  ;
-(void)willBeginRenderSession:(id)arg0 ;
-(void)willEndRenderSession:(id)arg0 ;


@end


#endif