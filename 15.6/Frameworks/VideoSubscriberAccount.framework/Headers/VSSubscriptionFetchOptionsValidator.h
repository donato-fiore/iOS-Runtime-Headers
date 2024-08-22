// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSSUBSCRIPTIONFETCHOPTIONSVALIDATOR_H
#define VSSUBSCRIPTIONFETCHOPTIONSVALIDATOR_H


#import <Foundation/Foundation.h>

#import "VSSubscriptionPredicateFactory.h"

@interface VSSubscriptionFetchOptionsValidator : NSObject

@property (retain, nonatomic) VSSubscriptionPredicateFactory *predicateFactory; // ivar: _predicateFactory


-(id)standardizedFetchOptionsFromOptions:(id)arg0 withSecurityTask:(id)arg1 ;
-(id)subscriptionFetchOptionsAllowedForSecurityTask:(id)arg0 ;


@end


#endif