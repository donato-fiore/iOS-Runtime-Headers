// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCONTEXTFLIGHTEVENTSUGGESTIONPRODUCER_H
#define ATXCONTEXTFLIGHTEVENTSUGGESTIONPRODUCER_H

@class NSString, NSDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface ATXContextFlightEventSuggestionProducer : NSObject {
    NSString *_title;
    NSDictionary *_flightInformationSchema;
    NSString *_urlString;
    NSString *_teamIdentifier;
    NSDate *_validFromStartDate;
    NSDate *_validToEndDate;
    NSString *_alternateDestinationTitle;
}




-(id)_contextTitleWithReasons:(NSUInteger)arg0 ;
-(id)_stringsWithPredictionReasons:(NSUInteger)arg0 ;
-(id)_suggestionForAirplaneModeWithStatus:(BOOL)arg0 predictionReasons:(NSUInteger)arg1 score:(CGFloat)arg2 ;
-(id)disableAirplaneModeWithPredictionReasons:(NSUInteger)arg0 score:(CGFloat)arg1 ;
-(id)enableAirplaneModeWithPredictionReasons:(NSUInteger)arg0 score:(CGFloat)arg1 ;
-(id)initWithTitle:(id)arg0 flightInformationSchema:(id)arg1 urlString:(id)arg2 teamIdentifier:(id)arg3 validFromStartDate:(id)arg4 validToEndDate:(id)arg5 alternateDestinationTitle:(id)arg6 ;
-(id)sfSearchResult:(id)arg0 title:(id)arg1 subtitle:(id)arg2 type:(int)arg3 sectionHeader:(id)arg4 score:(CGFloat)arg5 ;
-(id)suggestionForFlightCheckInWithReason:(NSUInteger)arg0 score:(CGFloat)arg1 ;
-(id)suggestionForFlightInformationWithReason:(NSUInteger)arg0 score:(CGFloat)arg1 date:(id)arg2 ;
-(id)suggestionForRideShareAppForDestination:(id)arg0 source:(id)arg1 rideOptionName:(id)arg2 preferredBundleId:(id)arg3 predictionReasons:(NSUInteger)arg4 score:(CGFloat)arg5 ;
-(id)suggestionForWeatherAtFlightDestinationLocation:(struct CLLocationCoordinate2D )arg0 destination:(id)arg1 predictionReasons:(NSUInteger)arg2 score:(CGFloat)arg3 ;
-(id)suggestionWithAction:(id)arg0 predictionReasons:(NSUInteger)arg1 score:(CGFloat)arg2 ;


@end


#endif