// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKROUTEVIEW_H
#define HKROUTEVIEW_H

@class UIView, MKMapView, NSString, UIButton;
@protocol MKMapViewDelegate;


#import "HKLocationReadings.h"

@interface HKRouteView : UIView <MKMapViewDelegate>

 {
    MKMapView *_mapView;
    HKLocationReadings *_locationReadings;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIButton *toggleMapTypeButton; // ivar: _toggleMapTypeButton


-(id)init;
-(id)mapView:(id)arg0 rendererForOverlay:(id)arg1 ;
-(id)mapView:(id)arg0 viewForAnnotation:(id)arg1 ;
-(id)routeImageForSharing;
-(void)_addAnnotation:(id)arg0 isStartPoint:(BOOL)arg1 ;
-(void)_clearMapViewIfNeeded;
-(void)_displayMapRouteForLocationReadings;
-(void)_setRouteMapType:(NSUInteger)arg0 ;
-(void)_toggleMapType;
-(void)setLocationReadings:(id)arg0 ;


@end


#endif