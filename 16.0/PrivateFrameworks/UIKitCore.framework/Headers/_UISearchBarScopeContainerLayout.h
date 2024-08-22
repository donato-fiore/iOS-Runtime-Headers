// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISEARCHBARSCOPECONTAINERLAYOUT_H
#define _UISEARCHBARSCOPECONTAINERLAYOUT_H

@class UISearchBarLayoutBase;
@protocol _UISearchBarContainerSublayoutDelegate;


#import "_UISearchBarSearchContainerLayout.h"
#import "UIView.h"

@interface _UISearchBarScopeContainerLayout : UISearchBarLayoutBase

@property (nonatomic, getter=isCollapsed) BOOL collapsed; // ivar: _collapsed
@property (readonly, nonatomic) UIEdgeInsets containerSpecificInsets;
@property (weak, nonatomic) NSObject<_UISearchBarContainerSublayoutDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL hasScopeBar; // ivar: _hasScopeBar
@property (readonly, nonatomic) CGFloat naturalContainerHeight;
@property (retain, nonatomic) _UISearchBarSearchContainerLayout *neighboringSearchLayout; // ivar: _neighboringSearchLayout
@property (nonatomic) NSUInteger numberOfScopeTitles; // ivar: _numberOfScopeTitles
@property (retain, nonatomic) UIView *scopeBar; // ivar: _scopeBar
@property (readonly, nonatomic) CGRect scopeBarLayoutFrame; // ivar: _scopeBarLayoutFrame
@property (readonly, nonatomic) CGFloat scopeBarOpacity; // ivar: _scopeBarOpacity


-(CGFloat)scopeControlHeight;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)applyLayout;
-(void)updateLayout;


@end


#endif