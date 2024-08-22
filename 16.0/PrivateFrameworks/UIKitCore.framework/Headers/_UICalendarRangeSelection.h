// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICALENDARRANGESELECTION_H
#define _UICALENDARRANGESELECTION_H

@class NSDateComponents;
@protocol _UICalendarRangeSelectionDelegate;


#import "UICalendarSelection.h"
#import "_UICalendarDateRange.h"

@interface _UICalendarRangeSelection : UICalendarSelection {
    ? _delegateImplements;
    NSDateComponents *_pendingStartDate;
}


@property (copy, nonatomic) _UICalendarDateRange *dateRange; // ivar: _dateRange
@property (readonly, weak, nonatomic) NSObject<_UICalendarRangeSelectionDelegate> *delegate; // ivar: _delegate


-(BOOL)canSelectDate:(id)arg0 ;
-(BOOL)shouldDeselectDate:(id)arg0 ;
-(id)_sanitizedDateRange:(id)arg0 calendar:(id)arg1 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)_deselectDatesInRange:(id)arg0 animated:(BOOL)arg1 ;
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