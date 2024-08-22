// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIAEVENTCACHE_H
#define VIAEVENTCACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, VIAnalyticsTestingDelegate;

#import <Foundation/Foundation.h>


@interface VIAEventCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_appToEventMap;
}


@property (weak, nonatomic) NSObject<VIAnalyticsTestingDelegate> *testingDelegate; // ivar: _testingDelegate


-(id)_cachedEventsForBundleID:(id)arg0 ;
-(id)cachedEventForBundleID:(id)arg0 queryID:(NSUInteger)arg1 ;
-(id)initWithQueue:(id)arg0 ;
-(void)cacheEvent:(id)arg0 ;


@end


#endif