// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSDMAPVIEWCONTROLLER_H
#define MSDMAPVIEWCONTROLLER_H

@class UIViewController, NSString, MKMapView, UIButton, CLLocation;
@protocol MKMapViewDelegate, MSDMapViewControllerDelegate;



@interface MSDMapViewController : UIViewController <MKMapViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<MSDMapViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKMapView *mapView; // ivar: _mapView
@property (retain, nonatomic) UIButton *recenterButton; // ivar: _recenterButton
@property (readonly) Class superclass;
@property (retain, nonatomic) CLLocation *userLocation; // ivar: _userLocation


-(id)_getAnnotationWithStoreInfo:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)mapView:(id)arg0 viewForAnnotation:(id)arg1 ;
-(void)_recenter:(id)arg0 ;
-(void)_recenterToCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(void)_removeAllStoreAnnotations;
-(void)_zoomToAnnotation;
-(void)_zoomToCoordinate:(struct CLLocationCoordinate2D )arg0 withRadius:(CGFloat)arg1 allowZoomOut:(BOOL)arg2 ;
-(void)annotateStores:(id)arg0 ;
-(void)deselectAnnotation;
-(void)mapView:(id)arg0 didDeselectAnnotationView:(id)arg1 ;
-(void)mapView:(id)arg0 didSelectAnnotationView:(id)arg1 ;
-(void)mapView:(id)arg0 didUpdateUserLocation:(id)arg1 ;
-(void)stopUpdatingUserLocation;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)zoomToStore:(id)arg0 ;


@end


#endif