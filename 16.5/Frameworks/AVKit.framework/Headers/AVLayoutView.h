// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVLAYOUTVIEW_H
#define AVLAYOUTVIEW_H

@class NSArray, NSString, NSMutableArray, UIVisualEffectView, UIView<AVLayoutViewItem>;
@protocol AVPlaybackControlsViewItem;


#import "AVView.h"
#import "AVCABackdropLayerView.h"
#import "AVCustomStackLayout.h"
#import "AVLayoutItemAttributes.h"

@interface AVLayoutView : AVView <AVPlaybackControlsViewItem>



@property (readonly, copy, nonatomic) NSArray *arrangedSubviews; // ivar: _arrangedSubviews
@property (retain, nonatomic) AVCABackdropLayerView *backdropLayerView; // ivar: _backdropLayerView
@property (nonatomic, getter=isCollapsed) BOOL collapsed; // ivar: _collapsed
@property (readonly, nonatomic, getter=isCollapsedOrExcluded) BOOL collapsedOrExcluded; // ivar: _collapsedOrExcluded
@property (nonatomic) NSDirectionalEdgeInsets contentLayoutMargins;
@property (retain, nonatomic) AVCustomStackLayout *currentStackLayout; // ivar: _currentStackLayout
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *debugIdentifier; // ivar: _debugIdentifier
@property (readonly, copy) NSString *description;
@property (nonatomic) CGSize extrinsicContentSize; // ivar: _extrinsicContentSize
@property (retain, nonatomic) NSMutableArray *flattenedArrangedSubviewsInLayoutOrder; // ivar: _flattenedArrangedSubviewsInLayoutOrder
@property (nonatomic) BOOL hasAlternateAppearance; // ivar: _hasAlternateAppearance
@property (nonatomic) BOOL hasFullScreenAppearance; // ivar: _hasFullScreenAppearance
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isIncluded) BOOL included; // ivar: _included
@property (readonly, nonatomic) AVLayoutItemAttributes *layoutAttributes; // ivar: _layoutAttributes
@property (nonatomic, getter=isLayoutDirty) BOOL layoutDirty; // ivar: _layoutDirty
@property (nonatomic) BOOL prefersLowQualityEffects; // ivar: _prefersLowQualityEffects
@property (nonatomic, getter=isRemoved) BOOL removed; // ivar: _removed
@property (retain, nonatomic) UIVisualEffectView *secondaryMaterialOverlayView; // ivar: _secondaryMaterialOverlayView
@property (nonatomic) NSUInteger shapeStyle; // ivar: _shapeStyle
@property (nonatomic) BOOL stackLayoutNeedsUpdate; // ivar: _stackLayoutNeedsUpdate
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView<AVLayoutViewItem> *targetViewForSecondaryMaterialOverlayView; // ivar: _targetViewForSecondaryMaterialOverlayView


+(Class)layerClass;
-(BOOL)hasVisibleArrangedSubview;
-(CGFloat)layoutHeightThatFitsRowsStartingWithRow:(NSUInteger)arg0 ;
-(id)_includedItemsFromSubviews:(id)arg0 inStackLayout:(id)arg1 thatFitSize:(struct CGSize )arg2 ;
-(id)backgroundColor;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)prioritizedSizeThatFitsSize:(struct CGSize )arg0 ;
-(void)_applyShapeStyle;
-(void)_insertArrangedSubview:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_removeArrangedSubview:(id)arg0 ;
-(void)_updateStackLayoutIfNeeded;
-(void)layoutSubviews;
-(void)reevaluateHiddenStateOfAllItems;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setNeedsLayout;
-(void)setRowSpacing:(CGFloat)arg0 afterRow:(NSUInteger)arg1 ;


@end


#endif