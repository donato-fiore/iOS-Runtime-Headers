// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TABBARITEMLAYOUTINFO_H
#define TABBARITEMLAYOUTINFO_H

@class UIView;

#import <Foundation/Foundation.h>

#import "TabBarItemView.h"
#import "TabBar.h"
#import "TabBarItem.h"

@interface TabBarItemLayoutInfo : NSObject {
    TabBarItemView *_tabBarItemView;
    TabBarItemView *_tabBarItemPreviewView;
    UIView *_itemSnapshotView;
}


@property (nonatomic) NSUInteger activeAnimationCount; // ivar: _activeAnimationCount
@property (nonatomic) BOOL canClose; // ivar: _canClose
@property (nonatomic) CGFloat contentOffset; // ivar: _contentOffset
@property (nonatomic) CGRect frame; // ivar: _frame
@property (readonly, nonatomic) BOOL hasViews;
@property (nonatomic) BOOL hidesTitleText; // ivar: _hidesTitleText
@property (nonatomic, getter=isLeadingEdgeVisible) BOOL leadingEdgeVisible; // ivar: _leadingEdgeVisible
@property (nonatomic, getter=isRemovedFromTabBar) BOOL removedFromTabBar; // ivar: _removedFromTabBar
@property (nonatomic, getter=isReordering) BOOL reordering; // ivar: _reordering
@property (readonly, weak, nonatomic) TabBar *tabBar; // ivar: _tabBar
@property (readonly, weak, nonatomic) TabBarItem *tabBarItem; // ivar: _tabBarItem
@property (readonly, nonatomic) TabBarItemView *tabBarItemPreviewView;
@property (readonly, nonatomic) TabBarItemView *tabBarItemView;
@property (nonatomic) CGFloat titleAnchorAdditionalOffset; // ivar: _titleAnchorAdditionalOffset
@property (nonatomic) CGFloat titleLayoutWidth; // ivar: _titleLayoutWidth
@property (nonatomic, getter=isTrailingActiveItem) BOOL trailingActiveItem; // ivar: _trailingActiveItem
@property (nonatomic, getter=isTrailingEdgeVisible) BOOL trailingEdgeVisible; // ivar: _trailingEdgeVisible
@property (readonly, nonatomic) TabBarItemView *viewForDragPreview;
@property (nonatomic, getter=isVisibleInTabBar) BOOL visibleInTabBar; // ivar: _visibleInTabBar


-(BOOL)_requiresViews;
-(NSInteger)_visibleEdge;
-(id)_reusableView;
-(id)init;
-(id)initWithTabBar:(id)arg0 item:(id)arg1 ;
-(void)_clearView:(id)arg0 ;
-(void)_clearViews;
-(void)_clearViewsIfNeeded;
-(void)_updateHidesTitleText;
-(void)clearPreviewView;
-(void)closeButtonTapped:(id)arg0 ;
-(void)dealloc;
-(void)itemDidUpdateIcon;
-(void)itemDidUpdateIsActive;
-(void)itemDidUpdateIsPinned;
-(void)itemDidUpdateIsPlaceholder;
-(void)itemDidUpdateIsUnread;
-(void)itemDidUpdateMediaState;
-(void)itemDidUpdateShareParticipants;
-(void)itemDidUpdateTitle;
-(void)mediaStateMuteButtonTapped:(id)arg0 ;
-(void)updateTabBarStyle;
-(void)updateTitleTruncation;


@end


#endif