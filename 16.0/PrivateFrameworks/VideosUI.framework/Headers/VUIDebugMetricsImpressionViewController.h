// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIDEBUGMETRICSIMPRESSIONVIEWCONTROLLER_H
#define VUIDEBUGMETRICSIMPRESSIONVIEWCONTROLLER_H

@class UITableViewController, NSArray;



@interface VUIDebugMetricsImpressionViewController : UITableViewController

@property (retain, nonatomic) NSArray *array; // ivar: _array


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)object;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)setObject:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif