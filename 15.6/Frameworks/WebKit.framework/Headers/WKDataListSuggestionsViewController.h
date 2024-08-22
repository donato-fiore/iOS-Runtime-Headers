// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKDATALISTSUGGESTIONSVIEWCONTROLLER_H
#define WKDATALISTSUGGESTIONSVIEWCONTROLLER_H

@class UITableViewController;


#import "WKDataListSuggestionsControl.h"

@interface WKDataListSuggestionsViewController : UITableViewController

@property (weak, nonatomic) WKDataListSuggestionsControl *control; // ivar: _control


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)reloadData;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif