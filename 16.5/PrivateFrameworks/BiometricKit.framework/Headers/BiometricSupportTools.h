// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BIOMETRICSUPPORTTOOLS_H
#define BIOMETRICSUPPORTTOOLS_H


#import <Foundation/Foundation.h>


@interface BiometricSupportTools : NSObject



+(id)dateFromNanoTime:(NSUInteger)arg0 nanoseconds:(*unsigned int)arg1 ;
+(void)analyticsOSLogNSDictionary:(id)arg0 forEvent:(id)arg1 ;
+(void)analyticsOSLogNSDictionary:(id)arg0 forEvent:(id)arg1 toLogPath:(id)arg2 withPrefix:(id)arg3 ;


@end


#endif