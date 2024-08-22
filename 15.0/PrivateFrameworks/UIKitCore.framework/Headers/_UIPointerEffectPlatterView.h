// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPOINTEREFFECTPLATTERVIEW_H
#define _UIPOINTEREFFECTPLATTERVIEW_H

@class NSMutableArray;


#import "UIView.h"
#import "_UIPortalView.h"
#import "_UILumaTrackingBackdropView.h"
#import "UITargetedPreview.h"
#import "_UIPointerEffectTintView.h"
#import "UIPointerShape.h"

@interface _UIPointerEffectPlatterView : UIView

@property (retain, nonatomic) NSMutableArray *accessoryPortals; // ivar: _accessoryPortals
@property (retain, nonatomic) _UIPortalView *contentPortalView; // ivar: _contentPortalView
@property (retain, nonatomic) UIView *contentSourceView; // ivar: _contentSourceView
@property (nonatomic) BOOL geometryFrozen; // ivar: _geometryFrozen
@property (retain, nonatomic) _UILumaTrackingBackdropView *lumaTrackingView; // ivar: _lumaTrackingView
@property (nonatomic, getter=isPressed) BOOL pressed; // ivar: _pressed
@property (nonatomic) CGFloat shadowAlpha; // ivar: _shadowAlpha
@property (retain, nonatomic) UIView *shadowView; // ivar: _shadowView
@property (nonatomic) BOOL shouldMaskSpecularHighlight; // ivar: _shouldMaskSpecularHighlight
@property (retain, nonatomic) UIView *specularHighlight; // ivar: _specularHighlight
@property (retain, nonatomic) UIView *specularOverlayView; // ivar: _specularOverlayView
@property (copy, nonatomic) UITargetedPreview *targetedPreview; // ivar: _targetedPreview
@property (copy, nonatomic) id *tintColorMatrixProvider; // ivar: _tintColorMatrixProvider
@property (nonatomic, getter=isTintDisabled) BOOL tintDisabled; // ivar: _tintDisabled
@property (nonatomic) NSInteger tintMode; // ivar: _tintMode
@property (retain, nonatomic) _UIPointerEffectTintView *tintView; // ivar: _tintView
@property (retain, nonatomic) UIPointerShape *tintViewShape; // ivar: _tintViewShape
@property (nonatomic) BOOL useSoftShadow; // ivar: _useSoftShadow


-(BOOL)_ignoreRemoveAllAnimations;
-(BOOL)_isEligibleForFocusOcclusion;
-(id)_newLumaTrackingViewForTintView:(id)arg0 ;
-(id)_newShadowView;
-(id)_newTintView;
-(id)_specularOverlayWithHighlightPortal:(id)arg0 shouldMask:(BOOL)arg1 ;
-(id)initWithTargetedPreview:(id)arg0 tintViewShape:(id)arg1 ;
-(void)_installAccessoryView:(id)arg0 ;
-(void)_layoutTintView;
-(void)_updateContentMask;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setCenter:(struct CGPoint )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHidden:(BOOL)arg0 ;


@end


#endif