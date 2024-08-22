// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSPOINTSOFINTERESTMAPVIEWCONTROLLER_H
#define CPSPOINTSOFINTERESTMAPVIEWCONTROLLER_H

@class NSMutableDictionary, NSString, CLLocationManager, MKMapView, UILayoutGuide, NSArray, NSTimer, CLLocation;
@protocol MKMapViewDelegate, CPSPointsOfInterestMapDelegate, CPSPointsOfInterestPickerDelegate, CPSPanEventDelegate, CPSButtonDelegate, CPSActionButtonLayoutDelegate, CPSLinearFocusProviding, CLLocationManagerDelegate;


#import "CPSBaseEntityContentViewController.h"
#import "CPSActionButton.h"
#import "CPSPointsOfInterestMapControlsViewController.h"
#import "CPSPanViewController.h"
#import "CPSPointsOfInterestPickerViewController.h"

@interface CPSPointsOfInterestMapViewController : CPSBaseEntityContentViewController <MKMapViewDelegate, CPSPointsOfInterestMapDelegate, CPSPointsOfInterestPickerDelegate, CPSPanEventDelegate, CPSButtonDelegate, CPSActionButtonLayoutDelegate, CPSLinearFocusProviding, CLLocationManagerDelegate>



@property (readonly, nonatomic) NSMutableDictionary *annotations; // ivar: _annotations
@property (nonatomic) BOOL centerMapPending; // ivar: _centerMapPending
@property (retain, nonatomic) NSMutableDictionary *clusterAnnotations; // ivar: _clusterAnnotations
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CPSActionButton *donePanningButton; // ivar: _donePanningButton
@property (nonatomic) BOOL hasPerformedInitialLayout; // ivar: _hasPerformedInitialLayout
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isLocationAuthorized) BOOL locationAuthorized;
@property (retain, nonatomic) CLLocationManager *locationManager; // ivar: _locationManager
@property (retain, nonatomic) CPSPointsOfInterestMapControlsViewController *mapControlsViewController; // ivar: _mapControlsViewController
@property (retain, nonatomic) MKMapView *mapView; // ivar: _mapView
@property (readonly, nonatomic) ? mapVisibleRegion;
@property (retain, nonatomic) UILayoutGuide *mapVisibleRegionGuide; // ivar: _mapVisibleRegionGuide
@property (copy, nonatomic) id *panCompletionHandler; // ivar: _panCompletionHandler
@property (retain, nonatomic) NSArray *panModeConstraints; // ivar: _panModeConstraints
@property (retain, nonatomic) NSTimer *panTimer; // ivar: _panTimer
@property (retain, nonatomic) CPSPanViewController *panViewController; // ivar: _panViewController
@property (retain, nonatomic) NSArray *pickerModeConstraints; // ivar: _pickerModeConstraints
@property (retain, nonatomic) CPSPointsOfInterestPickerViewController *pickerViewController; // ivar: _pickerViewController
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useRightHandDriveFocusGuide;
@property (readonly, nonatomic) CLLocation *userLocation;


-(CGFloat)buttonRadius;
-(id)_linearFocusItems;
-(id)_linearFocusMovementSequences;
-(id)buttonBackgroundColor;
-(id)font;
-(id)initWithEntity:(id)arg0 resourceProvider:(id)arg1 ;
-(id)mapView:(id)arg0 clusterAnnotationForMemberAnnotations:(id)arg1 ;
-(id)mapView:(id)arg0 viewForAnnotation:(id)arg1 ;
-(id)pointsOfInterest;
-(id)preferredFocusEnvironments;
-(id)template;
-(struct CGSize )buttonSize;
-(void)_notifyRegionDidChange;
-(void)_updateFocusedItem;
-(void)beginPanningWithCompletion:(id)arg0 ;
-(void)centerMap;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)didSelectButton:(id)arg0 ;
-(void)didUpdateEntity:(id)arg0 ;
-(void)dismissPanView:(id)arg0 ;
-(void)highlightModel:(id)arg0 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)mapView:(id)arg0 didAddAnnotationViews:(id)arg1 ;
-(void)mapView:(id)arg0 didSelectAnnotationView:(id)arg1 ;
-(void)mapView:(id)arg0 regionDidChangeAnimated:(BOOL)arg1 ;
-(void)mapViewDidFinishRenderingMap:(id)arg0 fullyRendered:(BOOL)arg1 ;
-(void)panBeganWithDirection:(NSInteger)arg0 ;
-(void)panEndedWithDirection:(NSInteger)arg0 ;
-(void)panWithDirection:(NSInteger)arg0 ;
-(void)picker:(id)arg0 didDeselectModel:(id)arg1 ;
-(void)picker:(id)arg0 didHighlightModel:(id)arg1 ;
-(void)picker:(id)arg0 didSelectModel:(id)arg1 ;
-(void)picker:(id)arg0 didUnhighlightModel:(id)arg1 ;
-(void)reloadAnnotations:(BOOL)arg0 ;
-(void)setUpLocationManager;
-(void)setUpMapView;
-(void)setUpPanView;
-(void)setupViews;
-(void)unhighlightModel:(id)arg0 ;
-(void)updateMapViewEdgeInsetsFittingAnnotations:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)zoomIn;
-(void)zoomOut;
-(void)zoomToLocation:(id)arg0 ;


@end


#endif