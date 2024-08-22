// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKROUTESTEPPOLYLINE_H
#define MKROUTESTEPPOLYLINE_H

@class NSString;
@protocol MKDirectionsResponsePolyline;


#import "MKPolyline.h"
#import "MKRoutePolyline.h"

@interface MKRouteStepPolyline : MKPolyline <MKDirectionsResponsePolyline>

 {
    MKRoutePolyline *_fullRoute;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_requiresModernMap) BOOL requiresModernMap;
@property (readonly) Class superclass;


-(id)_initWithRoute:(id)arg0 range:(struct _NSRange )arg1 ;
-(struct CLLocationCoordinate2D )coordinate;
-(void)dealloc;


@end


#endif