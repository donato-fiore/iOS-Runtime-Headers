// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKTRAVELENGINEUTILITIES_H
#define EKTRAVELENGINEUTILITIES_H


#import <Foundation/Foundation.h>


@interface EKTravelEngineUtilities : NSObject



+(BOOL)date:(id)arg0 representsApproachingDepartureDateForHypothesis:(id)arg1 ;
+(BOOL)date:(id)arg0 representsImmediateDepartureForHypothesis:(id)arg1 ;
+(BOOL)date:(id)arg0 representsLatenessForHypothesis:(id)arg1 ;
+(BOOL)travelStateIndicatesTravelingTowardDestination:(NSInteger)arg0 ;
+(CGFloat)maximumAllowableTravelTime;
+(CGFloat)minimumAllowableTravelTime;
+(NSInteger)geoRouteHypothesisTravelStateForString:(id)arg0 ;
+(NSUInteger)geoTrafficDensityForString:(id)arg0 ;
+(id)authorizationStatusAsString:(int)arg0 ;
+(id)cadRouteHypothesisForEKTravelEngineHypothesis:(id)arg0 ;
+(id)formattedLocationCoordinates:(id)arg0 ;
+(id)geoTrafficDensityAsString:(NSUInteger)arg0 ;
+(id)geoTransportTypeAsString:(int)arg0 ;
+(int)geoTransportTypeForCalLocationRoutingMode:(NSInteger)arg0 ;
+(int)geoTransportTypeForString:(id)arg0 ;


@end


#endif