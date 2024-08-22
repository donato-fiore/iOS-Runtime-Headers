// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALNUNUSERNOTIFICATIONCENTER_H
#define CALNUNUSERNOTIFICATIONCENTER_H

@class NSString;
@protocol UNUserNotificationCenterDelegate, CALNUserNotificationCenter, CALNUserNotificationCenterDelegate, CALNNotificationStorage, CALNUNUserNotificationCenterProtocol;

#import <Foundation/Foundation.h>

#import "CALNUNNotificationContentMapper.h"
#import "CALNUNNotificationMapper.h"
#import "CALNUNNotificationRequestMapper.h"
#import "CALNUNNotificationResponseMapper.h"

@interface CALNUNUserNotificationCenter : NSObject <UNUserNotificationCenterDelegate, CALNUserNotificationCenter>



@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CALNUserNotificationCenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CALNUNNotificationContentMapper *notificationContentMapper; // ivar: _notificationContentMapper
@property (readonly, nonatomic) CALNUNNotificationMapper *notificationMapper; // ivar: _notificationMapper
@property (readonly, nonatomic) CALNUNNotificationRequestMapper *notificationRequestMapper; // ivar: _notificationRequestMapper
@property (readonly, nonatomic) CALNUNNotificationResponseMapper *notificationResponseMapper; // ivar: _notificationResponseMapper
@property (readonly, nonatomic) NSObject<CALNNotificationStorage> *storage; // ivar: _storage
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CALNUNUserNotificationCenterProtocol> *userNotificationCenter; // ivar: _userNotificationCenter


+(id)_statsPayloadKeyForSettingName:(id)arg0 topicIdentifier:(id)arg1 ;
+(void)_addSettingName:(id)arg0 value:(id)arg1 toStatsPayload:(id)arg2 forTopicIdentifier:(id)arg3 ;
-(BOOL)addNotificationRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)replaceNotificationRequest:(id)arg0 error:(*id)arg1 ;
-(id)_updatedRecord:(id)arg0 ;
-(id)deliveredNotifications;
-(id)initWithBundleIdentifier:(id)arg0 userNotificationCenterFactory:(id)arg1 storage:(id)arg2 notificationIconCache:(id)arg3 ;
-(id)notificationCategories;
-(void)activate;
-(void)collectSettingsStats:(id)arg0 ;
-(void)deactivate;
-(void)removeAllDeliveredNotifications;
-(void)removeAllPendingNotificationRequests;
-(void)removeDeliveredNotificationsWithIdentifiers:(id)arg0 ;
-(void)setNotificationCategories:(id)arg0 ;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)userNotificationCenter:(id)arg0 willPresentNotification:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif