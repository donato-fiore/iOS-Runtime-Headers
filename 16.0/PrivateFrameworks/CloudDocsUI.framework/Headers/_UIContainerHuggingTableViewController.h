// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICONTAINERHUGGINGTABLEVIEWCONTROLLER_H
#define _UICONTAINERHUGGINGTABLEVIEWCONTROLLER_H

@class UITableViewController;


#import "_UIDocumentPickerContainerViewHuggingTableView.h"

@interface _UIContainerHuggingTableViewController : UITableViewController

@property (retain, nonatomic) _UIDocumentPickerContainerViewHuggingTableView *tableView;


-(id)initWithStyle:(NSInteger)arg0 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif