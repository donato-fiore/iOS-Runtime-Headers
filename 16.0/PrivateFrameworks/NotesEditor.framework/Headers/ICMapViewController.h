// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICMAPVIEWCONTROLLER_H
#define ICMAPVIEWCONTROLLER_H

@class UIViewController, NSString, MKLocalSearch, MKMapItem, MKMapView;
@protocol MKMapViewDelegate, MKAnnotation;



@interface ICMapViewController : UIViewController <MKMapViewDelegate>



@property (retain, nonatomic) NSObject<MKAnnotation> *annotation; // ivar: _annotation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKLocalSearch *localSearch; // ivar: _localSearch
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (retain, nonatomic) MKMapView *mapView; // ivar: _mapView
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)wantsFullScreenLayout;
-(id)initWithAnnotation:(id)arg0 ;
-(void)_toolbarItemPressed:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)mapView:(id)arg0 didAddAnnotationViews:(id)arg1 ;
-(void)selectPin;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif