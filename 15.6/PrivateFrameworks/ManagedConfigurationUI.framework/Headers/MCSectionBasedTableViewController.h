// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCSECTIONBASEDTABLEVIEWCONTROLLER_H
#define MCSECTIONBASEDTABLEVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray;
@protocol UITableViewDelegate, UITableViewDataSource;


#import "MCSectionBasedTableView.h"

@interface MCSectionBasedTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MCSectionBasedTableView *sectionBasedTableView; // ivar: _sectionBasedTableView
@property (copy, nonatomic) NSArray *sectionControllers; // ivar: _sectionControllers
@property (readonly) Class superclass;


-(CGFloat)tableView:(id)arg0 estimatedHeightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)defaultView;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_registerCellClass;
-(void)loadView;
-(void)viewDidLoad;


@end


#endif