// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKWIDGETMAPVIEWPROXY_H
#define OKWIDGETMAPVIEWPROXY_H

@class NSString, MKMapView;
@protocol OKWidgetMapViewProxyExports, UIGestureRecognizerDelegate, MKMapViewDelegate;


#import "OKWidgetView.h"

@interface OKWidgetMapViewProxy : OKWidgetView <OKWidgetMapViewProxyExports, UIGestureRecognizerDelegate, MKMapViewDelegate>

 {
    ? _region;
    BOOL _zoomToFitAnnotations;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) MKMapView *mapView; // ivar: _mapView
@property (readonly) Class superclass;


+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(BOOL)prepareForDisplay:(BOOL)arg0 ;
-(BOOL)prepareForUnload:(BOOL)arg0 ;
-(BOOL)prepareForWarmup:(BOOL)arg0 ;
-(BOOL)settingScrollEnabled;
-(BOOL)settingScrollWheelEnabled;
-(BOOL)settingShowsBuildings;
-(BOOL)settingShowsPointsOfInterest;
-(BOOL)settingShowsUserLocation;
-(BOOL)settingZoomEnabled;
-(BOOL)supportsReadiness;
-(NSUInteger)settingMapType;
-(id)initWithWidget:(id)arg0 ;
-(id)mapView:(id)arg0 viewForAnnotation:(id)arg1 ;
-(id)settingObjectForKey:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(struct ? )settingRegion;
-(struct CLLocationCoordinate2D )settingCenterCoordinate;
-(void)dealloc;
-(void)mapView:(id)arg0 annotationView:(id)arg1 calloutAccessoryControlTapped:(id)arg2 ;
-(void)mapViewDidFinishRenderingMap:(id)arg0 fullyRendered:(BOOL)arg1 ;
-(void)selectAnnotationWithIdentifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)setAntialiasing:(BOOL)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setSettingAnnotations:(id)arg0 ;
-(void)setSettingCenterCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(void)setSettingMapType:(NSUInteger)arg0 ;
-(void)setSettingRegion:(struct ? )arg0 ;
-(void)setSettingScrollEnabled:(BOOL)arg0 ;
-(void)setSettingScrollWheelEnabled:(BOOL)arg0 ;
-(void)setSettingShowsBuildings:(BOOL)arg0 ;
-(void)setSettingShowsPointsOfInterest:(BOOL)arg0 ;
-(void)setSettingShowsUserLocation:(BOOL)arg0 ;
-(void)setSettingZoomEnabled:(BOOL)arg0 ;
-(void)setSettingZoomToFitAnnotations:(BOOL)arg0 ;
-(void)zoomToAnnotationsWithIdentifiers:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif