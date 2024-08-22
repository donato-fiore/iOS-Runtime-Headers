// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALENDARINVITATIONPOPOVERWRAPPERCONTROLLER_H
#define CALENDARINVITATIONPOPOVERWRAPPERCONTROLLER_H

@class UINavigationController;


#import "EKEventViewController.h"

@interface CalendarInvitationPopoverWrapperController : UINavigationController

@property (retain, nonatomic) EKEventViewController *eventViewController; // ivar: _eventViewController


-(id)initForEventUID:(int)arg0 ;


@end


#endif