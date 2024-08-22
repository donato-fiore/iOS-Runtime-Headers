// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CLPOLYGONALREGION_H
#define _CLPOLYGONALREGION_H

@class NSArray;


#import "CLRegion.h"

@interface _CLPolygonalRegion : CLRegion

@property (readonly, nonatomic) BOOL allowMonitoringWhileNearby; // ivar: _allowMonitoringWhileNearby
@property int geoReferenceFrame; // ivar: _geoReferenceFrame
@property (readonly, copy, nonatomic) NSArray *vertices; // ivar: _vertices


+(BOOL)supportsSecureCoding;
-(BOOL)containsCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(BOOL)containsCoordinate:(struct CLLocationCoordinate2D )arg0 withDistanceToBorder:(*CGFloat)arg1 ;
-(BOOL)pointInPolygonWithCoordinate:(struct CLLocationCoordinate2D )arg0 withDistanceToBorder:(*CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initNearbyAllowedWithVertices:(id)arg0 identifier:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVertices:(id)arg0 identifier:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif