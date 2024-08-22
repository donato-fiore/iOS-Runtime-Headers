// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKTIMEDEVENTSTOREPURGER_H
#define EKTIMEDEVENTSTOREPURGER_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "EKEventStore.h"

@interface EKTimedEventStorePurger : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (copy, nonatomic) id *changedBlock;
@property (copy, nonatomic) id *creationBlock;
@property (nonatomic) BOOL ignoreLowLevelDatabaseChangedNotifications; // ivar: _ignoreLowLevelDatabaseChangedNotifications
@property (copy, nonatomic) id *internalChangedBlock; // ivar: _internalChangedBlock
@property (copy, nonatomic) id *internalCreationBlock; // ivar: _internalCreationBlock
@property (nonatomic) BOOL internalPurgingAllowed; // ivar: _internalPurgingAllowed
@property (retain, nonatomic) EKEventStore *internalStore; // ivar: _internalStore
@property (nonatomic) CGFloat internalTimeout; // ivar: _internalTimeout
@property (nonatomic) BOOL purgingAllowed;
@property (nonatomic) CGFloat timeout;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)acquireCachedEventStoreOrCreate:(BOOL)arg0 ;
-(id)init;
-(void)_addPersistentNotificationObservers;
-(void)_databaseChangedExternally;
-(void)_eventStoreChangedNotification:(id)arg0 ;
-(void)_fireChangedBlock;
-(void)_removePersistentNotificationObservers;
-(void)_removeTransientEventStoreChangeObserver;
-(void)_resetIdleTimer;
-(void)_uninstallTimer;
-(void)dealloc;


@end


#endif