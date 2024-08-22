// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIACTIVITYAPPLICATIONEXTENSIONSCACHE_H
#define _UIACTIVITYAPPLICATIONEXTENSIONSCACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _UIActivityApplicationExtensionsCache : NSObject {
    BOOL _primed;
    NSUInteger _cacheMisses;
    NSUInteger _cacheHits;
    os_unfair_lock_s _cacheLock;
    BOOL _precached;
}


@property (retain, nonatomic) NSMutableDictionary *cachedResults; // ivar: _cachedResults
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *discoveryQueue; // ivar: _discoveryQueue
@property (retain, nonatomic) NSMutableDictionary *extensionMatchTokens; // ivar: _extensionMatchTokens
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *primedExtensionsQueue; // ivar: _primedExtensionsQueue


+(id)sharedExtensionsCache;
-(id)_matchingExtensionsCachedResultForKey:(id)arg0 ;
-(id)extensionsResultWithMatchingAttributes:(id)arg0 ;
-(id)init;
-(id)reportExtensionsCacheResult;
-(void)_cacheMatchingExtensions:(id)arg0 cacheKey:(id)arg1 error:(id)arg2 ;
-(void)_cacheMatchingExtensionsResult:(id)arg0 cacheKey:(id)arg1 ;
-(void)_startContinuousExtensionDiscoveryForAttributes:(id)arg0 cacheKey:(id)arg1 ;
-(void)_startPrecachingContinuousExtensionDiscovery;
-(void)primeExtensionsResultWithMatchingAttributes:(id)arg0 ;


@end


#endif