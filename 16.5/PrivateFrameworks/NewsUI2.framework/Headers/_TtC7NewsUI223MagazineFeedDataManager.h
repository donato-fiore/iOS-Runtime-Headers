// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7NEWSUI223MAGAZINEFEEDDATAMANAGER_H
#define _TTC7NEWSUI223MAGAZINEFEEDDATAMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC7NewsUI223MagazineFeedDataManager : NSObject {
    ? delegate;
    ? feedServiceConfigFetcher;
    ? feedService;
    ? feedPluginManager;
    ? accessQueue;
    ? lastRefreshDate;
    ? subscriptionService;
    ? historyService;
    ? _persistedConfigurationDate;
}




-(id)init;


@end


#endif