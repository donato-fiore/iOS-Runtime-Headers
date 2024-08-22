// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSDISCOVERABILITYSIGNALSCONTEXTUALPREDICATE_H
#define TPSDISCOVERABILITYSIGNALSCONTEXTUALPREDICATE_H

@class NSString;
@protocol TPSDuetContextualPredicateProtocol;

#import <Foundation/Foundation.h>


@interface TPSDiscoverabilitySignalsContextualPredicate : NSObject <TPSDuetContextualPredicateProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)contextualPredicateForDeliveryDuetEvent:(id)arg0 ;
+(id)predicatesForUserInfoKeyPath:(id)arg0 key:(id)arg1 value:(id)arg2 ;


@end


#endif