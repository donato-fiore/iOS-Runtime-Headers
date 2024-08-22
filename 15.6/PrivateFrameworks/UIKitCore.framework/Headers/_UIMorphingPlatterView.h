// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIMORPHINGPLATTERVIEW_H
#define _UIMORPHINGPLATTERVIEW_H

@class NSMutableDictionary;


#import "UIView.h"
#import "_UIPlatterClippingView.h"
#import "UITargetedPreview.h"
#import "_UIPlatterTransformView.h"
#import "_UIMorphingPlatterAnimatableFloat.h"
#import "_UIPlatterSoftShadowView.h"

@interface _UIMorphingPlatterView : UIView

@property (nonatomic) BOOL allowsElasticMorph; // ivar: _allowsElasticMorph
@property (nonatomic) BOOL allowsUserInteractionInExpandedPreview;
@property (nonatomic) BOOL alwaysCompact; // ivar: _alwaysCompact
@property (readonly, nonatomic) BOOL bothViewsAreLikelyOpaque;
@property (retain, nonatomic) _UIPlatterClippingView *collapsedClippingView; // ivar: _collapsedClippingView
@property (retain, nonatomic) UITargetedPreview *collapsedPreview; // ivar: _collapsedPreview
@property (nonatomic) CGFloat collapsedShadowIntensity; // ivar: _collapsedShadowIntensity
@property (nonatomic) NSInteger collapsedShadowStyle; // ivar: _collapsedShadowStyle
@property (retain, nonatomic) _UIPlatterTransformView *collapsedTransformView; // ivar: _collapsedTransformView
@property (nonatomic) BOOL contentSizeDidChange; // ivar: _contentSizeDidChange
@property (nonatomic) BOOL expanded; // ivar: _expanded
@property (retain, nonatomic) _UIPlatterClippingView *expandedClippingView; // ivar: _expandedClippingView
@property (retain, nonatomic) UITargetedPreview *expandedPreview; // ivar: _expandedPreview
@property (nonatomic) NSInteger expandedShadowStyle; // ivar: _expandedShadowStyle
@property (retain, nonatomic) _UIPlatterTransformView *expandedTransformView; // ivar: _expandedTransformView
@property (retain, nonatomic) _UIMorphingPlatterAnimatableFloat *expansionProgress; // ivar: _expansionProgress
@property (nonatomic, getter=isFrozen) BOOL frozen; // ivar: _frozen
@property (nonatomic) BOOL hideChromeWhenCollapsed; // ivar: _hideChromeWhenCollapsed
@property (nonatomic) BOOL hidesCollapsedSourceView;
@property (nonatomic) CGFloat overrideCollapsedCornerRadius; // ivar: _overrideCollapsedCornerRadius
@property (nonatomic) CGFloat overrideExpandedCornerRadius; // ivar: _overrideExpandedCornerRadius
@property (retain, nonatomic) _UIPlatterSoftShadowView *pathShadowView; // ivar: _pathShadowView
@property (retain, nonatomic) _UIMorphingPlatterAnimatableFloat *platterHeight; // ivar: _platterHeight
@property (retain, nonatomic) _UIMorphingPlatterAnimatableFloat *platterWidth; // ivar: _platterWidth
@property (nonatomic) NSUInteger preferredMorphingAxis; // ivar: _preferredMorphingAxis
@property (nonatomic) BOOL preventPreviewRasterization; // ivar: _preventPreviewRasterization
@property (retain, nonatomic) NSMutableDictionary *shadowViews; // ivar: _shadowViews
@property (nonatomic) BOOL shouldMorphContents; // ivar: _shouldMorphContents


-(BOOL)_previewPrefersApplyingMask:(id)arg0 ;
-(CGFloat)_collapsedCornerRadius:(*BOOL)arg0 ;
-(CGFloat)_collapsedShadowAlphaForExpansionProgress:(CGFloat)arg0 ;
-(CGFloat)_expandedCornerRadius:(*BOOL)arg0 ;
-(CGFloat)_expandedShadowAlphaForExpansionProgress:(CGFloat)arg0 ;
-(id)_clearedInterfaceLevelOverrideTraitCollectionForView:(id)arg0 ;
-(id)_interfaceLevelOverrideTraitCollectionForView:(id)arg0 expanded:(BOOL)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_installPreview:(id)arg0 inClippingView:(id)arg1 transformView:(id)arg2 ;
-(void)_installShadowViewForStyleIfNecessary:(NSInteger)arg0 ;
-(void)_modelUpdates;
-(void)_prepareAnimatableProperties;
-(void)_updateClippingViews;
-(void)_updateCollapsedChrome;
-(void)_updatePathShadow;
-(void)_updatePathShadowTransform;
-(void)_updateShadowsWithExpansionProgress:(CGFloat)arg0 contentBounds:(struct CGRect )arg1 center:(struct CGPoint )arg2 forPresentation:(BOOL)arg3 ;
-(void)didMoveToWindow;
-(void)didTearOffForDrag;
-(void)freezeExpandedPreview;
-(void)layoutSubviews;
-(void)updateContentSize;


@end


#endif