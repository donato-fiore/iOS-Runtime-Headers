// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COMESHTIMERADDON_H
#define COMESHTIMERADDON_H

@class NSArray, NSDictionary, MTTimerManager;
@protocol COMeshTimerAddOnDelegate;


#import "COMeshAddOn.h"
#import "COHomeHubAdapter.h"
#import "COHomeKitAdapter.h"
#import "COTimerReadRequest.h"

@interface COMeshTimerAddOn : COMeshAddOn {
    os_unfair_lock_s _lock;
}


@property (weak, nonatomic) NSObject<COMeshTimerAddOnDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSArray *deletes; // ivar: _deletes
@property (readonly, nonatomic) COHomeHubAdapter *homehub; // ivar: _homehub
@property (readonly, nonatomic) COHomeKitAdapter *homekit; // ivar: _homekit
@property (retain, nonatomic) COTimerReadRequest *mergeRequest; // ivar: _mergeRequest
@property (retain, nonatomic) NSDictionary *mergeResponses; // ivar: _mergeResponses
@property (copy, nonatomic) NSArray *mergingNodes; // ivar: _mergingNodes
@property (readonly, nonatomic) MTTimerManager *observedTimerManager; // ivar: _observedTimerManager
@property (readonly, nonatomic) BOOL performsLocalActions;
@property (copy, nonatomic) NSArray *queuedCommands; // ivar: _queuedCommands
@property (readonly, nonatomic) MTTimerManager *timerManager; // ivar: _timerManager


-(BOOL)_isTimer:(id)arg0 targetingAccessory:(id)arg1 ;
-(BOOL)_isTimer:(id)arg0 targetingAccessoryIdentifiers:(id)arg1 ;
-(id)_commandsForReconciling:(id)arg0 toTruth:(id)arg1 forNode:(id)arg2 ;
-(id)_filteredTimersList:(id)arg0 forAccessory:(id)arg1 ;
-(id)_sendRequest:(id)arg0 ;
-(id)_timersForAccessoryIdentifier:(id)arg0 allowLocalStorage:(BOOL)arg1 ;
-(id)addTimer:(id)arg0 ;
-(id)dismissTimerWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithTimerManager:(id)arg0 ;
-(id)initWithTimerManager:(id)arg0 homekitAdapter:(id)arg1 hubAdapter:(id)arg2 ;
-(id)removeTimer:(id)arg0 ;
-(id)timers;
-(id)updateTimer:(id)arg0 ;
-(void)_abandonMerge;
// -(void)_addCompletionsToFuture:(id)arg0 withXPCCallback:(id)arg1 transactionDescription:(unk)arg2  ;
-(void)_addTimerDeleteEvent:(id)arg0 ;
-(void)_concludeMerge:(id)arg0 usingLocalTimers:(id)arg1 ;
-(void)_continueMerge:(id)arg0 withResponse:(id)arg1 fromNode:(id)arg2 ;
-(void)_finishMerge;
-(void)_primeMerge:(id)arg0 withNodes:(id)arg1 ;
-(void)_processQueuedCommands;
-(void)_startMerge;
-(void)_timerManagerStateReset:(id)arg0 ;
-(void)_timerManagerTimerFired:(id)arg0 ;
-(void)_timerManagerTimersAdded:(id)arg0 ;
-(void)_timerManagerTimersChanged:(id)arg0 ;
-(void)_timerManagerTimersRemoved:(id)arg0 ;
-(void)_timerManagerTimersUpdated:(id)arg0 ;
-(void)_withLock:(id)arg0 ;
-(void)addTimer:(id)arg0 fromConnection:(id)arg1 cluster:(id)arg2 withCallback:(id)arg3 ;
-(void)canDispatchForAccessoryUniqueIdentifier:(id)arg0 categoryType:(id)arg1 asInstance:(id)arg2 cluster:(id)arg3 reply:(id)arg4 ;
-(void)didAddToMeshController:(id)arg0 ;
-(void)didChangeNodesForMeshController:(id)arg0 ;
-(void)didStopMeshController:(id)arg0 ;
-(void)dismissTimerWithIdentifier:(id)arg0 cluster:(id)arg1 withCallback:(id)arg2 ;
-(void)handleTimerCreateRequest:(id)arg0 callback:(id)arg1 ;
-(void)handleTimerDeleteRequest:(id)arg0 callback:(id)arg1 ;
-(void)handleTimerDismissRequest:(id)arg0 callback:(id)arg1 ;
-(void)handleTimerFiredNotification:(id)arg0 ;
-(void)handleTimerFiringTimerDismissedNotification:(id)arg0 ;
-(void)handleTimerManagerStateResetNotification:(id)arg0 ;
-(void)handleTimerReadRequest:(id)arg0 callback:(id)arg1 ;
-(void)handleTimerUpdateRequest:(id)arg0 callback:(id)arg1 ;
-(void)handleTimersAddedNotification:(id)arg0 ;
-(void)handleTimersChangedNotification:(id)arg0 ;
-(void)handleTimersRemovedNotification:(id)arg0 ;
-(void)handleTimersUpdatedNotification:(id)arg0 ;
-(void)meshController:(id)arg0 didTransitionToState:(NSUInteger)arg1 ;
-(void)removeTimer:(id)arg0 cluster:(id)arg1 withCallback:(id)arg2 ;
-(void)timersforAccessoryUniqueIdentifier:(id)arg0 fromConnection:(id)arg1 cluster:(id)arg2 withCallback:(id)arg3 ;
-(void)updateTimer:(id)arg0 cluster:(id)arg1 withCallback:(id)arg2 ;
-(void)willRemoveFromMeshController:(id)arg0 ;
-(void)willStartMeshController:(id)arg0 ;


@end


#endif