// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKEVENTDATEEDITITEM_H
#define EKEVENTDATEEDITITEM_H

@class NSDateComponents, NSTimeZone, UITableViewCell, UIDatePicker, NSArray, NSString, NSDate;
@protocol EKTimeZoneViewControllerDelegate, EKDateTimeCellDelegate, EKCellShortener, EKEventDateEditItemDelegate;


#import "EKEventEditItem.h"
#import "EKDateTimeCell.h"
#import "PreferencesTwoPartValueCell.h"

@interface EKEventDateEditItem : EKEventEditItem <EKTimeZoneViewControllerDelegate, EKDateTimeCellDelegate, EKCellShortener>

 {
    NSDateComponents *_startComponents;
    NSDateComponents *_endComponents;
    BOOL _timedEventEndedAtMidnight;
    BOOL _allDay;
    NSTimeZone *_startTimeZone;
    NSTimeZone *_endTimeZone;
    BOOL _showTimeZones;
    BOOL _canPerformTargettedReload;
    EKDateTimeCell *_modernStartDateCell;
    EKDateTimeCell *_modernEndDateCell;
    PreferencesTwoPartValueCell *_classicStartDateCell;
    PreferencesTwoPartValueCell *_classicEndDateCell;
    int _shorteningStatus;
    UITableViewCell *_allDayCell;
    UITableViewCell *_startTimeZoneCell;
    UITableViewCell *_endTimeZoneCell;
    UITableViewCell *_startDatePickerCell;
    UITableViewCell *_endDatePickerCell;
    NSInteger _selectedSubitem;
    NSInteger _currentPickerMode;
    UIDatePicker *_startDatePicker;
    UIDatePicker *_endDatePicker;
    BOOL _endTimeWasMessedUp;
    BOOL _changingDate;
    BOOL _showingInlineDatePicker;
    BOOL _modifyingVisibleControls;
    BOOL _pushingTZController;
    NSInteger _targetedSubitemForTimezone;
    NSArray *_startPickerConstraints;
    NSArray *_endPickerConstraints;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<EKEventDateEditItemDelegate> *eventDateEditItemDelegate; // ivar: _eventDateEditItemDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *pendingProposedTime; // ivar: _pendingProposedTime
@property (nonatomic) BOOL proposedTime; // ivar: _proposedTime
@property (nonatomic) BOOL showsAllDay; // ivar: _showsAllDay
@property (readonly) Class superclass;


+(id)_timeZoneLocalizedString;
-(BOOL)_endDateIsBeforeStartDate;
-(BOOL)_shouldShowTimeZone;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg0 ;
-(BOOL)configureForCalendarConstraints:(id)arg0 ;
-(BOOL)editor:(id)arg0 canSelectSubitem:(NSUInteger)arg1 ;
-(BOOL)forceRefreshInviteesItemOnSave;
-(BOOL)forceRefreshLocationItemOnSave;
-(BOOL)handleClassicSubitemSelection:(NSInteger)arg0 ;
-(BOOL)isInline;
-(BOOL)prefersTargettedTableReloadOnSave;
-(BOOL)requiresReconfigurationOnSave;
-(BOOL)saveAndDismissWithForce:(BOOL)arg0 ;
-(BOOL)usesClassicUI;
-(BOOL)usesDetailViewControllerForSubitem:(NSUInteger)arg0 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 ;
-(NSInteger)_rowForSubitem:(NSInteger)arg0 ;
-(NSInteger)_subitemForRow:(NSInteger)arg0 ;
-(NSUInteger)numberOfSubitems;
-(id)_allDayCell;
-(id)_calendarForEventComponents:(BOOL)arg0 ;
-(id)_classicEndDateCell;
-(id)_classicStartDateCell;
-(id)_dateComponentsInSystemCalendarFromDate:(id)arg0 ;
-(id)_dateFromComponents:(id)arg0 timeZone:(id)arg1 ;
-(id)_dateInSystemCalendarFromComponents:(id)arg0 ;
-(id)_endDatePickerCell;
-(id)_endTimeZoneCell;
-(id)_modernEndDateCell;
-(id)_modernStartDateCell;
-(id)_newDatePicker;
-(id)_startDatePickerCell;
-(id)_startTimeZoneCell;
-(id)_timeZoneDescription:(id)arg0 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(void)_adjustEndDateIfNeededAfterTogglingAllDay;
-(void)_adjustStartAndEndComponentsForEventIfNeeded:(id)arg0 ;
-(void)_allDayChanged:(id)arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_datePickerChanged:(id)arg0 ;
-(void)_datePickerEndedEditing:(id)arg0 ;
-(void)_hideInlineDateControls;
-(void)_pickNextReasonableTime;
-(void)_refreshDatePicker;
-(void)_resetClassicStartString:(BOOL)arg0 endString:(BOOL)arg1 ;
-(void)_resetStartString:(BOOL)arg0 endString:(BOOL)arg1 ;
-(void)_setAllDay:(BOOL)arg0 ;
-(void)_setEndDate:(id)arg0 ;
-(void)_setEndTimeZone:(id)arg0 ;
-(void)_setStartDate:(id)arg0 ;
-(void)_setStartTimeZone:(id)arg0 ;
-(void)_showInlineControls:(NSInteger)arg0 forSubitem:(NSInteger)arg1 includingInlineDatePicker:(BOOL)arg2 ;
-(void)_updateClassicDateCellColors;
-(void)_updateClassicDateCellTimeWidths;
-(void)_updateDatePicker:(id)arg0 animated:(BOOL)arg1 ;
-(void)_validateTimezones;
-(void)adjustDatePickerInterval:(id)arg0 ;
-(void)dateChanged:(id)arg0 forSubitem:(NSInteger)arg1 ;
-(void)dateTimeCell:(id)arg0 dateChanged:(id)arg1 ;
-(void)dateTimeCellBeganEditing:(id)arg0 ;
-(void)dateTimeCellDateTapped:(id)arg0 ;
-(void)dateTimeCellEndedEditing:(id)arg0 ;
-(void)dateTimeCellTimeTapped:(id)arg0 ;
-(void)dealloc;
-(void)editor:(id)arg0 didSelectSubitem:(NSUInteger)arg1 ;
-(void)editor:(id)arg0 didStartEditingItem:(id)arg1 ;
-(void)endInlineEditing;
-(void)refreshFromCalendarItemAndStore;
-(void)setupPickerConstraintsForCell:(id)arg0 datePicker:(id)arg1 ;
-(void)shortenCell:(id)arg0 ;
-(void)timeZoneViewController:(id)arg0 didSelectTimeZone:(id)arg1 ;
-(void)timeZoneViewControllerDidCancel:(id)arg0 ;


@end


#endif