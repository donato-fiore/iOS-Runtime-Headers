// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNRPNTRACKERESPRESSORESOURCESCACHE_H
#define VNRPNTRACKERESPRESSORESOURCESCACHE_H

@class NSMutableDictionary, NSLock;

#import <Foundation/Foundation.h>


@interface VNRPNTrackerEspressoResourcesCache : NSObject {
    NSMutableDictionary *_rpnEspressoResourcesKeyToEspressoResourcesCache;
    NSLock *_rpnEspressoResourcesKeyToEspressoResourcesCacheLock;
}




+(id)cacheKeyFromOptions:(id)arg0 error:(*id)arg1 ;
+(id)cacheOptionsKeys;
-(BOOL)addRPNTrackerResourcesConfiguredForOptions:(id)arg0 resources:(id)arg1 error:(*id)arg2 ;
-(id)createRPNTrackerResourcesConfiguredWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)locateRPNTrackerResourcesConfiguredForOptions:(id)arg0 error:(*id)arg1 ;
-(void)releaseCachedResources;


@end


#endif