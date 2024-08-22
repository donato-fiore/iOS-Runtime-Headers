// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFCOMMUNICATIONPOLICYMONITOR_H
#define DMFCOMMUNICATIONPOLICYMONITOR_H

@class NSUUID, NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "DMFApplicationPolicyMonitor.h"

@interface DMFCommunicationPolicyMonitor : NSObject

@property (readonly, nonatomic) DMFApplicationPolicyMonitor *applicationPolicyMonitor; // ivar: _applicationPolicyMonitor
@property (nonatomic) BOOL didFetchInitialPolicies; // ivar: _didFetchInitialPolicies
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDictionary *policiesByBundleIdentifier; // ivar: _policiesByBundleIdentifier
@property (readonly, copy, nonatomic) NSArray *policyTypes; // ivar: _policyTypes


+(NSUInteger)communicationPolicyForApplicationPolicy:(id)arg0 downtimeEnforced:(BOOL)arg1 ;
+(id)_calculateCommunicationPoliciesWithApplicationPoliciesByBundleIdentifier:(id)arg0 categoryEffectivePolicy:(id)arg1 ;
+(id)_categoryForCommunicationBundleIdentifier:(id)arg0 ;
+(id)_equivalentCommunicationBundleIdentifiersForCommunicationBundleIdentifier:(id)arg0 ;
+(id)_transformEffectivePoliciesIntoCommunicationPolicies:(id)arg0 ;
+(id)communicationBundleIdentifiers;
+(id)new;
-(id)init;
-(id)initWithPolicyChangeHandler:(id)arg0 ;
-(id)requestPoliciesByBundleIdentifierWithError:(*id)arg0 ;
-(void)_updatePoliciesByBundleIdentifier;
-(void)_updateWithPoliciesByBundleIdentifier:(id)arg0 categoryEffectivePolicy:(id)arg1 ;
-(void)dealloc;
-(void)requestPoliciesByBundleIdentifierWithCompletionHandler:(id)arg0 ;


@end


#endif