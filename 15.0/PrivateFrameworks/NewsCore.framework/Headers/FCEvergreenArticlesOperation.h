// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCEVERGREENARTICLESOPERATION_H
#define FCEVERGREENARTICLESOPERATION_H

@class NSString, NSArray;
@protocol FCContentContext, FCCoreConfiguration, FCBundleSubscriptionManagerType;


#import "FCOperation.h"

@interface FCEvergreenArticlesOperation : FCOperation {
    id<FCContentContext> *_context;
    id<FCCoreConfiguration> *_configuration;
    id<FCBundleSubscriptionManagerType> *_bundleSubscriptionManager;
    NSString *_evergreenArticleListID;
    NSArray *_resultFeedItems;
}


@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler


-(id)init;
-(id)initWithContext:(id)arg0 configuration:(id)arg1 bundleSubscriptionManager:(id)arg2 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)prepareOperation;


@end


#endif