// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSLOCATIONCONSENTVIEWCONTROLLER_H
#define CPSLOCATIONCONSENTVIEWCONTROLLER_H

@class OBWelcomeController, NSString, CLCircularRegion, MKMapView, MKCircle, MKPointAnnotation, OBBoldTrayButton, OBLinkTrayButton;
@protocol MKMapViewDelegate;



@interface CPSLocationConsentViewController : OBWelcomeController <MKMapViewDelegate>

 {
    NSString *_appName;
    NSString *_clipBundleID;
    CLCircularRegion *_region;
    CLLocationCoordinate2D _deviceLocationCoordinate;
    NSString *_deviceLocationSymbolName;
    MKMapView *_mapView;
    MKCircle *_circleOverlay;
    MKPointAnnotation *_deviceLocationAnnotation;
    OBBoldTrayButton *_allowForAllButton;
    OBLinkTrayButton *_allowOnceButton;
}


@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithRequest:(id)arg0 ;
-(id)mapView:(id)arg0 rendererForOverlay:(id)arg1 ;
-(id)mapView:(id)arg0 viewForAnnotation:(id)arg1 ;
-(void)_buttonActionTriggered:(id)arg0 ;
-(void)_setupContentView;
-(void)mapViewDidChangeVisibleRegion:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif