// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPOLYGON_H
#define MKPOLYGON_H

@class NSString, NSArray;
@protocol MKGeoJSONObject, NSSecureCoding, MKOverlay;


#import "MKMultiPoint.h"

@interface MKPolygon : MKMultiPoint <MKGeoJSONObject, NSSecureCoding, MKOverlay>

 {
    CLLocationCoordinate2D _centroid;
    GEOOnce_s _determinedSimple;
}


@property (nonatomic) BOOL _isDefinitelyConvex; // ivar: _isDefinitelyConvex
@property (readonly, nonatomic) ? boundingMapRect;
@property (readonly, nonatomic) CLLocationCoordinate2D coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSArray *interiorPolygons; // ivar: _interiorPolygons
@property (readonly, nonatomic, getter=_isSimple) BOOL simple; // ivar: _simple
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;


+(BOOL)supportsSecureCoding;
+(id)_polygonWithMapRect:(struct ? )arg0 ;
+(id)polygonEnclosingMapPoints:(struct ? *)arg0 count:(NSUInteger)arg1 ;
+(id)polygonWithCoordinates:(struct CLLocationCoordinate2D *)arg0 count:(NSUInteger)arg1 ;
+(id)polygonWithCoordinates:(struct CLLocationCoordinate2D *)arg0 count:(NSUInteger)arg1 interiorPolygons:(id)arg2 ;
+(id)polygonWithPoints:(struct ? *)arg0 count:(NSUInteger)arg1 ;
+(id)polygonWithPoints:(struct ? *)arg0 count:(NSUInteger)arg1 interiorPolygons:(id)arg2 ;
-(BOOL)_determineSelfIntersecting;
-(BOOL)intersectsMapRect:(struct ? )arg0 ;
-(id)_initWithGeoJSONCoordinateArrays:(id)arg0 error:(*id)arg1 ;
-(id)_initWithGeoJSONObject:(id)arg0 error:(*id)arg1 ;
-(id)_initWithPointsNoCopy:(struct ? *)arg0 count:(NSUInteger)arg1 interiorPolygons:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_calculateBounds;
-(void)_determineSimple;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif