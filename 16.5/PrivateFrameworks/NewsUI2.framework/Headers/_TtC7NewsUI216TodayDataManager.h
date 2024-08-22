// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7NEWSUI216TODAYDATAMANAGER_H
#define _TTC7NEWSUI216TODAYDATAMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC7NewsUI216TodayDataManager : NSObject {
    ? delegate;
    ? feedManager;
    ? feedPluginManager;
    ? feedServiceConfigFetcher;
    ? accessQueue;
    ? sharedItemManager;
    ? appConfigManager;
    ? subscriptionList;
    ? nativeAdService;
    ? _lastRefreshContext;
    ? sharedItemAdditions;
    ? subscriptionService;
    ? cachePreFlushTask;
    ? sportsOnboardingManager;
    ? shortcutService;
    ? historyService;
    ? blockNextAutoRefresh;
}




-(id)init;


@end


#endif