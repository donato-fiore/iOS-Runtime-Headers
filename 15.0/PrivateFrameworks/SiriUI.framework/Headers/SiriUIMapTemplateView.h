// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIUIMAPTEMPLATEVIEW_H
#define SIRIUIMAPTEMPLATEVIEW_H

@class MKMapView, UILabel, MKPinAnnotationView, UIButton, CLPlacemark, CLGeocoder, UITapGestureRecognizer, NSString;
@protocol MKMapViewDelegate, SiriUIMapTemplateModel, SiriUIMapTemplateViewDelegate;


#import "SiriUIBaseTemplateView.h"

@interface SiriUIMapTemplateView : SiriUIBaseTemplateView <MKMapViewDelegate>

 {
    MKMapView *_mapView;
    UILabel *_footnoteDescriptorLabel;
    UILabel *_footnoteLabel;
    MKPinAnnotationView *_pinAnnotationView;
    UIButton *_mapButton;
    CLPlacemark *_currentPlacemark;
    CLGeocoder *_geocoder;
    BOOL _needsToNotifyDelegateOfLocationUpdate;
    UITapGestureRecognizer *_tapRecognizer;
}


@property (weak, nonatomic) NSObject<SiriUIMapTemplateModel> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SiriUIMapTemplateViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)desiredHeight;
-(id)_configuredFootnoteDescriptorLabel;
-(id)_configuredFootnoteLabel;
-(id)_configuredLabel;
-(id)initWithDataSource:(id)arg0 ;
-(void)_handleTapGesture:(id)arg0 ;
-(void)_mapButtonPressed:(id)arg0 ;
-(void)_notifyDelegateOfLocationUpdateIfNeededWithPlacemark:(id)arg0 ;
-(void)layoutSubviews;
-(void)mapView:(id)arg0 regionDidChangeAnimated:(BOOL)arg1 ;
-(void)prepareForDismissal;
-(void)reloadData;


@end


#endif