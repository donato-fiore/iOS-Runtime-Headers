// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRISETUPASSISTANTFETCHTELEMETRYGENERATOR_H
#define TRISETUPASSISTANTFETCHTELEMETRYGENERATOR_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TRISetupAssistantFetchTelemetryGenerator : NSObject {
    NSInteger _latencyMilliseconds;
    NSArray *_telemetry;
}




-(id)initWithDeadlineTimestamp:(id)arg0 referenceDate:(id)arg1 existingTelemetry:(id)arg2 ;
-(id)latencyMetric;
-(id)rolloutSystemTelemetry;


@end


#endif