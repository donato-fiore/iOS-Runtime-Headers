// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCOMPOSEDWALKINGROUTESEGMENT_H
#define GEOCOMPOSEDWALKINGROUTESEGMENT_H

@protocol GEOTransitRoutingIncidentMessage;


#import "GEOComposedRouteSegment.h"
#import "GEOComposedTransitWalkingRouteStep.h"
#import "GEOComposedWalkingRouteStep.h"

@interface GEOComposedWalkingRouteSegment : GEOComposedRouteSegment

@property (readonly, nonatomic) GEOComposedTransitWalkingRouteStep *arrivalStep;
@property (readonly, nonatomic) GEOComposedWalkingRouteStep *lastWalkingStep;
@property (readonly, nonatomic) NSUInteger transitIncidentMessageStepIndex; // ivar: _transitIncidentMessageStepIndex
@property (readonly, nonatomic) NSObject<GEOTransitRoutingIncidentMessage> *transitRouteDetailsIncidentMessage;
@property (readonly, nonatomic) NSObject<GEOTransitRoutingIncidentMessage> *transitSteppingIncidentMessage;


+(BOOL)supportsSecureCoding;
-(id)_transitIncidentMessageStep;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComposedRoute:(id)arg0 stepRange:(struct _NSRange )arg1 pointRange:(struct _NSRange )arg2 transitIncidentMessageStepIndex:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif