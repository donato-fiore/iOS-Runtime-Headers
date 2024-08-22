// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UNUSERNOTIFICATIONCENTER_H
#define UNUSERNOTIFICATIONCENTER_H

@class NSString;
@protocol UNUserNotificationServiceConnectionObserver, UNUserNotificationCenterDelegateConnectionListenerDelegate, UNUserNotificationCenterDelegate, UNUserNotificationCenterDelegatePrivate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface UNUserNotificationCenter : NSObject <UNUserNotificationServiceConnectionObserver, UNUserNotificationCenterDelegateConnectionListenerDelegate>



@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UNUserNotificationCenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<UNUserNotificationCenterDelegatePrivate> *privateDelegate; // ivar: _privateDelegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsContentExtensions;


+(id)currentNotificationCenter;
-(id)badgeNumber;
-(id)clearedInfoForDataProviderMigration;
-(id)deliveredNotifications;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 queue:(id)arg1 ;
-(id)notificationCategories;
-(id)notificationSettings;
-(id)notificationSettingsForTopics;
-(id)notificationTopics;
-(id)pendingNotificationRequests;
-(void)addNotificationRequest:(id)arg0 ;
-(void)addNotificationRequest:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)didChangeSettings:(id)arg0 ;
-(void)didOpenApplicationForResponse:(id)arg0 ;
-(void)didReceiveNotificationResponse:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getBadgeNumberWithCompletionHandler:(id)arg0 ;
-(void)getDeliveredNotificationsWithCompletionHandler:(id)arg0 ;
-(void)getNotificationCategoriesWithCompletionHandler:(id)arg0 ;
-(void)getNotificationSettingsForTopicsWithCompletionHandler:(id)arg0 ;
-(void)getNotificationSettingsWithCompletionHandler:(id)arg0 ;
-(void)getNotificationTopicsWithCompletionHandler:(id)arg0 ;
-(void)getPendingNotificationRequestsWithCompletionHandler:(id)arg0 ;
-(void)removeAllDeliveredNotifications;
-(void)removeAllPendingNotificationRequests;
-(void)removeDeliveredNotificationsWithIdentifiers:(id)arg0 ;
-(void)removePendingNotificationRequestsWithIdentifiers:(id)arg0 ;
-(void)removeSimilarNotificationRequests:(id)arg0 ;
-(void)replaceContentForRequestWithIdentifier:(id)arg0 replacementContent:(id)arg1 completionHandler:(id)arg2 ;
-(void)requestAuthorizationWithOptions:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)requestRemoveAuthorizationWithCompletionHandler:(id)arg0 ;
-(void)setBadgeNumber:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)setBadgeString:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)setNotificationCategories:(id)arg0 ;
-(void)setNotificationRequests:(id)arg0 ;
-(void)setNotificationTopics:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)setWantsNotificationResponsesDelivered;


@end


#endif