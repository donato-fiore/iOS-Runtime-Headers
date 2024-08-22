// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKCALENDAREVENTINVITATIONNOTIFICATIONATTENDEE_H
#define EKCALENDAREVENTINVITATIONNOTIFICATIONATTENDEE_H

@class NSURL, NSString, NSDate;
@protocol EKIdentityProtocol;

#import <Foundation/Foundation.h>


@interface EKCalendarEventInvitationNotificationAttendee : NSObject <EKIdentityProtocol>



@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSString *comment; // ivar: _comment
@property (readonly, nonatomic) BOOL commentChanged; // ivar: _commentChanged
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (readonly, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCurrentUser; // ivar: _isCurrentUser
@property (readonly, nonatomic) BOOL isCurrentUserForScheduling;
@property (readonly, nonatomic) BOOL isCurrentUserForSharing;
@property (readonly, nonatomic) NSString *lastName; // ivar: _lastName
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger participantStatus; // ivar: _participantStatus
@property (readonly, nonatomic) NSInteger participantType; // ivar: _participantType
@property (readonly, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (readonly, nonatomic) NSDate *proposedStartDate; // ivar: _proposedStartDate
@property (readonly, nonatomic) BOOL proposedStartDateChanged; // ivar: _proposedStartDateChanged
@property (readonly, nonatomic) BOOL proposedStartDateDeclined; // ivar: _proposedStartDateDeclined
@property (readonly, nonatomic) BOOL statusChanged; // ivar: _statusChanged
@property (readonly) Class superclass;


-(id)initWithParticipant:(id)arg0 forEvent:(id)arg1 ;


@end


#endif