// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKUIPROPOSEDTIMEEVENTVIEWCONTROLLER_H
#define EKUIPROPOSEDTIMEEVENTVIEWCONTROLLER_H

@class EKCalendarEventInvitationNotificationAttendee;
@protocol EKEditItemViewControllerProtocol, EKEditItemViewControllerDelegate;


#import "EKEventViewController.h"
#import "EKUIEmailCompositionManager.h"
#import "EKUIRecurrenceAlertController.h"

@interface EKUIProposedTimeEventViewController : EKEventViewController <EKEditItemViewControllerProtocol>



@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (weak, nonatomic) NSObject<EKEditItemViewControllerDelegate> *editDelegate;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (retain) EKUIEmailCompositionManager *messageSendingManager; // ivar: _messageSendingManager
@property (nonatomic) BOOL presentModally;
@property (retain) EKCalendarEventInvitationNotificationAttendee *proposedTimeAttendee; // ivar: _proposedTimeAttendee
@property (retain) EKUIRecurrenceAlertController *recurrenceAlertController; // ivar: _recurrenceAlertController
@property (nonatomic) BOOL useCustomBackButton;


-(id)_statusButtons;
-(id)initWithProposedTimeAttendee:(id)arg0 ;
-(id)items;
-(id)proposedTime;
-(id)viewTitle;
-(void)invokeAction:(NSInteger)arg0 eventStatusButtonsView:(id)arg1 ;


@end


#endif