// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCEVERGREENARTICLESOPERATION_H
#define FCEVERGREENARTICLESOPERATION_H

@class NSArray;
@protocol FCContentContext, FCCoreConfiguration, FCBundleSubscriptionManagerType;


#import "FCOperation.h"

@interface FCEvergreenArticlesOperation : FCOperation {
    NSArray *_networkEvents;
    id<FCContentContext> *_context;
    id<FCCoreConfiguration> *_configuration;
    id<FCBundleSubscriptionManagerType> *_bundleSubscriptionManager;
    NSArray *_evergreenArticleListIDs;
    NSArray *_resultFeedItems;
}


@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) NSArray *networkEvents;


-(id)init;
-(id)initWithContext:(id)arg0 configuration:(id)arg1 bundleSubscriptionManager:(id)arg2 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)prepareOperation;


@end


#endif