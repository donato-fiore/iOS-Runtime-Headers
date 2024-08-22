// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTACTVIEWCACHE_H
#define CNCONTACTVIEWCACHE_H

@class CNCache, CNContactStore, NSString;
@protocol CNUICoreParentContainerProvider;

#import <Foundation/Foundation.h>


@interface CNContactViewCache : NSObject <CNUICoreParentContainerProvider>



@property (retain, nonatomic) CNCache *cachedAccounts; // ivar: _cachedAccounts
@property (retain, nonatomic) CNCache *cachedContactToContainerIDs; // ivar: _cachedContactToContainerIDs
@property (retain, nonatomic) CNCache *cachedContainers; // ivar: _cachedContainers
@property (retain, nonatomic) CNCache *cachedPolicies; // ivar: _cachedPolicies
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isCandidatePolicy:(id)arg0 ofContactInCandidateContainerWithType:(NSInteger)arg1 preferredOverPolicy:(id)arg2 ofContactInContainerWithType:(NSInteger)arg3 ;
+(BOOL)shouldIgnorePolicyOfContactInGuarianRestrictedContainer:(id)arg0 ;
-(id)_accountForContainer:(id)arg0 ;
-(id)_policyForContact:(id)arg0 ;
-(id)_uncachedContainerForContact:(id)arg0 inStore:(id)arg1 ;
-(id)accountForContact:(id)arg0 ;
-(id)accountForContainer:(id)arg0 ;
-(id)bestPolicyForContact:(id)arg0 ;
-(id)containerForContact:(id)arg0 ;
-(id)containerIdentifierForContact:(id)arg0 ;
-(id)defaultContainerPolicy;
-(id)init;
-(id)nts_lazyContactStore;
-(id)policyForContact:(id)arg0 ;
-(id)policyForContainer:(id)arg0 ;
-(id)policyForContainerWithIdentifier:(id)arg0 ;
-(id)policyForDefaultContainer;
-(id)predicateForContainerForContact:(id)arg0 inStore:(id)arg1 ;
-(void)resetCache;


@end


#endif