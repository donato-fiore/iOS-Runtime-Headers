// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGONECOLUMNLAYOUT_H
#define PXGONECOLUMNLAYOUT_H

@class NSString;
@protocol PXZoomablePhotosContentLayout, PXGItemsGeometry;


#import "PXGItemsLayout.h"

@interface PXGOneColumnLayout : PXGItemsLayout <PXZoomablePhotosContentLayout, PXGItemsGeometry>

 {
    ? _updateFlags;
    BOOL _isUpdating;
    BOOL _didAlreadyUpdateLoadedItems;
}


@property (nonatomic) CGFloat accessoryAlpha;
@property (nonatomic) NSInteger anchorItem; // ivar: _anchorItem
@property (nonatomic) CGPoint anchorItemCenter; // ivar: _anchorItemCenter
@property (retain, nonatomic) id *anchorObjectReference;
@property (retain, nonatomic) id *anchorObjectReference; // ivar: _anchorObjectReference
@property (nonatomic) CGPoint anchorViewportCenter;
@property (nonatomic) CGPoint anchorViewportCenter; // ivar: _anchorViewportCenter
@property (nonatomic) CGFloat aspectRatioLimit; // ivar: _aspectRatioLimit
@property (nonatomic) NSInteger contentMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableBestCropRect;
@property (nonatomic) BOOL enableBestCropRect; // ivar: _enableBestCropRect
@property (nonatomic) BOOL enableEffects;
@property (nonatomic) BOOL enableEffects; // ivar: _enableEffects
@property (nonatomic) BOOL enablePerItemCornerRadius;
@property (nonatomic) BOOL enablePerItemCornerRadius; // ivar: _enablePerItemCornerRadius
@property (nonatomic) BOOL enablePerItemInsets;
@property (nonatomic) BOOL fillSafeAreaTopInset;
@property (nonatomic) BOOL fillSafeAreaTopInset; // ivar: _fillSafeAreaTopInset
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideIncompleteLastRowOrColumn;
@property (nonatomic) CGSize interItemSpacing;
@property (nonatomic) CGSize interItemSpacing; // ivar: _interItemSpacing
@property (nonatomic) CGFloat itemAspectRatio;
@property (nonatomic) CGFloat itemCaptionSpacing;
@property (nonatomic) CGFloat itemCaptionSpacing; // ivar: _itemCaptionSpacing
@property (readonly, nonatomic) BOOL itemCaptionsVisible;
@property (nonatomic) ? itemCornerRadius;
@property (nonatomic) BOOL loadItemsOutsideAnchorViewport;
@property (readonly, nonatomic) _NSRange loadedItems;
@property (readonly, nonatomic) CGRect loadedItemsRect;
@property (nonatomic) int mediaKind; // ivar: _mediaKind
@property (nonatomic) NSInteger numberOfColumns;
@property (nonatomic) CGFloat overrideAspectRatio; // ivar: _overrideAspectRatio
@property (nonatomic) CGFloat overrideAspectRatioAmount; // ivar: _overrideAspectRatioAmount
@property (nonatomic) UIEdgeInsets padding;
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (nonatomic) int presentationType; // ivar: _presentationType
@property (readonly, nonatomic) CGFloat rowHeight;
@property (nonatomic) unsigned char spriteInfoFlags;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsContentMode;
@property (readonly, nonatomic) NSInteger visualItemShift;


-(BOOL)allowsDanglingUpdatesAssertions;
-(BOOL)canHandleVisibleRectRejection;
-(BOOL)shiftItem:(NSInteger)arg0 toColumn:(NSInteger)arg1 hideIncompleteRows:(BOOL)arg2 ;
-(NSInteger)columnForItem:(NSInteger)arg0 ;
-(NSInteger)itemClosestTo:(struct CGPoint )arg0 ;
-(NSInteger)itemClosestToItem:(NSInteger)arg0 inDirection:(NSUInteger)arg1 ;
-(id)diagnosticDescription;
-(id)init;
-(id)itemsBetweenItem:(NSInteger)arg0 andItem:(NSInteger)arg1 ;
-(id)itemsGeometry;
-(id)itemsInRect:(struct CGRect )arg0 inLayout:(id)arg1 ;
-(struct CGRect )frameForItem:(NSInteger)arg0 ;
-(struct CGRect )frameForItem:(NSInteger)arg0 usingInterItemSpacing:(struct CGSize )arg1 ;
-(struct _NSRange )_itemsToLoadForAnchorItem:(NSInteger)arg0 visibleRect:(struct CGRect )arg1 ;
-(struct _NSRange )itemRangeForSpriteIndexRange:(struct _PXGSpriteIndexRange )arg0 ;
-(struct _NSRange )itemRangeInRect:(struct CGRect )arg0 ;
-(struct _NSRange )itemsToLoad;
-(struct _PXGSpriteIndexRange )spriteIndexRangeCoveringRect:(struct CGRect )arg0 ;
-(unsigned int)spriteIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(void)_updateSpriteStyles;
-(void)_updateSprites;
-(void)_updateVisibleRect;
-(void)alphaDidChange;
// -(void)applySpriteChangeDetails:(id)arg0 countAfterChanges:(unsigned int)arg1 initialState:(id)arg2 modifyState:(unk)arg3  ;
-(void)entityManagerDidChange;
-(void)invalidateLoadedItems;
-(void)referenceSizeDidChange;
-(void)screenScaleDidChange;
-(void)setNumberOfItems:(NSInteger)arg0 withChangeDetails:(id)arg1 changeMediaVersionHandler:(id)arg2 ;
-(void)setVisibleRect:(struct CGRect )arg0 ;
-(void)update;
-(void)visibleRectDidChange;


@end


#endif