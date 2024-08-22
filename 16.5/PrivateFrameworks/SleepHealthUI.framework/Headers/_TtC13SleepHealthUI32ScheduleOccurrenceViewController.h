// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC13SLEEPHEALTHUI32SCHEDULEOCCURRENCEVIEWCONTROLLER_H
#define _TTC13SLEEPHEALTHUI32SCHEDULEOCCURRENCEVIEWCONTROLLER_H

@class TtC13SleepHealthUI27SleepTableWelcomeController;
@protocol UITableViewDelegate;



@interface _TtC13SleepHealthUI32ScheduleOccurrenceViewController : TtC13SleepHealthUI27SleepTableWelcomeController <UITableViewDelegate>

 {
    ? model;
    ? alarmPreviewPlayer;
    ? alarmConfigurationObserver;
    ? modelEditObserver;
    ? significantTimeChangeObserver;
    ? localeChangeObserver;
    ? sleepDurationGoalObserver;
    ? scheduleChangeObserver;
    ? validScheduleRangeObserver;
    ? willResignActiveObserver;
    ? sleepScheduleProvider;
    ? delegate;
    ? allowsDeletion;
    ? hasFinishedNotifyingDelegate;
    ? modelHasChanged;
    ? dataSource;
    ? isIn24HourTime;
}




-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)handleAppWillResignActive;
-(void)restoreUserActivityState:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif