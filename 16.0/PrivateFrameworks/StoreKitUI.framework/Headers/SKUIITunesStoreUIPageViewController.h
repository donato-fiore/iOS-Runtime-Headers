// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIITUNESSTOREUIPAGEVIEWCONTROLLER_H
#define SKUIITUNESSTOREUIPAGEVIEWCONTROLLER_H

@class SUStorePageViewController, SUBarButtonItem, NSString;


#import "SKProductPageViewController.h"

@interface SKUIITunesStoreUIPageViewController : SUStorePageViewController {
    SUBarButtonItem *_cancelButtonItem;
}


@property (copy, nonatomic) NSString *cancelButtonTitle; // ivar: _cancelButtonTitle
@property (weak, nonatomic) SKProductPageViewController *productPageViewController; // ivar: _productPageViewController
@property (nonatomic) BOOL showsCancelButton; // ivar: _showsCancelButton


-(BOOL)presentDialogForError:(id)arg0 pendUntilVisible:(BOOL)arg1 ;
-(id)_cancelButtonItem;
-(void)_addCancelButtonToNavigationItem:(id)arg0 ;
-(void)_storeSheetCancelButtonAction:(id)arg0 ;
-(void)dealloc;
-(void)handleFailureWithError:(id)arg0 ;
-(void)resetNavigationItem:(id)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif