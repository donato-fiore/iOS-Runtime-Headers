// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCREDENTIALINTERCEPTINGACCOUNT_H
#define CKCREDENTIALINTERCEPTINGACCOUNT_H

@class ACAccount;


#import "CKDBackingExplicitCredentialsAccount.h"

@interface CKCredentialInterceptingAccount : ACAccount

@property (weak, nonatomic) CKDBackingExplicitCredentialsAccount *backingExplicitCredentialsAccount; // ivar: _backingExplicitCredentialsAccount


-(BOOL)aa_updateTokensWithProvisioningResponse:(id)arg0 ;


@end


#endif