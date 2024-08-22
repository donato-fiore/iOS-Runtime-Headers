// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12NEWSARTICLES30SUBSCRIPTIONBUTTONTEXTPROVIDER_H
#define _TTC12NEWSARTICLES30SUBSCRIPTIONBUTTONTEXTPROVIDER_H

@class NSString;
@protocol SXSubscriptionButtonTextProviding;

#import <Foundation/Foundation.h>


@interface _TtC12NewsArticles30SubscriptionButtonTextProvider : NSObject <SXSubscriptionButtonTextProviding>

 {
    ? headline;
    ? coreConfigurationManager;
    ? bundlePurchasePrewarmer;
    ? offerManager;
    ? $__lazy_storage_$_title;
}


@property (nonatomic, copy) NSString *title;


-(id)init;


@end


#endif