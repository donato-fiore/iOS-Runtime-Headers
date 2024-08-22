// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPHSERVICESUBSCRIPTIONINFO_H
#define NPHSERVICESUBSCRIPTIONINFO_H

@class NSString, NSError, CTXPCServiceSubscriptionContext;

#import <Foundation/Foundation.h>


@interface NPHServiceSubscriptionInfo : NSObject

@property (retain, nonatomic) NSString *SIMStatus; // ivar: _SIMStatus
@property (retain, nonatomic) NSError *persistentError; // ivar: _persistentError
@property (nonatomic) NSUInteger planFlows; // ivar: _planFlows
@property (retain, nonatomic) CTXPCServiceSubscriptionContext *serviceSubscriptionContext; // ivar: _serviceSubscriptionContext
@property (nonatomic) BOOL shouldOfferRemotePlan; // ivar: _shouldOfferRemotePlan
@property (nonatomic) BOOL shouldOfferSignupCompletion; // ivar: _shouldOfferSignupCompletion
@property (nonatomic) BOOL shouldOfferTrialPlan; // ivar: _shouldOfferTrialPlan
@property (nonatomic) BOOL shouldShowAddNewRemotePlan; // ivar: _shouldShowAddNewRemotePlan
@property (retain, nonatomic) NSString *trialPlanType; // ivar: _trialPlanType


-(id)description;


@end


#endif