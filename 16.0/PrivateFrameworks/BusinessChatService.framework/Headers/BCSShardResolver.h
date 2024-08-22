// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSSHARDRESOLVER_H
#define BCSSHARDRESOLVER_H

@class NSString;
@protocol BCSShardResolving, BCSShardCaching, BCSShardCacheSkipping, BCSFetchTrigger, BCSMetricFactoryProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BCSShardResolver : NSObject <BCSShardResolving>

 {
    id<BCSShardCaching> *_shardCache;
    id<BCSShardCacheSkipping> *_shardCacheSkipper;
    id<BCSFetchTrigger> *_megashardFetchTrigger;
    id<BCSMetricFactoryProtocol> *_metricFactory;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)shardItemMatching:(id)arg0 clientBundleID:(id)arg1 metric:(id)arg2 completion:(id)arg3 ;


@end


#endif