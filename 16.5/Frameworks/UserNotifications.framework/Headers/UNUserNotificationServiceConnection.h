// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNUSERNOTIFICATIONSERVICECONNECTION_H
#define UNUSERNOTIFICATIONSERVICECONNECTION_H

@class NSXPCConnection, NSString, NSMutableDictionary;
@protocol UNUserNotificationClientProtocol, UNUserNotificationServerProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface UNUserNotificationServiceConnection : NSObject <UNUserNotificationClientProtocol, UNUserNotificationServerProtocol>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callOutQueue; // ivar: _callOutQueue
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *observersByBundleIdentifier; // ivar: _observersByBundleIdentifier
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)badgeNumberForBundleIdentifier:(id)arg0 ;
-(id)clearedInfoForBundleIdentifier:(id)arg0 ;
-(id)deliveredNotificationsForBundleIdentifier:(id)arg0 ;
-(id)init;
-(id)notificationCategoriesForBundleIdentifier:(id)arg0 ;
-(id)notificationSettingsForBundleIdentifier:(id)arg0 ;
-(id)notificationSettingsForTopicsWithBundleIdentifier:(id)arg0 ;
-(id)notificationTopicsForBundleIdentifier:(id)arg0 ;
-(id)pendingNotificationRequestsForBundleIdentifier:(id)arg0 ;
-(void)_invalidate;
-(void)_queue_addObserver:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)_queue_didReceiveDeviceToken:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)_queue_removeObserver:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)addNotificationRequest:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)addObserver:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)didReceiveDeviceToken:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)getBadgeNumberForBundleIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getDeliveredNotificationsForBundleIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getNotificationCategoriesForBundleIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getNotificationSettingsForBundleIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getNotificationSettingsForTopicsWithBundleIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getNotificationTopicsForBundleIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getPendingNotificationRequestsForBundleIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)performBlockOnConnectionQueue:(id)arg0 ;
-(void)removeAllDeliveredNotificationsForBundleIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeAllPendingNotificationRequestsForBundleIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeDeliveredNotificationsWithIdentifiers:(id)arg0 forBundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeObserver:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)removePendingNotificationRequestsWithIdentifiers:(id)arg0 forBundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeSimilarNotificationRequests:(id)arg0 forBundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)replaceContentForRequestWithIdentifier:(id)arg0 bundleIdentifier:(id)arg1 replacementContent:(id)arg2 completionHandler:(id)arg3 ;
-(void)requestAuthorizationWithOptions:(NSUInteger)arg0 forBundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)requestRemoveAuthorizationForBundleIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)setBadgeCount:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)setBadgeNumber:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)setBadgeString:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)setNotificationCategories:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)setNotificationRequests:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)setNotificationTopics:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)setObservingUserNotifications:(BOOL)arg0 forBundleIdentifier:(id)arg1 ;


@end


#endif