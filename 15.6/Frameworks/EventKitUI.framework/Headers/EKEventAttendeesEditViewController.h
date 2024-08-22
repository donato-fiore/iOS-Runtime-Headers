// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKEVENTATTENDEESEDITVIEWCONTROLLER_H
#define EKEVENTATTENDEESEDITVIEWCONTROLLER_H

@class EKEvent, NSArray, NSString;
@protocol EKUIManagedViewController;


#import "EKEditItemViewController.h"
#import "EKEventAttendeePicker.h"

@interface EKEventAttendeesEditViewController : EKEditItemViewController <EKUIManagedViewController>

 {
    EKEventAttendeePicker *_picker;
    EKEvent *_event;
    BOOL _cancelTapped;
}


@property (nonatomic) BOOL appendOnly; // ivar: _appendOnly
@property (copy, nonatomic) NSArray *attendees;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableShowingButtons; // ivar: _disableShowingButtons
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_shouldForwardViewWillTransitionToSize;
-(BOOL)canManagePresentationStyle;
-(BOOL)editItemShouldBeAskedForInjectableViewController;
-(BOOL)isModalInPresentation;
-(BOOL)prefersToBePresentedFromUINavigationController;
-(BOOL)presentModally;
-(BOOL)validateAllowingAlert:(BOOL)arg0 ;
-(BOOL)validateEmailWithString:(id)arg0 ;
-(BOOL)wantsManagement;
-(id)_attendeeFromRecipient:(id)arg0 ;
-(id)_createAttendeeFromRecipient:(id)arg0 ;
-(id)_createRecipientFromAttendee:(id)arg0 ;
-(id)_firstInvalidRecipientAddress;
-(id)_recipientFromAttendee:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 event:(id)arg1 overriddenEventStartDate:(id)arg2 overriddenEventEndDate:(id)arg3 ;
-(void)_cancelTapped:(id)arg0 ;
-(void)_doneTapped:(id)arg0 ;
-(void)setSearchAccountID:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif