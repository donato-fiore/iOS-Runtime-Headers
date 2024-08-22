// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFUITTRUTTERANCESELECTIONTABLEVIEWCONTROLLER_H
#define AFUITTRUTTERANCESELECTIONTABLEVIEWCONTROLLER_H

@class UITableViewController, NSArray, NSString;
@protocol UITableViewDelegate;



@interface AFUITTRUtteranceSelectionTableViewController : UITableViewController <UITableViewDelegate>

 {
    NSArray *_reports;
    id *_completion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithReports:(id)arg0 completion:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif