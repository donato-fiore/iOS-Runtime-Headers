// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREDITINGCOLORITEMSSCROLLABLESTACKVIEWCONTROLLER_H
#define PREDITINGCOLORITEMSSCROLLABLESTACKVIEWCONTROLLER_H

@class UIScrollView, UIStackView;


#import "PREditingColorItemsViewController.h"

@interface PREditingColorItemsScrollableStackViewController : PREditingColorItemsViewController

@property (nonatomic) BOOL needsScrollToSelectedItem; // ivar: _needsScrollToSelectedItem
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView


-(CGFloat)estimatedHeight;
-(void)layoutWithItemViews:(id)arg0 ;
-(void)scrollToSelectedItemAnimated:(BOOL)arg0 ;
-(void)updateInteritemSpacingIfNeeded;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif