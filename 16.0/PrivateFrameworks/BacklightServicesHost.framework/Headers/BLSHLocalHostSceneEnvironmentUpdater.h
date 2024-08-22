// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHLOCALHOSTSCENEENVIRONMENTUPDATER_H
#define BLSHLOCALHOSTSCENEENVIRONMENTUPDATER_H

@class NSMutableSet, BLSBacklightSceneUpdate, BLSBacklightChangeEvent, NSString;
@protocol BLSHBacklightEnvironmentStateMachineDelegate, BLSHBacklightInactiveEnvironmentSessionUpdating, BLSBacklightSceneEnvironmentUpdating, BLSHBacklightEnvironmentSessionProviding, BLSBacklightSceneEnvironment_Private, BLSHOSTimerProviding;

#import <Foundation/Foundation.h>

#import "BLSHBacklightInactiveEnvironmentSession.h"
#import "BLSHBacklightEnvironmentPresentation.h"
#import "BLSHBacklightEnvironmentStateMachine.h"

@interface BLSHLocalHostSceneEnvironmentUpdater : NSObject <BLSHBacklightEnvironmentStateMachineDelegate, BLSHBacklightInactiveEnvironmentSessionUpdating, BLSBacklightSceneEnvironmentUpdating>

 {
    os_unfair_lock_s _lock;
    id<BLSHBacklightEnvironmentSessionProviding> *_sessionProvider;
    id<BLSBacklightSceneEnvironment_Private> *_localHostEnvironment;
    id<BLSHOSTimerProviding> *_osTimerProvider;
    BLSHBacklightInactiveEnvironmentSession *_lock_inactiveEnvSession;
    BLSHBacklightEnvironmentPresentation *_lock_updatingToPresentation;
    BLSHBacklightEnvironmentStateMachine *_environmentStateMachine;
    NSMutableSet *_lock_timelinesCalculators;
    BLSBacklightSceneUpdate *_lock_sceneUpdateForPerformingEvent;
    BLSBacklightChangeEvent *_lock_localTriggerEventForPerformingEvent;
    NSUInteger _lock_nextEventID;
}


@property (readonly, nonatomic) NSInteger backlightState; // ivar: _backlightState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)ensureAlwaysOnSessionCreated;
-(id)initWithSessionProvider:(id)arg0 localHostEnvironment:(id)arg1 ;
-(id)subHostedHostEnvironments;
-(void)aggregateDesiredFidelityForBacklightState:(NSInteger)arg0 withCompletion:(id)arg1 ;
-(void)destroyInactiveEnvSession;
-(void)ensureInactiveEnvSessionCreated;
-(void)environmentStateMachine:(id)arg0 didBeginUpdateToState:(NSInteger)arg1 ;
-(void)environmentStateMachine:(id)arg0 didCompleteUpdateToState:(NSInteger)arg1 ;
-(void)environmentStateMachine:(id)arg0 didUpdateToPresentation:(id)arg1 ;
-(void)environmentStateMachine:(id)arg0 didUpdateToSpecifier:(id)arg1 ;
-(void)inactiveEnvironmentSession:(id)arg0 updateToPresentation:(id)arg1 ;
-(void)onMain_ensureInactiveEnvSessionCreated;
-(void)performBlockWithSubhostedEnvironments:(id)arg0 ;
-(void)performDesiredFidelityRequest:(id)arg0 ;
-(void)performFrameSpecifiersRequest:(id)arg0 ;
-(void)performWithSubhostedEnvironmentsFromPresentationEntries:(id)arg0 block:(id)arg1 ;
-(void)timelinesForDateInterval:(id)arg0 previousPresentationDate:(id)arg1 localHostEnvironment:(id)arg2 shouldReset:(BOOL)arg3 completion:(id)arg4 ;
-(void)updatedEnvironmentWithDelta:(struct ? )arg0 backlightSceneUpdate:(id)arg1 ;


@end


#endif