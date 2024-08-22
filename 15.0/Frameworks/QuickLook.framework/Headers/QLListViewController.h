// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLLISTVIEWCONTROLLER_H
#define QLLISTVIEWCONTROLLER_H

@class UINavigationController, UIPopoverPresentationController, UITableViewController, NSArray, UIBarButtonItem, NSString;
@protocol UITableViewDataSource, UITableViewDelegate, UIPopoverPresentationControllerDelegate, QLListViewControllerDelegate;


#import "QLItem.h"
#import "QLPreviewItemStore.h"
#import "QLListCellManager.h"

@interface QLListViewController : UINavigationController <UITableViewDataSource, UITableViewDelegate, UIPopoverPresentationControllerDelegate>

 {
    UIPopoverPresentationController *_presentationController;
    UITableViewController *_tableViewController;
    QLItem *_currentPreviewItem;
    QLPreviewItemStore *_previewItemStore;
    QLListCellManager *_cellManager;
    NSArray *_itemsWithFolders;
}


@property (weak) NSObject<QLListViewControllerDelegate> *archiveDelegate; // ivar: _archiveDelegate
@property (weak, nonatomic) UIBarButtonItem *barButton; // ivar: _barButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithPreviewItemStore:(id)arg0 currentPreviewItem:(id)arg1 ;
-(id)presentationController:(id)arg0 viewControllerForAdaptivePresentationStyle:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_addPath:(id)arg0 fromPreviewItem:(id)arg1 intoArray:(id)arg2 ;
-(void)_dismiss;
-(void)_generateItemsAndFolders;
-(void)_updateNavigationBarVisibilityForPresentationStyle:(NSInteger)arg0 ;
-(void)prepareForPopoverPresentation:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif