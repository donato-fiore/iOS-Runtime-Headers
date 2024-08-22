// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFVALUELISTVIEWCONTROLLER_H
#define WFVALUELISTVIEWCONTROLLER_H

@class UISwitch, NSMutableArray, NSString, NSArray;


#import "WFInsetTableViewController.h"

@interface WFValueListViewController : WFInsetTableViewController

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) UISwitch *configSwitch; // ivar: _configSwitch
@property (copy, nonatomic) id *footerHandler; // ivar: _footerHandler
@property (nonatomic) BOOL hasSwitch; // ivar: _hasSwitch
@property (retain, nonatomic) NSMutableArray *sections; // ivar: _sections
@property (retain, nonatomic) NSString *selectedTitle; // ivar: _selectedTitle
@property (nonatomic) BOOL switchOn; // ivar: _switchOn
@property (copy, nonatomic) NSString *switchTitle; // ivar: _switchTitle
@property (retain, nonatomic) NSArray *titles; // ivar: _titles


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)cellForTitleAtIndexPath:(id)arg0 ;
-(id)initWithTitles:(id)arg0 switchTitle:(id)arg1 ;
-(id)initWithTitles:(id)arg0 switchTitle:(id)arg1 appearanceProxy:(id)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif