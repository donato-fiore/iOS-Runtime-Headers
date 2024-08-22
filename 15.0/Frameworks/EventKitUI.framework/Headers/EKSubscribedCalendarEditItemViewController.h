// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKSUBSCRIBEDCALENDAREDITITEMVIEWCONTROLLER_H
#define EKSUBSCRIBEDCALENDAREDITITEMVIEWCONTROLLER_H

@class EKCalendar;


#import "EKEditItemViewController.h"
#import "EKAbstractCalendarEditor.h"

@interface EKSubscribedCalendarEditItemViewController : EKEditItemViewController {
    EKCalendar *_calendar;
    EKAbstractCalendarEditor *_calendarEditor;
}




-(id)initWithFrame:(struct CGRect )arg0 calendar:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)loadView;
-(void)save;


@end


#endif