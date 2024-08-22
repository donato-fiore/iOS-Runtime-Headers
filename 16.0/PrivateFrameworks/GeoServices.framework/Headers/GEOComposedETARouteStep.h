// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCOMPOSEDETAROUTESTEP_H
#define GEOCOMPOSEDETAROUTESTEP_H

@class NSString;
@protocol GEOComposedRouteStepTravelTimeProvider, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GEOTimeCheckpoints.h"

@interface GEOComposedETARouteStep : NSObject <GEOComposedRouteStepTravelTimeProvider, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat length; // ivar: _length
@property (nonatomic) GEOPolylineCoordinateRange routeCoordinateRange; // ivar: _routeCoordinateRange
@property (nonatomic) NSUInteger stepID; // ivar: _stepID
@property (readonly) Class superclass;
@property (retain, nonatomic) GEOTimeCheckpoints *timeCheckpoints; // ivar: _timeCheckpoints
@property (nonatomic) CGFloat travelDuration; // ivar: _travelDuration


+(BOOL)supportsSecureCoding;
-(CGFloat)distance;
-(CGFloat)travelTime;
-(id)descriptionWithPrecision:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif