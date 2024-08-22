// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFUNIFIEDBAR_H
#define SFUNIFIEDBAR_H

@class UIView, UIButton, NSMutableSet;


#import "SFUnifiedBarMetrics.h"
#import "SFThemeColorEffectView.h"
#import "SFUnifiedBarTheme.h"
#import "SFUnifiedBarContentArrangement.h"
#import "SFUnifiedBarItemArrangement.h"

@interface SFUnifiedBar : UIView {
    SFUnifiedBarMetrics *_barMetrics;
    BOOL _needsNotifyMetricsDidChange;
    SFThemeColorEffectView *_backgroundView;
    UIView *_separator;
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
@property (retain, nonatomic) SFUnifiedBarContentArrangement *contentArrangement; // ivar: _contentArrangement
@property (nonatomic) CGFloat contentUnderStatusBarHeight; // ivar: _contentUnderStatusBarHeight
@property (readonly, nonatomic) CGFloat expandedHeight;
@property (nonatomic) CGFloat extendedBottomHeight; // ivar: _extendedBottomHeight
@property (nonatomic) BOOL inlineContentViewPinsScrollPositionToTrailingEdgeDuringResize;
@property (retain, nonatomic) SFUnifiedBarItemArrangement *itemArrangement; // ivar: _itemArrangement
@property (readonly, nonatomic) UIView *leadingItemContainerView; // ivar: _leadingItemContainerView
@property (nonatomic) NSUInteger marginLevel; // ivar: _marginLevel
@property (nonatomic) BOOL showsSeparator;
@property (readonly, nonatomic) NSUInteger sizeClass; // ivar: _sizeClass
@property (readonly, nonatomic) CGFloat squishTransformFactor;
@property (readonly, nonatomic) CGFloat squishedHeight;
@property (readonly, nonatomic) UIView *trailingItemContainerView; // ivar: _trailingItemContainerView
@property (nonatomic) BOOL usesFaintSeparator; // ivar: _usesFaintSeparator


-(CGFloat)_backgroundAlpha;
-(CGFloat)_contentViewSpacing;
-(CGFloat)_inlineContentHeight;
-(CGFloat)_itemSpacing;
-(CGFloat)_layOutStandaloneContentView:(id)arg0 atIndex:(NSUInteger)arg1 minY:(CGFloat)arg2 ;
-(CGFloat)_layoutIndexes:(id)arg0 ofItems:(id)arg1 alongEdge:(NSInteger)arg2 transitioning:(BOOL)arg3 ;
-(CGFloat)_spacingBelowContentView:(id)arg0 ;
-(CGFloat)_themeColorVisibility;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_installContentView:(id)arg0 ;
-(void)_layOutInlineContentView;
-(void)_layOutStandaloneContentViews;
-(void)_layoutItems:(id)arg0 alongEdge:(NSInteger)arg1 ;
-(void)_removeViewsForIndexes:(id)arg0 ofItems:(id)arg1 ;
-(void)_setNeedsRemovalForViewsAtIndexes:(id)arg0 ofItems:(id)arg1 ;
-(void)_uninstallContentView:(id)arg0 ;
-(void)_updateBackgroundAlpha;
-(void)_updateSeparatorColor;
-(void)_updateSizeClass;
-(void)_updateSquishedAccessoryViews;
-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(void)metricsDidChange;
-(void)squishedBarTapped;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif