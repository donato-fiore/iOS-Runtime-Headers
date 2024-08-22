// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTSAMPLING_H
#define MTSAMPLING_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MTSampling : NSObject

@property (retain, nonatomic) NSMutableDictionary *sessions; // ivar: _sessions


-(BOOL)isSampledInWithEventType:(id)arg0 samplingForced:(id)arg1 sessionSamplingPercentage:(id)arg2 sessionDuration:(id)arg3 samplingPercentage:(id)arg4 ;
-(BOOL)isSampledInWithEventType:(id)arg0 sessionSamplingPercentage:(CGFloat)arg1 sessionDurationMs:(NSUInteger)arg2 ;
-(BOOL)isSampledInWithMetricsData:(id)arg0 ;
-(BOOL)isSampledInWithSamplingPercentage:(CGFloat)arg0 ;
-(id)init;
-(void)clearSessionWithEventType:(id)arg0 ;


@end


#endif