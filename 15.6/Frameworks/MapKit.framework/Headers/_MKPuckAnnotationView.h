// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKPUCKANNOTATIONVIEW_H
#define _MKPUCKANNOTATIONVIEW_H

@class CALayer, CAGradientLayer, NSArray, VKNavigationPuck, CALayer<MKUserLocationHeadingIndicator>, NSString, UIImage, UIColor, CLLocation;
@protocol VKPuckAnimatorTarget;


#import "MKAnnotationView.h"
#import "_MKPuckAccuracyLayer.h"

@interface _MKPuckAnnotationView : MKAnnotationView <VKPuckAnimatorTarget>

 {
    CALayer *_puckLayer;
    CALayer *_glyphLayer;
    CALayer *_puckContainerLayer;
    CALayer *_shadowLayer;
    CALayer *_baseLayer;
    CALayer *_puckTransitionContainer;
    CALayer *_puckTransitionLayer;
    CGFloat _puckScale;
    BOOL _faux3DEnabled;
    CAGradientLayer *_faux3DFaceLayer;
    CAGradientLayer *_faux3DBaseBottomLayer;
    CALayer *_faux3DHighlightMask;
    NSArray *_faux3DHighlightMaskRings;
    CALayer *_innerCircleLayer;
    BOOL _isShowingStaleColor;
    CALayer *_accuracyContainerLayer;
    CALayer *_headingContainerLayer;
    VKNavigationPuck *_navigationPuckMarker;
    CALayer *_pulseLayer;
    _MKPuckAccuracyLayer *_accuracyLayer;
    BOOL _shouldPulse;
    BOOL _hasValidHeading;
    BOOL _useDarkAppearance;
    CGFloat _mapRotation;
    CGFloat _mapCameraDistance;
    CALayer<MKUserLocationHeadingIndicator> *_headingLayer;
    BOOL _headingLayerTracksAccuracy;
    BOOL _hasExplicitCollisionMode;
    id *_minAccuracyConfigListener;
    id *_newPuckConfigListener;
    id *_faux3DPuckConfigListener;
    id *_shelbyvilleConfigListener;
    id *_minUncertaintyConfigListener;
    CGFloat _minimumAccuracyUncertainty;
}


@property (nonatomic) CGFloat accuracyRingAlpha; // ivar: _accuracyRingAlpha
@property (nonatomic, getter=_accuracyRingStrokeOpacityThreshold, setter=_setAccuracyRingStrokeOpacityThreshold:) CGFloat accuracyRingStrokeOpacityThreshold; // ivar: _accuracyRingStrokeOpacityThreshold
@property (nonatomic) BOOL allowsAccuracyRing; // ivar: _allowsAccuracyRing
@property (nonatomic) BOOL allowsPulse; // ivar: _allowsPulse
@property (nonatomic, getter=isAnimatingPresentationAccuracy) BOOL animatingPresentationAccuracy; // ivar: _animatingPresentationAccuracy
@property (nonatomic) BOOL canShowHeadingIndicator; // ivar: _canShowHeadingIndicator
@property (readonly, nonatomic) CGSize collisionSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=_displaysPuckAsAccuracy, setter=_setDisplaysPuckAsAccuracy:) BOOL displaysPuckAsAccuracy; // ivar: _displaysPuckAsAccuracy
@property (nonatomic, getter=isEffectsEnabled) BOOL effectsEnabled; // ivar: _effectsEnabled
@property (nonatomic, getter=_forceHeadingUp, setter=_setForceHeadingUp:) BOOL forceHeadingUp; // ivar: _forceHeadingUp
@property (nonatomic) BOOL forcesConeIndicator; // ivar: _forcesConeIndicator
@property (retain, nonatomic) UIImage *glyphImage; // ivar: _glyphImage
@property (copy, nonatomic) UIColor *glyphTintColor; // ivar: _glyphTintColor
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat heading; // ivar: _heading
@property (nonatomic) CGFloat headingAccuracy; // ivar: _headingAccuracy
@property (nonatomic) NSInteger headingIndicatorStyle; // ivar: _headingIndicatorStyle
@property (retain, nonatomic) UIImage *innerImageMask; // ivar: _innerImageMask
@property (readonly, nonatomic) CLLocation *lastLocation; // ivar: _lastLocation
@property (readonly, nonatomic) CGFloat locationAccuracy; // ivar: _locationAccuracy
@property (readonly, nonatomic, getter=_locationAccuracyInScreenPoints) CGFloat locationAccuracyInScreenPoints;
@property (nonatomic) CGFloat maxRadiusToShowAccuracyRing; // ivar: _maxRadiusToShowAccuracyRing
@property (nonatomic, getter=_minimumAccuracyRadius, setter=_setMinimumAccuracyRadius:) CGFloat minimumAccuracyRadius; // ivar: _minimumAccuracyRadius
@property (nonatomic, getter=_minimumAccuracyUncertainty, setter=_setMinimumAccuracyUncertainty:) CGFloat minimumAccuracyUncertainty;
@property (nonatomic) float opacity;
@property (nonatomic, getter=isOverrideStale) BOOL overrideIsStale; // ivar: _overrideIsStale
@property (nonatomic) CGFloat presentationAccuracy; // ivar: _presentationAccuracy
@property (nonatomic) CGFloat presentationCourse; // ivar: _presentationCourse
@property (nonatomic) CGFloat puckAlpha;
@property (nonatomic) BOOL rotateInnerImageToMatchCourse; // ivar: _rotateInnerImageToMatchCourse
@property (nonatomic) BOOL shouldDisplayHeading; // ivar: _shouldDisplayHeading
@property (nonatomic) BOOL shouldDisplayInaccurateHeading; // ivar: _shouldDisplayInaccurateHeading
@property (nonatomic, getter=_shouldHidePuckWhenAccuracyVisible, setter=_setShouldHidePuckWhenAccuracyVisible:) BOOL shouldHidePuckWhenAccuracyVisible; // ivar: _shouldHidePuckWhenAccuracyVisible
@property (nonatomic) BOOL shouldInnerPulse; // ivar: _shouldInnerPulse
@property (nonatomic, getter=_shouldShowDynamicLocationAnimations, setter=_setShouldShowDynamicLocationAnimations:) BOOL shouldShowDynamicLocationAnimations; // ivar: _shouldShowDynamicLocationAnimations
@property (nonatomic) BOOL shouldShowOuterRing; // ivar: _shouldShowOuterRing
@property (nonatomic, getter=isStale, setter=setStale:) BOOL stale; // ivar: _stale
@property (readonly) Class superclass;
@property (nonatomic) NSInteger zoomDirection; // ivar: _zoomDirection


