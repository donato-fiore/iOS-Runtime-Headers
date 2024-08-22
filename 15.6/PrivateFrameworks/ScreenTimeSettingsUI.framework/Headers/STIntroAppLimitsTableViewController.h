// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STINTROAPPLIMITSTABLEVIEWCONTROLLER_H
#define STINTROAPPLIMITSTABLEVIEWCONTROLLER_H

@class UITableViewController, NSDateComponentsFormatter;


#import "STAllowance.h"

@interface STIntroAppLimitsTableViewController : UITableViewController

@property (readonly) STAllowance *allowance; // ivar: _allowance
@property BOOL showingAllCategories; // ivar: _showingAllCategories
@property BOOL showingDatePicker; // ivar: _showingDatePicker
@property (readonly) NSDateComponentsFormatter *timeAmountFormatter; // ivar: _timeAmountFormatter


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_selectedCategories;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_datePickerChanged:(id)arg0 ;
-(void)_stIntroAppLimitsTableViewControllerCommonInit;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif