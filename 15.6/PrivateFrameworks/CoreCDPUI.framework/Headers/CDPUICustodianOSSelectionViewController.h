// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPUICUSTODIANOSSELECTIONVIEWCONTROLLER_H
#define CDPUICUSTODIANOSSELECTIONVIEWCONTROLLER_H

@class NSString;
@protocol UITableViewDataSource, UITableViewDelegate;


#import "CDPTableViewController.h"
#import "CDPUICustodianOSSelectionViewModel.h"

@interface CDPUICustodianOSSelectionViewController : CDPTableViewController <UITableViewDataSource, UITableViewDelegate>

 {
    CDPUICustodianOSSelectionViewModel *_viewModel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)heightForFooterInTableView:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithViewModel:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)viewForFooterInTableView:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif