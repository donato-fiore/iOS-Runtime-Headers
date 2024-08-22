// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISETTINGSDOCUMENTVIEWCONTROLLER_H
#define SKUISETTINGSDOCUMENTVIEWCONTROLLER_H

@class UIBarButtonItem, UITableView, NSString;
@protocol SKUIArtworkRequestDelegate, SKUISettingsDocumentViewDelegate, SKUISettingsEditTransactionDelegate, SKUISettingsGroupsDescriptionDelegate, UITableViewDataSource, UITableViewDelegate, SKUIDocumentViewController;


#import "SKUIViewController.h"
#import "SKUISettingsEditTransaction.h"
#import "SKUIViewElementLayoutContext.h"
#import "SKUIResourceLoader.h"
#import "SKUISettingsContext.h"
#import "SKUISettingsGroupsDescription.h"
#import "SKUISettingsTemplateViewElement.h"
#import "SKUIViewElementTextLayoutCache.h"

@interface SKUISettingsDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUISettingsDocumentViewDelegate, SKUISettingsEditTransactionDelegate, SKUISettingsGroupsDescriptionDelegate, UITableViewDataSource, UITableViewDelegate, SKUIDocumentViewController>

 {
    UIBarButtonItem *_barButtonItemCancel;
    UIBarButtonItem *_barButtonItemDone;
    UIBarButtonItem *_barButtonItemEdit;
    SKUISettingsEditTransaction *_editTransaction;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIResourceLoader *_resourceLoader;
    SKUISettingsContext *_settingsContext;
    SKUISettingsGroupsDescription *_settingsGroupsDescription;
    UITableView *_tableView;
    SKUISettingsTemplateViewElement *_templateElement;
    SKUIViewElementTextLayoutCache *_textLayoutCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)_heightThatFitsWidth:(CGFloat)arg0 withSettingsHeaderFooterDescription:(id)arg1 context:(id)arg2 ;
+(id)_settingsGroupsFromTemplateElement:(id)arg0 withDelegate:(id)arg1 settingsContext:(id)arg2 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_barButtonItemCancel;
-(id)_barButtonItemDone;
-(id)_barButtonItemEdit;
-(id)_dequeueHeaderFooterViewWithReuseIdentifier:(id)arg0 ;
-(id)_layoutContext;
-(id)_resourceLoader;
-(id)_tableView;
-(id)_textLayoutCache;
-(id)_viewForSettingsHeaderFooterDescription:(id)arg0 ;
-(id)initWithTemplateElement:(id)arg0 clientContext:(id)arg1 ;
-(id)owningViewControllerForSettingsGroupsDescription:(id)arg0 ;
-(id)settingsGroupsDescription:(id)arg0 viewForSettingAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_cancelButtonAction:(id)arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_deselectItemsAnimated:(BOOL)arg0 ;
-(void)_doneButtonAction:(id)arg0 ;
-(void)_editButtonAction:(id)arg0 ;
-(void)_invalidateLayout;
-(void)_reloadData;
-(void)_showBarItemLeft:(id)arg0 right:(id)arg1 animated:(BOOL)arg2 ;
-(void)_showEditBarButtonItemAnimated:(BOOL)arg0 ;
-(void)_showEditingBarButtonItemsEnabled:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)dealloc;
-(void)documentDidUpdate:(id)arg0 ;
-(void)loadView;
-(void)settingsDocumentViewDidChangeTintColor:(id)arg0 ;
-(void)settingsEditTransaction:(id)arg0 isValid:(BOOL)arg1 ;
-(void)settingsEditTransactionDidCompleteTransaction:(id)arg0 ;
-(void)settingsEditTransactionDidFailTransaction:(id)arg0 ;
-(void)settingsEditTransactionWillBeginTransaction:(id)arg0 ;
-(void)settingsEditTransactionWillCommitTransaction:(id)arg0 ;
-(void)settingsGroupsDescription:(id)arg0 deletedSettingAtIndexPath:(id)arg1 ;
-(void)settingsGroupsDescription:(id)arg0 deletedSettingsGroupAtIndex:(NSUInteger)arg1 ;
-(void)settingsGroupsDescription:(id)arg0 didUpdateSettingsDescription:(id)arg1 ;
-(void)settingsGroupsDescription:(id)arg0 dismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)settingsGroupsDescription:(id)arg0 presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)settingsGroupsDescriptionDidUpdateValidity:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif