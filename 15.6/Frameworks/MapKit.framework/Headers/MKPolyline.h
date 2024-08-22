// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPOLYLINE_H
#define MKPOLYLINE_H

@class NSString;
@protocol MKGeoJSONObject, MKOverlay;


#import "MKMultiPoint.h"

@interface MKPolyline : MKMultiPoint <MKGeoJSONObject, MKOverlay>



@property (readonly, nonatomic) ? boundingMapRect;
@property (readonly, nonatomic) CLLocationCoordinate2D coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;


+(id)polylineWithCoordinates:(struct CLLocationCoordinate2D *)arg0 count:(NSUInteger)arg1 ;
+(id)polylineWithPoints:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(BOOL)intersectsMapRect:(struct ? )arg0 ;
-(id)_initWithGeoJSONObject:(id)arg0 error:(*id)arg1 ;
-(id)_initWithGeoJSONPoints:(id)arg0 error:(*id)arg1 ;
-(void)_calculateBounds;


@end


#endif