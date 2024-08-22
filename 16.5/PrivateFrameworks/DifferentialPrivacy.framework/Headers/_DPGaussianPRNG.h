// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DPGAUSSIANPRNG_H
#define _DPGAUSSIANPRNG_H


#import <Foundation/Foundation.h>


@interface _DPGaussianPRNG : NSObject



+(BOOL)generateGaussianFloatsWithMean:(CGFloat)arg0 stddev:(CGFloat)arg1 x:(int)arg2 y:(int)arg3 out1:(*float)arg4 out2:(*float)arg5 ;
+(NSUInteger)seedLength;
+(id)generateSeed;
+(id)randomFloatVectorFromSeed:(id)arg0 length:(NSUInteger)arg1 mean:(CGFloat)arg2 stddev:(CGFloat)arg3 ;


@end


#endif