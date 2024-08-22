// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKINVITEREPLYNOTIFICATION_H
#define EKINVITEREPLYNOTIFICATION_H

@class NSString, NSDate, NSURL;


#import "EKNotification.h"
#import "EKCalendar.h"

@interface EKInviteReplyNotification : EKNotification

@property (readonly, nonatomic) BOOL alerted;
@property (readonly, nonatomic) NSString *calendarName;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSString *inReplyTo;
@property (readonly, nonatomic) EKCalendar *inviteReplyCalendar;
@property (copy, nonatomic) NSString *shareeDisplayName;
@property (readonly, nonatomic) NSString *shareeEmailAddress;
@property (copy, nonatomic) NSString *shareeFirstName;
@property (copy, nonatomic) NSString *shareeLastName;
@property (readonly, nonatomic) NSString *shareePhoneNumber;
@property (nonatomic) NSUInteger shareeStatus;
@property (copy, nonatomic) NSURL *shareeURL;
@property (copy, nonatomic) NSString *summary;


+(Class)frozenClass;
+(id)knownRelationshipSingleValueKeys;
+(id)sourceForInviteReplyNotification:(id)arg0 ;
-(BOOL)validate:(*id)arg0 ;
-(id)initWithInviteReplyCalendar:(id)arg0 ;
-(void)clearAlertedStatus;


@end


#endif