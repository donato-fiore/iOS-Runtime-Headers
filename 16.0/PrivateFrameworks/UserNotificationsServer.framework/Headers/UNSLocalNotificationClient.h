// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNSLOCALNOTIFICATIONCLIENT_H
#define UNSLOCALNOTIFICATIONCLIENT_H

@class NSString, NSMutableArray, PCPersistentTimer;
@protocol UNSLocationMonitorObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "UNSNotificationRepository.h"
#import "UNSNotificationScheduleRepository.h"
#import "UNSPendingNotificationRepository.h"
#import "UNSLocationMonitor.h"

@interface UNSLocalNotificationClient : NSObject <UNSLocationMonitorObserver>

 {
    NSString *_bundleIdentifier;
    UNSNotificationRepository *_notificationRepository;
    UNSNotificationScheduleRepository *_notificationScheduleRepository;
    UNSPendingNotificationRepository *_pendingNotificationRepository;
    NSMutableArray *_lazy_pendingNotificationsAwaitingDelivery;
    UNSLocationMonitor *_locationMonitor;
    PCPersistentTimer *_localNotificationTimer;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _monitoringLocaleAndTimeChanges;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_dateFormatter;
-(id)_lastLocalNotificationFireDate;
-(id)_pendingNotificationRecords;
-(id)_sanitizeNotificationRecords:(id)arg0 ;
-(id)initWithNotificationRepository:(id)arg0 pendingNotificationRepository:(id)arg1 notificationScheduleRepository:(id)arg2 locationMonitor:(id)arg3 bundleIdentifier:(id)arg4 queue:(id)arg5 ;
-(id)pendingNotificationRecords;
-(id)undeliveredNotificationRecords;
-(void)_fireNotification:(id)arg0 ;
-(void)_invalidateNotificationRecordTimersAndRegionMonitors;
-(void)_invalidatePendingNotificationRecordRegionMonitors;
-(void)_invalidatePendingNotificationRecordTimers;
-(void)_queue_triggerDidFireForDate:(id)arg0 ;
-(void)_queue_triggerDidFireForRegion:(id)arg0 ;
-(void)_queue_triggerDidFireForTimer:(id)arg0 ;
-(void)_setLastLocalNotificationFireDate:(id)arg0 ;
-(void)_setMonitoredRegions:(id)arg0 ;
-(void)_setPendingNotificationRecords:(id)arg0 ;
-(void)_setRequestDateForPendingNotificationRecords:(id)arg0 ;
-(void)_updateRegionMonitorsForPendingNotificationRecords:(id)arg0 ;
-(void)_updateTimersAndRegionMonitorsForPendingNotificationRecords:(id)arg0 ;
-(void)_updateTimersForPendingNotificationRecords:(id)arg0 ;
-(void)addPendingNotificationRecords:(id)arg0 ;
-(void)dealloc;
-(void)handleApplicationStateRestore;
-(void)handleLocaleChange;
-(void)handleSignificantTimeChange;
-(void)invalidate;
-(void)locationMonitor:(id)arg0 triggerDidFireForRegion:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)removeAllPendingNotificationRecords;
-(void)removePendingNotificationRecords:(id)arg0 ;
-(void)removePendingNotificationRecordsWithIdentifiers:(id)arg0 ;
-(void)setPendingNotificationRecords:(id)arg0 ;


@end


#endif