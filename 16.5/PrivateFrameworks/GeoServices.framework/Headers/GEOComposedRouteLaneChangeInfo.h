// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOCOMPOSEDROUTELANECHANGEINFO_H
#define GEOCOMPOSEDROUTELANECHANGEINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOComposedRouteLaneChangeInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) ? endCoordinate; // ivar: _endCoordinate
@property (readonly, nonatomic) NSUInteger laneCount; // ivar: _laneCount
@property (readonly, nonatomic) GEOPolylineCoordinateRange routeCoordinateRange; // ivar: _routeCoordinateRange
@property (readonly, nonatomic) ? startCoordinate; // ivar: _startCoordinate


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGeoLaneChangeInfo:(id)arg0 coordinates:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif