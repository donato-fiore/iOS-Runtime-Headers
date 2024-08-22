// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKUIEVENTINVITEESEDITVIEWCONTROLLER_H
#define EKUIEVENTINVITEESEDITVIEWCONTROLLER_H

@class EKEvent, NSDate;


#import "EKEditItemViewController.h"
#import "EKUIEventInviteesViewController.h"

@interface EKUIEventInviteesEditViewController : EKEditItemViewController {
    EKEvent *_event;
    EKUIEventInviteesViewController *_controller;
}


@property (readonly, nonatomic) NSDate *selectedEndDate;
@property (readonly, nonatomic) NSDate *selectedStartDate;


-(id)initWithEvent:(id)arg0 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif