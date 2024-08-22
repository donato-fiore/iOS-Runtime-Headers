// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUGRIDCELL_H
#define HUGRIDCELL_H

@class UICollectionViewCell, UIVisualEffect, CAShapeLayer, NSString, UIView, UIVisualEffectView, HFItem, UIPointerInteraction;
@protocol UIPointerInteractionDelegate, HUGridCellProtocol, HUReorderableCellProtocol, HUResizableCellDelegate;


#import "HUGridCellBackgroundView.h"
#import "HUGridCellLayoutOptions.h"

@interface HUGridCell : UICollectionViewCell <UIPointerInteractionDelegate, HUGridCellProtocol, HUReorderableCellProtocol>



@property (readonly, nonatomic) NSUInteger backgroundState;
@property (nonatomic, getter=areCellContentsHidden) BOOL cellContentsHidden; // ivar: _cellContentsHidden
@property (retain, nonatomic) UIVisualEffect *contentEffect; // ivar: _contentEffect
@property (retain, nonatomic) CAShapeLayer *dashedBorderLayer; // ivar: _dashedBorderLayer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HUGridCellBackgroundView *gridBackgroundView; // ivar: _gridBackgroundView
@property (readonly, nonatomic) UIView *gridForegroundContentView;
@property (retain, nonatomic) UIVisualEffectView *gridForegroundView; // ivar: _gridForegroundView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger iconDisplayStyle;
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (retain, nonatomic) HUGridCellLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (readonly, nonatomic) BOOL managesOwnBackgroundViewLayout;
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction; // ivar: _pointerInteraction
@property (nonatomic, getter=isPointerInteractionEnabled) BOOL pointerInteractionEnabled; // ivar: _pointerInteractionEnabled
@property (nonatomic) CGFloat pointerRegionMargin; // ivar: _pointerRegionMargin
@property (nonatomic) NSInteger primaryState; // ivar: _primaryState
@property (nonatomic, getter=isRearranging) BOOL rearranging; // ivar: _rearranging
@property (nonatomic) BOOL reorderable;
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (nonatomic) CGFloat secondaryContentDimmingFactor; // ivar: _secondaryContentDimmingFactor
@property (retain, nonatomic) UIVisualEffect *secondaryContentEffect; // ivar: _secondaryContentEffect
@property (readonly) Class superclass;


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(void)_removeDashedBorderLayer;
-(void)_setupCommonCellAppearance;
-(void)_updateForegroundStyle;
-(void)_updateTintColorSettingsForSubviewsOfView:(id)arg0 desiredDisplayStyle:(NSUInteger)arg1 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)displayStyleDidChange;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif