// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHEURISTICUPCOMINGFLIGHTEVENTUTILITIES_H
#define ATXHEURISTICUPCOMINGFLIGHTEVENTUTILITIES_H


#import <Foundation/Foundation.h>


@interface ATXHeuristicUpcomingFlightEventUtilities : NSObject



+(id)flightCheckInActionSuggestionForEvent:(id)arg0 flightSchema:(id)arg1 validStartDate:(id)arg2 validEndDate:(id)arg3 ;
+(id)suggestionsForFlightsWithHeuristicDevice:(id)arg0 ;
+(id)weatherAtTravelDestinationSpotlightEntry:(id)arg0 schemaForFlight:(id)arg1 predictionReasons:(NSUInteger)arg2 score:(CGFloat)arg3 validStartDate:(id)arg4 validEndDate:(id)arg5 ;


@end


#endif