// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKMULTIPOINT_H
#define MKMULTIPOINT_H

@class NSString;
@protocol MKGeoJSONObject;


#import "MKShape.h"

@interface MKMultiPoint : MKShape <MKGeoJSONObject>

 {
    *? _points;
    ? _boundingRect;
    GEOOnce_s _calculatedMapPointsLength;
    CGFloat _mapPointsLength;
    GEOOnce_s _calculatedSelfIntersecting;
    BOOL _selfIntersecting;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger pointCount; // ivar: _pointCount
@property (readonly) Class superclass;


-(BOOL)_determineSelfIntersecting;
-(BOOL)_isSelfIntersecting;
-(BOOL)intersectsMapRect:(struct ? )arg0 ;
-(CGFloat)_mapPointsLength;
-(CGFloat)locationAtPointIndex:(NSUInteger)arg0 ;
-(id)_initWithGeoJSONObject:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)locationsAtPointIndexes:(id)arg0 ;
-(struct ? )boundingMapRect;
-(struct ? *)points;
-(struct CLLocationCoordinate2D )coordinate;
-(void)_assignPoints:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(void)_calculateBounds;
-(void)_pointsDidChange;
-(void)_setBounds:(struct ? )arg0 ;
-(void)_setCoordinates:(struct CLLocationCoordinate2D *)arg0 count:(NSUInteger)arg1 ;
-(void)_setPoints:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(void)_wrapAroundTheDateline:(struct CLLocationCoordinate2D *)arg0 count:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getCoordinates:(struct CLLocationCoordinate2D *)arg0 range:(struct _NSRange )arg1 ;


@end


#endif