+(CGFloat)baseDiameter;
+(CGFloat)innerDiameter;
+(CGFloat)outerRingWidth;
+(CGFloat)shadowBlur;
+(struct CGPoint )_calloutOffset;
-(BOOL)_balloonCalloutShouldShowArrow;
-(BOOL)_hideLargeAccuracyRing;
-(BOOL)_isLocationStale:(id)arg0 ;
-(BOOL)_isSelectable;
-(BOOL)_shouldPulseForLocation:(id)arg0 ;
-(BOOL)_shouldShowAccuracyRing;
-(BOOL)_tracking;
-(NSInteger)_enforcedHeadingIndicatorStyle;
-(NSInteger)collisionMode;
-(NSUInteger)_innerPulseFrameWhenDisabled:(NSUInteger)arg0 ;
-(float)_selectionPriority;
-(id)_animationToSynchronizePulse:(*id)arg0 ;
-(id)_baseLayer;
-(id)_createFakePuckLayer;
-(id)_currentInnerColor;
-(id)_effectiveTintColor;
-(id)_innerPulseAnimation;
-(id)_layerToMatchAccuracyRing;
-(id)_pulseAnimation;
-(id)_pulseLayer;
-(id)_vkNavigationPuckMarker;
-(id)initWithAnnotation:(id)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGPoint )calloutOffset;
-(struct CGRect )_mapkit_visibleRect;
-(struct CGRect )_significantBounds;
-(struct UIEdgeInsets )_annotationTrackingInsets;
-(struct UIEdgeInsets )_defaultCollisionAlignmentRectInsets;
-(void)_createOrRemoveFaux3DRingsIfNecessary;
-(void)_pausePulse;
-(void)_removePulse;
-(void)_resetInnerPulseFrame;
-(void)_resetLayerToMatchAccuracyRing;
-(void)_resumePulse;
-(void)_setAnimatingToCoordinate:(BOOL)arg0 ;
-(void)_setMapDisplayStyle:(struct ? )arg0 ;
-(void)_setMapPitchRadians:(CGFloat)arg0 ;
-(void)_setMapRotationRadians:(CGFloat)arg0 ;
-(void)_setMapType:(NSUInteger)arg0 ;
-(void)_setPresentationCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(void)_setTracking:(BOOL)arg0 ;
-(void)_setVKNavigationPuckMarker:(id)arg0 ;
-(void)_setupLayers;
-(void)_updateAccuracyAnimation;
-(void)_updateAccuracyColors;
-(void)_updateAccuracyOpacityForRadius:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(void)_updateBaseImage;
-(void)_updateFaux3DColors;
-(void)_updateFaux3DLayers;
-(void)_updateFromMap;
-(void)_updateGlyphImage;
-(void)_updateHeadingIndicators;
-(void)_updateHeadingLayerForStyleChange:(BOOL)arg0 ;
-(void)_updateInnerCourseRotation;
-(void)_updateInnerImage;
-(void)_updateInnerMaskLayer;
-(void)_updateLayers;
-(void)_updateLegacyConfiguration;
-(void)_updatePuckVisibilityForRadius:(CGFloat)arg0 previousRadius:(CGFloat)arg1 duration:(CGFloat)arg2 ;
-(void)_updatePulse;
-(void)_updatePulseAnimation;
-(void)_updatePulseColor;
-(void)_updateShadowImage;
-(void)_updateShowHeadingLayer;
-(void)_updateShowHeadingLayer:(BOOL)arg0 animatedIfPossible:(BOOL)arg1 ;
-(void)_updateShowHeadingLayerAnimatedIfPossible:(BOOL)arg0 ;
-(void)_updateToReflectLocationAccuracyWithDuration:(CGFloat)arg0 allowShowHideAnimation:(BOOL)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)locationManagerFailedToUpdateLocation;
-(void)setAnimatingToCoordinate:(BOOL)arg0 ;
-(void)setCollisionMode:(NSInteger)arg0 ;
-(void)setDisplayPriority:(float)arg0 ;
-(void)setPresentationCoordinate:(struct ? )arg0 ;
-(void)setPuckScale:(CGFloat)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateStateFromLocation:(id)arg0 duration:(CGFloat)arg1 ;


@end


#endif