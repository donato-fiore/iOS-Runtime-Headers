// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNRPNTRACKERESPRESSOMODELCACHEMANAGER_H
#define VNRPNTRACKERESPRESSOMODELCACHEMANAGER_H

@class NSMutableDictionary, NSLock, NSString;

#import <Foundation/Foundation.h>


@interface VNRPNTrackerEspressoModelCacheManager : NSObject {
    NSMutableDictionary *_rpnEspressoResourcesKeyToEspressoResourcesCache;
    NSLock *_rpnEspressoResourcesKeyToEspressoResourcesCacheLock;
}


@property (readonly) NSString *espressoModelName; // ivar: _espressoModelName


+(id)cacheKeyFromOptions:(id)arg0 error:(*id)arg1 ;
+(id)cacheOptionsKeys;
-(id)espressoResourcesFromOptions:(id)arg0 error:(*id)arg1 ;
-(id)initWithRPNEspressoModelName:(id)arg0 ;
-(void)dealloc;


@end


#endif