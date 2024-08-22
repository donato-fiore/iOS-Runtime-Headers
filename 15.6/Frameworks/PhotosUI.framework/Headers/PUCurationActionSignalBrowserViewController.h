// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUCURATIONACTIONSIGNALBROWSERVIEWCONTROLLER_H
#define PUCURATIONACTIONSIGNALBROWSERVIEWCONTROLLER_H

@class UITableViewController, NSArray;



@interface PUCurationActionSignalBrowserViewController : UITableViewController

@property (retain, nonatomic) NSArray *availableActions; // ivar: _availableActions


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif