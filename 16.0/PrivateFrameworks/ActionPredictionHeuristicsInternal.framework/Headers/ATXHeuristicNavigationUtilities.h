// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXHEURISTICNAVIGATIONUTILITIES_H
#define ATXHEURISTICNAVIGATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface ATXHeuristicNavigationUtilities : NSObject



+(BOOL)allowNavigationSuggestionForLocation:(id)arg0 maxDistance:(NSUInteger)arg1 ;
+(BOOL)isAtLocation:(id)arg0 maxDistance:(NSUInteger)arg1 ;
+(BOOL)isDestinationTooCloseToNavigate:(id)arg0 ;
+(CGFloat)_travelTimeInSecondsWithEvent:(id)arg0 destination:(id)arg1 transportType:(id)arg2 heuristicDevice:(id)arg3 ;
+(NSUInteger)navigationTypeForString:(id)arg0 ;
+(id)_titleWithTravelTimeInSeconds:(CGFloat)arg0 destinationName:(id)arg1 ;
+(id)destinationPlacemarkForEvent:(id)arg0 name:(id)arg1 schemaType:(NSUInteger)arg2 ;
+(id)destinationPlacemarkForLocation:(id)arg0 withDestinationName:(id)arg1 ;
+(id)fetchLocationForLOI:(NSInteger)arg0 ;
+(id)getCurrentLocation;
+(id)locationFromEvent:(id)arg0 schemaType:(NSUInteger)arg1 ;
+(id)navigationSubtitleForType:(NSUInteger)arg0 ;
+(id)navigationSuggestionActionForDestination:(id)arg0 event:(id)arg1 transportType:(id)arg2 schemaForEvent:(id)arg3 predictionReasons:(NSUInteger)arg4 heuristicDevice:(id)arg5 score:(CGFloat)arg6 shouldClearOnEngagement:(BOOL)arg7 validStartDate:(id)arg8 validEndDate:(id)arg9 ;
+(id)navigationSuggestionActionForEvent:(id)arg0 schemaForEvent:(id)arg1 transportType:(id)arg2 predictionReasons:(NSUInteger)arg3 heuristicDevice:(id)arg4 score:(CGFloat)arg5 validStartDate:(id)arg6 validEndDate:(id)arg7 ;
+(id)navigationSuggestionActionForLOI:(NSInteger)arg0 destinationName:(id)arg1 schemaForEvent:(id)arg2 withScore:(CGFloat)arg3 transportType:(id)arg4 predictionReason:(NSUInteger)arg5 validStartDate:(id)arg6 validEndDate:(id)arg7 heuristicDevice:(id)arg8 ;
+(id)placemarkForLOI:(NSInteger)arg0 name:(id)arg1 ;
+(id)schemaTypeToString:(NSUInteger)arg0 ;


@end


#endif