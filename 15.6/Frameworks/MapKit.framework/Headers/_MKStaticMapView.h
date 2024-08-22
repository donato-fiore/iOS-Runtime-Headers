// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKSTATICMAPVIEW_H
#define _MKSTATICMAPVIEW_H

@class UIView, UIImageView, NSMutableArray, NSArray, NSString;
@protocol MKAnnotationContainerViewDelegate, MKAnnotationMarkerContainer, MKAnnotationManagerDelegate, MKLocationManagerObserver, _MKStaticMapViewDelegate;


#import "MKMapSnapshotOptions.h"
#import "MKMapSnapshotter.h"
#import "MKMapSnapshot.h"
#import "MKAnnotationManager.h"
#import "MKAnnotationContainerView.h"
#import "MKUserLocation.h"
#import "MKAnnotationView.h"
#import "MKMapCamera.h"

@interface _MKStaticMapView : UIView <MKAnnotationContainerViewDelegate, MKAnnotationMarkerContainer, MKAnnotationManagerDelegate, MKLocationManagerObserver>

 {
    id<_MKStaticMapViewDelegate> *_delegate;
    MKMapSnapshotOptions *_snapshotOptions;
    UIImageView *_imageView;
    MKMapSnapshotter *_currentSnapshotter;
    MKMapSnapshot *_gridSnapshot;
    MKMapSnapshot *_snapshot;
    MKAnnotationManager *_annotationManager;
    MKAnnotationContainerView *_annotationContainer;
    MKUserLocation *_userLocation;
    MKAnnotationView *_userLocationView;
    NSMutableArray *_currentUpdateAddedAnnotations;
    BOOL _currentUpdateRemovedCustomFeatureAnnotation;
    NSUInteger _snapshotGeneration;
    BOOL _loading;
}


@property (readonly, nonatomic) NSArray *annotations;
@property (copy, nonatomic) MKMapCamera *camera;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) ? region;
@property (nonatomic) BOOL showsUserLocation; // ivar: _showsUserLocation
@property (readonly) Class superclass;
@property (nonatomic) ? visibleMapRect;


-(BOOL)annotationContainer:(id)arg0 isAnnotationView:(id)arg1 validForDisplayAtPoint:(struct CGPoint )arg2 ;
-(BOOL)annotationContainerIsRotated:(id)arg0 ;
-(BOOL)annotationContainerShouldAlignToPixels:(id)arg0 ;
-(BOOL)annotationManager:(id)arg0 canSelectAnnotationRepresentation:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg0 ;
-(BOOL)shouldHideOffscreenSelectedAnnotation;
-(CGFloat)annotationContainer:(id)arg0 pinDropDistanceForCoordinate:(struct CLLocationCoordinate2D )arg1 maxDistance:(*CGFloat)arg2 ;
-(NSUInteger)_incrementSnapshotGeneration;
-(id)annotationContainer:(id)arg0 requestAddingClusterForAnnotationViews:(id)arg1 ;
-(id)annotationCoordinateTest:(SEL)arg0 ;
-(id)annotationManager:(id)arg0 representationForAnnotation:(id)arg1 ;
-(id)annotationRectTest:(SEL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )convertCoordinate:(struct CLLocationCoordinate2D )arg0 toPointToView:(id)arg1 ;
-(struct CGRect )annotationContainerVisibleRect:(id)arg0 ;
-(struct CGRect )visibleCenteringRectInView:(id)arg0 ;
-(struct CGRect )visibleRectInView:(id)arg0 ;
-(struct CLLocationCoordinate2D )convertPoint:(struct CGPoint )arg0 toCoordinateFromView:(id)arg1 ;
-(void)_displayGridWithCompletionHandler:(id)arg0 ;
-(void)_hideAllAnnotations;
-(void)_showAllAnnotations;
-(void)_startSnapshotRequest;
-(void)_updateSnapshot:(BOOL)arg0 ;
-(void)addAnnotation:(id)arg0 ;
-(void)addAnnotationRepresentation:(id)arg0 allowAnimation:(BOOL)arg1 ;
-(void)addAnnotations:(id)arg0 ;
-(void)annotationContainer:(id)arg0 annotationView:(id)arg1 calloutAccessoryControlTapped:(id)arg2 ;
-(void)annotationContainer:(id)arg0 calloutPrimaryActionTriggeredForAnnotationView:(id)arg1 ;
-(void)annotationContainer:(id)arg0 requestRemovingClusterAnnotationView:(id)arg1 updateVisible:(BOOL)arg2 ;
-(void)annotationContainer:(id)arg0 scrollToRevealCalloutWithOffset:(struct CGPoint )arg1 annotationCoordinate:(struct CLLocationCoordinate2D )arg2 completionHandler:(id)arg3 ;
-(void)annotationContainerDidAnimateBubble:(id)arg0 ;
-(void)annotationContainerDidDropPins:(id)arg0 ;
-(void)annotationContainerWillAnimateBubble:(id)arg0 ;
-(void)annotationContainerWillDropPins:(id)arg0 ;
-(void)annotationManager:(id)arg0 didAddAnnotationRepresentations:(id)arg1 ;
-(void)annotationManager:(id)arg0 didDeselectAnnotationRepresentation:(id)arg1 ;
-(void)annotationManager:(id)arg0 didRemoveAnnotationRepresentations:(id)arg1 ;
-(void)annotationManager:(id)arg0 didSelectAnnotationRepresentation:(id)arg1 ;
-(void)annotationManagerDidChangeVisibleAnnotationRepresentations:(id)arg0 ;
-(void)calloutDidAppearForAnnotationView:(id)arg0 inContainer:(id)arg1 ;
-(void)deselectAnnotationRepresentation:(id)arg0 animated:(BOOL)arg1 ;
-(void)locationManager:(id)arg0 didUpdateVehicleHeading:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)locationManager:(id)arg0 didUpdateVehicleSpeed:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg0 ;
-(void)locationManagerDidReset:(id)arg0 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg0 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg0 withError:(id)arg1 ;
-(void)locationManagerUpdatedLimitsPrecisionState:(id)arg0 ;
-(void)locationManagerUpdatedLocation:(id)arg0 ;
-(void)moveAnnotationRepresentation:(id)arg0 fromCoordinate:(struct CLLocationCoordinate2D )arg1 animated:(BOOL)arg2 duration:(CGFloat)arg3 ;
-(void)removeAnnotation:(id)arg0 ;
-(void)removeAnnotationRepresentation:(id)arg0 ;
-(void)removeAnnotations:(id)arg0 ;
-(void)selectAnnotationRepresentation:(id)arg0 animated:(BOOL)arg1 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif