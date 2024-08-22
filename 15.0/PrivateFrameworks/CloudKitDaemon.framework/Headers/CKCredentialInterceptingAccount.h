// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCREDENTIALINTERCEPTINGACCOUNT_H
#define CKCREDENTIALINTERCEPTINGACCOUNT_H

@class ACAccount;


#import "CKDBackingFakeAccount.h"

@interface CKCredentialInterceptingAccount : ACAccount

@property (weak, nonatomic) CKDBackingFakeAccount *backingFakeAccount; // ivar: _backingFakeAccount


-(BOOL)aa_updateTokensWithProvisioningResponse:(id)arg0 ;


@end


#endif