// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNROUTEDIVERGENCERESULT_H
#define MNROUTEDIVERGENCERESULT_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface MNRouteDivergenceResult : NSObject

@property (nonatomic) ? locationCoordinate; // ivar: _locationCoordinate
@property (nonatomic) NSUInteger resultType; // ivar: _resultType
@property (nonatomic) PolylineCoordinate routeCoordinate; // ivar: _routeCoordinate
@property (retain, nonatomic) NSUUID *routeID; // ivar: _routeID


-(id)description;
-(id)init;


@end


#endif