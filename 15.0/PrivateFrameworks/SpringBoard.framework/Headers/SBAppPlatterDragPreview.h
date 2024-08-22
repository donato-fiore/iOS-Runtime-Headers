// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPPLATTERDRAGPREVIEW_H
#define SBAPPPLATTERDRAGPREVIEW_H

@class UIView, NSHashTable, SBIconView, SBFView, BSCornerRadiusConfiguration, NSString, NSArray, SBIcon;
@protocol SBIconDragPreview, BSDescriptionProviding;


#import "SBApplicationBlurContentView.h"
#import "SBPortalView.h"

@interface SBAppPlatterDragPreview : UIView <SBIconDragPreview, BSDescriptionProviding>

 {
    BOOL _isBlurredPlatterReady;
    BOOL _hasAnimatedToBlurredPlatter;
    NSUInteger _platterViewAlphaAnimationCount;
    NSHashTable *_cleanupDelayAssertions;
    BOOL _iconIsHighlighted;
    BOOL _iconInitiallyShowingCloseBox;
    BOOL _delayingCleanup;
    UIView *_sourceView;
    SBApplicationBlurContentView *_platterView;
    SBIconView *_referenceIconView;
    SBIconView *_iconView;
    UIView *_captureOnlyBackgroundView;
    UIView *_anchorPointAdjustmentContainerView;
    UIView *_iconContainerView;
    UIView *_cornerMaskingView;
    SBPortalView *_sourcePortalView;
    UIView *_unclippedSourceContainerView;
    SBFView *_diffuseShadowView;
    SBFView *_rimShadowView;
}


@property (nonatomic) CGPoint anchorPoint; // ivar: _anchorPoint
@property (readonly, nonatomic, getter=isAnimatingPlatterViewAlpha) BOOL animatingPlatterViewAlpha;
@property (copy, nonatomic) id *cleanUpHandler; // ivar: _cleanUpHandler
@property (retain, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration; // ivar: _cornerRadiusConfiguration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *diffuseShadowFilters; // ivar: _diffuseShadowFilters
@property (nonatomic) SBDragPreviewShadowParameters diffuseShadowParameters; // ivar: _diffuseShadowParameters
@property (nonatomic) NSUInteger dragState; // ivar: _dragState
@property (nonatomic, getter=isFlocked) BOOL flocked; // ivar: _flocked
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBIcon *icon;
@property (nonatomic) BOOL iconAllowsAccessory; // ivar: _iconAllowsAccessory
@property (nonatomic) BOOL iconAllowsLabelArea; // ivar: _iconAllowsLabelArea
@property (nonatomic) BOOL iconCanShowCloseBox; // ivar: _iconCanShowCloseBox
@property (nonatomic) CGFloat iconContentScale; // ivar: _iconContentScale
@property (nonatomic) BOOL iconIsEditing;
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (nonatomic) CGSize platterSize; // ivar: _platterSize
@property (readonly, nonatomic) SBApplicationBlurContentView *platterView;
@property (copy, nonatomic) id *platterViewAlphaAnimationCompletionBlock; // ivar: _platterViewAlphaAnimationCompletionBlock
@property (copy, nonatomic) NSArray *rimShadowFilters; // ivar: _rimShadowFilters
@property (nonatomic) SBDragPreviewShadowParameters rimShadowParameters; // ivar: _rimShadowParameters
@property (nonatomic) CGFloat rotation; // ivar: _rotation
@property (readonly, nonatomic) UIView *sourceView;
@property (nonatomic) CGFloat sourceViewScale; // ivar: _sourceViewScale
@property (readonly) Class superclass;


-(BOOL)_effectiveIconAllowsLabelArea;
-(BOOL)_effectiveIconCanShowCloseBox;
-(BOOL)_effectiveIconIsHighlighted;
-(BOOL)_isDragging;
-(CGFloat)_blurContentViewIconViewCenterYOffset;
-(CGFloat)_effectiveCornerRadius;
-(CGFloat)_effectiveIconAccessoryAlpha;
-(CGFloat)_effectiveIconContentScale;
-(NSUInteger)_effectiveMode;
-(id)_effectiveCornerRadiusConfiguration;
-(id)delayCleanUpForReason:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithReferenceIconView:(id)arg0 sourceView:(id)arg1 ;
-(id)initWithReferenceIconView:(id)arg0 sourceView:(id)arg1 sourceViewScale:(CGFloat)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGPoint )_effectiveIconContainerCenter;
-(struct CGRect )_effectiveIconViewFrame;
-(struct CGRect )_effectivePlatterFrame;
-(void)_configureIconViewWithReferenceIconView:(id)arg0 ;
-(void)_getIconAlpha:(*CGFloat)arg0 platterAlpha:(*CGFloat)arg1 ;
-(void)_matchMoveView:(id)arg0 toContainerView:(id)arg1 ;
-(void)_removeDelayCleanupAssertion:(id)arg0 ;
-(void)_setSourcePortalViewHidden:(BOOL)arg0 ;
-(void)_updateContainerViewPositionForAnchorPoint;
-(void)_updateIconViewComponentVisibility;
-(void)_updateShadowView;
-(void)_updateShowDebugIconBorderWithColor:(id)arg0 ;
-(void)_updateSubviewVisibility;
-(void)configurePlatterForSceneHandle:(id)arg0 withTargetView:(id)arg1 completion:(id)arg2 ;
-(void)draggingSourceCancelAnimationCompleted;
-(void)draggingSourceDroppedWithOperation:(NSUInteger)arg0 ;
-(void)dropDestinationAnimationCompleted;
-(void)handleCleanup;
-(void)invalidateSourceView;
-(void)layoutSubviews;
-(void)updateDestinationIconLocation:(id)arg0 allowsLabelArea:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateSourceView:(id)arg0 ;


@end


#endif