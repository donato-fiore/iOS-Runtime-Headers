// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCOUNTRYPICKERCONTROLLER_H
#define CNCOUNTRYPICKERCONTROLLER_H

@class UINavigationController, UILocalizedIndexedCollation, NSArray, NSString, NSIndexPath, UITableViewController;
@protocol UITableViewDataSource, UITableViewDelegate, CNCountryPickerControllerDelegate;



@interface CNCountryPickerController : UINavigationController <UITableViewDataSource, UITableViewDelegate>



@property (retain, nonatomic) UILocalizedIndexedCollation *collation; // ivar: _collation
@property (copy, nonatomic) NSArray *countries; // ivar: _countries
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNCountryPickerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *sections; // ivar: _sections
@property (copy, nonatomic) NSString *selectedCountryCode; // ivar: _selectedCountryCode
@property (retain, nonatomic) NSIndexPath *selectedIndexPath; // ivar: _selectedIndexPath
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableViewController *tableViewController; // ivar: _tableViewController


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSInteger)tableView:(id)arg0 sectionForSectionIndexTitle:(id)arg1 atIndex:(NSInteger)arg2 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)sectionIndexTitlesForTableView:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_configureSections;
-(void)_loadCountryCodes;
-(void)cancelPicker:(id)arg0 ;
-(void)dealloc;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)windowDidRotate:(id)arg0 ;


@end


#endif