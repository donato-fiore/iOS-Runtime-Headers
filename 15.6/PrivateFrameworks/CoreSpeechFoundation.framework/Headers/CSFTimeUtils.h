// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSFTIMEUTILS_H
#define CSFTIMEUTILS_H


#import <Foundation/Foundation.h>


@interface CSFTimeUtils : NSObject



+(BOOL)isReceivedTimeInterval:(CGFloat)arg0 matchCurrentTimeInterval:(CGFloat)arg1 ;
+(CGFloat)getHostClockFrequency;
+(CGFloat)hostTimeToTimeInterval:(NSUInteger)arg0 ;
+(NSUInteger)convertSampleCountToNs:(NSUInteger)arg0 sampleRate:(float)arg1 ;
+(NSUInteger)hostTimeFromSampleCount:(NSUInteger)arg0 anchorHostTime:(NSUInteger)arg1 anchorSampleCount:(NSUInteger)arg2 sampleRate:(float)arg3 ;
+(NSUInteger)hostTimeToNs:(NSUInteger)arg0 ;
+(NSUInteger)macHostTimeFromBridgeHostTime:(NSUInteger)arg0 ;
+(NSUInteger)millisecondsToNs:(float)arg0 ;
+(NSUInteger)sampleCountFromHostTime:(NSUInteger)arg0 anchorHostTime:(NSUInteger)arg1 anchorSampleCount:(NSUInteger)arg2 sampleRate:(float)arg3 ;
+(NSUInteger)secondsToHostTime:(float)arg0 ;
+(NSUInteger)secondsToNs:(float)arg0 ;
+(float)hostTimeToSeconds:(NSUInteger)arg0 ;


@end


#endif