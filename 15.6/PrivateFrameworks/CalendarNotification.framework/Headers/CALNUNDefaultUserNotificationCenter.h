// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNUNDEFAULTUSERNOTIFICATIONCENTER_H
#define CALNUNDEFAULTUSERNOTIFICATIONCENTER_H

@class NSString, UNUserNotificationCenter;
@protocol CALNUNUserNotificationCenterProtocol, UNUserNotificationCenterDelegate;

#import <Foundation/Foundation.h>


@interface CALNUNDefaultUserNotificationCenter : NSObject <CALNUNUserNotificationCenterProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UNUserNotificationCenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UNUserNotificationCenter *userNotificationCenter; // ivar: _userNotificationCenter


-(BOOL)addNotificationRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)replaceContentForRequestWithIdentifier:(id)arg0 replacementContent:(id)arg1 error:(*id)arg2 ;
-(id)deliveredNotifications;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)notificationCategories;
-(id)notificationSettings;
-(id)notificationSettingsForTopics;
-(void)removeAllDeliveredNotifications;
-(void)removeDeliveredNotificationsWithIdentifiers:(id)arg0 ;
-(void)setNotificationCategories:(id)arg0 ;
-(void)setWantsNotificationResponsesDelivered;


@end


#endif