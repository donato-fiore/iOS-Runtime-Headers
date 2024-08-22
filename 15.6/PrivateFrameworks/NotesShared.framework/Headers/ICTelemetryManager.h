// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICTELEMETRYMANAGER_H
#define ICTELEMETRYMANAGER_H


#import <Foundation/Foundation.h>


@interface ICTelemetryManager : NSObject



+(id)sharedManager;
+(id)telemetryQueue;
+(id)telemetryTuples;
+(void)postFetchDatabaseChangesTelemetryWithReason:(id)arg0 ;
+(void)postFetchZoneChangesTelemetryWithReason:(id)arg0 ;
+(void)postFullSyncTelemetryWithReason:(id)arg0 ;
-(void)postTelemetryEvent:(NSUInteger)arg0 payload:(id)arg1 ;


@end


#endif