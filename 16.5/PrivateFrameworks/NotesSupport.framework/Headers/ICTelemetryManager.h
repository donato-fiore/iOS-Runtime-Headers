// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTELEMETRYMANAGER_H
#define ICTELEMETRYMANAGER_H


#import <Foundation/Foundation.h>


@interface ICTelemetryManager : NSObject



+(id)sharedManager;
+(id)telemetryQueue;
+(id)telemetryTuples;
+(void)postBasicEvent:(NSUInteger)arg0 ;
+(void)postFetchDatabaseChangesTelemetryWithReason:(id)arg0 ;
+(void)postFetchZoneChangesTelemetryWithReason:(id)arg0 ;
+(void)postFullSyncTelemetryWithReason:(id)arg0 ;
+(void)waitUntilAllPendingTelemetryHasBeenSent;
-(void)postTelemetryEvent:(NSUInteger)arg0 serviceName:(id)arg1 payload:(id)arg2 ;


@end


#endif