// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIDEBUGGINGINFORMATIONLISTTABLEVIEWCONTROLLER_H
#define UIDEBUGGINGINFORMATIONLISTTABLEVIEWCONTROLLER_H

@class NSMutableArray;
@protocol UIDebuggingInformationViewController;


#import "UITableViewController.h"

@interface UIDebuggingInformationListTableViewController : UITableViewController <UIDebuggingInformationViewController>

 {
    NSMutableArray *topLevelViewControllers;
    NSMutableArray *topLevelViewControllerNames;
}




-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)topLevelViewControllerForName:(id)arg0 ;
-(void)addTopLevelViewController:(id)arg0 forName:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)toggleOverlayFullscreen;
-(void)toggleOverlayVisibility;
-(void)viewDidLoad;


@end


#endif