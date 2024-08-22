// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSAPPLICATIONUSERACCOUNT_H
#define VSAPPLICATIONUSERACCOUNT_H

@class NSString, NSDate, NSArray;
@protocol VSApplicationUserAccount;

#import <Foundation/Foundation.h>

#import "VSUserAccount.h"

@interface VSApplicationUserAccount : NSObject <VSApplicationUserAccount>



@property (nonatomic) NSInteger accountType; // ivar: _accountType
@property (copy, nonatomic) NSString *authenticationData; // ivar: _authenticationData
@property (copy, nonatomic) NSString *billingIdentifier; // ivar: _billingIdentifier
@property (copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) NSInteger deviceCategory; // ivar: _deviceCategory
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) VSUserAccount *originatingUserAccount; // ivar: _originatingUserAccount
@property (nonatomic) BOOL requiresSystemTrust; // ivar: _requiresSystemTrust
@property (nonatomic, getter=isSignedOut) BOOL signedOut; // ivar: _signedOut
@property (copy, nonatomic) NSDate *subscriptionBillingCycleEndDate; // ivar: _subscriptionBillingCycleEndDate
@property (copy, nonatomic) NSArray *tierIdentifiers; // ivar: _tierIdentifiers
@property (copy, nonatomic) NSString *updateURL; // ivar: _updateURL


+(id)nativeUserAccountsForJSUserAccounts:(id)arg0 ForProviderID:(id)arg1 allowedBundleIDs:(id)arg2 ;
+(id)userAccountsWithNativeUserAccounts:(id)arg0 ;
-(id)initWithUserAcount:(id)arg0 ;
-(id)nativeUserAccountForProviderID:(id)arg0 allowedBundleIDs:(id)arg1 ;


@end


#endif