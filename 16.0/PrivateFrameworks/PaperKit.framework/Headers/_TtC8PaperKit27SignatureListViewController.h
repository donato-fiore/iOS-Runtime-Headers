// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8PAPERKIT27SIGNATURELISTVIEWCONTROLLER_H
#define _TTC8PAPERKIT27SIGNATURELISTVIEWCONTROLLER_H

@class UITableViewController;



@interface _TtC8PaperKit27SignatureListViewController : UITableViewController {
    ? rowHeight;
    ? maximumSelectRows;
    ? maximumEditRows;
    ? signatureRowHeight;
    ? showDescriptions;
    ? completion;
}




-(BOOL)_canShowWhileLocked;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;


@end


#endif