// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCONTEXTNAVIGATIONSUGGESTIONPRODUCER_H
#define ATXCONTEXTNAVIGATIONSUGGESTIONPRODUCER_H

@class NSString, EKEvent, NSDictionary;

#import <Foundation/Foundation.h>


@interface ATXContextNavigationSuggestionProducer : NSObject {
    NSString *_title;
    EKEvent *_event;
    NSDictionary *_schemaForEvent;
    NSString *_alternateDestinationTitle;
}




-(id)_contextTitleWithReasons:(NSUInteger)arg0 ;
-(id)_stringsWithPredictionReasons:(NSUInteger)arg0 ;
-(id)initWithTitle:(id)arg0 event:(id)arg1 schemaForEvent:(id)arg2 alternateDestinationTitle:(id)arg3 ;
-(id)suggestionForNavigationToDestination:(id)arg0 transportType:(NSUInteger)arg1 destinationName:(id)arg2 subtitle:(id)arg3 predictionReasons:(NSUInteger)arg4 score:(CGFloat)arg5 shouldClearOnEngagement:(BOOL)arg6 validStartDate:(id)arg7 validEndDate:(id)arg8 ;


@end


#endif