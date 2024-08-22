// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKIPHONEINVOCATION_H
#define SKIPHONEINVOCATION_H


#import <Foundation/Foundation.h>


@interface SKIPhoneInvocation : NSObject



+(id)announceDropInCallForType:(NSInteger)arg0 ;
+(id)announceGroupFaceTimeInviteNotification:(id)arg0 synchronousBurstIndex:(id)arg1 isSameTypeAsLastAnnouncement:(BOOL)arg2 appBundleIdOfLastAnnouncement:(id)arg3 timeSinceLastAnnouncement:(CGFloat)arg4 ;
+(id)announceGroupFaceTimeRequestForAnnounceDirectInvocationPayload:(id)arg0 ;
+(id)announceHomeAnnouncementRequestFromApp:(id)arg0 withAnnouncementIdentifier:(id)arg1 withUserNotificationType:(NSInteger)arg2 synchronousBurstIndex:(id)arg3 ;
+(id)announceIncomingCallNotificationRequest:(id)arg0 ;
+(id)announceIncomingCallerRequestForCallUUID:(id)arg0 callProviderIdentifier:(id)arg1 callProviderBundleId:(id)arg2 callerContactIdentifiers:(id)arg3 handle:(id)arg4 isVideo:(BOOL)arg5 isCallerIDBlocked:(BOOL)arg6 ;
+(id)announceVoicemailRequestForAnnounceDirectInvocationPayload:(id)arg0 ;
+(id)announceVoicemailRequestForNotification:(id)arg0 synchronousBurstIndex:(id)arg1 isSameTypeAsLastAnnouncement:(BOOL)arg2 appBundleIdOfLastAnnouncement:(id)arg3 timeSinceLastAnnouncement:(CGFloat)arg4 ;
+(id)readHomeAnnouncementRequestFromApp:(id)arg0 ;
+(id)startPhoneCallRequestFromApp:(id)arg0 ;


@end


#endif