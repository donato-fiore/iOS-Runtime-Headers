// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKMULTIPOLYGON_H
#define MKMULTIPOLYGON_H

@class NSString, NSArray;
@protocol MKGeoJSONObject, MKOverlay;


#import "MKShape.h"

@interface MKMultiPolygon : MKShape <MKGeoJSONObject, MKOverlay>



@property (readonly, nonatomic) ? boundingMapRect; // ivar: _boundingMapRect
@property (readonly, nonatomic) CLLocationCoordinate2D coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *polygons; // ivar: _polygons
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;


-(id)_initWithGeoJSONObject:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithPolygons:(id)arg0 ;


@end


#endif