// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKCALENDARITEMRECURRENCEEDITITEM_H
#define EKCALENDARITEMRECURRENCEEDITITEM_H

@class NSDate, NSString, UITableViewCell, UIDatePicker;
@protocol EKDateTimeCellDelegate;


#import "EKCalendarItemEditItem.h"
#import "EKDateTimeCell.h"
#import "EKUITableViewCell.h"

@interface EKCalendarItemRecurrenceEditItem : EKCalendarItemEditItem <EKDateTimeCellDelegate>

 {
    NSInteger _repeatType;
    NSInteger _originalRepeatType;
    NSDate *_repeatEnd;
    NSDate *_minRecurrenceEndDate;
    NSDate *_originalRepeatEnd;
    NSString *_customRepeatDescription;
    UITableViewCell *_customCell;
    EKDateTimeCell *_endDateCell;
    EKUITableViewCell *_endDatePickerCell;
    UIDatePicker *_endDatePicker;
    BOOL _showingDatePicker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_neverLocalizedString;
-(BOOL)_validateRecurrenceType:(id)arg0 ;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg0 ;
-(BOOL)forceRefreshStartAndEndDatesOnSave;
-(BOOL)saveAndDismissWithForce:(BOOL)arg0 ;
-(NSUInteger)indexForSubitem:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSubitems;
-(NSUInteger)subitemAtIndex:(NSUInteger)arg0 ;
-(id)_newDatePicker;
-(id)bestInitialEndDate;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)endRepeatPopupMenu;
-(id)init;
-(id)minRecurrenceEndDate;
-(id)recurrenceDate;
-(id)recurrenceRuleFromRepeatType:(NSInteger)arg0 ;
-(id)recurrenceTimeZone;
-(id)repeatPopupMenu;
-(id)stringForDate:(id)arg0 ;
-(void)_contentSizeCategoryChanged:(id)arg0 ;
-(void)_datePickerChanged:(id)arg0 ;
-(void)dateTimeCell:(id)arg0 dateChanged:(id)arg1 ;
-(void)dateTimeCellBeganEditing:(id)arg0 ;
-(void)dateTimeCellDateTapped:(id)arg0 ;
-(void)dateTimeCellEndedEditing:(id)arg0 ;
-(void)dateTimeCellTimeTapped:(id)arg0 ;
-(void)dealloc;
-(void)editor:(id)arg0 didSelectSubitem:(NSUInteger)arg1 ;
-(void)presentCustomRecurrenceVC;
-(void)refreshFromCalendarItemAndStore;
-(void)saveNewRepeatEndDate:(id)arg0 ;


@end


#endif