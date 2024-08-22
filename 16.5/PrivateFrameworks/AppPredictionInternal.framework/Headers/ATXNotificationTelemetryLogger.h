// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXNOTIFICATIONTELEMETRYLOGGER_H
#define ATXNOTIFICATIONTELEMETRYLOGGER_H

@class ATXDNDModeConfigurationClient, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "ATXNotificationAndSuggestionDatastore.h"

@interface ATXNotificationTelemetryLogger : NSObject {
    ATXNotificationAndSuggestionDatastore *_datastore;
    ATXDNDModeConfigurationClient *_modeConfigClient;
    NSMutableDictionary *_summaryMetrics;
}




-(id)init;
-(id)initWithDatastore:(id)arg0 modeConfigClient:(id)arg1 ;
-(id)summaryMetricsForActivityType:(NSUInteger)arg0 ;
-(void)logNotificationMetricsFromStartTimestamp:(id)arg0 toEndTimestamp:(id)arg1 ;
-(void)logNotificationMetricsWithXPCActivity:(id)arg0 ;


@end


#endif