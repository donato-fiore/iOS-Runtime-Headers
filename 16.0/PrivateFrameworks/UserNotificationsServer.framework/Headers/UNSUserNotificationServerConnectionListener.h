// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNSUSERNOTIFICATIONSERVERCONNECTIONLISTENER_H
#define UNSUSERNOTIFICATIONSERVERCONNECTIONLISTENER_H

@class NSXPCListener, NSMutableDictionary, NSMapTable, _UNNotificationCommunicationContextService, NSString;
@protocol NSXPCListenerDelegate, UNUserNotificationServerProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "UNSApplicationLauncher.h"
#import "UNSLocalizationService.h"
#import "UNSNotificationCategoryRepository.h"
#import "UNSNotificationSchedulingService.h"
#import "UNSNotificationAuthorizationService.h"
#import "UNSNotificationSettingsService.h"
#import "UNSNotificationRepository.h"
#import "UNSNotificationTopicRepository.h"
#import "UNSUserNotificationServerRemoteNotificationConnectionListener.h"
#import "UNSRemoteNotificationServer.h"
#import "UNSAttachmentsService.h"
#import "UNSLocationMonitor.h"

@interface UNSUserNotificationServerConnectionListener : NSObject <NSXPCListenerDelegate, UNUserNotificationServerProtocol>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    NSMutableDictionary *_connectionsByBundleIdentifier;
    NSMapTable *_bundleIdentifiersByConnection;
    UNSApplicationLauncher *_applicationLauncher;
    UNSLocalizationService *_localizationService;
    UNSNotificationCategoryRepository *_categoryRepository;
    UNSNotificationSchedulingService *_notificationSchedulingService;
    UNSNotificationAuthorizationService *_notificationsAuthorizationService;
    UNSNotificationSettingsService *_notificationSettingsService;
    UNSNotificationRepository *_notificationRepository;
    UNSNotificationTopicRepository *_topicRepository;
    UNSUserNotificationServerRemoteNotificationConnectionListener *_remoteNotificationConnectionListener;
    UNSRemoteNotificationServer *_remoteNotificationService;
    UNSAttachmentsService *_attachmentsService;
    UNSLocationMonitor *_locationMonitor;
    _UNNotificationCommunicationContextService *_communicationContextService;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_currentConnection;
-(id)_queue_delegateConnectionForBundleIdentifier:(id)arg0 ;
-(id)_queue_notificationRequestsForNotificationRecords:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)_queue_notificationsForNotificationRecords:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)_queue_observerConnectionsForBundleIdentifier:(id)arg0 ;
-(id)initWithCategoryRepository:(id)arg0 notificationSchedulingService:(id)arg1 notificationAuthorizationService:(id)arg2 notificationSettingsService:(id)arg3 notificationRepository:(id)arg4 remoteNotificationConnectionListener:(id)arg5 remoteNotificationService:(id)arg6 applicationLauncher:(id)arg7 attachmentsService:(id)arg8 locationMonitor:(id)arg9 topicRepository:(id)arg10 localizationService:(id)arg11 communicationContextService:(id)arg12 ;
-(void)_queue_addConnection:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)_queue_didReceiveDeviceToken:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)_queue_removeConnection:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)_queue_removeConnectionForAllBundleIdentifiers:(id)arg0 ;
-(void)_removeConnectionForAllBundleIdentifiers:(id)arg0 ;
-(void)_saveNotificationRecord:(id)arg0 shouldRepost:(BOOL)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)_saveNotificationRequest:(id)arg0 shouldRepost:(BOOL)arg1 deliveredDate:(id)arg2 forBundleIdentifier:(id)arg3 withCompletionHandler:(id)arg4 ;
-(void)addNotificationRequest:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)dealloc;
-(void)didReceiveDeviceToken:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)getBadgeNumberForBundleIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getClearedInfoForDataProviderMigrationWithBundleIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getDeliveredNotificationsForBundleIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getNotificationCategoriesForBundleIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getNotificationSettingsForBundleIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getNotificationSettingsForTopicsWithBundleIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getNotificationTopicsForBundleIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getPendingNotificationRequestsForBundleIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)removeAllDeliveredNotificationsForBundleIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeAllPendingNotificationRequestsForBundleIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeDeliveredNotificationsWithIdentifiers:(id)arg0 forBundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)removePendingNotificationRequestsWithIdentifiers:(id)arg0 forBundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeSimilarNotificationRequests:(id)arg0 forBundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)replaceContentForRequestWithIdentifier:(id)arg0 bundleIdentifier:(id)arg1 replacementContent:(id)arg2 completionHandler:(id)arg3 ;
-(void)requestAuthorizationWithOptions:(NSUInteger)arg0 forBundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)requestRemoveAuthorizationForBundleIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)resume;
-(void)setBadgeCount:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)setBadgeNumber:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)setBadgeString:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)setNotificationCategories:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)setNotificationRequests:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)setNotificationTopics:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)setObservingUserNotifications:(BOOL)arg0 forBundleIdentifier:(id)arg1 ;


@end


#endif