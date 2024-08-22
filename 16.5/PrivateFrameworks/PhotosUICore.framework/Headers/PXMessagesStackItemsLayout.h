// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMESSAGESSTACKITEMSLAYOUT_H
#define PXMESSAGESSTACKITEMSLAYOUT_H

@class NSArray;
@protocol PXGItemsGeometry, PXMessagesStackItemsLayoutDelegate, PXMessagesStackItemsLayoutPrimaryItemDelegate;


#import "PXGItemsLayout.h"
#import "PXMessagesStackItemsLayoutHelper.h"

@interface PXMessagesStackItemsLayout : PXGItemsLayout <PXGItemsGeometry>

 {
    ? _preItemLoadingFlags;
    ? _updateFlags;
    PXMessagesStackItemsLayoutHelper *_layoutHelper;
    NSUInteger _primaryItemIndex;
    _NSRange _leadingItemsRange;
    _NSRange _trailingItemsRange;
    _NSRange _trailingHiddenItemsRange;
    NSInteger _firstTrailingHiddenItemWithTapback;
    NSInteger _secondTrailingHiddenItemWithTapback;
    CGFloat _pageFocus;
    NSUInteger _archSide;
    BOOL _signalDelegateForPrimaryItemChange;
    BOOL _scrollToBeginning;
    CGRect _desiredVisibleRect;
    NSUInteger _decorationInfoBySpriteIndexSize;
    *? _decorationInfoBySpriteIndex;
    BOOL _higherPageDirectionTolerance;
    unsigned short _accessorySpriteMediaVersion;
}


@property (nonatomic) int accessoryMediaKind; // ivar: _accessoryMediaKind
@property (nonatomic) int accessoryPresentationType; // ivar: _accessoryPresentationType
@property (weak, nonatomic) NSObject<PXMessagesStackItemsLayoutDelegate> *delegate;
@property (nonatomic) CGRect desiredLayoutRect; // ivar: _desiredLayoutRect
@property (readonly, nonatomic) CGFloat horizontalContentMargin;
@property (nonatomic) BOOL isSettling; // ivar: _isSettling
@property (nonatomic) CGFloat leftEdgeInternalHorizontalAlignment; // ivar: _leftEdgeInternalHorizontalAlignment
@property (nonatomic) int mediaKind; // ivar: _mediaKind
@property (nonatomic) CGFloat normalizedContentInsets; // ivar: _normalizedContentInsets
@property (nonatomic) CGFloat normalizedPageWidth; // ivar: _normalizedPageWidth
@property (copy, nonatomic) NSArray *normalizedStackHorizontalOffsets; // ivar: _normalizedStackHorizontalOffsets
@property (nonatomic) CGFloat normalizedStackSizeTransform; // ivar: _normalizedStackSizeTransform
@property (nonatomic) CGFloat normalizedStackVerticalOffset; // ivar: _normalizedStackVerticalOffset
@property (readonly, nonatomic) NSInteger numberOfPages;
@property (nonatomic) int presentationType; // ivar: _presentationType
@property (weak, nonatomic) NSObject<PXMessagesStackItemsLayoutPrimaryItemDelegate> *primaryItemDelegate; // ivar: _primaryItemDelegate
@property (readonly, nonatomic) CGFloat primaryItemFocus;
@property (readonly, nonatomic) NSInteger primaryItemIndex;
@property (nonatomic) CGFloat rightEdgeInternalHorizontalAlignment; // ivar: _rightEdgeInternalHorizontalAlignment
@property (nonatomic) CGFloat rotationAngle; // ivar: _rotationAngle
@property (nonatomic) NSUInteger stackedItemsCount; // ivar: _stackedItemsCount


+(id)_sharedTemplateLayoutHelper;
-(BOOL)getHorizontalOffsetForObjectReference:(id)arg0 outOffset:(*CGFloat)arg1 ;
-(BOOL)shouldDecorateUndefinedMediaKind;
-(CGFloat)closestPageOffsetForHorizontalOffset:(CGFloat)arg0 ;
-(CGFloat)horizontalContentMarginForSize:(struct CGSize )arg0 normalizedVerticalContentInsets:(CGFloat)arg1 ;
-(CGFloat)overlayAlphaForSpriteIndex:(unsigned int)arg0 ;
-(CGFloat)pageOffsetGreaterThanOffset:(CGFloat)arg0 ;
-(CGFloat)pageOffsetLessThanOffset:(CGFloat)arg0 ;
-(CGFloat)selectionOverlayAlphaForSpriteIndex:(unsigned int)arg0 ;
-(NSInteger)itemClosestToItem:(NSInteger)arg0 inDirection:(NSUInteger)arg1 ;
-(NSInteger)scrollableAxis;
-(id)init;
-(id)itemsBetweenItem:(NSInteger)arg0 andItem:(NSInteger)arg1 ;
-(id)itemsGeometry;
-(id)itemsInRect:(struct CGRect )arg0 inLayout:(id)arg1 ;
-(struct ? )tapbackConfigurationForProposedConfiguration:(struct ? )arg0 spriteIndex:(unsigned int)arg1 ;
-(struct _NSRange )itemsToLoad;
-(unsigned int)spriteIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(void)_clearLayoutProperties;
-(void)_getItemsForXOffset:(CGFloat)arg0 leadingItems:(struct _NSRange *)arg1 primaryItemIndex:(*NSUInteger)arg2 trailingItems:(struct _NSRange *)arg3 trailingHiddenItems:(struct _NSRange *)arg4 pageFocus:(*CGFloat)arg5 ;
-(void)_invalidateContentSize;
-(void)_invalidateLayoutHelper;
-(void)_invalidateSprites;
-(void)_invalidateVisibleRect;
-(void)_signalDelegatePostUpdate;
-(void)_syncPropertiesToLayoutHelper:(id)arg0 ;
-(void)_updateContentSize;
-(void)_updateLayoutHelper;
-(void)_updateLayoutProperties;
-(void)_updateSprites;
-(void)_updateVisibleRect;
-(void)accessoryItemsDidChange;
-(void)contentSizeDidChange;
-(void)dealloc;
-(void)didUpdate;
-(void)loadedItemsDidChange;
-(void)numberOfAccessoryItemsDidChange;
-(void)referenceSizeDidChange;
-(void)reloadAccessoryItems;
-(void)screenScaleDidChange;
-(void)scrollToBeginning;
-(void)setNumberOfItems:(NSInteger)arg0 withChangeDetails:(id)arg1 changeMediaVersionHandler:(id)arg2 ;
-(void)update;
-(void)userInterfaceDirectionDidChange;
-(void)visibleRectDidChange;
-(void)willUpdate;


@end


#endif