// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8STOCKSUI21FORYOUFEEDDATAMANAGER_H
#define _TTC8STOCKSUI21FORYOUFEEDDATAMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC8StocksUI21ForYouFeedDataManager : NSObject {
    ? delegate;
    ? priceDataManager;
    ? feedService;
    ? feedServiceConfigFetcher;
    ? appConfigurationManager;
    ? bundleSubscriptionManager;
    ? accessQueue;
    ? lastRefreshDate;
}




-(id)init;
-(void)dealloc;


@end


#endif