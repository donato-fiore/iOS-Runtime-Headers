// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIKEVENTSUGGESTIONGENERATOR_H
#define CUIKEVENTSUGGESTIONGENERATOR_H


#import <Foundation/Foundation.h>


@interface CUIKEventSuggestionGenerator : NSObject



+(BOOL)scanStringForFlights:(id)arg0 flightNumber:(*NSUInteger)arg1 airlineCode:(*id)arg2 ;
+(id)eventWithSuggestedTimeFromString:(id)arg0 referenceDate:(id)arg1 inEventStore:(id)arg2 options:(NSUInteger)arg3 ;


@end


#endif