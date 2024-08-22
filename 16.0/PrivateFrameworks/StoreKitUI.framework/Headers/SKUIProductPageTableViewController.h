// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIPRODUCTPAGETABLEVIEWCONTROLLER_H
#define SKUIPRODUCTPAGETABLEVIEWCONTROLLER_H

@class UIViewController, UIColor, NSString, NSArray, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate, SKUIProductPageChildViewControllerDelegate, SKUIProductPageChildViewController;


#import "SKUIProductPageTableView.h"
#import "SKUIClientContext.h"
#import "SKUIColorScheme.h"
#import "SKUIProductPageHeaderViewController.h"
#import "SKUILayoutCache.h"

@interface SKUIProductPageTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

 {
    UIColor *_evenColor;
    UIColor *_color;
    SKUIProductPageTableView *_tableView;
}


@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (copy, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIProductPageChildViewControllerDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) NSObject<SKUIProductPageChildViewController> *delegateSender; // ivar: _delegateSender
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController; // ivar: _headerViewController
@property (copy, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView;
@property (retain, nonatomic) SKUILayoutCache *textLayoutCache; // ivar: _textLayoutCache


-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_textLayoutRequestWithText:(id)arg0 ;
-(id)initWithInAppPurchases:(id)arg0 clientContext:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithReleaseNotes:(id)arg0 clientContext:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_addHeaderView;
-(void)dealloc;
-(void)loadView;
-(void)scrollToView:(id)arg0 animated:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif