// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCACHEDELETEUTILITY_H
#define PLCACHEDELETEUTILITY_H


#import <Foundation/Foundation.h>


@interface PLCacheDeleteUtility : NSObject



+(BOOL)registerCacheDelete;
+(BOOL)registerCacheDeleteFull;
+(NSUInteger)enforceRetentionForDirectory:(id)arg0 withMaxDays:(NSUInteger)arg1 ;
+(NSUInteger)enforceRetentionForVersionDirectory:(id)arg0 ;
+(NSUInteger)purgeBuildDirectory:(id)arg0 ;
+(NSUInteger)purgeVersionDirectory:(id)arg0 ;
+(NSUInteger)purgeableSizeForBuildDirectory:(id)arg0 ;
+(NSUInteger)purgeableSizeForVersionDirectory:(id)arg0 ;
+(id)periodicPurgeBlockWithInfo:(id)arg0 withUrgency:(int)arg1 ;
+(id)purgeBlockWithInfo:(id)arg0 withUrgency:(int)arg1 ;
+(id)purgeableBlockWithInfo:(id)arg0 withUrgency:(int)arg1 ;
+(void)traverseBuildDirectory:(id)arg0 withBlock:(id)arg1 ;
+(void)traverseVersionDirectory:(id)arg0 withBlock:(id)arg1 ;


@end


#endif