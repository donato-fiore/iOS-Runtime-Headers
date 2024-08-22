// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUIVARIANTSELECTORVIEW_H
#define TUIVARIANTSELECTORVIEW_H

@class UIView, NSMutableArray, UIKBTree, UILayoutGuide, UIKBRenderTraits;


#import "TUIDrawingView.h"

@interface TUIVariantSelectorView : UIView

@property (retain, nonatomic) NSMutableArray *arrangedVariantCells; // ivar: _arrangedVariantCells
@property (readonly, nonatomic) UIKBTree *associatedTree;
@property (retain, nonatomic) UIView *backdropView; // ivar: _backdropView
@property (retain, nonatomic) TUIDrawingView *backgroundMaskView; // ivar: _backgroundMaskView
@property (retain, nonatomic) UIKBTree *backingTree; // ivar: _backingTree
@property (readonly, nonatomic) UILayoutGuide *baseKeyLayoutGuide; // ivar: _baseKeyLayoutGuide
@property (nonatomic) BOOL baseKeyOnRight; // ivar: _baseKeyOnRight
@property (retain, nonatomic) TUIDrawingView *borderView; // ivar: _borderView
@property (retain, nonatomic) UIView *deepShadowView; // ivar: _deepShadowView
@property (retain, nonatomic) UIView *keyShadowView; // ivar: _keyShadowView
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (nonatomic) BOOL needsPopup; // ivar: _needsPopup
@property (retain, nonatomic) UIKBRenderTraits *renderTraits; // ivar: _renderTraits
@property (readonly, nonatomic) NSUInteger selectedVariant; // ivar: _selectedVariant
@property (weak, nonatomic) UIView *touchesForwardingView; // ivar: _touchesForwardingView
@property (retain, nonatomic) UILayoutGuide *variantLayoutGuide; // ivar: _variantLayoutGuide
@property (retain, nonatomic) UIView *variantView; // ivar: _variantView


-(BOOL)highlightCellAtLocation:(struct CGPoint )arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(NSUInteger)indexOfHighlightedVariant;
-(id)constraintsToMatchInnerView:(id)arg0 toOuterView:(id)arg1 withInsets:(struct UIEdgeInsets )arg2 ;
-(id)constraintsToMatchView:(id)arg0 toLayoutGuide:(id)arg1 withInsets:(struct UIEdgeInsets )arg2 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithKey:(id)arg0 renderTraits:(id)arg1 ;
-(id)paddleBezierPath;
-(id)variantCellAtLocation:(struct CGPoint )arg0 ;
-(void)addVariantsForKey:(id)arg0 toView:(id)arg1 ;
-(void)finishVariantSelection;
-(void)layoutSubviews;
-(void)popupConstructor;
-(void)setInitialHighlight;
-(void)unhighlightAllViews;
-(void)updateConstraints;
-(void)updateRenderTraits:(id)arg0 forState:(int)arg1 ;
-(void)updateSelectorForTouch:(id)arg0 event:(id)arg1 ;
-(void)updateVariantsIfNeededForKey:(id)arg0 ;


@end


#endif