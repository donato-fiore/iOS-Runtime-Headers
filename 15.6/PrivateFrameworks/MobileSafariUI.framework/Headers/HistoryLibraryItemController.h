// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HISTORYLIBRARYITEMCONTROLLER_H
#define HISTORYLIBRARYITEMCONTROLLER_H

@class NSString;
@protocol HistoryTableViewControllerDelegate;


#import "LibraryItemController.h"
#import "HistoryTableViewController.h"

@interface HistoryLibraryItemController : LibraryItemController <HistoryTableViewControllerDelegate>

 {
    HistoryTableViewController *_viewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)panelViewControllerShouldTranslucentAppearance:(id)arg0 ;
-(BOOL)selectionFollowsFocus;
-(id)viewController;
-(void)updateListContentConfiguration:(id)arg0 ;


@end


#endif