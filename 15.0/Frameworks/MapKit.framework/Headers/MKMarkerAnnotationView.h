// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKMARKERANNOTATIONVIEW_H
#define MKMARKERANNOTATIONVIEW_H

@class UIImageView, UIView, UIImage, NSString, UIColor, GEOFeatureStyleAttributes;


#import "MKAnnotationView.h"
#import "_MKBezierPathView.h"
#import "_MKUILabel.h"
#import "MKWalletMerchantStylingInfo.h"

@interface MKMarkerAnnotationView : MKAnnotationView {
    UIImageView *_shadow;
    _MKBezierPathView *_markerView;
    UIImageView *_glyphImageView;
    _MKUILabel *_glyphLabel;
    _MKBezierPathView *_selectedMarkerView;
    UIImageView *_selectedGlyphImageView;
    _MKUILabel *_selectedGlyphLabel;
    _MKBezierPathView *_selectedDotView;
    UIView *_contentMaskView;
    MKWalletMerchantStylingInfo *_walletMerchantStylingInfo;
    BOOL _isObserving;
}


@property (nonatomic) BOOL animatesWhenAdded; // ivar: _animatesWhenAdded
@property (copy, nonatomic) UIImage *glyphImage; // ivar: _glyphImage
@property (copy, nonatomic) NSString *glyphText; // ivar: _glyphText
@property (copy, nonatomic) UIColor *glyphTintColor; // ivar: _glyphTintColor
@property (copy, nonatomic) UIColor *markerStrokeTintColor; // ivar: _markerStrokeTintColor
@property (nonatomic) CGFloat markerStrokeWidth; // ivar: _markerStrokeWidth
@property (copy, nonatomic) UIColor *markerTintColor; // ivar: _markerTintColor
@property (retain, nonatomic) UIView *selectedContentView;
@property (copy, nonatomic) UIImage *selectedGlyphImage; // ivar: _selectedGlyphImage
@property (retain, nonatomic, getter=_styleAttributes, setter=_setStyleAttributes:) GEOFeatureStyleAttributes *styleAttributes; // ivar: _customStyleAttributes
@property (nonatomic) NSInteger subtitleVisibility;
@property (nonatomic) NSInteger titleVisibility;
@property (retain, nonatomic, getter=_walletMerchantStylingInfo, setter=_setWalletMerchantStylingInfo:) MKWalletMerchantStylingInfo *walletMerchantStylingInfo;


+(Class)_mapkitLeafClass;
+(float)_defaultDisplayPriority;
-(BOOL)_hasDataRequiringCallout;
-(BOOL)_shouldDeselectWhenDragged;
-(BOOL)canShowCallout;
-(BOOL)isProvidingCustomFeature;
-(BOOL)updateCalloutViewIfNeededAnimated:(BOOL)arg0 ;
-(CGFloat)_effectiveMarkerStrokeWidthForState:(NSInteger)arg0 ;
-(CGFloat)_effectiveShadowAlphaForState:(NSInteger)arg0 ;
-(NSInteger)_currentMarkerState;
-(NSInteger)_stateForIsSelected:(BOOL)arg0 ;
-(id)_effectiveGlyphImageForState:(NSInteger)arg0 isSystemProvided:(*BOOL)arg1 ;
-(id)_effectiveGlyphText;
-(id)_effectiveGlyphTintColorForState:(NSInteger)arg0 ;
-(id)_effectiveMarkerStrokeTintColorForState:(NSInteger)arg0 ;
-(id)_effectiveMarkerTintColorForState:(NSInteger)arg0 ;
-(id)_effectiveSubtitlesIsCollidable:(*BOOL)arg0 ;
-(id)initWithAnnotation:(id)arg0 reuseIdentifier:(id)arg1 ;
-(struct ? )_metricsForState:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )_defaultCollisionAlignmentRectInsets;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_configureAnimated:(BOOL)arg0 fromState:(NSInteger)arg1 toState:(NSInteger)arg2 ;
-(void)_configureViewsForState:(NSInteger)arg0 usesCallout:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_didDragWithVelocity:(struct CGPoint )arg0 ;
-(void)_setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setShadowAlpha:(CGFloat)arg0 transform:(struct CGAffineTransform )arg1 duration:(CGFloat)arg2 ;
-(void)_setupNormalViewsIfNeeded;
-(void)_setupSelectedViewsIfNeededUsesCallout:(BOOL)arg0 ;
-(void)_swayAnimation;
-(void)_unhideForDisplay;
-(void)_updateContentForState:(NSInteger)arg0 ;
-(void)_updateContentForState:(NSInteger)arg0 forceUpdate:(BOOL)arg1 ;
-(void)_updateStyle;
-(void)dealloc;
-(void)layoutSublayersOfLayer:(id)arg0 ;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)prepareForDisplay;
-(void)prepareForReuse;
-(void)prepareForSnapshotting;
-(void)setAnnotation:(id)arg0 ;
-(void)setDragState:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif