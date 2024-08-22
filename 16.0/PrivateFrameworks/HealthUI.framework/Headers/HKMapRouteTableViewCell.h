// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMAPROUTETABLEVIEWCELL_H
#define HKMAPROUTETABLEVIEWCELL_H

@class UITableViewCell, NSString, MKMapView;
@protocol MKMapViewDelegate;



@interface HKMapRouteTableViewCell : UITableViewCell <MKMapViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) MKMapView *mapView; // ivar: _mapView
@property (readonly) Class superclass;


+(id)defaultReuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)mapView:(id)arg0 rendererForOverlay:(id)arg1 ;
-(id)mapView:(id)arg0 viewForAnnotation:(id)arg1 ;
-(void)setUpConstraints;
-(void)setupSubviews;


@end


#endif