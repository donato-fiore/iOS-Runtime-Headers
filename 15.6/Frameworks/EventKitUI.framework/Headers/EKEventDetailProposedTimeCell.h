// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKEVENTDETAILPROPOSEDTIMECELL_H
#define EKEVENTDETAILPROPOSEDTIMECELL_H

@class EKCalendarEventInvitationNotificationAttendee, UIView, EKEvent;


#import "EKEventDetailCell.h"
#import "EKEventDetailsHighlightControl.h"

@interface EKEventDetailProposedTimeCell : EKEventDetailCell {
    EKCalendarEventInvitationNotificationAttendee *_attendee;
    EKEventDetailsHighlightControl *_control;
    UIView *_topSeparator;
    EKEvent *_event;
    UIView *_bgView;
}


@property (nonatomic) BOOL showsTopSeparator; // ivar: _showsTopSeparator


+(BOOL)requiresConstraintBasedLayout;
-(BOOL)hasCustomLayout;
-(BOOL)shouldDisplayForEvent;
-(BOOL)update;
-(id)initWithEvent:(id)arg0 andAttendee:(id)arg1 ;
-(void)setRoundedCorners:(NSUInteger)arg0 ;
-(void)setSeparatorStyle:(NSInteger)arg0 ;


@end


#endif