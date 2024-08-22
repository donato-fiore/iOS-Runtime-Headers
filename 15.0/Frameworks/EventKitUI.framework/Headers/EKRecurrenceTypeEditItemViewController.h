// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKRECURRENCETYPEEDITITEMVIEWCONTROLLER_H
#define EKRECURRENCETYPEEDITITEMVIEWCONTROLLER_H

@class NSString, UITableView, NSIndexPath, EKCalendarItem, EKRecurrenceRule, NSDate;
@protocol UITableViewDataSource, UITableViewDelegate, EKRecurrenceTypeEditItemViewControllerDelegate;


#import "EKEditItemViewController.h"
#import "EKUICustomRecurrenceViewController.h"

@interface EKRecurrenceTypeEditItemViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate>

 {
    NSString *_summaryString;
    UITableView *_table;
    NSIndexPath *_checkedItem;
}


@property (retain) EKCalendarItem *calendarItem; // ivar: _calendarItem
@property (retain) EKUICustomRecurrenceViewController *customRecurrenceViewController; // ivar: _customRecurrenceViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<EKRecurrenceTypeEditItemViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) EKRecurrenceRule *recurrenceRule; // ivar: _recurrenceRule
@property (nonatomic) NSInteger repeatType; // ivar: _repeatType
@property (retain, nonatomic) NSDate *suggestedStartDate; // ivar: _suggestedStartDate
@property (readonly) Class superclass;


-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_recurrenceCellForIndexPath:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 styleProvider:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 styleProvider:(id)arg1 calendarItem:(id)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)_checkItemAtIndexPath:(id)arg0 ;
-(void)loadView;
-(void)resetBackgroundColor;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayFooterView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif