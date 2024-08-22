// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCOMPOSEDROUTESEGMENT_H
#define GEOCOMPOSEDROUTESEGMENT_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GEOComposedRoute.h"
#import "GEOPBTransitStop.h"

@interface GEOComposedRouteSegment : NSObject <NSSecureCoding>



@property (weak, nonatomic) GEOComposedRoute *composedRoute; // ivar: _composedRoute
@property (readonly, nonatomic) unsigned int endPointIndex;
@property (readonly, nonatomic) ? endRouteCoordinate;
@property (readonly, nonatomic) NSUInteger endStepIndex;
@property (readonly, nonatomic) GEOPBTransitStop *endingTransitStop;
@property (readonly, nonatomic) CGFloat expectedTime;
@property (readonly, nonatomic) NSUInteger numberOfTransitStops;
@property (readonly, nonatomic) NSUInteger pointCount;
@property (readonly, nonatomic) _NSRange pointRange; // ivar: _pointRange
@property (readonly, nonatomic) unsigned int startPointIndex;
@property (readonly, nonatomic) ? startRouteCoordinate;
@property (readonly, nonatomic) NSUInteger startStepIndex;
@property (readonly, nonatomic) GEOPBTransitStop *startingTransitStop;
@property (readonly, nonatomic) NSUInteger stepCount;
@property (readonly, nonatomic) _NSRange stepRange; // ivar: _stepRange
@property (readonly, nonatomic) NSArray *steps;
@property (readonly, nonatomic) _NSRange transitStepRange;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)contains:(id)arg0 ;
-(CGFloat)remainingDistanceAlongSegmentFromStepIndex:(NSUInteger)arg0 currentStepRemainingDistance:(CGFloat)arg1 ;
-(CGFloat)remainingTimeAlongSegmentFromStepIndex:(NSUInteger)arg0 currentStepRemainingDistance:(CGFloat)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComposedRoute:(id)arg0 routeSegmentType:(NSInteger)arg1 stepRange:(struct _NSRange )arg2 pointRange:(struct _NSRange )arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif