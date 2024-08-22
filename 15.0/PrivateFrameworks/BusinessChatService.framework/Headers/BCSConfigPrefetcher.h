// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSCONFIGPREFETCHER_H
#define BCSCONFIGPREFETCHER_H

@class NSMutableSet;
@protocol BCSConfigCaching, BCSConfigCacheSkipping, BCSConfigRemoteFetching, BCSUserDefaultsProviding, BCSMetricFactoryProtocol;

#import <Foundation/Foundation.h>


@interface BCSConfigPrefetcher : NSObject {
    id<BCSConfigCaching> *_configCache;
    id<BCSConfigCacheSkipping> *_configCacheSkipper;
    id<BCSConfigRemoteFetching> *_chatSuggestConfigRemoteFetcher;
    id<BCSConfigRemoteFetching> *_businessLinkConfigRemoteFetcher;
    id<BCSUserDefaultsProviding> *_userDefaults;
    id<BCSMetricFactoryProtocol> *_metricFactory;
    NSMutableSet *_triggers;
}




-(id)initWithConfigCache:(id)arg0 configCacheSkipper:(id)arg1 chatSuggestConfigRemoteFetcher:(id)arg2 businessLinkConfigRemoteFetcher:(id)arg3 userDefaults:(id)arg4 metricFactory:(id)arg5 ;
-(void)addPrefetchTrigger:(id)arg0 ;


@end


#endif