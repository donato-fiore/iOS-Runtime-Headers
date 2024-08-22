// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBIDLETIMERGLOBALCOORDINATOR_H
#define SBIDLETIMERGLOBALCOORDINATOR_H

@class FBSDisplayLayoutMonitor, PTTestRecipe, NSString, NSMutableDictionary;
@protocol SBIdleTimerObserving, SBIdleTimerGlobalStateMonitorObserving, SBIdleTimerCoordinating, BSInvalidatable, SBIdleTimerResetSource, SBIdleTimerGlobalCoordinatorDelegate, SBIdleTimer, SBIdleTimerProviding;

#import <Foundation/Foundation.h>

#import "SBIdleTimerDescriptorFactory.h"
#import "SBIdleTimerGlobalStateMonitor.h"
#import "SBIdleTimerProxy.h"
#import "SBIdleTimerDescriptor.h"
#import "SBIdleTimerCoordinatorHelper.h"

@interface SBIdleTimerGlobalCoordinator : NSObject <SBIdleTimerObserving, SBIdleTimerGlobalStateMonitorObserving, SBIdleTimerCoordinating>

 {
    SBIdleTimerDescriptorFactory *_idleTimerDescriptorFactory;
    SBIdleTimerGlobalStateMonitor *_globalStateMonitor;
    SBIdleTimerProxy *_idleTimerProxy;
    SBIdleTimerProxy *_enabledIdleTimerProxy;
    SBIdleTimerDescriptor *_enabledIdleTimerDescriptor;
    BOOL _idleTimerSourceEnabled;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    id<BSInvalidatable> *_disableAutoDimAssertion;
    FBSDisplayLayoutMonitor *_layoutMonitor;
    BOOL _started;
    id<SBIdleTimerResetSource> *_lastResetSource;
    id<BSInvalidatable> *_stateCaptureAssertion;
    PTTestRecipe *_clientDisableAssertionsTestRecipe;
    PTTestRecipe *_internalDisableAssertionsTestRecipe;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBIdleTimerGlobalCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SBIdleTimer> *idleTimer;
@property (retain, nonatomic, getter=_idleTimerDisableAssertions, setter=_setIdleTimerDisableAssertions:) NSMutableDictionary *idleTimerDisableAssertions; // ivar: _idleTimerDisableAssertions
@property (readonly, nonatomic, getter=isIdleTimerDisabled) BOOL idleTimerDisabled;
@property (weak, nonatomic, getter=_idleTimerProvider, setter=_setIdleTimerProvider:) NSObject<SBIdleTimerProviding> *idleTimerProvider; // ivar: _idleTimerProvider
@property (readonly) Class superclass;


+(id)_sharedInstanceCreateIfNeeded:(BOOL)arg0 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(BOOL)_areIdleTimerDisableAssertionsPrevented;
-(BOOL)_hasIdleTimerDisableAssertions;
-(BOOL)_updateIdleTimerForReason:(id)arg0 ;
-(id)_activeIdleTimerProvider;
-(id)_stateCaptureDescription;
-(id)_updateIdleTimerForProvider:(id)arg0 behavior:(id)arg1 descriptor:(id)arg2 forReason:(id)arg3 ;
-(id)_updateIdleTimerForProvider:(id)arg0 behavior:(id)arg1 forReason:(id)arg2 ;
-(id)acquireIdleTimerDisableAssertionForReason:(id)arg0 ;
-(id)idleTimerProvider:(id)arg0 didProposeBehavior:(id)arg1 forReason:(id)arg2 ;
-(id)init;
-(void)_addStateCaptureHandlers;
-(void)_applyActiveIdleTimerDescriptorForReason:(id)arg0 ;
-(void)_logEffectiveLockTimeout;
-(void)_registerClientDisableAssertionsTestRecipe;
-(void)_registerInternalDisableAssertionsTestRecipe;
-(void)_registerTestRecipes;
-(void)_unregisterTestRecipes;
-(void)_updateGlobalStateDisableAssertions;
-(void)dealloc;
-(void)idleTimerDidRefresh:(id)arg0 ;
-(void)idleTimerDidResetForUserAttention:(id)arg0 ;
-(void)idleTimerGlobalStateMonitor:(id)arg0 changedForReason:(id)arg1 ;
-(void)layoutMonitor:(id)arg0 didUpdateDisplayLayout:(id)arg1 withContext:(id)arg2 ;
-(void)start;


@end


#endif