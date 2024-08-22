// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EKNOTIFICATIONMONITOR_H
#define _EKNOTIFICATIONMONITOR_H

@class PCPersistentTimer, NSDate, NSTimer, NSMutableArray, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "EKEventStore.h"
#import "EKTimedEventStorePurger.h"

@interface _EKNotificationMonitor : NSObject {
    id *_eventStoreGetter;
    BOOL _running;
    PCPersistentTimer *_timer;
    NSDate *_nextFireTime;
    NSTimer *_syncTimer;
    BOOL _pendingChanges;
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _lastChangedTimestamp;
    BOOL _changedIDsValid;
    NSMutableArray *_changedIDs;
    int _ignoreSyncTimer;
    BOOL _initialCheck;
    BOOL _shouldInstallPersistentTimer;
    BOOL _useSyncIdleTimer;
    BOOL _registerForDarwinNotifications;
    BOOL _filteredByShowsNotificationsFlag;
    BOOL _computeChangedNotificationSet;
    BOOL _automaticallyFaultNotifications;
    BOOL _lastExpirationTimerFireDateWasInThePast;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackNotificationQueue; // ivar: _callbackNotificationQueue
@property (readonly, nonatomic) EKEventStore *eventStore; // ivar: _eventStore
@property (readonly, nonatomic) EKTimedEventStorePurger *eventStorePurger; // ivar: _eventStorePurger
@property (readonly, nonatomic) BOOL isMonitoringOnlyNotificationCount; // ivar: _isMonitoringOnlyNotificationCount
@property (readonly, nonatomic) NSUInteger notificationCount; // ivar: _notificationCount
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // ivar: _notificationQueue
@property (readonly, nonatomic) NSArray *notificationReferences; // ivar: _notificationReferences


+(id)blacklistedNotificationQueue;
+(id)blacklistedRowIDs;
+(id)logHandle;
+(id)requestedDarwinNotifications;
+(void)addBlacklistedNotificationObjectID:(id)arg0 ;
-(id)_fetchEventNotificationReferencesFromEventStore:(id)arg0 earliestExpiringNotification:(*id)arg1 ;
-(id)_initWithOptions:(NSInteger)arg0 eventStore:(id)arg1 eventStoreGetter:(id)arg2 ;
-(id)effectiveCallbackQueue;
-(id)init;
-(id)initWithOptions:(NSInteger)arg0 ;
-(id)initWithOptions:(NSInteger)arg0 eventStore:(id)arg1 ;
-(id)initWithOptions:(NSInteger)arg0 eventStoreGetter:(id)arg1 ;
-(void)_addRemovedOrAddedObjectIDsTo:(id)arg0 oldNotifications:(id)arg1 newNotifications:(id)arg2 ;
-(void)_alertPrefChanged;
-(void)_databaseChanged;
-(void)_eventStoreChangedNotification:(id)arg0 ;
-(void)_killSyncTimer:(id)arg0 ;
-(void)_killTimer;
-(void)_resetSyncTimer;
-(void)_syncDidEnd:(id)arg0 ;
-(void)_syncDidStart;
-(void)_syncTimerFired:(id)arg0 ;
-(void)_timerFired;
-(void)_updateTimerFireDate:(id)arg0 ;
-(void)adjust;
-(void)attemptReload;
-(void)attemptReloadSynchronously:(BOOL)arg0 ;
-(void)dealloc;
-(void)handleDarwinNotification:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)trackChangesInEventStore;


@end


#endif