// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OBTABLEWELCOMECONTROLLER_H
#define OBTABLEWELCOMECONTROLLER_H

@class NSString, UIView, UITableView;
@protocol UIScrollViewDelegate, _UIScrollViewLayoutObserver;


#import "OBWelcomeController.h"
#import "OBTableHeaderFooterView.h"

@interface OBTableWelcomeController : OBWelcomeController <UIScrollViewDelegate, _UIScrollViewLayoutObserver>



@property (nonatomic) BOOL adoptTableViewScrollView; // ivar: _adoptTableViewScrollView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) OBTableHeaderFooterView *footerContainer; // ivar: _footerContainer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) OBTableHeaderFooterView *headerContainer; // ivar: _headerContainer
@property (retain, nonatomic) UIView *hostedTableFooterView; // ivar: _hostedTableFooterView
@property (retain, nonatomic) UIView *hostedTableHeaderView; // ivar: _hostedTableHeaderView
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)_buttonTrayInlined;
-(BOOL)_scrollContentUnderButtonTrayForGroupedStyle;
-(BOOL)_scrollViewContentIsUnderTray;
-(BOOL)contentViewUnderButtonTray;
-(CGFloat)headerViewBottomToTableViewTopPadding;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 adoptTableViewScrollView:(BOOL)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 adoptTableViewScrollView:(BOOL)arg3 ;
-(id)scrollView;
-(void)_floatButtonTray;
-(void)_inlineButtonTray;
-(void)_insertPendingTableView;
-(void)_layoutButtonTray;
-(void)_layoutFooterContainerFloatButtonTray;
-(void)_layoutFooterContainerInlineButtonTray;
-(void)_scrollViewDidLayoutSubviews:(id)arg0 ;
-(void)_setupScrollView;
-(void)_updateButtonTrayTableFooterContainerSizeIfNeeded;
-(void)_updateDirectionalLayoutMarginsForTableView;
-(void)_updateHeaderFooterViewSizeIfNeeded;
-(void)_updateHeaderTopOffsetConstraint;
-(void)_updateTableHeaderViewSizeIfNeeded;
-(void)loadView;
-(void)setTableFooterView:(id)arg0 ;
-(void)setTableHeaderView:(id)arg0 ;
-(void)updateDirectionalLayoutMargins;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif