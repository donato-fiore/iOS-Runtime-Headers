// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPSLEEPSTORESERVER_H
#define HDSPSLEEPSTORESERVER_H

@class HKSPXPCConnectionListener, NSString, HKSPPersistentSyncAnchorContainer;
@protocol HKSPSleepServer, HDSPSleepScheduleStateObserver, HDSPSleepScheduleModelObserver, HDSPSleepEventHandler, HDSPSleepModeObserver, HDSPProcessStateManagerDelegate, HKSPXPCConnectionListenerDelegate, HDSPDiagnosticsProvider, HDSPEnvironmentAware;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"
#import "HDSPProcessStateManager.h"

@interface HDSPSleepStoreServer : NSObject <HKSPSleepServer, HDSPSleepScheduleStateObserver, HDSPSleepScheduleModelObserver, HDSPSleepEventHandler, HDSPSleepModeObserver, HDSPProcessStateManagerDelegate, HKSPXPCConnectionListenerDelegate, HDSPDiagnosticsProvider, HDSPEnvironmentAware>



@property (readonly, nonatomic) HKSPXPCConnectionListener *connectionListener; // ivar: _connectionListener
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HDSPProcessStateManager *processStateManager; // ivar: _processStateManager
@property (readonly) Class superclass;
@property (retain, nonatomic) HKSPPersistentSyncAnchorContainer *syncAnchorContainer; // ivar: _syncAnchorContainer


-(id)_checkForSuspendedBlock:(SEL)arg0 ;
-(id)diagnosticDescription;
-(id)diagnosticInfo;
-(id)eventIdentifiers;
-(id)initWithEnvironment:(id)arg0 ;
// -(id)initWithEnvironment:(id)arg0 connectionListenerProvider:(id)arg1 processStateManager:(unk)arg2  ;
-(void)_notifyClient:(id)arg0 forMissedMessagesWithSyncAnchorContainer:(id)arg1 ;
-(void)_performWhenClientIsReady:(id)arg0 block:(id)arg1 ;
-(void)_performWhenCurrentClientIsReady:(id)arg0 ;
-(void)_performWhenEnvironmentIsReady:(id)arg0 ;
// -(void)_performWhenEnvironmentIsReady:(id)arg0 withContext:(unk)arg1  ;
-(void)checkInWithSyncAnchorContainer:(id)arg0 completion:(id)arg1 ;
-(void)clearWidgetOverrideWithCompletion:(id)arg0 ;
-(void)confirmAwakeWithCompletion:(id)arg0 ;
-(void)connectWithCompletion:(id)arg0 ;
-(void)connectionListenerDidAddClient:(id)arg0 ;
-(void)connectionListenerDidRemoveClient:(id)arg0 ;
-(void)createSleepFocusModeWithCompletion:(id)arg0 ;
-(void)deleteSleepFocusModeWithCompletion:(id)arg0 ;
-(void)dismissGoodMorningWithCompletion:(id)arg0 ;
-(void)dismissSleepLockWithCompletion:(id)arg0 ;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)environmentWillBecomeReady:(id)arg0 ;
-(void)environmentWillInvalidate:(id)arg0 ;
-(void)getSleepEventRecordWithCompletion:(id)arg0 ;
-(void)getSleepModeWithCompletion:(id)arg0 ;
-(void)getSleepScheduleStateWithCompletion:(id)arg0 ;
-(void)getSleepScheduleWithCompletion:(id)arg0 ;
-(void)getSleepSettingsWithCompletion:(id)arg0 ;
-(void)getSleepWidgetStateWithCompletion:(id)arg0 ;
-(void)processDidBecomeSuspended:(int)arg0 ;
-(void)processNoLongerSuspended:(int)arg0 ;
-(void)publishNotificationWithIdentifier:(id)arg0 userInfo:(id)arg1 completion:(id)arg2 ;
-(void)publishWakeUpResultsNotificationWithCompletion:(id)arg0 ;
-(void)saveSleepEventRecord:(id)arg0 completion:(id)arg1 ;
-(void)saveSleepSchedule:(id)arg0 completion:(id)arg1 ;
-(void)saveSleepSettings:(id)arg0 completion:(id)arg1 ;
-(void)setLockScreenOverrideState:(NSInteger)arg0 userInfo:(id)arg1 completion:(id)arg2 ;
-(void)setSleepMode:(NSInteger)arg0 reason:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)setWidgetOverrideState:(NSInteger)arg0 completion:(id)arg1 ;
-(void)sleepAlarmWasDismissedOnDate:(id)arg0 source:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)sleepAlarmWasModifiedFromSource:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)sleepAlarmWasSnoozedUntilDate:(id)arg0 source:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)sleepEventIsDue:(id)arg0 ;
-(void)sleepModeDidChange:(NSInteger)arg0 previousMode:(NSInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)sleepScheduleModelManager:(id)arg0 didUpdateSleepEventRecord:(id)arg1 ;
-(void)sleepScheduleModelManager:(id)arg0 didUpdateSleepSchedule:(id)arg1 ;
-(void)sleepScheduleModelManager:(id)arg0 didUpdateSleepSettings:(id)arg1 ;
-(void)sleepScheduleStateDidChange:(NSUInteger)arg0 previousState:(NSUInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)startListening;


@end


#endif