// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTTIMERSTORAGE_H
#define MTTIMERSTORAGE_H

@class NSString, NSDate, NSMutableArray, NSArray;
@protocol MTTimerSchedulerDelegate, MTAgentDiagnosticDelegate, MTTimerStorage, MTPersistence, NAScheduler;

#import <Foundation/Foundation.h>

#import "MTMetrics.h"
#import "MTTimerMigrator.h"
#import "MTTimer.h"
#import "MTObserverStore.h"
#import "MTTimerScheduler.h"

@interface MTTimerStorage : NSObject <MTTimerSchedulerDelegate, MTAgentDiagnosticDelegate, MTTimerStorage>

 {
    MTMetrics *_metrics;
}


@property (readonly, copy, nonatomic) id *currentDateProvider; // ivar: _currentDateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDate *lastModifiedDate; // ivar: _lastModifiedDate
@property (retain, nonatomic) MTTimerMigrator *migrator; // ivar: _migrator
@property (readonly, nonatomic) MTTimer *nextTimer;
@property (retain, nonatomic) MTObserverStore *observers; // ivar: _observers
@property (retain, nonatomic) NSMutableArray *orderedTimers; // ivar: _orderedTimers
@property (retain, nonatomic) NSObject<MTPersistence> *persistence; // ivar: _persistence
@property (weak, nonatomic) MTTimerScheduler *scheduler; // ivar: _scheduler
@property (retain, nonatomic) NSObject<NAScheduler> *serializer; // ivar: _serializer
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *timers;


+(id)_diagnosticDictionaryForTimer:(id)arg0 ;
-(BOOL)_queue_hasMatchingTimer:(id)arg0 ;
-(id)_applyNecessaryChangesFromOldTimer:(id)arg0 currentTimer:(id)arg1 ;
-(id)_diagnosticTimerDictionary;
-(id)_queuePersistTimer:(id)arg0 replacingTimer:(id)arg1 ;
-(id)_queue_timerMatchingTimerIdentifier:(id)arg0 ;
// -(id)_queue_updateTimer:(id)arg0 withCompletion:(id)arg1 source:(unk)arg2  ;
-(id)gatherDiagnostics;
-(id)init;
-(id)initWithPersistence:(id)arg0 ;
-(id)initWithPersistence:(id)arg0 migrator:(id)arg1 serializer:(id)arg2 callbackScheduler:(id)arg3 currentDateProvider:(id)arg4 ;
-(void)_createDefaultTimerIfNeededWithCompletion:(id)arg0 ;
-(void)_loadTimersWithCompletion:(id)arg0 ;
// -(void)_queue_addTimer:(id)arg0 withCompletion:(id)arg1 source:(unk)arg2  ;
// -(void)_queue_dismissTimerWithIdentifier:(id)arg0 withCompletion:(id)arg1 source:(unk)arg2  ;
-(void)_queue_notifyObserversForNextTimerChange:(id)arg0 source:(id)arg1 ;
-(void)_queue_notifyObserversForTimerAdd:(id)arg0 source:(id)arg1 ;
-(void)_queue_notifyObserversForTimerDismiss:(id)arg0 source:(id)arg1 ;
-(void)_queue_notifyObserversForTimerFire:(id)arg0 source:(id)arg1 ;
-(void)_queue_notifyObserversForTimerRemoval:(id)arg0 source:(id)arg1 ;
-(void)_queue_notifyObserversForTimerUpdate:(id)arg0 source:(id)arg1 ;
-(void)_queue_notifyObserversWithBlock:(id)arg0 ;
-(void)_queue_persistTimers;
-(void)_queue_removeAllTimersForSource:(id)arg0 ;
// -(void)_queue_removeTimer:(id)arg0 withCompletion:(id)arg1 source:(unk)arg2  ;
// -(void)_queue_repeatTimerWithIdentifier:(id)arg0 withCompletion:(id)arg1 source:(unk)arg2  ;
-(void)_queue_setAllTimers:(id)arg0 source:(id)arg1 ;
-(void)_queue_setAllTimers:(id)arg0 source:(id)arg1 persist:(BOOL)arg2 notify:(BOOL)arg3 ;
-(void)_queue_sortTimers;
// -(void)addTimer:(id)arg0 withCompletion:(id)arg1 source:(unk)arg2  ;
-(void)dealloc;
// -(void)dismissTimerWithIdentifier:(id)arg0 withCompletion:(id)arg1 source:(unk)arg2  ;
-(void)getTimersWithCompletion:(id)arg0 ;
-(void)handleF5Reset;
-(void)handleMigrationFinish;
-(void)loadTimers;
-(void)loadTimersSync;
-(void)printDiagnostics;
-(void)registerObserver:(id)arg0 ;
// -(void)removeTimer:(id)arg0 withCompletion:(id)arg1 source:(unk)arg2  ;
// -(void)repeatTimerWithIdentifier:(id)arg0 withCompletion:(id)arg1 source:(unk)arg2  ;
-(void)scheduler:(id)arg0 didChangeNextTimer:(id)arg1 ;
-(void)scheduler:(id)arg0 didFireTimer:(id)arg1 ;
-(void)setAllTimers:(id)arg0 source:(id)arg1 ;
// -(void)updateTimer:(id)arg0 withCompletion:(id)arg1 source:(unk)arg2  ;


@end


#endif