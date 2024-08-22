// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIDEBUGMETRICSDICTIONARYVIEWCONTROLLER_H
#define VUIDEBUGMETRICSDICTIONARYVIEWCONTROLLER_H

@class UITableViewController, NSDictionary;



@interface VUIDebugMetricsDictionaryViewController : UITableViewController

@property (retain, nonatomic) NSDictionary *dictionary; // ivar: _dictionary


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)sortedKeys;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif