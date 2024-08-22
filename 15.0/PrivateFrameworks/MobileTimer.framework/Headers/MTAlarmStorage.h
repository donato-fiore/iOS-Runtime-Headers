// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTALARMSTORAGE_H
#define MTALARMSTORAGE_H

@class NSArray, NSString, NSDate, NSMutableArray;
@protocol MTAlarmScheduleDelegate, MTAlarmStorage, MTPersistence, NAScheduler;

#import <Foundation/Foundation.h>

#import "MTAlarmMigrator.h"
#import "MTAlarm.h"
#import "MTObserverStore.h"
#import "MTAlarmScheduler.h"

@interface MTAlarmStorage : NSObject <MTAlarmScheduleDelegate, MTAlarmStorage>



@property (readonly, nonatomic) NSArray *alarms;
@property (readonly, nonatomic) NSArray *allAlarms;
@property (readonly, copy, nonatomic) id *currentDateProvider; // ivar: _currentDateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastModifiedDate; // ivar: _lastModifiedDate
@property (retain, nonatomic) MTAlarmMigrator *migrator; // ivar: _migrator
@property (readonly, nonatomic) MTAlarm *nextAlarm;
@property (retain, nonatomic) MTObserverStore *observers; // ivar: _observers
@property (retain, nonatomic) NSMutableArray *orderedAlarms; // ivar: _orderedAlarms
@property (retain, nonatomic) NSObject<MTPersistence> *persistence; // ivar: _persistence
@property (weak, nonatomic) MTAlarmScheduler *scheduler; // ivar: _scheduler
@property (retain, nonatomic) NSObject<NAScheduler> *serializer; // ivar: _serializer
@property (readonly, nonatomic) MTAlarm *sleepAlarm;
@property (retain, nonatomic) NSMutableArray *sleepAlarms; // ivar: _sleepAlarms
@property (readonly) Class superclass;


+(id)_diagnosticDictionaryForAlarm:(id)arg0 ;
-(BOOL)_queue_hasMatchingAlarm:(id)arg0 ;
-(BOOL)handlesNotification:(id)arg0 ofType:(NSInteger)arg1 ;
-(id)_applyNecessaryChangesFromExistingAlarm:(id)arg0 updatedAlarm:(id)arg1 ;
-(id)_cleanUpForInternalBuild:(id)arg0 ;
-(id)_cleanUpSleepAlarmRepeat:(id)arg0 ;
-(id)_cleanUpSnoozeFireDate:(id)arg0 ;
-(id)_convertSleepAlarmToRegular:(id)arg0 ;
-(id)_diagnosticDictionaryForAlarms:(id)arg0 ;
-(id)_queuePersistAlarm:(id)arg0 replacingAlarm:(id)arg1 ;
-(id)_queue_alarmMatchingAlarm:(id)arg0 ;
-(id)_queue_alarmMatchingAlarmIdentifier:(id)arg0 ;
-(id)_queue_allSleepAlarms;
// -(id)_queue_updateAlarm:(id)arg0 withCompletion:(id)arg1 source:(unk)arg2  ;
-(id)_queue_updateSleepAlarmsFromExistingAlarms:(id)arg0 ;
-(id)activeSleepAlarm;
-(id)gatherDiagnostics;
-(id)init;
-(id)initWithPersistence:(id)arg0 ;
-(id)initWithPersistence:(id)arg0 migrator:(id)arg1 serializer:(id)arg2 callbackScheduler:(id)arg3 currentDateProvider:(id)arg4 ;
-(id)transferMetadataForSleepAlarm:(id)arg0 fromPrevious:(id)arg1 ;
-(void)_loadAlarmsWithCompletion:(id)arg0 ;
-(void)_notifyObserversForAlarmAdd:(id)arg0 source:(id)arg1 ;
-(void)_notifyObserversForAlarmChange:(id)arg0 source:(id)arg1 ;
-(void)_notifyObserversForAlarmDismiss:(id)arg0 dismissAction:(NSUInteger)arg1 source:(id)arg2 ;
-(void)_notifyObserversForAlarmFire:(id)arg0 triggerType:(NSUInteger)arg1 source:(id)arg2 ;
-(void)_notifyObserversForAlarmRemoval:(id)arg0 source:(id)arg1 ;
-(void)_notifyObserversForAlarmSnooze:(id)arg0 snoozeAction:(NSUInteger)arg1 source:(id)arg2 ;
-(void)_notifyObserversForNextAlarmChange:(id)arg0 source:(id)arg1 ;
-(void)_notifyObserversWithBlock:(id)arg0 ;
// -(void)_queue_actuallyRemoveAlarm:(id)arg0 withCompletion:(id)arg1 source:(unk)arg2  ;
// -(void)_queue_addAlarm:(id)arg0 withCompletion:(id)arg1 source:(unk)arg2  ;
// -(void)_queue_dismissAlarmWithIdentifier:(id)arg0 dismissDate:(id)arg1 dismissAction:(NSUInteger)arg2 withCompletion:(id)arg3 source:(unk)arg4  ;
-(void)_queue_dismissMutableAlarm:(id)arg0 dismissDate:(id)arg1 dismissAction:(NSUInteger)arg2 ;
-(void)_queue_persistAlarms;
// -(void)_queue_removeAlarm:(id)arg0 withCompletion:(id)arg1 source:(unk)arg2  ;
// -(void)_queue_removeAlarmWithIdentifier:(id)arg0 withCompletion:(id)arg1 source:(unk)arg2  ;
-(void)_queue_removeAllAlarmsForSource:(id)arg0 ;
// -(void)_queue_snoozeAlarmWithIdentifier:(id)arg0 snoozeDate:(id)arg1 snoozeAction:(NSUInteger)arg2 withCompletion:(id)arg3 source:(unk)arg4  ;
-(void)_queue_sortAlarms;
-(void)_queue_sortSleepAlarms;
// -(void)_queue_updateAlarmWithIdentifier:(id)arg0 changeSet:(id)arg1 withCompletion:(id)arg2 source:(unk)arg3  ;
-(void)_resetCurrentToneIdentifier;
// -(void)addAlarm:(id)arg0 withCompletion:(id)arg1 source:(unk)arg2  ;
-(void)alarmWithIdentifier:(id)arg0 withCompletion:(id)arg1 ;
-(void)dealloc;
// -(void)dismissAlarmWithIdentifier:(id)arg0 dismissAction:(NSUInteger)arg1 withCompletion:(id)arg2 source:(unk)arg3  ;
// -(void)dismissAlarmWithIdentifier:(id)arg0 dismissDate:(id)arg1 dismissAction:(NSUInteger)arg2 withCompletion:(id)arg3 source:(unk)arg4  ;
-(void)getAlarmsWithCompletion:(id)arg0 ;
-(void)handleF5Reset;
-(void)handleMigrationFinish;
-(void)handleNotification:(id)arg0 ofType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)loadAlarms;
-(void)loadAlarmsSync;
-(void)printDiagnostics;
-(void)registerObserver:(id)arg0 ;
// -(void)removeAlarm:(id)arg0 withCompletion:(id)arg1 source:(unk)arg2  ;
// -(void)removeAlarmWithIdentifier:(id)arg0 withCompletion:(id)arg1 source:(unk)arg2  ;
-(void)removeAllAlarmsForSource:(id)arg0 ;
-(void)scheduler:(id)arg0 didChangeNextAlarm:(id)arg1 ;
-(void)scheduler:(id)arg0 didFireAlarm:(id)arg1 ;
// -(void)snoozeAlarmWithIdentifier:(id)arg0 snoozeAction:(NSUInteger)arg1 withCompletion:(id)arg2 source:(unk)arg3  ;
// -(void)snoozeAlarmWithIdentifier:(id)arg0 snoozeDate:(id)arg1 snoozeAction:(NSUInteger)arg2 withCompletion:(id)arg3 source:(unk)arg4  ;
-(void)timeListener:(id)arg0 didDetectSignificantTimeChangeWithCompletionBlock:(id)arg1 ;
// -(void)updateAlarm:(id)arg0 withCompletion:(id)arg1 source:(unk)arg2  ;
// -(void)updateAlarmWithIdentifier:(id)arg0 changeSet:(id)arg1 withCompletion:(id)arg2 source:(unk)arg3  ;
-(void)updateSleepAlarms:(id)arg0 source:(id)arg1 ;
// -(void)updateSleepAlarmsWithBlock:(id)arg0 source:(unk)arg1  ;


@end


#endif