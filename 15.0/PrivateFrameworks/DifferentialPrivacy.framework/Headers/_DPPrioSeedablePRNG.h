// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DPPRIOSEEDABLEPRNG_H
#define _DPPRIOSEEDABLEPRNG_H


#import <Foundation/Foundation.h>


@interface _DPPrioSeedablePRNG : NSObject



+(NSUInteger)seedLength;
+(id)generateSeed;
+(id)randomDataFromSeed:(id)arg0 length:(NSUInteger)arg1 ;


@end


#endif