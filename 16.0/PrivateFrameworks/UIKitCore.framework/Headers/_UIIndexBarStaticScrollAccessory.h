// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIINDEXBARSTATICSCROLLACCESSORY_H
#define _UIINDEXBARSTATICSCROLLACCESSORY_H

@class UIStaticScrollBar;
@protocol UIScrollAccessory;


#import "UIIndexBarAccessoryView.h"
#import "UIScrollView.h"

@interface _UIIndexBarStaticScrollAccessory : UIStaticScrollBar <UIScrollAccessory>



@property (nonatomic) NSInteger edge; // ivar: _edge
@property (readonly, nonatomic) UIIndexBarAccessoryView *indexBarView; // ivar: _indexBarView
@property (readonly, nonatomic) BOOL overlay; // ivar: _overlay
@property (weak, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (nonatomic) BOOL shouldInsetButtonsForIndex;
@property (nonatomic) BOOL showIndexBar; // ivar: _showIndexBar


-(NSInteger)desiredAccessoryEdge;
-(void)layoutSubviews;
-(void)update;


@end


#endif