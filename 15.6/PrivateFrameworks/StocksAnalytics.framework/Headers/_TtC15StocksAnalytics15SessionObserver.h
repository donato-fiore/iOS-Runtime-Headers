// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15STOCKSANALYTICS15SESSIONOBSERVER_H
#define _TTC15STOCKSANALYTICS15SESSIONOBSERVER_H

@protocol FCBundleSubscriptionChangeObserver;

#import <Foundation/Foundation.h>


@interface _TtC15StocksAnalytics15SessionObserver : NSObject <FCBundleSubscriptionChangeObserver>

 {
    ? window;
    ? sessionManager;
    ? cloudContext;
    ? userContext;
    ? client;
    ? appConfigurationManager;
    ? watchlistService;
    ? tracker;
    ? kind;
}




-(id)init;
-(void)bundleSubscriptionDidChange:(id)arg0 previousBundleSubscription:(id)arg1 ;
-(void)bundleSubscriptionDidExpire:(id)arg0 ;
-(void)bundleSubscriptionDidSubscribe:(id)arg0 ;
-(void)dealloc;


@end


#endif