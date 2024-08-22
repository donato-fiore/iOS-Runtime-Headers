// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALNEVENTINVITATIONNOTIFICATIONDATASOURCEUTILS_H
#define CALNEVENTINVITATIONNOTIFICATIONDATASOURCEUTILS_H


#import <Foundation/Foundation.h>


@interface CALNEventInvitationNotificationDataSourceUtils : NSObject



+(id)eventForEventInvitation:(id)arg0 inEventStore:(id)arg1 ;
+(id)eventForNotificationOfType:(int)arg0 withSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2 withNotificationReferenceProvider:(id)arg3 ;
+(id)expirationDateForEventInvitation:(id)arg0 ;
+(void)clearEventInvitationOfType:(int)arg0 withSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2 withNotificationReferenceProvider:(id)arg3 ;


@end


#endif