// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDADDDATAVIEWCONTROLLER_H
#define WDADDDATAVIEWCONTROLLER_H

@class HKTableViewController, HKDisplayType, HKHealthStore, HKUnitPreferenceController, HKDateCache, HKManualEntryValidationController, NSArray, NSDictionary, NSDate;



@interface WDAddDataViewController : HKTableViewController {
    HKDisplayType *_displayType;
    HKHealthStore *_healthStore;
    HKUnitPreferenceController *_unitController;
    HKDateCache *_dateCache;
    HKManualEntryValidationController *_validationController;
    NSArray *_tableViewCellsBySection;
    NSDictionary *_manualEntryItems;
}


@property (copy, nonatomic) NSDate *initialStartDate; // ivar: _initialStartDate
@property (nonatomic) BOOL savingEnabled;


-(NSInteger)numberOfSections;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)defaultEditingItem;
-(id)defaultMetadata;
-(id)generateHKObjects;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayType:(id)arg0 healthStore:(id)arg1 unitController:(id)arg2 initialStartDate:(id)arg3 dateCache:(id)arg4 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)manualEntryItemsForSection:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_dataValidated;
-(void)_loadTableViewCellsBySectionIfNecessary;
-(void)_showValidationConfirmAlertWithErrorString:(id)arg0 ;
-(void)_showValidationErrorAlertWithErrorString:(id)arg0 ;
-(void)addButtonTapped:(id)arg0 ;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)reloadManualEntryItems;
-(void)reloadManualEntryItemsAndReloadTableView:(BOOL)arg0 ;
-(void)saveHKObjectWithCompletion:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)validateDataWithCompletion:(id)arg0 ;
-(void)validateMaximumAllowedDurationFor:(id)arg0 endDate:(id)arg1 competion:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif