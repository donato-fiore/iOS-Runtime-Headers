// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMDPERF_H
#define AMDPERF_H


#import <Foundation/Foundation.h>


@interface AMDPerf : NSObject



+(id)generatePerformanceDict;
+(id)getContainer;
+(void)enable:(BOOL)arg0 ;
+(void)endMonitoringEvent:(id)arg0 ;
+(void)logWithLevel:(int)arg0 andFormat:(id)arg1 ;
+(void)provision;
+(void)sampleForKey:(id)arg0 ;
+(void)setVerbosity:(char)arg0 ;
+(void)startMonitoringEvent:(id)arg0 ;


@end


#endif