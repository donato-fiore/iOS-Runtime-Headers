// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSMETRICSLOGEVENT_H
#define SSMETRICSLOGEVENT_H

@class NSString;


#import "SSMetricsMutableEvent.h"

@interface SSMetricsLogEvent : SSMetricsMutableEvent

@property (nonatomic) NSUInteger logLevel;
@property (retain, nonatomic) NSString *logSubsystem;
@property (retain, nonatomic) NSString *message;


+(NSUInteger)_logLevelFromString:(id)arg0 ;
+(id)_stringFromLogLevel:(NSUInteger)arg0 ;
-(id)description;
-(id)init;


@end


#endif