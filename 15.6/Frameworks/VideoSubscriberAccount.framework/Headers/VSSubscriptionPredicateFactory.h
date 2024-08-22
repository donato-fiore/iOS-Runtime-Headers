// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSSUBSCRIPTIONPREDICATEFACTORY_H
#define VSSUBSCRIPTIONPREDICATEFACTORY_H


#import <Foundation/Foundation.h>

#import "VSAppInstallationInfoCenter.h"

@interface VSSubscriptionPredicateFactory : NSObject

@property (retain, nonatomic) VSAppInstallationInfoCenter *appInstallationInfoCenter; // ivar: _appInstallationInfoCenter


+(id)_subscriptionPredicateTemplateValues;
+(id)_subscriptionSourceKindPredicateTemplateValues;
+(id)_subscriptionSourcePredicateTemplateValues;
-(id)_expressionByConvertingSubscriptionKeyPathInExpression:(id)arg0 toAttributeKeysInEntity:(id)arg1 ;
-(id)_predicateTemplateForAppPredicate:(id)arg0 withTask:(id)arg1 ;
-(id)_predicateTemplateForRequestKind:(NSInteger)arg0 fromTask:(id)arg1 ;
-(id)_predicateTemplateForSourceIdentifier:(id)arg0 ;
-(id)_predicateTemplateForSourceKind:(NSInteger)arg0 ;
-(id)_predicateTemplateForSourceOfTask:(id)arg0 ;
-(id)_topLevelAccessPredicateForRequestKind:(NSInteger)arg0 fromTask:(id)arg1 ;
-(id)allowedSubscriptionSourceKindsPredicateForRequestKind:(NSInteger)arg0 fromTask:(id)arg1 ;
-(id)allowedSubscriptionSourcesPredicateForRequestKind:(NSInteger)arg0 fromTask:(id)arg1 ;
-(id)allowedSubscriptionsPredicateForRequestKind:(NSInteger)arg0 fromTask:(id)arg1 ;
-(id)allowedSubscriptionsPredicateForTask:(id)arg0 ;
-(id)predicateByConvertingSubscriptionKeyPathsInPredicate:(id)arg0 toAttributeKeysInEntity:(id)arg1 ;
-(id)subscriptionFetchPredicateForTask:(id)arg0 withOptions:(id)arg1 ;


@end


#endif