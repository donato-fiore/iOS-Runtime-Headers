// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDREMINDMENOTIFICATIONCONTROLLER_H
#define EDREMINDMENOTIFICATIONCONTROLLER_H

@class EFLocked, NSString, NSHashTable, EFXPCAlarm;
@protocol EFLoggable, EDRemindMeNotificationControllerEventDelegate, EDMessageChangeHookResponder, OS_dispatch_queue, EDRemindMeNotificationControllerAlarmDateProvider;

#import <Foundation/Foundation.h>

#import "EDPersistenceHookRegistry.h"
#import "EDMessagePersistence.h"
#import "EDQueryCreator.h"

@interface EDRemindMeNotificationController : NSObject <EFLoggable, EDRemindMeNotificationControllerEventDelegate, EDMessageChangeHookResponder>

 {
    EFLocked *_observers;
    NSObject<OS_dispatch_queue> *_alarmQueue;
    id<EDRemindMeNotificationControllerAlarmDateProvider> *_alarmDateProvider;
    EDPersistenceHookRegistry *_hookRegistry;
    EDMessagePersistence *_messagePersistence;
    EDQueryCreator *_readLaterQueryCreator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) NSObject<EDRemindMeNotificationControllerEventDelegate> *eventDelegate; // ivar: _eventDelegate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly) Class superclass;
@property (readonly, nonatomic) EFXPCAlarm *xpcAlarm; // ivar: _xpcAlarm


+(id)localizedRemindMeNotificationTitle;
+(id)log;
-(id)_fetchMessagesToNotifyWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)addObserver:(id)arg0 ;
-(id)initWithHookRegistry:(id)arg0 messagePersistence:(id)arg1 alarmDateProvider:(id)arg2 eventDelegate:(id)arg3 alarmScheduler:(id)arg4 ;
-(id)initWithHookRegistry:(id)arg0 messagePersistence:(id)arg1 alarmScheduler:(id)arg2 ;
-(void)_alarmFired;
-(void)_notify:(id)arg0 ;
-(void)_updateAlarm;
-(void)_updateAlarmUpdatedMessages:(id)arg0 readLaterDate:(id)arg1 ;
-(void)controller:(id)arg0 scheduleAlarmForMessage:(id)arg1 date:(id)arg2 ;
-(void)performDelayedTasks;
-(void)persistenceDidChangeReadLaterDate:(id)arg0 messages:(id)arg1 changeIsRemote:(BOOL)arg2 generationWindow:(id)arg3 ;
-(void)persistenceDidDeleteMessages:(id)arg0 generationWindow:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)resetRemindMeAlarmIfNeeded;
-(void)test_tearDown;
-(void)test_waitForUpdates;


@end


#endif