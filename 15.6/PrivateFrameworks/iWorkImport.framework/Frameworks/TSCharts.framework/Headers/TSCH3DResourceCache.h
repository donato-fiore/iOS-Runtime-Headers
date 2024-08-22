// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DRESOURCECACHE_H
#define TSCH3DRESOURCECACHE_H

@class NSMutableDictionary, NSCountedSet;
@protocol TSCH3DProtectResourceDelegate;

#import <Foundation/Foundation.h>

#import "TSCH3DDictionaryOfSet.h"

@interface TSCH3DResourceCache : NSObject <TSCH3DProtectResourceDelegate>

 {
    TSCH3DDictionaryOfSet *_resourceKeyedEntries;
    NSMutableDictionary *_handles;
    NSCountedSet *_protectedResources;
    NSMutableDictionary *_memoryUsage;
    NSCountedSet *_usageCounts;
    NSUInteger _peakMemoryUsedInBytes;
    BOOL _needToLogPeakMemory;
    BOOL _analyticsTestingEnabled;
}


@property (nonatomic) NSUInteger memoryLimitInBytes; // ivar: _memoryLimitInBytes
@property (readonly, nonatomic) NSUInteger memoryUsedInBytes; // ivar: _memoryUsedInBytes


-(BOOL)hasEnoughFreeMemoryOfBytes:(NSUInteger)arg0 ;
-(BOOL)isProtectedResource:(id)arg0 ;
-(NSUInteger)memoryUsedForResource:(id)arg0 ;
-(float)debug_totalMemoryUsageMB;
-(id)debug_countedClasses;
-(id)debug_countedMemory;
-(id)debug_details;
-(id)debug_stats;
-(id)debug_string;
-(id)debug_usageCounts;
-(id)flushAllResourcesForContext:(id)arg0 ;
-(id)flushResources:(id)arg0 context:(id)arg1 ;
-(id)handleForKey:(id)arg0 ;
-(id)init;
-(id)keyForKey:(id)arg0 ;
-(id)keyForLoader:(id)arg0 resource:(id)arg1 virtualScreen:(NSInteger)arg2 ;
-(id)p_allResourceKeys;
-(id)p_flushResourceKeys:(id)arg0 context:(id)arg1 ;
-(id)p_keysForResource:(id)arg0 ;
-(id)p_keysForResources:(id)arg0 ;
-(id)p_unretainedResourcesFromResources:(id)arg0 ;
-(void)dealloc;
-(void)flushMemoryForResources:(id)arg0 ;
-(void)garbageCollectAllResourcesForContext:(id)arg0 ;
-(void)garbageCollectResources:(id)arg0 context:(id)arg1 ;
-(void)p_flushHandleForKey:(id)arg0 context:(id)arg1 ;
-(void)p_logForAnalyticsIfNecessary;
-(void)p_removeHandleForKey:(id)arg0 ;
-(void)protectResource:(id)arg0 ;
-(void)setBytesUploaded:(NSUInteger)arg0 forKey:(id)arg1 ;
-(void)setHandle:(id)arg0 forKey:(id)arg1 ;
-(void)unprotectResource:(id)arg0 ;
-(void)updateUsageCountForResourceSet:(id)arg0 fromPreviousResourceSet:(id)arg1 ;


@end


#endif