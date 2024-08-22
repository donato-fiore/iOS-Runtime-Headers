// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKCALENDARNOTIFICATION_H
#define EKCALENDARNOTIFICATION_H

@class NSURL, NSString;
@protocol EKIdentityProtocol;

#import <Foundation/Foundation.h>

#import "EKCalendar.h"
#import "EKEvent.h"
#import "EKObjectID.h"
#import "EKSource.h"

@interface EKCalendarNotification : NSObject <EKIdentityProtocol>



@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (nonatomic) BOOL alerted; // ivar: _alerted
@property (retain, nonatomic) EKCalendar *calendar; // ivar: _calendar
@property (nonatomic) BOOL couldBeJunk; // ivar: _couldBeJunk
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) *CGColor dotColor; // ivar: _dotColor
@property (retain, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (retain, nonatomic) EKEvent *event; // ivar: _event
@property (retain, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hiddenFromNotificationCenter; // ivar: _hiddenFromNotificationCenter
@property (readonly, nonatomic) BOOL isCurrentUserForScheduling;
@property (readonly, nonatomic) BOOL isCurrentUserForSharing;
@property (retain, nonatomic) NSString *lastName; // ivar: _lastName
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL needsAlert;
@property (retain, nonatomic) EKObjectID *objectID; // ivar: _objectID
@property (retain, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (retain, nonatomic) NSString *recipientName; // ivar: _recipientName
@property (retain, nonatomic) EKSource *source; // ivar: _source
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSString *uniqueIdentifier;


-(BOOL)acknowledgeWithEventStore:(id)arg0 error:(*id)arg1 ;
-(BOOL)isInvitation;
-(BOOL)isProposedNewTime;
-(BOOL)isSharedCalendarInvitation;
-(BOOL)proposedStartDateIsInFutureForAttendee:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif