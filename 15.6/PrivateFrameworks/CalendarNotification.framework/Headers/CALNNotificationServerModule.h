// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNNOTIFICATIONSERVERMODULE_H
#define CALNNOTIFICATIONSERVERMODULE_H

@class EKEphemeralCacheEventStoreProvider, EKEventStore, NSString, NSArray;
@protocol CADModule, CALNNotificationIconProvider><CALNCalendarIconIdentifierProvider><CalIconProvider;

#import <Foundation/Foundation.h>

#import "CALNCalendarAppBadgeUpdater.h"
#import "CALNNotificationServer.h"
#import "CALNNotificationStorageWrapper.h"
#import "CALNNotificationIconCache.h"
#import "CALNInboxNotificationMonitor.h"
#import "CALNNotificationSourceRefresher.h"
#import "CALNTriggeredEventNotificationSource.h"

@interface CALNNotificationServerModule : NSObject <CADModule>

 {
    EKEphemeralCacheEventStoreProvider *_eventStoreProvider;
    EKEventStore *_lastCreatedEventStore;
}


@property (readonly, nonatomic) CALNCalendarAppBadgeUpdater *calendarAppBadgeUpdater; // ivar: _calendarAppBadgeUpdater
@property (readonly, nonatomic) CALNNotificationServer *calendarNotificationServer; // ivar: _calendarNotificationServer
@property (readonly, nonatomic) CALNNotificationStorageWrapper *calendarStorageWrapper; // ivar: _calendarStorageWrapper
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CALNNotificationIconCache *iconCache; // ivar: _iconCache
@property (readonly, nonatomic) NSObject<CALNNotificationIconProvider><CALNCalendarIconIdentifierProvider><CalIconProvider> *iconProvider; // ivar: _iconProvider
@property (readonly, nonatomic) CALNInboxNotificationMonitor *inboxNotificationMonitor; // ivar: _inboxNotificationMonitor
@property (readonly, nonatomic) NSArray *modules; // ivar: _modules
@property (readonly, nonatomic) CALNNotificationSourceRefresher *notificationSourceRefresher; // ivar: _notificationSourceRefresher
@property (readonly) Class superclass;
@property (readonly, nonatomic) CALNTriggeredEventNotificationSource *triggeredEventNotificationSource; // ivar: _triggeredEventNotificationSource


+(id)_createNotificationStorageAtPath:(id)arg0 protected:(BOOL)arg1 ;
+(id)_createTimeToLeaveRefreshStorageAtPath:(id)arg0 ;
+(id)_createTriggeredEventNotificationDataStorageAtPath:(id)arg0 protected:(BOOL)arg1 ;
+(id)_filesToMigrate;
+(id)_notificationStoragePathWithName:(id)arg0 ;
+(id)_protectedCalendarNotificationStorage;
+(id)_protectedTriggeredEventNotificationDataStorage;
+(id)_timeToLeaveRefreshStorage;
+(id)_timeToLeaveRefreshStoragePathWithName:(id)arg0 ;
+(id)_triggeredEventNotificationDataStoragePathWithName:(id)arg0 ;
+(id)_unprotectedCalendarNotificationStorage;
+(id)_unprotectedTriggeredEventNotificationDataStorage;
+(void)_migrateNotificationFiles;
+(void)_migrateNotificationFilesFromDirectory:(id)arg0 toDirectory:(id)arg1 ;
+(void)_setProtectedClassForStorageAtPath:(id)arg0 ;
-(id)_createCalendarNotificationServerWithUserNotificationCenterFactory:(id)arg0 storage:(id)arg1 eventStoreProvider:(id)arg2 alarmEngineMonitor:(id)arg3 travelEngine:(id)arg4 timeToLeaveRefreshMonitor:(id)arg5 timeToLeaveRefreshStorage:(id)arg6 ;
-(id)_createNotificationServerWithUserNotificationCenter:(id)arg0 storage:(id)arg1 eventStoreProvider:(id)arg2 alarmEngineMonitor:(id)arg3 travelEngine:(id)arg4 timeToLeaveRefreshMonitor:(id)arg5 timeToLeaveRefreshStorage:(id)arg6 ;
-(id)_createNotificationSourcesWithNotificationManager:(id)arg0 eventStoreProvider:(id)arg1 inboxNotificationProvider:(id)arg2 alarmEngineMonitor:(id)arg3 travelEngine:(id)arg4 timeToLeaveRefreshMonitor:(id)arg5 timeToLeaveRefreshStorage:(id)arg6 ;
-(id)init;
-(void)_registerSettingsCaptureHandlers;
-(void)_reloadNotificationRecords:(id)arg0 forNotificationServer:(id)arg1 ;
-(void)_reloadNotificationsAfterFirstUnlock;
-(void)_reloadNotificationsFromUnprotectedStorage:(id)arg0 intoProtectedStorage:(id)arg1 withStorageWrapper:(id)arg2 forNotificationServer:(id)arg3 ;
-(void)_reloadTriggeredEventNotificationData;
-(void)_removeNotificationsFromUnprotectedStorage:(id)arg0 ;
-(void)_updateSourceClientIdentifiersIfNeeded;
-(void)activate;
-(void)deactivate;
-(void)didRegisterForAlarms;
-(void)protectedDataDidBecomeAvailable;
-(void)receivedAlarmNamed:(id)arg0 ;
-(void)receivedNotificationNamed:(id)arg0 ;
-(void)refreshEventStoreInResponseToDatabaseChangeNotification:(id)arg0 ;
-(void)updateIconsToNewVersionIfNeeded;


@end


#endif