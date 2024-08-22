// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXLAUNCHANDLOCATIONFILTERER_H
#define ATXLAUNCHANDLOCATIONFILTERER_H


#import <Foundation/Foundation.h>


@interface ATXLaunchAndLocationFilterer : NSObject



+(BOOL)appBundleIdIsBlacklisted:(id)arg0 blacklist:(id)arg1 ;
+(BOOL)genreIdIsBlacklistedGivenAppBundleId:(id)arg0 blacklist:(id)arg1 ;
+(BOOL)locationIsStaleOrNotAccurateEnough:(id)arg0 now:(id)arg1 ;
+(BOOL)shouldSampleWithCounterKey:(id)arg0 date:(id)arg1 samplingRate:(CGFloat)arg2 maxSamples:(NSUInteger)arg3 ;
+(id)_formattedStringForDate:(id)arg0 ;
+(void)incrementOnDeviceDailySamplesWithCounterKey:(id)arg0 date:(id)arg1 ;


@end


#endif