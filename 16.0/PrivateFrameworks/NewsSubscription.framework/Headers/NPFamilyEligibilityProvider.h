// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPFAMILYELIGIBILITYPROVIDER_H
#define NPFAMILYELIGIBILITYPROVIDER_H

@class AIDAAccountManager, NSString, FAFamilyEligibilityRequester, ACAccountStore;
@protocol AIDAAccountManagerDelegate, NPFamilyEligibilityProviderType;

#import <Foundation/Foundation.h>


@interface NPFamilyEligibilityProvider : NSObject <AIDAAccountManagerDelegate, NPFamilyEligibilityProviderType>



@property (readonly, nonatomic) AIDAAccountManager *accountManager; // ivar: _accountManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FAFamilyEligibilityRequester *eligibilityRequester; // ivar: _eligibilityRequester
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ACAccountStore *store; // ivar: _store
@property (readonly) Class superclass;


-(id)accountsForAccountManager:(id)arg0 ;
-(id)init;
-(id)requestFamilyEligibility;


@end


#endif