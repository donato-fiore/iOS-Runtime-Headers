// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLMICROBLOGACCOUNTSTABLEVIEWCONTROLLER_H
#define SLMICROBLOGACCOUNTSTABLEVIEWCONTROLLER_H

@class UITableViewController, NSArray, UIImage;
@protocol SLMicroBlogAccountsTableViewControllerDelegate;


#import "SLMicroBlogUserRecord.h"

@interface SLMicroBlogAccountsTableViewController : UITableViewController {
    NSArray *_accountUserRecords;
    SLMicroBlogUserRecord *_selectedAccountUserRecord;
    id<SLMicroBlogAccountsTableViewControllerDelegate> *_selectionDelegate;
    UIImage *_blankImage;
}




-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_accountUserRecordForIndexPath:(id)arg0 ;
-(id)_blankImage;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)didUpdateAccountUserRecord:(id)arg0 ;
-(void)setAccountUserRecords:(id)arg0 ;
-(void)setCurrentAccountUserRecord:(id)arg0 ;
-(void)setSelectionDelegate:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif