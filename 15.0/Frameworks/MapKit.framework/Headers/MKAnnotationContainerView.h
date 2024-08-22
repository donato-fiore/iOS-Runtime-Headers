// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKANNOTATIONCONTAINERVIEW_H
#define MKANNOTATIONCONTAINERVIEW_H

@class UIView, NSMutableOrderedSet, NSMutableDictionary, NSMutableArray, NSMutableSet, NSString;
@protocol VKCustomFeatureDataSource, _MKPinAnnotationViewDelegate, MKAnnotationContainerViewDelegate;


#import "MKAnnotationView.h"
#import "MKPriorityToIndexMap.h"
#import "MKPinAnnotationView.h"

@interface MKAnnotationContainerView : UIView <VKCustomFeatureDataSource, _MKPinAnnotationViewDelegate>

 {
    NSMutableOrderedSet *_annotationViews;
    NSMutableDictionary *_clusteringAnnotationViews;
    NSMutableArray *_customFeatureDataSourceObservers;
    NSMutableArray *_awaitingDropPins;
    MKAnnotationView *_selectedAnnotationView;
    MKAnnotationView *_annotationViewToSelect;
    id<MKAnnotationContainerViewDelegate> *_delegate;
    CGPoint _previousMouseDragPoint;
    CGFloat _previousMouseDragTimeStamp;
    CGPoint _mouseDownPoint;
    CGPoint _draggingAnnotationViewCenter;
    NSUInteger _mapType;
    BOOL _clickedOnAnnotationView;
    BOOL _didDragAnnotationView;
    MKAnnotationView *_userLocationView;
    CGFloat _annotationViewsRotationRadians;
    CGAffineTransform _mapTransform;
    NSMutableArray *_pinsToAnimate;
    CGFloat _mapPitchRadians;
    ? _mapDisplayStyle;
    BOOL _suppress;
    BOOL _isUpdating;
    CGFloat _lastUpdate;
    NSMutableDictionary *_clusterableAnnotationViews;
    NSMutableArray *_requiredPriorityAnnotationViews;
    NSMutableSet *_collidableAnnotationViews;
    NSMutableDictionary *_collidingAnnotationViews;
    NSMutableDictionary *_existingClusterAnnotationViews;
    MKPriorityToIndexMap *_priorityMap;
    NSMutableSet *_prioritiesToAdd;
}


@property (readonly, nonatomic) NSMutableOrderedSet *annotationViews;
@property (readonly, nonatomic) MKPinAnnotationView *bubblePin;
@property (readonly, nonatomic) ? currentComparisonContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKAnnotationContainerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MKAnnotationView *draggingAnnotationView; // ivar: _draggingAnnotationView
@property (readonly, nonatomic) BOOL hasDroppingPins;
@property (readonly, nonatomic) BOOL hasPendingAnimations;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger mapType;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressCallout; // ivar: _suppressCallout
@property (readonly, nonatomic) MKAnnotationView *userLocationView;


-(BOOL)_updateAnnotationViewPositions;
-(BOOL)_updateAnnotationViews:(id)arg0 ;
-(BOOL)_updatePriorityMapIfNeeded;
-(BOOL)calloutContainsPoint:(struct CGPoint )arg0 ;
-(BOOL)isClusteringEnabled;
-(id)_annotationViewForSelectionAtPoint:(struct CGPoint )arg0 avoidCurrent:(BOOL)arg1 maxDistance:(CGFloat)arg2 ;
-(id)_existingClusterViewsForClusterID:(id)arg0 ;
-(id)annotationViewForPoint:(struct CGPoint )arg0 ;
-(id)annotationsInMapRect:(struct ? )arg0 ;
-(id)clusterStyleAttributes;
-(id)globalAnnotations;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct ? )_mapRectWithFraction:(CGFloat)arg0 ofVisible:(struct ? )arg1 ;
-(struct CGPoint )draggingAnnotationViewDropPointForPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )pointForCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(struct CGRect )_visibleCenteringRect;
-(struct CGRect )_visibleCenteringRectInView:(id)arg0 ;
-(struct CGRect )_visibleRect;
-(struct CLLocationCoordinate2D )coordinateForAnnotationView:(id)arg0 ;
-(struct UIEdgeInsets )accessoryPadding;
-(unsigned char)sceneID;
-(unsigned char)sceneState;
-(void)_addPrioritiesForAnnotationViewIfNeeded:(id)arg0 ;
-(void)_draggingAnnotationViewDidPause:(id)arg0 ;
-(void)_dropDraggingAnnotationViewAnimated:(BOOL)arg0 ;
-(void)_dropPinsIfNeeded:(BOOL)arg0 ;
-(void)_liftForDragging:(id)arg0 mouseDownPoint:(struct CGPoint )arg1 ;
-(void)_performStateUpdatesIfNeeded;
-(void)_updateAnnotationView:(id)arg0 ;
-(void)_updateAnnotationViewsForReason:(NSInteger)arg0 updatePositions:(BOOL)arg1 ;
-(void)_updateClusterableAnnotationViews:(id)arg0 withID:(id)arg1 ;
-(void)_updateCollidableAnnotationViews;
-(void)_updateZPositionForAnnotationView:(id)arg0 inBounds:(struct CGRect )arg1 ;
-(void)_willRemoveInternalAnnotationView:(id)arg0 ;
-(void)addAnnotationView:(id)arg0 allowAnimation:(BOOL)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)annotationViewDidChangeHidden:(id)arg0 ;
-(void)annotationViewDidChangeMetrics:(id)arg0 ;
-(void)annotationViewDidChangeZPriority:(id)arg0 ;
-(void)dealloc;
-(void)deselectAnnotationView:(id)arg0 animated:(BOOL)arg1 ;
-(void)draggingTouchMovedToPoint:(struct CGPoint )arg0 edgeInsets:(struct UIEdgeInsets )arg1 ;
-(void)dropPinsIfNeeded;
-(void)finishAddingAndRemovingAnnotationViews;
-(void)getClusterAnnotationTextForClusterFeatureCount:(NSUInteger)arg0 text:(*id)arg1 locale:(*id)arg2 ;
-(void)getClusterImageTextForClusterFeatureCount:(NSUInteger)arg0 text:(*id)arg1 locale:(*id)arg2 ;
-(void)invalidateCustomFeatureDataSource;
-(void)invalidateCustomFeatureDataSourceRect:(struct ? )arg0 ;
-(void)pinDidDrop:(id)arg0 animated:(BOOL)arg1 ;
-(void)removeAnnotationView:(id)arg0 ;
-(void)removeAnnotationViewsRotationAnimations;
-(void)removeObserver:(id)arg0 ;
-(void)selectAnnotationView:(id)arg0 animated:(BOOL)arg1 ;
-(void)setMapDisplayStyle:(struct ? )arg0 ;
-(void)setMapPitchRadians:(CGFloat)arg0 ;
-(void)stopSuppressingUpdates;
-(void)suppressUpdates;
-(void)transitionTo:(NSInteger)arg0 ;
-(void)updateAnnotationView:(id)arg0 ;
-(void)updateAnnotationViewsForReason:(NSInteger)arg0 ;
-(void)updateAnnotationViewsWithDelay;
-(void)updateCalloutStateForSelectedAnnotationView:(id)arg0 ;
-(void)updateUserLocationView;
-(void)visibleCenteringRectChanged;


@end


#endif