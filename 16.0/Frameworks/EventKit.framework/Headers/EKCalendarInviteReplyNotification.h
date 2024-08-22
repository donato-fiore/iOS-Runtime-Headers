// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKCALENDARINVITEREPLYNOTIFICATION_H
#define EKCALENDARINVITEREPLYNOTIFICATION_H



#import "EKCalendarNotification.h"

@interface EKCalendarInviteReplyNotification : EKCalendarNotification

@property (nonatomic) NSUInteger allowedEntityTypes; // ivar: _allowedEntityTypes
@property (nonatomic) NSUInteger status; // ivar: _status


-(BOOL)acknowledgeWithEventStore:(id)arg0 error:(*id)arg1 ;
-(id)initWithType:(NSInteger)arg0 ;
-(id)inviteReplyNotificationFromEventStore:(id)arg0 ;


@end


#endif