// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKALARMEDITITEMVIEWCONTROLLER_H
#define EKALARMEDITITEMVIEWCONTROLLER_H

@class EKCalendar, NSString;
@protocol CalendarEventAlarmTableDelegate;


#import "EKEditItemViewController.h"
#import "CalendarEventAlarmTable.h"
#import "EKUIRecurrenceAlertController.h"
#import "EKUIAlarm.h"

@interface EKAlarmEditItemViewController : EKEditItemViewController <CalendarEventAlarmTableDelegate>

 {
    CalendarEventAlarmTable *_table;
    CGFloat _warningLabelWidth;
    BOOL _immediateAlarmCreation;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
}


@property (retain, nonatomic) EKUIAlarm *alarm; // ivar: _alarm
@property (nonatomic) NSUInteger alarmIndex; // ivar: _alarmIndex
@property (nonatomic) BOOL allDay; // ivar: _allDay
@property (retain, nonatomic) EKCalendar *calendar; // ivar: _calendar
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL eventHasTravelTime; // ivar: _eventHasTravelTime
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger presetIdentifier;
@property (retain, nonatomic) EKUIAlarm *previousAlarm; // ivar: _previousAlarm
@property (nonatomic) BOOL shouldAllowAlarmsTriggeringAfterStartDate; // ivar: _shouldAllowAlarmsTriggeringAfterStartDate
@property (nonatomic) BOOL shouldShowLeaveNowOption; // ivar: _shouldShowLeaveNowOption
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timeToLeaveLocationStatus; // ivar: _timeToLeaveLocationStatus


-(BOOL)customSelected;
-(BOOL)displaysWarningLabel;
-(id)initWithFrame:(struct CGRect )arg0 styleProvider:(id)arg1 ;
-(id)tableHeaderView;
-(void)_storeChanged:(id)arg0 ;
-(void)alarmTable:(id)arg0 didSelectRowAtIndexPath:(id)arg1 commitSelectionBlock:(id)arg2 ;
-(void)loadView;
-(void)resetBackgroundColor;
-(void)setCustomString:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif