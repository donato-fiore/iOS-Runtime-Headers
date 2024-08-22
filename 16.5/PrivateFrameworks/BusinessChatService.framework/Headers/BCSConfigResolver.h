// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSCONFIGRESOLVER_H
#define BCSCONFIGRESOLVER_H

@class NSString;
@protocol BCSConfigResolving, BCSConfigCaching, BCSConfigCacheSkipping, BCSFetchTrigger, BCSMetricFactoryProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BCSConfigResolver : NSObject <BCSConfigResolving>

 {
    id<BCSConfigCaching> *_configCache;
    id<BCSConfigCacheSkipping> *_configCacheSkipper;
    id<BCSFetchTrigger> *_megashardFetchTrigger;
    id<BCSMetricFactoryProtocol> *_metricFactory;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)configItemWithType:(NSInteger)arg0 clientBundleID:(id)arg1 metric:(id)arg2 completion:(id)arg3 ;


@end


#endif