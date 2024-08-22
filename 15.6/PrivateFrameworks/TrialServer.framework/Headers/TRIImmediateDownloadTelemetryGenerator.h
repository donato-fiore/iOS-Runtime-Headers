// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIIMMEDIATEDOWNLOADTELEMETRYGENERATOR_H
#define TRIIMMEDIATEDOWNLOADTELEMETRYGENERATOR_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TRIImmediateDownloadTelemetryGenerator : NSObject {
    BOOL _allowExpensiveNetworking;
    NSInteger _latencyMilliseconds;
    NSArray *_telemetry;
}




-(id)initWithLatencyMilliseconds:(NSInteger)arg0 allowExpensiveNetworking:(BOOL)arg1 existingTelemetry:(id)arg2 ;
-(id)latencyMetric;
-(id)rolloutSystemTelemetry;


@end


#endif