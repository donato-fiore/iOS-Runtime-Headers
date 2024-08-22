// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSIDENTITYPROVIDERUSERACCOUNTUPDATEOPERATION_H
#define VSIDENTITYPROVIDERUSERACCOUNTUPDATEOPERATION_H

@class NSError, NSArray;


#import "VSAsyncOperation.h"
#import "VSIdentityProvider.h"

@interface VSIdentityProviderUserAccountUpdateOperation : VSAsyncOperation

@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) VSIdentityProvider *provider; // ivar: _provider
@property (readonly, nonatomic) NSArray *userAccounts; // ivar: _userAccounts


-(id)_allowedBundleIDs;
-(id)initWithIdentityProvider:(id)arg0 userAccounts:(id)arg1 ;
-(void)executionDidBegin;


@end


#endif