// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFUNIFIEDTABBARITEMARRANGEMENT_H
#define SFUNIFIEDTABBARITEMARRANGEMENT_H

@class NSIndexSet, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SFUnifiedBarItem.h"

@interface SFUnifiedTabBarItemArrangement : NSObject <NSCopying>



@property (readonly, nonatomic) SFUnifiedBarItem *activeItem; // ivar: _activeItem
@property (readonly, nonatomic) NSUInteger activeItemIndex; // ivar: _activeItemIndex
@property (readonly, nonatomic) BOOL activeItemIsExpanded; // ivar: _activeItemIsExpanded
@property (readonly, nonatomic) NSInteger activeItemSquishState; // ivar: _activeItemSquishState
@property (readonly, copy, nonatomic) NSIndexSet *allItemIndexes;
@property (readonly, nonatomic) BOOL allowsScrollingPinnedItems; // ivar: _allowsScrollingPinnedItems
@property (readonly, copy, nonatomic) NSArray *items; // ivar: _items
@property (readonly, copy, nonatomic) NSArray *overflowPinnedItems; // ivar: _overflowPinnedItems
@property (readonly, nonatomic) NSUInteger pinnedItemLimit; // ivar: _pinnedItemLimit
@property (readonly, copy, nonatomic) NSArray *pinnedItems; // ivar: _pinnedItems
@property (readonly, nonatomic) BOOL revealsSquishedActiveItem;
@property (readonly, copy, nonatomic) NSArray *unpinnedItems; // ivar: _unpinnedItems


-(BOOL)isEqualToArrangement:(id)arg0 ;
-(id)_initWithItems:(id)arg0 activeItem:(id)arg1 activeItemIsExpanded:(BOOL)arg2 allowPinning:(BOOL)arg3 allowsScrollingPinnedItems:(BOOL)arg4 ;
-(id)arrangementWithActiveItem:(id)arg0 ;
-(id)arrangementWithActiveItemIsExpanded:(BOOL)arg0 ;
-(id)arrangementWithActiveItemSquishState:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithItem:(id)arg0 activeItemIsExpanded:(BOOL)arg1 ;
-(id)initWithItems:(id)arg0 activeItem:(id)arg1 ;
-(id)initWithItems:(id)arg0 activeItem:(id)arg1 activeItemIsExpanded:(BOOL)arg2 allowsScrollingPinnedItems:(BOOL)arg3 ;
-(id)resolvedArrangementWithPinnedItemLimit:(NSUInteger)arg0 overflowItem:(id)arg1 ;
-(void)determineActiveItemSquishStateIfNeeded:(BOOL)arg0 ;


@end


#endif