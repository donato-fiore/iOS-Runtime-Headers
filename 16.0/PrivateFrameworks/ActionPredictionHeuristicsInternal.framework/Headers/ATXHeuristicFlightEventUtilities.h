// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXHEURISTICFLIGHTEVENTUTILITIES_H
#define ATXHEURISTICFLIGHTEVENTUTILITIES_H


#import <Foundation/Foundation.h>


@interface ATXHeuristicFlightEventUtilities : NSObject



+(BOOL)currentLocationIsWithinAirportForEvent:(id)arg0 ;
+(id)fetchDestinationPlacemarkForFlightEvent:(id)arg0 ;
+(id)flightInformationSchemaForEvent:(id)arg0 ;
+(id)flightInformationSpotlightSuggestionForEvent:(id)arg0 schemaForFlight:(id)arg1 predictionReasons:(NSUInteger)arg2 score:(CGFloat)arg3 validStartDate:(id)arg4 validEndDate:(id)arg5 ;
+(id)flightSchemaForEvent:(id)arg0 ;
+(id)lastFlightLegEndTimeForEvent:(id)arg0 ;
+(id)updatedFlightInformationSchemaForEvent:(id)arg0 schemaForFlight:(id)arg1 ;
+(struct CLLocationCoordinate2D )locationAtArrivalAirport:(id)arg0 event:(id)arg1 ;
+(void)logSuggestion:(id)arg0 description:(id)arg1 ;


@end


#endif