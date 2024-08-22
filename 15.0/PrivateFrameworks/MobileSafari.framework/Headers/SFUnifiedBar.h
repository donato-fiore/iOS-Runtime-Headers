// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFUNIFIEDBAR_H
#define SFUNIFIEDBAR_H

@class UIView, UIButton, NSMutableSet, UIView<SFUnifiedBarContentView>;


#import "SFUnifiedBarMetrics.h"
#import "SFThemeColorEffectView.h"
#import "SFUnifiedBarTheme.h"
#import "SFUnifiedBarItemArrangement.h"

@interface SFUnifiedBar : UIView {
    SFUnifiedBarMetrics *_barMetrics;
    BOOL _needsUpdateMetrics;
    SFThemeColorEffectView *_backgroundView;
    UIView *_squishedContentView;
    UIButton *_squishedBarButton;
    NSMutableSet *_itemViewsToRemoveOnNextLayout;
}


@property (nonatomic, setter=_setShowsSquishedContent:) BOOL _showsSquishedContent; // ivar: _showsSquishedContent
@property (readonly, nonatomic) CGPoint _squishAnchorPoint;
@property (readonly, nonatomic) CGFloat _squishVerticalOffset;
@property (nonatomic) NSUInteger backgroundVisibility; // ivar: _backgroundVisibility
@property (retain, nonatomic) SFUnifiedBarTheme *barTheme; // ivar: _barTheme
@property (nonatomic) CGFloat chromelessScrollDistance; // ivar: _chromelessScrollDistance
@property (nonatomic) CGFloat contentUnderStatusBarHeight; // ivar: _contentUnderStatusBarHeight
@property (retain, nonatomic) UIView<SFUnifiedBarContentView> *contentView; // ivar: _contentView
@property (nonatomic) BOOL contentViewPinsScrollPositionToTrailingEdgeDuringResize;
@property (readonly, nonatomic) CGFloat expandedHeight;
@property (nonatomic) CGFloat extendedBottomHeight; // ivar: _extendedBottomHeight
@property (retain, nonatomic) SFUnifiedBarItemArrangement *itemArrangement; // ivar: _itemArrangement
@property (retain, nonatomic) UIView<SFUnifiedBarContentView> *secondaryContentView; // ivar: _secondaryContentView
@property (nonatomic) BOOL showsSecondaryContentView; // ivar: _showsSecondaryContentView
@property (readonly, nonatomic) NSUInteger sizeClass; // ivar: _sizeClass
@property (readonly, nonatomic) CGFloat squishTransformFactor;
@property (readonly, nonatomic) CGFloat squishedHeight;


-(CGFloat)_backgroundAlpha;
-(CGFloat)_itemSpacing;
-(CGFloat)_themeColorVisibility;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_installContentView:(id)arg0 ;
-(void)_layOutContentView;
-(void)_layOutSecondaryContentView;
-(void)_layoutIndexes:(id)arg0 ofItems:(id)arg1 alongEdge:(NSInteger)arg2 transitioning:(BOOL)arg3 ;
-(void)_layoutItems:(id)arg0 alongEdge:(NSInteger)arg1 ;
-(void)_removeViewsForIndexes:(id)arg0 ofItems:(id)arg1 ;
-(void)_setNeedsRemovalForViewsAtIndexes:(id)arg0 ofItems:(id)arg1 ;
-(void)_uninstallContentView:(id)arg0 ;
-(void)_updateBackgroundAlpha;
-(void)_updateSizeClass;
-(void)_updateSquishedAccessoryViews;
-(void)layoutSubviews;
-(void)metricsDidChange;
-(void)squishedBarTapped;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif