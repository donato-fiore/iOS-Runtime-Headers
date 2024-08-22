// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDINTERACTIONPOLICIES_H
#define _CDINTERACTIONPOLICIES_H

@class NSDictionary, NSDate;

#import <Foundation/Foundation.h>

#import "_CDInteractionPolicy.h"

@interface _CDInteractionPolicies : NSObject {
    NSUInteger _maxNumberOfInteractions;
    NSUInteger _maxNumberOfInteractionsDeletedInBatch;
    CGFloat _maxLifespanInSeconds;
    NSDictionary *_specialPoliciesForBundleIds;
    NSDictionary *_specialPoliciesForMechanisms;
    _CDInteractionPolicy *_defaultPolicy;
}


@property (readonly) NSDate *dateOfOldestAllowedInteraction;
@property (readonly) NSUInteger maxNumberOfInteractionsDeleted;
@property (readonly) NSUInteger maxNumberOfInteractionsStored;


+(id)interactionPolicies;
+(id)limitArray:(id)arg0 toMaxCount:(NSUInteger)arg1 ;
+(id)modifyDate:(id)arg0 usingPolicy:(id)arg1 ;
-(id)dateOfOldestAllowedInteractionForMechanism:(NSInteger)arg0 ;
-(id)description;
-(id)filterAndModifyInteractionsWithPolicies:(id)arg0 enforceDataLimits:(BOOL)arg1 enforcePrivacy:(BOOL)arg2 ;
-(id)init;
-(id)policyForMechanism:(NSInteger)arg0 ;
-(id)whitelistedFirstPartyBundleIds;
-(void)readConfigurationPlist;
-(void)setupDefaultHardcodedPolicies;


@end


#endif