// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COMESHALARMADDON_H
#define COMESHALARMADDON_H

@class MTAlarmManager, NSArray, NSDictionary;
@protocol COMeshAlarmAddOnDelegate;


#import "COMeshAddOn.h"
#import "COHomeHubAdapter.h"
#import "COHomeKitAdapter.h"
#import "COAlarmReadRequest.h"

@interface COMeshAlarmAddOn : COMeshAddOn {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) MTAlarmManager *alarmManager; // ivar: _alarmManager
@property (weak, nonatomic) NSObject<COMeshAlarmAddOnDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSArray *deletes; // ivar: _deletes
@property (readonly, nonatomic) COHomeHubAdapter *homehub; // ivar: _homehub
@property (readonly, nonatomic) COHomeKitAdapter *homekit; // ivar: _homekit
@property (retain, nonatomic) COAlarmReadRequest *mergeRequest; // ivar: _mergeRequest
@property (retain, nonatomic) NSDictionary *mergeResponses; // ivar: _mergeResponses
@property (copy, nonatomic) NSArray *mergingNodes; // ivar: _mergingNodes
@property (readonly, nonatomic) MTAlarmManager *observedAlarmManager; // ivar: _observedAlarmManager
@property (readonly, nonatomic) BOOL performsLocalActions;
@property (copy, nonatomic) NSArray *queuedCommands; // ivar: _queuedCommands
@property (copy, nonatomic) id *recorder; // ivar: _recorder


-(BOOL)_isAlarm:(id)arg0 targetingAccessory:(id)arg1 ;
-(BOOL)_isAlarm:(id)arg0 targetingAccessoryIdentifiers:(id)arg1 ;
-(id)_alarmsForAccessoryIdentifier:(id)arg0 allowLocalStorage:(BOOL)arg1 usingLeader:(BOOL)arg2 ;
-(id)_commandsForReconciling:(id)arg0 toTruth:(id)arg1 forNode:(id)arg2 ;
-(id)_currentAccessoryForConnection:(id)arg0 ;
-(id)_filteredAlarmsList:(id)arg0 forAccessory:(id)arg1 ;
-(id)_sendRequest:(id)arg0 ;
-(id)addAlarm:(id)arg0 ;
-(id)alarms;
-(id)alarmsForAccessory:(id)arg0 ;
-(id)dismissAlarmWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithAlarmManager:(id)arg0 ;
-(id)initWithAlarmManager:(id)arg0 homekitAdapter:(id)arg1 hubAdapter:(id)arg2 ;
-(id)removeAlarm:(id)arg0 ;
-(id)snoozeAlarmWithIdentifier:(id)arg0 ;
-(id)updateAlarm:(id)arg0 ;
-(void)_abandonMerge;
-(void)_accessorySettingValueUpdated:(id)arg0 ;
-(void)_addAlarmDeleteEvent:(id)arg0 ;
// -(void)_addCompletionsToFuture:(id)arg0 withXPCCallback:(id)arg1 transactionDescription:(unk)arg2  ;
-(void)_alarmManagerAlarmFired:(id)arg0 ;
-(void)_alarmManagerAlarmsAdded:(id)arg0 ;
-(void)_alarmManagerAlarmsChanged:(id)arg0 ;
-(void)_alarmManagerAlarmsRemoved:(id)arg0 ;
-(void)_alarmManagerAlarmsUpdated:(id)arg0 ;
-(void)_alarmManagerFiringAlarmChanged:(id)arg0 ;
-(void)_alarmManagerFiringAlarmDismissed:(id)arg0 ;
-(void)_alarmManagerStateReset:(id)arg0 ;
-(void)_concludeMerge:(id)arg0 usingLocalAlarms:(id)arg1 ;
-(void)_continueMerge:(id)arg0 withResponse:(id)arg1 fromNode:(id)arg2 ;
-(void)_finishMerge;
-(void)_primeMerge:(id)arg0 withNodes:(id)arg1 ;
-(void)_processQueuedCommands;
-(void)_replicateToMobileTimerFromHomeKit;
-(void)_significantHomeChange:(id)arg0 ;
-(void)_startMerge;
-(void)_withLock:(id)arg0 ;
-(void)addAlarm:(id)arg0 forAccessoryUniqueIdentifier:(id)arg1 categoryType:(id)arg2 fromConnection:(id)arg3 cluster:(id)arg4 withCallback:(id)arg5 ;
-(void)alarmsforAccessoryUniqueIdentifier:(id)arg0 categoryType:(id)arg1 fromConnection:(id)arg2 cluster:(id)arg3 withCallback:(id)arg4 ;
-(void)canDispatchForAccessoryUniqueIdentifier:(id)arg0 categoryType:(id)arg1 asInstance:(id)arg2 cluster:(id)arg3 reply:(id)arg4 ;
-(void)didAddToMeshController:(id)arg0 ;
-(void)didChangeNodesForMeshController:(id)arg0 ;
-(void)didStopMeshController:(id)arg0 ;
-(void)dismissAlarmWithIdentifier:(id)arg0 cluster:(id)arg1 withCallback:(id)arg2 ;
-(void)handleAlarmCreateRequest:(id)arg0 callback:(id)arg1 ;
-(void)handleAlarmDeleteRequest:(id)arg0 callback:(id)arg1 ;
-(void)handleAlarmDismissRequest:(id)arg0 callback:(id)arg1 ;
-(void)handleAlarmFiredNotification:(id)arg0 ;
-(void)handleAlarmFiringAlarmDismissedNotification:(id)arg0 ;
-(void)handleAlarmManagerStateResetNotification:(id)arg0 ;
-(void)handleAlarmReadRequest:(id)arg0 callback:(id)arg1 ;
-(void)handleAlarmSnoozeNotification:(id)arg0 ;
-(void)handleAlarmSnoozeRequest:(id)arg0 callback:(id)arg1 ;
-(void)handleAlarmUpdateRequest:(id)arg0 callback:(id)arg1 ;
-(void)handleAlarmsAddedNotification:(id)arg0 ;
-(void)handleAlarmsChangedNotification:(id)arg0 ;
-(void)handleAlarmsRemovedNotification:(id)arg0 ;
-(void)handleAlarmsUpdatedNotification:(id)arg0 ;
-(void)meshController:(id)arg0 didTransitionToState:(NSUInteger)arg1 ;
-(void)removeAlarm:(id)arg0 forAccessoryUniqueIdentifier:(id)arg1 categoryType:(id)arg2 fromConnection:(id)arg3 cluster:(id)arg4 withCallback:(id)arg5 ;
-(void)snoozeAlarmWithIdentifier:(id)arg0 cluster:(id)arg1 withCallback:(id)arg2 ;
-(void)updateAlarm:(id)arg0 forAccessoryUniqueIdentifier:(id)arg1 categoryType:(id)arg2 fromConnection:(id)arg3 cluster:(id)arg4 withCallback:(id)arg5 ;
-(void)willRemoveFromMeshController:(id)arg0 ;
-(void)willStartMeshController:(id)arg0 ;


@end


#endif