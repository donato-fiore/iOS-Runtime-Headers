// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKROUTESTEPPOLYLINE_H
#define MKROUTESTEPPOLYLINE_H



#import "MKPolyline.h"
#import "MKRoutePolyline.h"

@interface MKRouteStepPolyline : MKPolyline {
    MKRoutePolyline *_fullRoute;
}




-(id)_initWithRoute:(id)arg0 range:(struct _NSRange )arg1 ;
-(struct CLLocationCoordinate2D )coordinate;
-(void)dealloc;


@end


#endif