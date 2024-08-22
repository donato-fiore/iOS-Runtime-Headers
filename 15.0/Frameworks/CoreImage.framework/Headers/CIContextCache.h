// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CICONTEXTCACHE_H
#define CICONTEXTCACHE_H


#import <Foundation/Foundation.h>


@interface CIContextCache : NSObject



+(NSInteger)countAllocated;
+(NSInteger)currentNonVolatileSize;
+(NSInteger)peakNonVolatileSize;
+(void)resetStatistics;


@end


#endif