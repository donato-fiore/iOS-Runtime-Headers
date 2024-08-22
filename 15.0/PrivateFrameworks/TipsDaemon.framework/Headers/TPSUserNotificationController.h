// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSUSERNOTIFICATIONCONTROLLER_H
#define TPSUSERNOTIFICATIONCONTROLLER_H

@class UNUserNotificationCenter;


#import "TPSLocalNotificationController.h"

@interface TPSUserNotificationController : TPSLocalNotificationController

@property (retain, nonatomic) UNUserNotificationCenter *userNotificationCenter; // ivar: _userNotificationCenter


-(BOOL)isNotificationSettingValid;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(void)removeAllNotifications;
-(void)removeNotificationWithIdentifier:(id)arg0 ;
-(void)sendNotificationWithIdentifier:(id)arg0 collectionID:(id)arg1 correlationID:(id)arg2 title:(id)arg3 text:(id)arg4 attachmentURL:(id)arg5 extensionPayload:(id)arg6 ;


@end


#endif