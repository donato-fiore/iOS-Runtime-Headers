// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKUICUSTOMRECURRENCEVIEWCONTROLLER_H
#define EKUICUSTOMRECURRENCEVIEWCONTROLLER_H

@class UIViewController, EKRecurrenceRule, UITableViewCell, NSString, UIPickerView, NSDate, UITableView, NSTimeZone, UISwitch;
@protocol UITableViewDataSource, UITableViewDelegate, UIPickerViewDelegate, UIPickerViewDataSource, EKRecurrenceChooserControllerDelegate;


#import "EKRecurrenceChooserController.h"
#import "EKUICustomRecurrenceIntervalViewController.h"
#import "EKRecurrenceMonthlyChooserController.h"
#import "EKRecurrenceWeekdayChooserController.h"
#import "EKRecurrenceMonthChooserController.h"
#import "EKRecurrenceOrdinalChooserController.h"

@interface EKUICustomRecurrenceViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIPickerViewDelegate, UIPickerViewDataSource, EKRecurrenceChooserControllerDelegate>

 {
    NSInteger _cachedFrequency;
    NSInteger _cachedInterval;
    EKRecurrenceRule *_cachedRecurrenceRule;
    BOOL _showingFrequencyPicker;
    BOOL _showingIntervalPicker;
    UITableViewCell *_frequencySummaryCell;
    UITableViewCell *_intervalSummaryCell;
    BOOL _useClearBackground;
}


@property (copy) id *completionBlock; // ivar: _completionBlock
@property (weak) EKRecurrenceChooserController *currentChooser; // ivar: _currentChooser
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) UIPickerView *frequencyPickerView; // ivar: _frequencyPickerView
@property (readonly) NSUInteger hash;
@property (retain) EKUICustomRecurrenceIntervalViewController *intervalPickerViewController; // ivar: _intervalPickerViewController
@property (retain) EKRecurrenceMonthlyChooserController *monthlyChooser; // ivar: _monthlyChooser
@property (nonatomic) BOOL prohibitsMultipleDaysInMonthlyRecurrence;
@property (nonatomic) BOOL prohibitsMultipleMonthsInYearlyRecurrence;
@property BOOL prohibitsYearlyRecurrenceInterval; // ivar: _prohibitsYearlyRecurrenceInterval
@property (copy) NSString *recurrenceSummaryString; // ivar: _recurrenceSummaryString
@property (retain) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (retain) UITableView *tableView; // ivar: _tableView
@property (retain) NSTimeZone *timeZone; // ivar: _timeZone
@property (retain) EKRecurrenceWeekdayChooserController *weeklyChooser; // ivar: _weeklyChooser
@property (retain) UISwitch *yearOrdinalSwitch; // ivar: _yearOrdinalSwitch
@property (retain) EKRecurrenceMonthChooserController *yearlyChooser; // ivar: _yearlyChooser
@property (retain) EKRecurrenceOrdinalChooserController *yearlyOrdinalChooser; // ivar: _yearlyOrdinalChooser


+(BOOL)_shouldForwardViewWillTransitionToSize;
+(BOOL)isRecurrenceRuleOrdinal:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)_numberOfRowsForSection:(NSInteger)arg0 ;
-(NSInteger)_tagForIndexPath:(id)arg0 ;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_chooserForFrequency:(NSInteger)arg0 ;
-(id)_stringForFrequency:(NSInteger)arg0 ;
-(id)_stringForFrequency:(NSInteger)arg0 interval:(NSInteger)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStartDate:(id)arg0 timeZone:(id)arg1 clearBackground:(BOOL)arg2 ;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(id)recurrenceRule;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(struct CGSize )calculatePreferredContentSize;
-(struct CGSize )preferredContentSize;
-(void)_collapseAllPickers;
-(void)_createChoosersAndControls;
-(void)_refreshCacheAndPickers;
-(void)_setShowingFrequencyPicker:(BOOL)arg0 ;
-(void)_setShowingIntervalPicker:(BOOL)arg0 ;
-(void)_toggleInlineSpinnerForTag:(NSInteger)arg0 ;
-(void)_updateCustomPickerView;
-(void)_updateFrequencyRows;
-(void)_updateIntervalPicker;
-(void)_updateRecurrenceRule;
-(void)_updateSummaryLabel;
-(void)_updateTableSectionsFromFrequency:(NSInteger)arg0 toFrequency:(NSInteger)arg1 ;
-(void)_yearOrdinalSwitchChanged:(id)arg0 ;
-(void)loadView;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)recurrenceChooser:(id)arg0 wantsRowReload:(NSInteger)arg1 ;
-(void)recurrenceChooserUpdated:(id)arg0 ;
-(void)recurrenceChooserWantsReload:(id)arg0 ;
-(void)resetBackgroundColor;
-(void)setRecurrenceRule:(id)arg0 ;
-(void)setRecurrenceRule:(id)arg0 shouldUpdatePickers:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 willDisplayFooterView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif