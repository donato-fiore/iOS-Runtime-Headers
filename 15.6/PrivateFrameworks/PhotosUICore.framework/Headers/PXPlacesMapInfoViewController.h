// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPLACESMAPINFOVIEWCONTROLLER_H
#define PXPLACESMAPINFOVIEWCONTROLLER_H

@class UIViewController, PXPlacesMapView;



@interface PXPlacesMapInfoViewController : UIViewController

@property (weak) PXPlacesMapView *mapView; // ivar: _mapView


-(NSInteger)segmentIndexFor:(NSUInteger)arg0 ;
-(id)initWithMapView:(id)arg0 ;
-(void)mapTypeChanged:(id)arg0 ;
-(void)tapped3dButton:(id)arg0 ;
-(void)tappedDimView:(id)arg0 ;
-(void)tappedDone:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif