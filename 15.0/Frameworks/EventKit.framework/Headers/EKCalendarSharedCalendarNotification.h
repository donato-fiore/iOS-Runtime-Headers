// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKCALENDARSHAREDCALENDARNOTIFICATION_H
#define EKCALENDARSHAREDCALENDARNOTIFICATION_H



#import "EKCalendarNotification.h"

@interface EKCalendarSharedCalendarNotification : EKCalendarNotification

@property (nonatomic) NSUInteger allowedEntityTypes; // ivar: _allowedEntityTypes
@property (nonatomic) NSUInteger sharingInvitationResponse; // ivar: _sharingInvitationResponse


-(BOOL)isSharedCalendarInvitation;
-(id)calendarFromEventStore:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;


@end


#endif