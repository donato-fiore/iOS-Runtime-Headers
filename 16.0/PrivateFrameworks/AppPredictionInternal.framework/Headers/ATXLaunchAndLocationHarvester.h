// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXLAUNCHANDLOCATIONHARVESTER_H
#define ATXLAUNCHANDLOCATIONHARVESTER_H


#import <Foundation/Foundation.h>


@interface ATXLaunchAndLocationHarvester : NSObject



+(BOOL)_passedAppOrClipSpecificFiltersGivenBundleId:(id)arg0 date:(id)arg1 isClip:(BOOL)arg2 counterKey:(id)arg3 samplingRate:(CGFloat)arg4 maxSamples:(NSUInteger)arg5 ;
+(BOOL)_passedGeneralFiltersGivenLocation:(id)arg0 date:(id)arg1 ;
+(id)_awdMetricsObjectWithLocation:(id)arg0 date:(id)arg1 bundleId:(id)arg2 urlHash:(id)arg3 isClip:(BOOL)arg4 launchReason:(int)arg5 isNegativeSession:(BOOL)arg6 ;
+(void)_postAwdMetrics:(id)arg0 ;
+(void)logAppOrClipLaunch:(id)arg0 isNegativeSession:(BOOL)arg1 ;


@end


#endif