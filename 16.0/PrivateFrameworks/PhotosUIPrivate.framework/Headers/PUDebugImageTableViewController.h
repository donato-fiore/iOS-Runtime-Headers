// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUDEBUGIMAGETABLEVIEWCONTROLLER_H
#define PUDEBUGIMAGETABLEVIEWCONTROLLER_H

@class UITableViewController, NSString, NSArray;
@protocol UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate;



@interface PUDebugImageTableViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy) NSArray *tableData; // ivar: _tableData


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)jobNumberFromPath:(id)arg0 ;
-(id)pidFromPath:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif