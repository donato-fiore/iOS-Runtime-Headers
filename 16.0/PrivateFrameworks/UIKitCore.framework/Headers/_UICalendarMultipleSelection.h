// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICALENDARMULTIPLESELECTION_H
#define _UICALENDARMULTIPLESELECTION_H

@class NSMutableArray, NSArray;
@protocol _UICalendarMultipleSelectionDelegate;


#import "UICalendarSelection.h"

@interface _UICalendarMultipleSelection : UICalendarSelection {
    NSMutableArray *_selectedDates;
    ? _delegateImplements;
}


@property (readonly, weak, nonatomic) NSObject<_UICalendarMultipleSelectionDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSArray *selectedDates;


-(BOOL)canSelectDate:(id)arg0 ;
-(BOOL)shouldDeselectDate:(id)arg0 ;
-(id)_removeSelectedDatesSatisfyingPredicate:(id)arg0 ;
-(id)_sanitizeDateComponents:(id)arg0 calendar:(id)arg1 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)didChangeAvailableDateRange:(id)arg0 ;
-(void)didChangeCalendar:(id)arg0 ;
-(void)didChangeVisibleMonth:(id)arg0 ;
-(void)didDeselectDate:(id)arg0 ;
-(void)didMoveToCalendarView;
-(void)didSelectDate:(id)arg0 ;
-(void)selectAllDatesAnimated:(BOOL)arg0 ;
-(void)willMoveToCalendarView:(id)arg0 ;


@end


#endif