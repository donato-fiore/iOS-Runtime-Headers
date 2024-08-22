// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDTABLEVIEWCONTROLLER_H
#define WDTABLEVIEWCONTROLLER_H

@class HKTableViewController, NSString, NSArray, UITableView;
@protocol WDTableViewSectionDelegate;


#import "WDProfile.h"

@interface WDTableViewController : HKTableViewController <WDTableViewSectionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WDProfile *profile; // ivar: _profile
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tableSections; // ivar: _tableSections
@property (retain, nonatomic) UITableView *tableView;


-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_section:(NSInteger)arg0 ;
-(id)_sectionAtIndexPath:(id)arg0 ;
-(id)indexPathForCell:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_addObservers;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(void)dealloc;
-(void)pushViewController:(id)arg0 ;
-(void)reloadSection:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)reloadTable;
-(void)sectionAddedChildViewController:(id)arg0 ;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif