// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TABBARMANAGER_H
#define TABBARMANAGER_H

@class NSHashTable, NSSet, SFUnifiedTabBarItemArrangement;

#import <Foundation/Foundation.h>

#import "UnifiedTabBar.h"
#import "UnifiedBar.h"

@interface TabBarManager : NSObject {
    NSHashTable *_observers;
    UnifiedTabBar *_cachedInlineTabBar;
}


@property (nonatomic) NSInteger displayMode; // ivar: _displayMode
@property (readonly, nonatomic) UnifiedTabBar *effectiveTabBar;
@property (retain, nonatomic) NSSet *hiddenItems; // ivar: _hiddenItems
@property (readonly, nonatomic) UnifiedTabBar *inlineTabBar; // ivar: _inlineTabBar
@property (retain, nonatomic) SFUnifiedTabBarItemArrangement *itemArrangement; // ivar: _itemArrangement
@property (readonly, nonatomic) UnifiedTabBar *standaloneTabBar; // ivar: _standaloneTabBar
@property (nonatomic) BOOL suppressesStandaloneTabBar; // ivar: _suppressesStandaloneTabBar
@property (retain, nonatomic) UnifiedBar *unifiedBar; // ivar: _unifiedBar


-(BOOL)_canAnimateInlineTabBarForTransitionToItemArrangement:(id)arg0 ;
-(id)_inlineItemArrangementForItemArrangement:(id)arg0 displayMode:(NSInteger)arg1 ;
-(id)_standaloneItemArrangementForItemArrangement:(id)arg0 displayMode:(NSInteger)arg1 ;
-(id)init;
-(void)_notifyDidCreateTabBar:(id)arg0 ;
-(void)_notifyDidRemoveTabBar:(id)arg0 ;
-(void)_setUsesInlineTabBar:(BOOL)arg0 ;
-(void)_setUsesStandaloneTabBar:(BOOL)arg0 ;
-(void)_updateUsesStandaloneTabBar;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)scrollToActiveItemAnimated:(BOOL)arg0 ;
-(void)setActiveItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)setActiveItemIsExpanded:(BOOL)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif