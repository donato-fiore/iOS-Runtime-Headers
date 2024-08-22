// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTRANSACTIONMAPVIEW_H
#define PKTRANSACTIONMAPVIEW_H

@class UIView, MKMapView, _MKLocationShifter, CLLocation, NSString, PKPaymentTransaction;
@protocol MKMapViewDelegate;



@interface PKTransactionMapView : UIView <MKMapViewDelegate>

 {
    MKMapView *_internalMapView;
    CGRect _lastLaidBounds;
    _MKLocationShifter *_locationShifter;
    CLLocation *_preferredLocation;
    CLLocation *_startStationLocation;
    CLLocation *_endStationLocation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showsMerchantName; // ivar: _showsMerchantName
@property (readonly) Class superclass;
@property (retain, nonatomic) PKPaymentTransaction *transaction; // ivar: _transaction
@property (nonatomic) BOOL usesDarkAppearance; // ivar: _usesDarkAppearance


-(id)_annotationsForTransaction:(id)arg0 ;
-(id)_locationShifter;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)mapView:(id)arg0 viewForAnnotation:(id)arg1 ;
-(struct ? )_mapRectForTransaction:(id)arg0 ;
-(void)_centerOnTransactionAnimated:(BOOL)arg0 ;
-(void)_createAnnotationsForTransaction:(id)arg0 ;
-(void)_shiftLocationIfNeeded:(id)arg0 completion:(id)arg1 ;
-(void)_updateLocations;
-(void)layoutSubviews;


@end


#endif