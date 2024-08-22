// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCONTENTITEMSVIEWCONTROLLER_H
#define WFCONTENTITEMSVIEWCONTROLLER_H

@class UITableViewController, NSArray;



@interface WFContentItemsViewController : UITableViewController

@property (nonatomic) BOOL allowsCoercion; // ivar: _allowsCoercion
@property (retain, nonatomic) NSArray *contentItems; // ivar: _contentItems


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif