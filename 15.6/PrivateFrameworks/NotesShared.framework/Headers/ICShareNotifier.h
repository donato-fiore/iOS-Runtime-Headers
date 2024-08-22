// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSHARENOTIFIER_H
#define ICSHARENOTIFIER_H


#import <Foundation/Foundation.h>


@interface ICShareNotifier : NSObject



+(BOOL)shouldPreventNotificationsForRecordID:(id)arg0 ;
+(BOOL)shouldShowNotificationForNote:(id)arg0 ;
+(id)defaultsKeyForPreventingNotificationsForIdentifier:(id)arg0 ;
+(id)notificationTitleForEditors:(id)arg0 ;
+(id)participantsWithReplicaIDs:(id)arg0 inNote:(id)arg1 ;
+(id)replicaIDsThatEditedTimestamp:(id)arg0 sinceTimestamp:(id)arg1 ;
+(void)clearNotificationForRecordID:(id)arg0 ;
+(void)setShouldPreventNotifications:(BOOL)arg0 forRecordID:(id)arg1 ;
+(void)showNotificationForNote:(id)arg0 editors:(id)arg1 ;
+(void)showNotificationIfNecessaryForCloudObject:(id)arg0 accountID:(id)arg1 ;
+(void)showNotificationWithTitle:(id)arg0 message:(id)arg1 userInfo:(id)arg2 ;


@end


#endif