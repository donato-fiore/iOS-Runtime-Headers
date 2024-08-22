// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCSMEGASHARDFETCHER_H
#define BCSMEGASHARDFETCHER_H

@class NSMutableSet;
@protocol BCSConfigCaching, BCSShardCacheQueryable, BCSShardCacheSkipping, BCSMegashardRemoteFetching, BCSShardItemInstantiating, BCSUserDefaultsProviding, BCSMetricFactoryProtocol;

#import <Foundation/Foundation.h>


@interface BCSMegashardFetcher : NSObject {
    NSInteger _type;
    NSInteger _shardType;
    id<BCSConfigCaching> *_configCache;
    id<BCSShardCacheQueryable> *_shardCache;
    id<BCSShardCacheSkipping> *_shardCacheSkipper;
    id<BCSMegashardRemoteFetching> *_megashardRemoteFetcher;
    id<BCSShardItemInstantiating> *_shardInstantiator;
    id<BCSUserDefaultsProviding> *_userDefaults;
    id<BCSMetricFactoryProtocol> *_metricFactory;
    NSMutableSet *_triggers;
}




-(id)initWithShardType:(NSInteger)arg0 configCache:(id)arg1 shardCache:(id)arg2 shardCacheSkipper:(id)arg3 shardInstantiator:(id)arg4 megashardRemoteFetcher:(id)arg5 userDefaults:(id)arg6 metricFactory:(id)arg7 ;
-(void)addFetchTrigger:(id)arg0 ;


@end


#endif