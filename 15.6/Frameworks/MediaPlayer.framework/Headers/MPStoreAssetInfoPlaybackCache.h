// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSTOREASSETINFOPLAYBACKCACHE_H
#define MPSTOREASSETINFOPLAYBACKCACHE_H

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPStoreAssetInfoPlaybackCache : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_accessOrderedRequests;
    NSMutableDictionary *_requestToCachedResponse;
}




+(id)sharedCache;
-(id)_init;
-(id)cachedResponseForRequest:(id)arg0 ;
-(void)addCachedResponse:(id)arg0 forRequest:(id)arg1 ;
-(void)updateForPlaybackOfFileAsset:(id)arg0 fromResponse:(id)arg1 ;


@end


#endif