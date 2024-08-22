// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALDAVREPLYTOSHAREDCALENDARINVITATIONTASKGROUP_H
#define CALDAVREPLYTOSHAREDCALENDARINVITATIONTASKGROUP_H

@class CoreDAVTaskGroup, NSURL, NSString;
@protocol CoreDAVPostTaskDelegate, CoreDAVTaskGroupDelegate;


#import "CalDAVCalendarServerInviteNotificationItem.h"

@interface CalDAVReplyToSharedCalendarInvitationTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate>



@property (nonatomic) BOOL acceptInvitation; // ivar: _acceptInvitation
@property (retain, nonatomic) NSURL *calendarHomeURL; // ivar: _calendarHomeURL
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CoreDAVTaskGroupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CalDAVCalendarServerInviteNotificationItem *invitation; // ivar: _invitation
@property (retain, nonatomic) NSURL *sharedAs; // ivar: _sharedAs
@property (readonly) Class superclass;


-(id)generateReply;
-(id)initWithAccountInfoProvider:(id)arg0 taskManager:(id)arg1 ;
-(id)initWithInvitation:(id)arg0 acceptInvitation:(BOOL)arg1 atCalendarHomeURL:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4 ;
-(void)startTaskGroup;
-(void)task:(id)arg0 didFinishWithError:(id)arg1 ;


@end


#endif