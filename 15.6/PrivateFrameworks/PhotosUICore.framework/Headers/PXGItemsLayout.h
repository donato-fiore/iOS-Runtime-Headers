// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGITEMSLAYOUT_H
#define PXGITEMSLAYOUT_H

@protocol PXGLayoutContentSource, PXGItemsLayoutDelegate, PXGItemsGeometry;


#import "PXGLayout.h"

@interface PXGItemsLayout : PXGLayout {
    ? _loadedItemsUpdateFlags;
    ? _updateFlags;
    NSUInteger _delegateRespondsTo;
    NSInteger _applyingItemChangesCount;
    *NSInteger _currentStylableItems;
    *NSInteger _pendingStylableItems;
    *BOOL _pendingAnimations;
    *NSInteger _styleableAnimations;
    *CGFloat _stylablePaddings;
    ? _accessoryItemsUpdateFlags;
    PXGLayout *_accessoryItemsContainerLayout;
}


@property (nonatomic) NSInteger _numberOfItems; // ivar: __numberOfItems
@property (weak, nonatomic) NSObject<PXGLayoutContentSource> *accessoryItemContentSource; // ivar: _accessoryItemContentSource
@property (weak, nonatomic) NSObject<PXGItemsLayoutDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) id *dropTargetObjectReference; // ivar: _dropTargetObjectReference
@property (nonatomic) NSUInteger dropTargetStyle; // ivar: _dropTargetStyle
@property (readonly, nonatomic) NSObject<PXGItemsLayoutDelegate> *insetDelegate;
@property (readonly, nonatomic) BOOL isApplyingItemChanges;
@property (readonly, nonatomic) NSObject<PXGItemsGeometry> *itemsGeometry; // ivar: _itemsGeometry
@property (nonatomic, getter=isLazy) BOOL lazy; // ivar: _lazy
@property (nonatomic) _NSRange loadedItems; // ivar: _loadedItems
@property (readonly, nonatomic) NSObject<PXGItemsLayoutDelegate> *marginDelegate;
@property (nonatomic) NSInteger numberOfAccessoryItems; // ivar: _numberOfAccessoryItems
@property (nonatomic) NSInteger numberOfItems;


-(BOOL)delegateRespondsTo:(NSUInteger)arg0 ;
-(BOOL)shouldInvalidateDecorationForModifiedSprites;
-(BOOL)spriteIndexIsAccessoryItem:(unsigned int)arg0 ;
-(BOOL)spriteIndexIsItem:(unsigned int)arg0 ;
-(NSInteger)accessoryItemForSpriteIndex:(unsigned int)arg0 ;
-(NSInteger)itemForObjectReference:(id)arg0 ;
-(NSInteger)itemForObjectReference:(id)arg0 options:(NSUInteger)arg1 ;
-(NSInteger)itemForSpriteIndex:(unsigned int)arg0 ;
-(id)axSpriteIndexes;
-(id)axSpriteIndexesInRect:(struct CGRect )arg0 ;
-(id)axVisibleSpriteIndexes;
-(id)description;
-(id)hitTestResultForSpriteIndex:(unsigned int)arg0 ;
-(id)init;
-(id)itemsForSpriteIndexes:(id)arg0 ;
-(id)itemsLayout;
-(id)layoutForItemChanges;
-(id)loadedItemsForItems:(id)arg0 ;
-(id)objectReferenceForItem:(NSInteger)arg0 ;
-(id)objectReferenceForSpriteIndex:(unsigned int)arg0 ;
-(id)spriteIndexesForItems:(id)arg0 ;
-(struct CGSize )sizeForItem:(NSInteger)arg0 ;
-(struct _NSRange )itemsToLoad;
-(unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg0 inDirection:(NSUInteger)arg1 ;
-(unsigned int)spriteIndexForAccessoryItem:(NSInteger)arg0 ;
-(unsigned int)spriteIndexForItem:(NSInteger)arg0 ;
-(void)_handleFocusChangeWithUserInfo:(id)arg0 ;
-(void)_handleSelectionChangeWithUserInfo:(id)arg0 ;
-(void)_invalidateAccessoryItems;
-(void)_updateAccessoryItems;
-(void)_updateFocusedItemIfNeeded;
-(void)_updateHoveredItemIfNeeded;
-(void)_updateLoadedItems;
-(void)_updateStylableType:(NSInteger)arg0 ;
-(void)accessoryItemsDidChange;
-(void)axGroup:(id)arg0 didChange:(NSUInteger)arg1 userInfo:(id)arg2 ;
-(void)beginApplyingItemChanges;
-(void)dealloc;
-(void)didUpdate;
-(void)effectsDidChange;
-(void)endApplyingItemChanges;
-(void)enumerateVisibleAnchoringLayoutsUsingBlock:(id)arg0 ;
-(void)invalidateEffects;
-(void)invalidateLoadedItems;
-(void)invalidateStylableType:(NSInteger)arg0 ;
-(void)modifyAccessoryItemSpritesInRange:(struct _PXGSpriteIndexRange )arg0 state:(id)arg1 ;
-(void)setAnimationParameters:(struct ? )arg0 forStylableType:(NSInteger)arg1 ;
-(void)setItem:(NSInteger)arg0 forStylableType:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)update;
-(void)updateAccessoryItemsIfNeeded;
-(void)updateLoadedItemsIfNeeded;
-(void)willUpdate;


@end


#endif