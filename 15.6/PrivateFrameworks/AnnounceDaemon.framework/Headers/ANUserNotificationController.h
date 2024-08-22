// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANUSERNOTIFICATIONCONTROLLER_H
#define ANUSERNOTIFICATIONCONTROLLER_H

@class UNUserNotificationCenter;
@protocol ANUserNotificationControllerDelegate;

#import <Foundation/Foundation.h>


@interface ANUserNotificationController : NSObject

@property (weak, nonatomic) NSObject<ANUserNotificationControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UNUserNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (nonatomic) BOOL suspendNotificationExpiration; // ivar: _suspendNotificationExpiration


+(id)_createNotificationContent:(id)arg0 homeName:(id)arg1 withSilence:(BOOL)arg2 userInfo:(id)arg3 actionUrl:(id)arg4 expirationDate:(id)arg5 andThreadIdentifier:(id)arg6 ;
+(id)sharedController;
+(void)_bestDeviceToAlert:(id)arg0 ;
-(BOOL)hasDeliveredNotificationsWithGroupID:(id)arg0 ;
-(id)_contentBodyForAnnouncements:(id)arg0 inHome:(id)arg1 ;
-(id)_contentForSendFailureForAnnouncement:(id)arg0 homeName:(id)arg1 ;
-(id)_userInfoForAnnouncement:(id)arg0 groupAnnouncements:(id)arg1 ;
-(id)_userInfoForFailedDeliveryForAnnouncement:(id)arg0 ;
-(id)init;
-(void)_contentForAnnouncement:(id)arg0 groupAnnouncements:(id)arg1 inHome:(id)arg2 threadID:(id)arg3 replacement:(BOOL)arg4 completion:(id)arg5 ;
-(void)_postNotificationWithContent:(id)arg0 requestID:(id)arg1 ;
-(void)_replaceContentForRequestWithRequestID:(id)arg0 replacementContent:(id)arg1 completionHandler:(id)arg2 ;
-(void)_replaceContentForRequestsWithThreadID:(id)arg0 replacementContent:(id)arg1 ;
-(void)_setContentExpirationDate:(id)arg0 forNotificationsWithThreadIDs:(id)arg1 ;
-(void)cleanForExit;
-(void)pauseExpirationForNotificationsWithGroupIDs:(id)arg0 ;
-(void)postNotificationForAnnouncement:(id)arg0 groupAnnouncements:(id)arg1 home:(id)arg2 groupID:(id)arg3 ;
-(void)postSendFailureNotificationForAnnouncement:(id)arg0 ;
-(void)removeNotificationWithGroupID:(id)arg0 ;
-(void)resumeExpirationForNotificationsWithGroupIDs:(id)arg0 ;
-(void)updateNotificationForAnnouncements:(id)arg0 inHome:(id)arg1 withGroupID:(id)arg2 ;


@end


#endif