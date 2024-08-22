// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCOORDINATEARRAYSUPPORTPOINT_H
#define GEOCOORDINATEARRAYSUPPORTPOINT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOCoordinateArraySupportPoint : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat heading; // ivar: _heading
@property (nonatomic) NSUInteger index; // ivar: _index
@property (nonatomic) BOOL isUTurn; // ivar: _isUTurn
@property (nonatomic) int legacyFormOfWay; // ivar: _legacyFormOfWay
@property (nonatomic) int legacyRoadClass; // ivar: _legacyRoadClass
@property (nonatomic) NSInteger roadID; // ivar: _roadID
@property (nonatomic) PolylineCoordinate routeCoordinate; // ivar: _routeCoordinate


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif