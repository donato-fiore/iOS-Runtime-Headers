// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKANNOTATIONVIEW_H
#define MKANNOTATIONVIEW_H

@class UIView, NSMutableArray, UIImage, NSString, CALayer, GEORouteMatch, VKAnchorWrapper;
@protocol _MKKVOProxyDelegate, MKAnnotationRepresentation, MKLocatableObject, MKAnnotation;


#import "MKUserLocationAnnotationViewProxy.h"
#import "_MKAnnotationViewAnchor.h"
#import "_MKKVOProxy.h"
#import "_MKAnnotationViewCustomFeatureAnnotation.h"
#import "MKCalloutView.h"
#import "MKAnnotationView.h"
#import "_MKStaticMapView.h"
#import "MKUsageCounter.h"

@interface MKAnnotationView : UIView <_MKKVOProxyDelegate, MKAnnotationRepresentation, MKLocatableObject>

 {
    CLLocationCoordinate2D _coordinate;
    MKUserLocationAnnotationViewProxy *_userLocationProxy;
    CGFloat _rotationRadians;
    _MKAnnotationViewAnchor *_anchor;
    NSUInteger _hiddenReasons;
    NSMutableArray *_hiddenCompletionBlocks;
    CGFloat _realAlpha;
    CGPoint _realOffset;
    _MKKVOProxy *_annotationObserver;
    _MKAnnotationViewCustomFeatureAnnotation *_customFeatureAnnotation;
    BOOL _subclassImplementsAlignmentRectInsets;
    BOOL _wantsViewBasedPositioning;
    id<MKAnnotation> *_annotation;
    UIImage *_image;
    NSString *_reuseIdentifier;
    NSUInteger _mapType;
    NSUInteger _zIndex;
    CGPoint _centerOffset;
    CGPoint _calloutOffset;
    NSUInteger _dragState;
    ? _flags;
    CALayer *_imageLayer;
}


@property (nonatomic, getter=_isAnimatingToCoordinate, setter=_setAnimatingToCoordinate:) BOOL _animatingToCoordinate; // ivar: _animatingToCoordinate
@property (retain, nonatomic, getter=_calloutView, setter=_setCalloutView:) MKCalloutView *_calloutView; // ivar: _calloutView
@property (nonatomic, setter=_setDirection:) CGFloat _direction; // ivar: _direction
@property (nonatomic, setter=_setPresentationCoordinate:) CLLocationCoordinate2D _presentationCoordinate; // ivar: _presentationCoordinate
@property (copy, nonatomic, setter=_setPresentationCoordinateChangedCallback:) id *_presentationCoordinateChangedCallback; // ivar: _presentationCoordinateChangedCallback
@property (nonatomic, setter=_setPresentationCourse:) CGFloat _presentationCourse; // ivar: _presentationCourse
@property (retain, nonatomic, setter=_setRouteMatch:) GEORouteMatch *_routeMatch; // ivar: _routeMatch
@property (readonly, nonatomic) CGRect _significantFrame;
@property (nonatomic, getter=_isTracking, setter=_setTracking:) BOOL _tracking; // ivar: _tracking
@property (readonly, nonatomic) MKUserLocationAnnotationViewProxy *_userLocationProxy;
@property (nonatomic, getter=_allowedCalloutEdges, setter=_setAllowedCalloutEdges:) NSUInteger allowedCalloutEdges; // ivar: _allowedCalloutEdges
@property (readonly, nonatomic, getter=_allowedToShowCallout) BOOL allowedToShowCallout;
@property (readonly, nonatomic) VKAnchorWrapper *anchor;
@property (retain, nonatomic) NSObject<MKAnnotation> *annotation;
@property (nonatomic, getter=_annotationTrackingInsets) UIEdgeInsets annotationTrackingInsets; // ivar: _annotationTrackingInsets
@property (nonatomic, getter=_bottomCalloutOffset, setter=_setBottomCalloutOffset:) CGPoint bottomCalloutOffset; // ivar: _bottomCalloutOffset
@property (nonatomic) CGPoint calloutOffset;
@property (nonatomic, getter=_calloutStyle, setter=_setCalloutStyle:) NSInteger calloutStyle; // ivar: _calloutStyle
@property (nonatomic) BOOL canShowCallout;
@property (nonatomic) CGPoint centerOffset;
@property (readonly, weak, nonatomic) MKAnnotationView *clusterAnnotationView; // ivar: _clusterAnnotationView
@property (copy, nonatomic) NSString *clusteringIdentifier; // ivar: _clusteringIdentifier
@property (readonly, nonatomic, getter=_collisionAlignmentRectInsets) UIEdgeInsets collisionAlignmentRectInsets;
@property (readonly, nonatomic, getter=_collisionFrame) CGRect collisionFrame; // ivar: _collisionFrame
@property (nonatomic) NSInteger collisionMode; // ivar: _collisionMode
@property (readonly, nonatomic) CLLocationCoordinate2D coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=_defaultCollisionAlignmentRectInsets) UIEdgeInsets defaultCollisionAlignmentRectInsets;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *detailCalloutAccessoryView; // ivar: _detailCalloutAccessoryView
@property (nonatomic) float displayPriority; // ivar: _displayPriority
@property (nonatomic) NSUInteger dragState;
@property (nonatomic, getter=isDraggable) BOOL draggable;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIView *leftCalloutAccessoryView; // ivar: _leftCalloutAccessoryView
@property (nonatomic) CGPoint leftCalloutOffset; // ivar: _leftCalloutOffset
@property (nonatomic, getter=_mapDisplayStyle, setter=_setMapDisplayStyle:) ? mapDisplayStyle; // ivar: _mapDisplayStyle
@property (nonatomic, getter=_mapPitchRadians, setter=_setMapPitchRadians:) CGFloat mapPitchRadians; // ivar: _mapPitchRadians
@property (nonatomic, getter=_mapRotationRadians, setter=_setMapRotationRadians:) CGFloat mapRotationRadians; // ivar: _mapRotationRadians
@property (nonatomic, getter=_isPendingSelectionAnimated, setter=_setPendingSelectionAnimated:) BOOL pendingSelectionAnimated; // ivar: _pendingSelectionAnimated
@property (readonly, nonatomic) NSString *reuseIdentifier;
@property (retain, nonatomic) UIView *rightCalloutAccessoryView; // ivar: _rightCalloutAccessoryView
@property (nonatomic) CGPoint rightCalloutOffset; // ivar: _rightCalloutOffset
@property (readonly, nonatomic, getter=_isSelectable) BOOL selectable;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) float selectedZPriority; // ivar: _selectedZPriority
@property (nonatomic, getter=_selectionPriority, setter=_setSelectionPriority:) float selectionPriority; // ivar: _selectionPriority
@property (nonatomic, getter=_shouldKeepCalloutVisible, setter=_setShouldKeepCalloutVisible:) BOOL shouldKeepCalloutVisible; // ivar: _shouldKeepCalloutVisible
@property (readonly, nonatomic, getter=_significantBounds) CGRect significantBounds;
@property (nonatomic, getter=_skipDrawingForSnapshots, setter=_setSkipDrawingForSnapshots:) BOOL skipDrawingForSnapshots; // ivar: _skipDrawingForSnapshots
@property (weak, nonatomic, getter=_staticMapView, setter=_setStaticMapView:) _MKStaticMapView *staticMapView; // ivar: _staticMapView
@property (nonatomic) NSInteger subtitleVisibility; // ivar: _subtitleVisibility
@property (readonly) Class superclass;
@property (nonatomic) NSInteger titleVisibility; // ivar: _titleVisibility
@property (weak, nonatomic, getter=_usageCounter, setter=_setUsageCounter:) MKUsageCounter *usageCounter; // ivar: _usageCounter
@property (nonatomic) float zPriority; // ivar: _zPriority


+(BOOL)_followsTerrain;
+(BOOL)_isInitiallyHiddenWhenAdded;
+(BOOL)_wantsViewBasedPositioning;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(Class)_mapkitLeafClass;
+(Class)calloutViewClass;
+(NSUInteger)_selectedZIndex;
+(NSUInteger)_zIndex;
+(float)_defaultDisplayPriority;
+(id)_disclosureCalloutButton;
-(BOOL)_canChangeOrientation;
-(BOOL)_canDisplayDisclosureInCallout;
-(BOOL)_canDisplayPlacemarkInCallout;
-(BOOL)_hasAlternateOrientation;
-(BOOL)_isHiddenForReason:(NSUInteger)arg0 ;
-(BOOL)_shouldDeselectWhenDragged;
-(BOOL)_shouldShowCalloutIfSelected;
-(BOOL)isCollidingWithAnnotationView:(id)arg0 previouslyCollided:(BOOL)arg1 ;
-(BOOL)isHidden;
-(BOOL)isPersistent;
-(BOOL)isProvidingCustomFeature;
-(BOOL)shouldShowCallout;
-(BOOL)updateCalloutViewIfNeededAnimated:(BOOL)arg0 ;
-(CGFloat)_pointsForDistance:(CGFloat)arg0 ;
-(CGFloat)alpha;
-(NSInteger)_effectiveCalloutStyle;
-(NSInteger)compareForClustering:(id)arg0 ;
-(NSInteger)compareForCollision:(id)arg0 ;
-(NSUInteger)_mapType;
-(NSUInteger)_orientationCount;
-(NSUInteger)_zIndex;
-(float)_clampZPriority:(float)arg0 ;
-(float)_defaultSelectedZPriority;
-(float)_defaultZPriority;
-(float)_effectiveZPriority;
-(id)_containerView;
-(id)_contentLayer;
-(id)_customFeatureAnnotation;
-(id)_effectiveSubtitlesIsCollidable:(*BOOL)arg0 ;
-(id)_effectiveTitleIsCollidable:(*BOOL)arg0 ;
-(id)_getPopover:(id)arg0 ;
-(id)_mapView;
-(id)_vkNavigationPuckMarker;
-(id)customFeatureAnnotation;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithAnnotation:(id)arg0 reuseIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)snapshotViewAfterScreenUpdates:(BOOL)arg0 ;
-(id)viewRepresentation;
-(struct CGPoint )_draggingDropOffset;
-(struct CGPoint )_offsetToAnnotationView:(id)arg0 ;
-(struct CGRect )_mapkit_visibleRect;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_addAnnotationObservation;
-(void)_commonInit;
-(void)_didDragWithVelocity:(struct CGPoint )arg0 ;
-(void)_didUpdatePosition;
-(void)_dismissCallout:(BOOL)arg0 ;
-(void)_enableRotationForHeadingMode:(CGFloat)arg0 ;
-(void)_invalidateCachedCoordinate;
-(void)_invalidateCustomFeatureForced:(BOOL)arg0 coordinates:(struct CLLocationCoordinate2D *)arg1 count:(NSUInteger)arg2 ;
-(void)_mapVisibleCenteringRectChanged;
-(void)_metricsDidChange;
-(void)_mkObserveValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)_performHideAnimationIfNeeded;
-(void)_performOffsetAnimationIfNeeded;
-(void)_performStateUpdatesIfNeeded;
-(void)_removeAnnotationObservation;
-(void)_removePopover;
-(void)_setCanDisplayDisclosureInCallout:(BOOL)arg0 ;
-(void)_setCanDisplayPlacemarkInCallout:(BOOL)arg0 ;
-(void)_setHidden:(BOOL)arg0 forReason:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)_setHidden:(BOOL)arg0 forReason:(NSUInteger)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)_setHiddenForOffscreen:(BOOL)arg0 ;
-(void)_setMapType:(NSUInteger)arg0 ;
-(void)_setPositionOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;
-(void)_setRotationRadians:(CGFloat)arg0 withAnimation:(id)arg1 ;
-(void)_setVKNavigationPuckMarker:(id)arg0 ;
-(void)_setZIndex:(NSUInteger)arg0 ;
-(void)_showCallout:(BOOL)arg0 ;
-(void)_transitionTo:(NSInteger)arg0 ;
-(void)_unhideForDisplay;
-(void)_updateAnchorPosition:(struct CGPoint )arg0 alignToPixels:(BOOL)arg1 ;
-(void)_updateEffectiveZPriority;
-(void)_updateFromMap;
-(void)_userTrackingModeDidChange:(id)arg0 ;
-(void)configureCustomFeature:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)invalidateCustomFeatureForced:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)prepareForDisplay;
-(void)prepareForReuse;
-(void)prepareForSnapshotting;
-(void)setAlpha:(CGFloat)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setHidden:(BOOL)arg0 ;


@end


#endif