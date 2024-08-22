// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXNOTIFICATIONADJACENTSUGGESTIONMETRICSLOGGER_H
#define ATXNOTIFICATIONADJACENTSUGGESTIONMETRICSLOGGER_H


#import <Foundation/Foundation.h>

#import "ATXNotificationAndSuggestionDatastore.h"

@interface ATXNotificationAdjacentSuggestionMetricsLogger : NSObject {
    ATXNotificationAndSuggestionDatastore *_datastore;
}




-(id)init;
-(id)initWithDatastore:(id)arg0 ;
-(void)logNotificationAdjacentSuggestionMetrics;
-(void)logNotificationAdjacentSuggestionMetricsWithXPCActivity:(id)arg0 ;


@end


#endif