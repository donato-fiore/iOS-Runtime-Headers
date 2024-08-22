// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMFMAPVIEWDELEGATEINTERNAL_H
#define FMFMAPVIEWDELEGATEINTERNAL_H

@class NSString, MKMapView;
@protocol UIGestureRecognizerDelegate, MKMapViewDelegate, FMFMapViewDelegateInternalDelegate;

#import <Foundation/Foundation.h>

#import "FMFWildcardGestureRecognizer.h"
#import "FMFAnnotationView.h"

@interface FMFMapViewDelegateInternal : NSObject <UIGestureRecognizerDelegate, MKMapViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FMFMapViewDelegateInternalDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FMFWildcardGestureRecognizer *gr; // ivar: _gr
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isMapCenteringDisabled; // ivar: _isMapCenteringDisabled
@property (nonatomic) CLLocationCoordinate2D lastUserLocationCoordinate; // ivar: _lastUserLocationCoordinate
@property (nonatomic) MKMapView *mapView; // ivar: _mapView
@property (nonatomic) BOOL respondingToUserTouch; // ivar: _respondingToUserTouch
@property (nonatomic) FMFAnnotationView *selectedAnnotationView; // ivar: _selectedAnnotationView
@property (readonly) Class superclass;


-(BOOL)canSelectAnnotation:(id)arg0 ;
-(BOOL)regionIsValid:(struct ? )arg0 ;
-(id)accuracyCircleForLocation:(id)arg0 ;
-(id)fmfOverlayColor;
-(id)fmfOverlayColorSatellite;
-(id)initWithDelegate:(id)arg0 mapView:(id)arg1 ;
-(id)mapView:(id)arg0 rendererForOverlay:(id)arg1 ;
-(id)mapView:(id)arg0 viewForAnnotation:(id)arg1 ;
-(struct ? )mapRectMakeWithRadialDistanceForCoordinate:(struct CLLocationCoordinate2D )arg0 andRadius:(CGFloat)arg1 ;
-(struct UIEdgeInsets )edgeInsetsWithMinApplied:(struct UIEdgeInsets )arg0 ;
-(void)_moveCenterByOffset:(struct CGPoint )arg0 from:(struct CLLocationCoordinate2D )arg1 mapView:(id)arg2 ;
-(void)endTouches;
-(void)mapView:(id)arg0 didDeselectAnnotationView:(id)arg1 ;
-(void)mapView:(id)arg0 didSelectAnnotationView:(id)arg1 ;
-(void)mapView:(id)arg0 didUpdateUserLocation:(id)arg1 ;
-(void)mapView:(id)arg0 regionDidChangeAnimated:(BOOL)arg1 ;
-(void)mapView:(id)arg0 regionWillChangeAnimated:(BOOL)arg1 ;
-(void)mapViewDidFinishRenderingMap:(id)arg0 fullyRendered:(BOOL)arg1 ;
-(void)selectAnnotation:(id)arg0 ;
-(void)slideAnnotation:(id)arg0 intoViewIfNeededForMapView:(id)arg1 ;
-(void)updateOverlaysForAnnotationMove:(id)arg0 mapView:(id)arg1 ;
-(void)zoomToFitAnnotationsForMapView:(id)arg0 includeMe:(BOOL)arg1 duration:(CGFloat)arg2 ;
-(void)zoomToFitLocation:(id)arg0 forMapView:(id)arg1 ;


@end


#endif