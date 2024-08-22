// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TELEMETRYUTILS_H
#define TELEMETRYUTILS_H


#import <Foundation/Foundation.h>


@interface TelemetryUtils : NSObject



+(void)sendPerCycleModelMetrics:(id)arg0 ;
+(void)sendReachUpdateWithReachLocationString:(id)arg0 andError:(id)arg1 ;
+(void)setTrialInfoWithTriClient:(id)arg0 andNamespaceName:(id)arg1 ;


@end


#endif