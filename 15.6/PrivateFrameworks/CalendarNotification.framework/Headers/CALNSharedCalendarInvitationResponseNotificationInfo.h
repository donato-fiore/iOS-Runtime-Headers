// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNSHAREDCALENDARINVITATIONRESPONSENOTIFICATIONINFO_H
#define CALNSHAREDCALENDARINVITATIONRESPONSENOTIFICATIONINFO_H

@class EKCalendarNotification, NSString;

#import <Foundation/Foundation.h>


@interface CALNSharedCalendarInvitationResponseNotificationInfo : NSObject

@property (readonly, nonatomic) EKCalendarNotification *calendarNotification; // ivar: _calendarNotification
@property (readonly, nonatomic) BOOL isDelegate; // ivar: _isDelegate
@property (readonly, copy, nonatomic) NSString *sourceClientIdentifier; // ivar: _sourceClientIdentifier
@property (readonly, copy, nonatomic) NSString *sourceIdentifier; // ivar: _sourceIdentifier
@property (readonly, copy, nonatomic) NSString *sourceTitle; // ivar: _sourceTitle


-(id)description;
-(id)initWithSourceClientIdentifier:(id)arg0 calendarNotification:(id)arg1 isDelegate:(BOOL)arg2 sourceTitle:(id)arg3 sourceIdentifier:(id)arg4 ;


@end


#endif