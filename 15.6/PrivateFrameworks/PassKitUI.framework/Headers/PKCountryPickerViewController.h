// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKCOUNTRYPICKERVIEWCONTROLLER_H
#define PKCOUNTRYPICKERVIEWCONTROLLER_H

@class UITableViewController, UILocalizedIndexedCollation, NSArray;
@protocol PKCountryPickerViewControllerDelegate;



@interface PKCountryPickerViewController : UITableViewController

@property (retain, nonatomic) UILocalizedIndexedCollation *collation; // ivar: _collation
@property (retain, nonatomic) NSArray *countries; // ivar: _countries
@property (weak, nonatomic) NSObject<PKCountryPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (nonatomic) NSInteger style; // ivar: _style


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSInteger)tableView:(id)arg0 sectionForSectionIndexTitle:(id)arg1 atIndex:(NSInteger)arg2 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)sectionIndexTitlesForTableView:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_configureSections;
-(void)_loadCountryCodes;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif