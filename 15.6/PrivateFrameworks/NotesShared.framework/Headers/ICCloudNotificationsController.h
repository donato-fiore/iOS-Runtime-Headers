// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICCLOUDNOTIFICATIONSCONTROLLER_H
#define ICCLOUDNOTIFICATIONSCONTROLLER_H

@class PDSRegistrar;

#import <Foundation/Foundation.h>


@interface ICCloudNotificationsController : NSObject

@property (readonly, nonatomic) PDSRegistrar *pdsClient;


+(id)sharedController;
+(void)registerForUserNotificationsWithCompletionHandler:(id)arg0 ;
-(BOOL)isSubscribedToMentionNotificationsForAccount:(id)arg0 ;
-(void)batchUpdateTopicSubscriptionsAllAccountsInContext:(id)arg0 ;
-(void)batchUpdateTopicSubscriptionsForDSIDs:(id)arg0 ;
-(void)removeAllPDSRegistrationsForUser:(id)arg0 ;
-(void)removeAllTopicSubscriptionsForAccount:(id)arg0 ;
-(void)sendMentionNotificationToParticipant:(id)arg0 inlineAttachmentRecordName:(id)arg1 shareRecordName:(id)arg2 shareOwnerUserId:(id)arg3 accountId:(id)arg4 noteRecordName:(id)arg5 senderName:(id)arg6 noteTitle:(id)arg7 mentionSnippet:(id)arg8 callback:(id)arg9 ;
-(void)updateSubscriptionPreferenceForMentionNotifications:(BOOL)arg0 forAccount:(id)arg1 ;


@end


#endif