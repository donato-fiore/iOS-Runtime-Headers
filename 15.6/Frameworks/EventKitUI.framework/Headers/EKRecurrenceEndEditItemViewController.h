// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKRECURRENCEENDEDITITEMVIEWCONTROLLER_H
#define EKRECURRENCEENDEDITITEMVIEWCONTROLLER_H

@class NSDate, UITableView, UIDatePicker, UITableViewCell, NSArray, NSString;
@protocol UITableViewDataSource, UITableViewDelegate, EKCellShortener;


#import "EKEditItemViewController.h"
#import "PreferencesValueCell.h"

@interface EKRecurrenceEndEditItemViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate, EKCellShortener>

 {
    PreferencesValueCell *_dateCell;
    NSDate *_preNeverEndDate;
    NSDate *_minimumEndDate;
    int _shorteningStatus;
    BOOL _updatingPicker;
    UITableView *_table;
    UIDatePicker *_datePicker;
    UITableViewCell *_datePickerCell;
    NSArray *_datePickerConstraints;
}


@property (copy, nonatomic) NSDate *bestInitialDate; // ivar: _bestInitialDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDate *repeatEndDate; // ivar: _repeatEndDate
@property (readonly) Class superclass;


+(id)_neverLocalizedString;
-(BOOL)fitsPopoverWhenKeyboardActive;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_cellForRow:(NSInteger)arg0 ;
-(id)_endDateStringForCurrentShorteningStatus;
-(id)_stringForEndDate;
-(id)initWithFrame:(struct CGRect )arg0 styleProvider:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_localeChanged;
-(void)_updateSelectionForCell:(id)arg0 atRow:(NSInteger)arg1 ;
-(void)applyMinimumEndDateToPicker;
-(void)datePickerChanged:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)resetBackgroundColor;
-(void)setMinimumEndDate:(id)arg0 ;
-(void)shortenCell:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updatePicker;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;


@end


#endif