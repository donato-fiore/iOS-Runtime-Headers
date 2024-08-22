// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAUTOCOMPLETESOURCEINCLUSIONPOLICY_H
#define CNAUTOCOMPLETESOURCEINCLUSIONPOLICY_H


#import <Foundation/Foundation.h>


@interface CNAutocompleteSourceInclusionPolicy : NSObject



+(id)defaultPolicyWithFetchRequest:(id)arg0 ;
+(id)policyForNoContactsAccess;
+(id)policyWithCurrentProcessEntitlements;
+(id)policyWithFetchRequest:(id)arg0 ;
+(id)policyWithPolicies:(id)arg0 ;
+(id)policyWithUserDefaults:(id)arg0 ;
+(id)policyWithValue:(BOOL)arg0 ;


@end


#endif