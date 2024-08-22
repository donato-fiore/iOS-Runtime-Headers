// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKLABELMARKERVIEW_H
#define _MKLABELMARKERVIEW_H



#import "MKAnnotationView.h"
#import "MKMapView.h"

@interface _MKLabelMarkerView : MKAnnotationView

@property (weak, nonatomic) MKMapView *mapView; // ivar: _mapView


+(BOOL)_followsTerrain;
-(BOOL)shouldShowCallout;
-(BOOL)updateCalloutViewIfNeededAnimated:(BOOL)arg0 ;
-(id)initWithAnnotation:(id)arg0 reuseIdentifier:(id)arg1 ;
-(void)_deregisterObserver;
-(void)_registerObserver;
-(void)_updateAnchorOffset;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setAnnotation:(id)arg0 ;


@end


#endif