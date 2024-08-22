// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12FEEDBACKCORE25_FBKACTIONSHEETCONTROLLER_H
#define _TTC12FEEDBACKCORE25_FBKACTIONSHEETCONTROLLER_H

@class UITableViewController;



@interface _TtC12FeedbackCore25_FBKActionSheetController : UITableViewController {
    ? actions;
    ? headerTitle;
    ? headerSubtitle;
    ? dismissesOnAction;
}




-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 actions:(id)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)addAction:(id)arg0 ;
-(void)addActionWithTitle:(id)arg0 image:(id)arg1 actionHandler:(id)arg2 ;
-(void)dismissSelf;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif