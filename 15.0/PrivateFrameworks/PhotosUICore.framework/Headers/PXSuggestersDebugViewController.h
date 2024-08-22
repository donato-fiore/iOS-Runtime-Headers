// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSUGGESTERSDEBUGVIEWCONTROLLER_H
#define PXSUGGESTERSDEBUGVIEWCONTROLLER_H

@class UITableViewController, NSArray, NSDictionary;



@interface PXSuggestersDebugViewController : UITableViewController {
    NSArray *_items;
    NSDictionary *_options;
}




-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithOptions:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_fetchSuggesters;
-(void)configureCell:(id)arg0 withItem:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif