// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGGRIDLAYOUT_H
#define PXGGRIDLAYOUT_H

@class NSString;
@protocol PXZoomablePhotosContentLayout, PXGItemsGeometry, PXGDiagnosticsProvider;


#import "PXGItemsLayout.h"

@interface PXGGridLayout : PXGItemsLayout <PXZoomablePhotosContentLayout, PXGItemsGeometry, PXGDiagnosticsProvider>

 {
    ? _updateFlags;
    BOOL _isUpdating;
    CGSize _itemSize;
    CGSize _finalInterItemSpacing;
    UIEdgeInsets _finalInsets;
}


@property (nonatomic) CGFloat accessoryAlpha;
@property (nonatomic) CGFloat accessoryAlpha; // ivar: _accessoryAlpha
@property (nonatomic) int accessoryMediaKind; // ivar: _accessoryMediaKind
@property (nonatomic) int accessoryPresentationType; // ivar: _accessoryPresentationType
@property (retain, nonatomic) id *anchorObjectReference;
@property (retain, nonatomic) id *anchorObjectReference; // ivar: _anchorObjectReference
@property (nonatomic) CGPoint anchorViewportCenter;
@property (nonatomic) CGPoint anchorViewportCenter; // ivar: _anchorViewportCenter
@property (nonatomic) CGFloat aspectRatioLimit; // ivar: _aspectRatioLimit
@property (nonatomic) NSInteger axis; // ivar: _axis
@property (nonatomic) BOOL canHandleVisibleRectRejection; // ivar: _canHandleVisibleRectRejection
@property (nonatomic) NSInteger contentMode;
@property (nonatomic) NSInteger contentMode; // ivar: _contentMode
@property (nonatomic) CGPoint contentOrigin; // ivar: _contentOrigin
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *diagnosticDescription;
@property (nonatomic) ? edgeCornerRadius; // ivar: _edgeCornerRadius
@property (nonatomic) BOOL enableBestCropRect;
@property (nonatomic) BOOL enableBestCropRect; // ivar: _enableBestCropRect
@property (nonatomic) BOOL enableEffects;
@property (nonatomic) BOOL enableEffects; // ivar: _enableEffects
@property (nonatomic) BOOL enablePerItemCornerRadius;
@property (nonatomic) BOOL enablePerItemCornerRadius; // ivar: _enablePerItemCornerRadius
@property (nonatomic) BOOL enablePerItemInsets;
@property (nonatomic) BOOL enablePerItemInsets; // ivar: _enablePerItemInsets
@property (nonatomic) BOOL enablePerItemMargin; // ivar: _enablePerItemMargin
@property (nonatomic) BOOL fillSafeAreaTopInset;
@property (nonatomic) BOOL fillSafeAreaTopInset; // ivar: _fillSafeAreaTopInset
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideIncompleteLastRowOrColumn;
@property (nonatomic) BOOL hideIncompleteLastRowOrColumn; // ivar: _hideIncompleteLastRowOrColumn
@property (nonatomic) CGSize interItemSpacing;
@property (nonatomic) CGSize interItemSpacing; // ivar: _interItemSpacing
@property (nonatomic) CGFloat itemAspectRatio;
@property (nonatomic) CGFloat itemAspectRatio; // ivar: _itemAspectRatio
@property (nonatomic) CGFloat itemCaptionSpacing;
@property (nonatomic) CGFloat itemCaptionSpacing; // ivar: _itemCaptionSpacing
@property (readonly, nonatomic) BOOL itemCaptionsVisible;
@property (nonatomic) ? itemCornerRadius;
@property (nonatomic) ? itemCornerRadius; // ivar: _itemCornerRadius
@property (nonatomic) float itemZPosition; // ivar: _itemZPosition
@property (nonatomic, getter=isLazy) BOOL lazy;
@property (nonatomic) BOOL loadItemsOutsideAnchorViewport;
@property (nonatomic) BOOL loadItemsOutsideAnchorViewport; // ivar: _loadItemsOutsideAnchorViewport
@property (readonly, nonatomic) _NSRange loadedItems;
@property (readonly, nonatomic) CGRect loadedItemsRect;
@property (readonly, nonatomic) CGRect loadedItemsRect;
@property (nonatomic) int mediaKind; // ivar: _mediaKind
@property (nonatomic) BOOL mediaTargetSizeIgnoresSpacing; // ivar: _mediaTargetSizeIgnoresSpacing
@property (nonatomic) NSInteger numberOfColumns;
@property (nonatomic) NSInteger numberOfColumns; // ivar: _numberOfColumns
@property (nonatomic) NSInteger numberOfRows; // ivar: _numberOfRows
@property (readonly, nonatomic) NSInteger numberOfVisualColumns;
@property (readonly, nonatomic) NSInteger numberOfVisualItems;
@property (readonly, nonatomic) NSInteger numberOfVisualRows;
@property (nonatomic) UIEdgeInsets padding;
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (nonatomic) int presentationType; // ivar: _presentationType
@property (readonly, nonatomic) CGFloat rowHeight;
@property (readonly, nonatomic) CGFloat rowHeight;
@property (nonatomic) unsigned char spriteInfoFlags;
@property (nonatomic) unsigned char spriteInfoFlags; // ivar: _spriteInfoFlags
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsAutomaticContentRotation; // ivar: _supportsAutomaticContentRotation
@property (readonly, nonatomic) BOOL supportsContentMode;
@property (readonly, nonatomic) NSInteger visualItemShift;
@property (nonatomic) NSInteger visualItemShift; // ivar: _visualItemShift


-(BOOL)shiftItem:(NSInteger)arg0 toColumn:(NSInteger)arg1 hideIncompleteRows:(BOOL)arg2 ;
-(BOOL)shouldUpdateDecorationMediaTargetSizes;
-(NSInteger)_rowForItem:(NSInteger)arg0 ;
-(NSInteger)columnForItem:(NSInteger)arg0 ;
-(NSInteger)itemClosestTo:(struct CGPoint )arg0 ;
-(NSInteger)itemClosestToItem:(NSInteger)arg0 inDirection:(NSUInteger)arg1 ;
-(NSInteger)scrollableAxis;
-(id)dropTargetObjectReferenceForLocation:(struct CGPoint )arg0 ;
-(id)init;
-(id)insetDelegate;
-(id)itemsBetweenItem:(NSInteger)arg0 andItem:(NSInteger)arg1 ;
-(id)itemsGeometry;
-(id)itemsInRect:(struct CGRect )arg0 inLayout:(id)arg1 ;
-(struct CGPoint )_contentPointInLayout:(struct CGPoint )arg0 ;
-(struct CGPoint )_layoutPointInContent:(struct CGPoint )arg0 ;
-(struct CGRect )_contentRectInLayout:(struct CGRect )arg0 ;
-(struct CGRect )_frameForItem:(NSInteger)arg0 usingInterItemSpacing:(struct CGSize )arg1 itemSize:(struct CGSize )arg2 insets:(struct UIEdgeInsets )arg3 contentMode:(NSInteger)arg4 ;
-(struct CGRect )_layoutRectInContent:(struct CGRect )arg0 ;
-(struct CGRect )_pageAlignedRectForVisibleRect:(struct CGRect )arg0 ;
-(struct CGRect )frameForItem:(NSInteger)arg0 ;
-(struct CGRect )frameForItem:(NSInteger)arg0 usingInterItemSpacing:(struct CGSize )arg1 ;
-(struct CGSize )sizeForItem:(NSInteger)arg0 ;
-(struct _NSRange )_itemsToLoadForVisibleRect:(struct CGRect )arg0 ;
-(struct _NSRange )itemRangeForSpriteIndexRange:(struct _PXGSpriteIndexRange )arg0 ;
-(struct _NSRange )itemRangeInRect:(struct CGRect )arg0 ;
-(struct _NSRange )itemsToLoad;
-(struct _PXGSpriteIndexRange )spriteIndexRangeCoveringRect:(struct CGRect )arg0 ;
-(unsigned int)spriteIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(void)_getItemSize:(struct CGSize *)arg0 finalInteritemSpacing:(struct CGSize *)arg1 finalInsets:(struct UIEdgeInsets *)arg2 forDesiredInterItemSpacing:(struct CGSize )arg3 padding:(struct UIEdgeInsets )arg4 ;
-(void)_updateColumnsMetrics;
-(void)_updateContentSize;
-(void)_updateSpriteStyles;
-(void)_updateSprites;
-(void)accessoryItemsDidChange;
-(void)alphaDidChange;
// -(void)applySpriteChangeDetails:(id)arg0 countAfterChanges:(unsigned int)arg1 initialState:(id)arg2 modifyState:(unk)arg3  ;
-(void)didUpdate;
-(void)dropTargetObjectReferenceDidChange;
-(void)effectsDidChange;
-(void)entityManagerDidChange;
-(void)numberOfAccessoryItemsDidChange;
-(void)referenceSizeDidChange;
-(void)safeAreaInsetsDidChange;
-(void)screenScaleDidChange;
-(void)setNeedsUpdateOfScrollableAxis;
-(void)setNumberOfItems:(NSInteger)arg0 withChangeDetails:(id)arg1 changeMediaVersionHandler:(id)arg2 ;
-(void)update;
-(void)visibleRectDidChange;
-(void)willUpdate;


@end


#endif