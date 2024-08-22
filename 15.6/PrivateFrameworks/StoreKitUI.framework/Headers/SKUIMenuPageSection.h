// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIMENUPAGESECTION_H
#define SKUIMENUPAGESECTION_H

@class UIBarButtonItem, UIPopoverController, NSMutableIndexSet, NSString;
@protocol SKUIMenuViewControllerDelegate, SKUIPopupMenuDelegate, SKUISortDataRequestDelegate, UIPopoverControllerDelegate;


#import "SKUIStorePageSection.h"
#import "SKUIPillsControl.h"
#import "SKUIMenuViewController.h"
#import "SKUIPopupMenuHeaderView.h"
#import "SKUIMenuPageComponent.h"

@interface SKUIMenuPageSection : SKUIStorePageSection <SKUIMenuViewControllerDelegate, SKUIPopupMenuDelegate, SKUISortDataRequestDelegate, UIPopoverControllerDelegate>

 {
    UIBarButtonItem *_cancelMenuItem;
    SKUIPillsControl *_pillsControl;
    SKUIMenuViewController *_moreListMenuViewController;
    UIPopoverController *_moreListPopoverController;
    SKUIPopupMenuHeaderView *_popupHeaderView;
    NSInteger _selectedIndex;
    NSMutableIndexSet *_sortRequestIndexSet;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUIMenuPageComponent *pageComponent;
@property (readonly) Class superclass;


-(NSInteger)numberOfCells;
-(id)_contentChildView;
-(id)_newMenuViewController;
-(id)_pillsControl;
-(id)_popupHeaderView;
-(id)backgroundColorForIndexPath:(id)arg0 ;
-(id)cellForIndexPath:(id)arg0 ;
-(id)initWithPageComponent:(id)arg0 ;
-(struct CGSize )cellSizeForIndexPath:(id)arg0 ;
-(struct UIEdgeInsets )sectionContentInset;
-(void)_cancelMenuAction:(id)arg0 ;
-(void)_dismissMenuViewController;
-(void)_loadSortDataIfNecessaryForMenuIndex:(NSInteger)arg0 reason:(NSInteger)arg1 ;
-(void)_pillAction:(id)arg0 ;
-(void)_restorePreviousSelection;
-(void)_setSelectedIndex:(NSInteger)arg0 ;
-(void)_showMenuViewController;
-(void)_showMoreList;
-(void)_showPopoverController;
-(void)dealloc;
-(void)menuViewController:(id)arg0 didSelectItemAtIndex:(NSInteger)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg0 ;
-(void)popupMenuHeader:(id)arg0 didSelectMenuItemAtIndex:(NSInteger)arg1 ;
-(void)sortDataRequest:(id)arg0 didFinishWithLockups:(id)arg1 ;
-(void)willAppearInContext:(id)arg0 ;


@end


#endif