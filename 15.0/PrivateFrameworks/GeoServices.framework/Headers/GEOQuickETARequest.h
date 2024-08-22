// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOQUICKETAREQUEST_H
#define GEOQUICKETAREQUEST_H

@class NSArray, NSDate, NSString;

#import <Foundation/Foundation.h>

#import "GEOAutomobileOptions.h"
#import "GEOLocation.h"
#import "GEOCyclingOptions.h"
#import "GEOComposedWaypoint.h"
#import "GEOTransitOptions.h"
#import "GEOWalkingOptions.h"

@interface GEOQuickETARequest : NSObject

@property (readonly, nonatomic) NSArray *additionalTransportTypesRequested; // ivar: _additionalTransportTypesRequested
@property (readonly, nonatomic) NSDate *arrivalDate; // ivar: _arrivalDate
@property (readonly, nonatomic) GEOAutomobileOptions *automobileOptions; // ivar: _automobileOptions
@property (readonly, nonatomic) GEOLocation *currentLocation; // ivar: _currentLocation
@property (readonly, nonatomic) GEOCyclingOptions *cyclingOptions; // ivar: _cyclingOptions
@property (readonly, nonatomic) NSDate *departureDate; // ivar: _departureDate
@property (readonly, nonatomic) GEOComposedWaypoint *destinationWaypoint; // ivar: _destinationWaypoint
@property (readonly, nonatomic) BOOL includeDistance; // ivar: _includeDistance
@property (retain, nonatomic) NSString *requestingAppIdentifier; // ivar: _requestingAppIdentifier
@property (readonly, nonatomic) GEOComposedWaypoint *sourceWaypoint; // ivar: _sourceWaypoint
@property (readonly, nonatomic) GEOTransitOptions *transitOptions; // ivar: _transitOptions
@property (readonly, nonatomic) int transportType; // ivar: _transportType
@property (readonly, nonatomic) GEOWalkingOptions *walkingOptions; // ivar: _walkingOptions


-(id)_defaultRequestingAppIdentifier;
-(id)description;
-(id)initWithSource:(id)arg0 toDestination:(id)arg1 arrivalDate:(id)arg2 currentLocation:(id)arg3 includeDistance:(BOOL)arg4 automobileOptions:(id)arg5 transitOptions:(id)arg6 walkingOptions:(id)arg7 cyclingOptions:(id)arg8 ;
-(id)initWithSource:(id)arg0 toDestination:(id)arg1 arrivalDate:(id)arg2 transportType:(int)arg3 currentLocation:(id)arg4 ;
-(id)initWithSource:(id)arg0 toDestination:(id)arg1 arrivalDate:(id)arg2 transportType:(int)arg3 currentLocation:(id)arg4 includeDistance:(BOOL)arg5 ;
-(id)initWithSource:(id)arg0 toDestination:(id)arg1 arrivalDate:(id)arg2 transportType:(int)arg3 currentLocation:(id)arg4 includeDistance:(BOOL)arg5 additionalTransportTypesRequested:(id)arg6 ;
-(id)initWithSource:(id)arg0 toDestination:(id)arg1 arrivalDate:(id)arg2 transportType:(int)arg3 currentLocation:(id)arg4 includeDistance:(BOOL)arg5 additionalTransportTypesRequested:(id)arg6 automobileOptions:(id)arg7 transitOptions:(id)arg8 walkingOptions:(id)arg9 cyclingOptions:(id)arg10 ;
-(id)initWithSource:(id)arg0 toDestination:(id)arg1 departureDate:(id)arg2 currentLocation:(id)arg3 includeDistance:(BOOL)arg4 automobileOptions:(id)arg5 transitOptions:(id)arg6 walkingOptions:(id)arg7 cyclingOptions:(id)arg8 ;
-(id)initWithSource:(id)arg0 toDestination:(id)arg1 departureDate:(id)arg2 transportType:(int)arg3 currentLocation:(id)arg4 ;
-(id)initWithSource:(id)arg0 toDestination:(id)arg1 departureDate:(id)arg2 transportType:(int)arg3 currentLocation:(id)arg4 includeDistance:(BOOL)arg5 ;
-(id)initWithSource:(id)arg0 toDestination:(id)arg1 departureDate:(id)arg2 transportType:(int)arg3 currentLocation:(id)arg4 includeDistance:(BOOL)arg5 additionalTransportTypesRequested:(id)arg6 ;
-(id)initWithSource:(id)arg0 toDestination:(id)arg1 departureDate:(id)arg2 transportType:(int)arg3 currentLocation:(id)arg4 includeDistance:(BOOL)arg5 additionalTransportTypesRequested:(id)arg6 automobileOptions:(id)arg7 transitOptions:(id)arg8 walkingOptions:(id)arg9 cyclingOptions:(id)arg10 ;


@end


#endif