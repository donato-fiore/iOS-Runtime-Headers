// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSSHARDRESOLVER_H
#define BCSSHARDRESOLVER_H

@class NSString;
@protocol BCSShardResolving, BCSShardCaching, BCSShardCacheSkipping, BCSShardRemoteFetching, BCSMetricFactoryProtocol;

#import <Foundation/Foundation.h>


@interface BCSShardResolver : NSObject <BCSShardResolving>

 {
    id<BCSShardCaching> *_shardCache;
    id<BCSShardCacheSkipping> *_shardCacheSkipper;
    id<BCSShardRemoteFetching> *_shardRemoteFetcher;
    id<BCSMetricFactoryProtocol> *_metricFactory;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)shardItemMatching:(id)arg0 clientBundleID:(id)arg1 metric:(id)arg2 completion:(id)arg3 ;


@end


#endif