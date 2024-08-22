// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15HEALTHRECORDSUI28FILTERSETTINGSVIEWCONTROLLER_H
#define _TTC15HEALTHRECORDSUI28FILTERSETTINGSVIEWCONTROLLER_H

@class HKTableViewController;



@interface _TtC15HealthRecordsUI28FilterSettingsViewController : HKTableViewController {
    ? delegate;
    ? categories;
    ? selectedCategories;
    ? accounts;
    ? selectedAccounts;
    ? defaultCellIdentifier;
    ? defaultHeaderIdentifier;
    ? defaultSectionContentInset;
    ? defaultSectionCornerRadius;
}




-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 selectedCategories:(id)arg1 selectedAccounts:(id)arg2 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)initWithUsingInsetStyling:(BOOL)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)doneButtonTapped;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif