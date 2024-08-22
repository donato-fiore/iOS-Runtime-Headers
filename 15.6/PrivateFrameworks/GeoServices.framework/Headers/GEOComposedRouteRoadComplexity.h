// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCOMPOSEDROUTEROADCOMPLEXITY_H
#define GEOCOMPOSEDROUTEROADCOMPLEXITY_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOComposedRouteRoadComplexity : NSObject <NSSecureCoding>



@property (readonly, nonatomic) GEOPolylineCoordinateRange coordinateRange; // ivar: _coordinateRange
@property (readonly, nonatomic) int roadComplexityType; // ivar: _roadComplexityType


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoordinateRange:(struct GEOPolylineCoordinateRange )arg0 complexityType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif