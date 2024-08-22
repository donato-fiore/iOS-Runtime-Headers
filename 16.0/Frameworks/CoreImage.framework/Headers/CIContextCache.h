// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CICONTEXTCACHE_H
#define CICONTEXTCACHE_H


#import <Foundation/Foundation.h>


@interface CIContextCache : NSObject



+(NSInteger)countAllocated;
+(NSInteger)currentNonVolatileSize;
+(NSInteger)peakNonVolatileSize;
+(float)fillTime;
+(id)peakNonVolatileList;
+(void)resetStatistics;


@end


#endif