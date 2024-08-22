// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIKMESSAGESTRINGS_H
#define CUIKMESSAGESTRINGS_H

@class NSArray, EKCalendarEventInvitationNotificationAttendee;

#import <Foundation/Foundation.h>


@interface CUIKMessageStrings : NSObject

@property (readonly, nonatomic) NSArray *bodyStrings; // ivar: _bodyStrings
@property (readonly, nonatomic) NSInteger comments; // ivar: _comments
@property (readonly, nonatomic) EKCalendarEventInvitationNotificationAttendee *importantAttendee; // ivar: _importantAttendee
@property (readonly, nonatomic) BOOL timeProposals; // ivar: _timeProposals
@property (readonly, nonatomic) NSArray *titleStrings; // ivar: _titleStrings


-(id)initWithTitles:(id)arg0 bodyStrings:(id)arg1 comments:(NSInteger)arg2 timeProposals:(BOOL)arg3 importantAttendee:(id)arg4 ;


@end


#endif