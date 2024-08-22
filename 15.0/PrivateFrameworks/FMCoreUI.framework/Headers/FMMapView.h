// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FMMAPVIEW_H
#define FMMAPVIEW_H

@class UIView, NSMutableArray, MKMapCamera, NSString, CADisplayLink, NSTimer, MKMapView, MKUserLocation, UIColor, MKUserLocationView, _MKUserTrackingButton;
@protocol FMMapGestureRecognizerDelegate, FMMapAnnotationGestureRecognizerDelegate, MKUserTrackingView, MKMapViewDelegate, FMAnnotation><MKAnnotation, FMMapViewDelegate, MKAnnotation;


#import "FMMapGestureRecognizer.h"
#import "FMAnnotationView.h"

@interface FMMapView : UIView <FMMapGestureRecognizerDelegate, FMMapAnnotationGestureRecognizerDelegate, MKUserTrackingView, MKMapViewDelegate>



@property (retain, nonatomic) NSMutableArray *accuracyOverlays; // ivar: _accuracyOverlays
@property (retain, nonatomic) MKMapCamera *cameraBefore3DRendering; // ivar: _cameraBefore3DRendering
@property (nonatomic) BOOL canChangeUserTrackingMode; // ivar: _canChangeUserTrackingMode
@property (nonatomic) BOOL canSelectUserAnnotation; // ivar: _canSelectUserAnnotation
@property (weak, nonatomic) NSObject<FMAnnotation><MKAnnotation> *currentDeviceAnnotation; // ivar: _currentDeviceAnnotation
@property (nonatomic) NSInteger currentSelectedState; // ivar: _currentSelectedState
@property (nonatomic) NSInteger currentTrackingMode; // ivar: _currentTrackingMode
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FMMapViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (nonatomic) NSInteger doubleSelectionMode; // ivar: _doubleSelectionMode
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAllAnnotationsShown; // ivar: _isAllAnnotationsShown
@property (nonatomic) BOOL isFingerOnAnnotation; // ivar: _isFingerOnAnnotation
@property (nonatomic) BOOL isFingerOnMap; // ivar: _isFingerOnMap
@property (nonatomic) BOOL isGoingBackToAllAnnotation; // ivar: _isGoingBackToAllAnnotation
@property (nonatomic) BOOL isMapAnimating; // ivar: _isMapAnimating
@property (nonatomic) BOOL isMapMoved; // ivar: _isMapMoved
@property (nonatomic) BOOL isMapPositioningDisabled; // ivar: _isMapPositioningDisabled
@property (nonatomic) BOOL isNearbyModeDisabled; // ivar: _isNearbyModeDisabled
@property (nonatomic) BOOL isPreventingMapUpdates; // ivar: _isPreventingMapUpdates
@property (nonatomic) BOOL isPreviewing; // ivar: _isPreviewing
@property (nonatomic) BOOL isSwipeGestureEnabled; // ivar: _isSwipeGestureEnabled
@property (nonatomic) BOOL isSwitchingTrackingMode; // ivar: _isSwitchingTrackingMode
@property (nonatomic) BOOL isUserLocationUpdated; // ivar: _isUserLocationUpdated
@property (nonatomic) BOOL isUserSwiping; // ivar: _isUserSwiping
@property (weak, nonatomic) NSObject<FMAnnotation><MKAnnotation> *lastSelectedAnnotationBeforeTracking; // ivar: _lastSelectedAnnotationBeforeTracking
@property (nonatomic) UIEdgeInsets lastVisibleInsets; // ivar: _lastVisibleInsets
@property (nonatomic) ? lastVisibleMapRect; // ivar: _lastVisibleMapRect
@property (retain, nonatomic) NSTimer *layoutTimer; // ivar: _layoutTimer
@property (retain, nonatomic) FMMapGestureRecognizer *mapGesture; // ivar: _mapGesture
@property (readonly, nonatomic) MKMapView *mapView; // ivar: _mapView
@property (nonatomic) CGFloat maxZoomLevel; // ivar: _maxZoomLevel
@property (weak, nonatomic) NSObject<MKAnnotation> *otherSelectedAnnotation; // ivar: _otherSelectedAnnotation
@property (retain, nonatomic) FMAnnotationView *potentiallySelectedAnnotationView; // ivar: _potentiallySelectedAnnotationView
@property (nonatomic) NSInteger renderingMode; // ivar: _renderingMode
@property (weak, nonatomic) NSObject<FMAnnotation><MKAnnotation> *selectedAnnotation; // ivar: _selectedAnnotation
@property (retain, nonatomic) FMAnnotationView *selectedAnnotationView; // ivar: _selectedAnnotationView
@property (nonatomic) BOOL shouldDisplayOverlay; // ivar: _shouldDisplayOverlay
@property (nonatomic) BOOL showUserLocationCallout; // ivar: _showUserLocationCallout
@property (readonly) Class superclass;
@property (retain, nonatomic) MKUserLocation *userLocation; // ivar: _userLocation
@property (retain, nonatomic) UIColor *userLocationTintColor; // ivar: _userLocationTintColor
@property (weak, nonatomic) MKUserLocationView *userLocationView; // ivar: _userLocationView
@property (retain, nonatomic) NSTimer *userSelectionTimer; // ivar: _userSelectionTimer
@property (retain, nonatomic) _MKUserTrackingButton *userTrackingButton; // ivar: _userTrackingButton


+(BOOL)hasUserLocation;
-(BOOL)canRotateForHeading;
-(BOOL)hasUserLocation;
-(BOOL)isCurrentlyRotated;
-(BOOL)isOverlayOnMap:(id)arg0 ;
-(BOOL)isValidLocation:(struct CLLocationCoordinate2D )arg0 ;
-(CGFloat)distanceBetweenOrigin:(struct CLLocationCoordinate2D )arg0 andDestination:(struct CLLocationCoordinate2D )arg1 ;
-(NSInteger)userTrackingMode;
-(float)dampingForAltitude:(CGFloat)arg0 andDistance:(CGFloat)arg1 ;
-(id)annotationsSortedByDistance;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mapView:(id)arg0 rendererForOverlay:(id)arg1 ;
-(id)mapView:(id)arg0 viewForAnnotation:(id)arg1 ;
-(id)nearbyAnnotations;
-(id)viewForAnnotation:(id)arg0 ;
-(struct ? )mapRectForAnnotations:(id)arg0 shouldIncludeRadius:(BOOL)arg1 ;
-(struct ? )mapRectMakeWithRadialDistanceForCoordinate:(struct CLLocationCoordinate2D )arg0 andRadius:(CGFloat)arg1 ;
-(struct ? )normalizeMapRect:(struct ? )arg0 toZoomScale:(CGFloat)arg1 ;
-(struct ? )repositionOnAnnotation:(id)arg0 withZoom:(BOOL)arg1 ;
-(struct CLLocationCoordinate2D )coordinateForAnnotationView:(id)arg0 ;
-(void)_setUserTrackingMode:(NSInteger)arg0 animated:(BOOL)arg1 fromTrackingButton:(BOOL)arg2 ;
-(void)addAnnotation:(id)arg0 ;
-(void)addAnnotations:(id)arg0 ;
-(void)addOverlay:(id)arg0 ;
-(void)addOverlays:(id)arg0 ;
-(void)animateMapToPosition:(struct ? )arg0 withInsets:(struct UIEdgeInsets )arg1 attributionInsets:(struct UIEdgeInsets )arg2 andZoom:(BOOL)arg3 ;
-(void)animateRenderingModeChange;
-(void)animateToAllAnnotation;
-(void)calloutButtonTapped:(id)arg0 ;
-(void)clearUserLocation;
-(void)createMKMapView;
-(void)createUserTrackingButton;
-(void)dealloc;
-(void)depthSortAnnotations;
-(void)deselectAllAnnotations;
-(void)deselectAnnotationView:(id)arg0 ;
-(void)deselectAnnotationViewIfNeeded:(id)arg0 ;
-(void)didDoubleSelectAnnotation:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)didSelectAnnotation:(id)arg0 ;
-(void)displayAllAnnotations;
-(void)doubleSelectAnnotation:(id)arg0 ;
-(void)fingerOffAnnotation:(id)arg0 ;
-(void)fingerOnAnnotation:(id)arg0 ;
-(void)flashMapInset:(struct UIEdgeInsets )arg0 ;
-(void)initialize;
-(void)invalidateLayoutTimer;
-(void)layoutMapView;
-(void)layoutSubviews;
-(void)mapDoubleTapped:(id)arg0 ;
-(void)mapSwiped:(id)arg0 withPercent:(CGFloat)arg1 ;
-(void)mapSwipedBegin:(id)arg0 ;
-(void)mapSwipedEnd:(id)arg0 withPercent:(CGFloat)arg1 ;
-(void)mapTapped:(id)arg0 ;
-(void)mapTouchBegan:(id)arg0 ;
-(void)mapTouchEnded:(id)arg0 ;
-(void)mapTouchMoved:(id)arg0 ;
-(void)mapView:(id)arg0 didAddAnnotationViews:(id)arg1 ;
-(void)mapView:(id)arg0 didChangeUserTrackingMode:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)mapView:(id)arg0 didDeselectAnnotationView:(id)arg1 ;
-(void)mapView:(id)arg0 didFailToLocateUserWithError:(id)arg1 ;
-(void)mapView:(id)arg0 didSelectAnnotationView:(id)arg1 ;
-(void)mapView:(id)arg0 didUpdateUserLocation:(id)arg1 ;
-(void)mapView:(id)arg0 regionDidChangeAnimated:(BOOL)arg1 ;
-(void)mapViewDidStopLocatingUser:(id)arg0 ;
-(void)moveCenterByOffset:(struct CGPoint )arg0 from:(struct CLLocationCoordinate2D )arg1 ;
-(void)recenterVisibleAnnotations;
-(void)refreshCameraPosition;
-(void)refreshOverlayForAnnotation:(id)arg0 andCoordinate:(struct CLLocationCoordinate2D )arg1 ;
-(void)removeAllOverlaysAndCurrentAnnotationOverlay:(id)arg0 ;
-(void)removeAnnotation:(id)arg0 ;
-(void)removeAnnotations:(id)arg0 ;
-(void)removeOverlay:(id)arg0 ;
-(void)removeOverlays:(id)arg0 ;
-(void)removeUserAnnotationIfNeeded:(id)arg0 ;
-(void)repositionOnMapRectIfNeeded:(struct ? )arg0 ;
-(void)repositionToMapRect:(struct ? )arg0 withZoom:(BOOL)arg1 ;
-(void)selectAnnotation:(id)arg0 ;
-(void)selectAnnotationForPreview:(id)arg0 ;
-(void)selectOrDeselectAnnotationView:(id)arg0 ;
-(void)setupCamera;
-(void)setupConstraints;
-(void)setupGestures;
-(void)slideAnnotationIntoViewIfNeeded:(id)arg0 ;
-(void)synchronize;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAccordingToUserTrackingMode;
-(void)updateAnnotationPositionAfterPreview:(id)arg0 ;
-(void)updateAnnotationStyle:(id)arg0 ;
-(void)updateCameraPositionForAnnotation:(id)arg0 ;
-(void)updateCameraPositionForMapRect:(struct ? )arg0 withZoom:(BOOL)arg1 ;
-(void)updateCameraPositionForNoLocation;
-(void)updateCameraPositionWithLocation:(struct CLLocationCoordinate2D )arg0 andAltitude:(CGFloat)arg1 ;
-(void)updateCanSelectUserAnnotation;
-(void)updateOverlayForAnnotation:(id)arg0 withForce:(BOOL)arg1 ;
-(void)updatePreviewLocationForAnnotation:(id)arg0 ;
-(void)updateUserTrackingButtonState;
-(void)userLocationTapped:(id)arg0 ;


@end


#endif