// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC13SLEEPHEALTHUI35QUICKSCHEDULEOVERRIDEVIEWCONTROLLER_H
#define _TTC13SLEEPHEALTHUI35QUICKSCHEDULEOVERRIDEVIEWCONTROLLER_H

@class UITableViewController;



@interface _TtC13SleepHealthUI35QuickScheduleOverrideViewController : UITableViewController {
    ? model;
    ? alarmPreviewPlayer;
    ? alarmConfigurationObserver;
    ? modelEditObserver;
    ? significantTimeChangeObserver;
    ? eventRecordChangeObserver;
    ? scheduleChangeObserver;
    ? sleepDurationGoalObserver;
    ? validScheduleRangeObserver;
    ? sleepScheduleProvider;
    ? modelHasChanged;
    ? tonePickerStyleProvider;
    ? vibrationPickerStyleProvider;
    ? delegate;
    ? dataSource;
}




-(BOOL)_canShowWhileLocked;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif