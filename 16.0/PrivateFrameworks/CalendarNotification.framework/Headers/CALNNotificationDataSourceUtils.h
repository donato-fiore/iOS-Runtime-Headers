// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALNNOTIFICATIONDATASOURCEUTILS_H
#define CALNNOTIFICATIONDATASOURCEUTILS_H


#import <Foundation/Foundation.h>


@interface CALNNotificationDataSourceUtils : NSObject



+(id)calendarWithSourceClientIdentifier:(id)arg0 inEventStore:(id)arg1 ;
+(id)eventWithSourceClientIdentifier:(id)arg0 inEventStore:(id)arg1 ;
+(id)notificationReferenceOfType:(int)arg0 withSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2 withNotificationReferenceProvider:(id)arg3 ;
+(id)objectIDWithSourceClientIdentifier:(id)arg0 ;
+(id)sourceClientIdentifierForNotification:(id)arg0 ;
+(void)clearSharedCalendarInvitationResponseWithSourceClientIdentifier:(id)arg0 inEventStore:(id)arg1 ;
+(void)hideCalendarFromNotificationCenter:(id)arg0 inEventStore:(id)arg1 ;
+(void)reportSharedCalendarInvitationAsJunkWithSourceClientIdentifier:(id)arg0 inEventStore:(id)arg1 ;
+(void)respondToSharedCalendarInvitationWithSourceClientIdentifier:(id)arg0 inEventStore:(id)arg1 withDataAccessExpressConnection:(id)arg2 accept:(BOOL)arg3 ;


@end


#endif