// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CESRAUDIOSAMPLINGUTILITIES_H
#define CESRAUDIOSAMPLINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface CESRAudioSamplingUtilities : NSObject



+(BOOL)isUniformlySampled:(NSUInteger)arg0 fromTotal:(NSUInteger)arg1 ;
+(BOOL)isUniformlySampledWithPercentage:(NSUInteger)arg0 ;
+(BOOL)isUniformlySampledWithSamplingRate:(float)arg0 ;


@end


#endif