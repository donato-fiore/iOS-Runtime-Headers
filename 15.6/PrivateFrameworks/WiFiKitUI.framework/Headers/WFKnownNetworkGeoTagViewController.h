// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFKNOWNNETWORKGEOTAGVIEWCONTROLLER_H
#define WFKNOWNNETWORKGEOTAGVIEWCONTROLLER_H

@class UIViewController, NSMutableArray, NSDateFormatter, NSString, NSArray, MKMapView;
@protocol MKMapViewDelegate;



@interface WFKnownNetworkGeoTagViewController : UIViewController <MKMapViewDelegate>



@property (retain, nonatomic) NSMutableArray *annotations; // ivar: _annotations
@property (retain, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *geoTags; // ivar: _geoTags
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKMapView *mapView; // ivar: _mapView
@property (readonly) Class superclass;


-(id)mapView:(id)arg0 viewForAnnotation:(id)arg1 ;
-(void)addAnnotationForGeotag:(id)arg0 ;
-(void)addAnnotations;
-(void)addMap;
-(void)setVisibleMapRegion;
-(void)showPinsOnMap;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif