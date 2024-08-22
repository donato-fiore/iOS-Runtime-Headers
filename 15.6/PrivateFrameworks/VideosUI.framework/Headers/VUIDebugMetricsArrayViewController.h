// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIDEBUGMETRICSARRAYVIEWCONTROLLER_H
#define VUIDEBUGMETRICSARRAYVIEWCONTROLLER_H

@class UITableViewController, NSArray, NSDictionary;



@interface VUIDebugMetricsArrayViewController : UITableViewController

@property (retain, nonatomic) NSArray *array; // ivar: _array
@property (retain, nonatomic) NSDictionary *cachedKeysOrder; // ivar: _cachedKeysOrder


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)object;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)generateCachedKeys;
-(void)setObject:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif