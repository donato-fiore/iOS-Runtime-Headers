// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNACACCOUNTSTOREBASEDPROVIDER_H
#define _CNACACCOUNTSTOREBASEDPROVIDER_H

@class ACAccountStore;


#import "CNACAccountProvider.h"

@interface _CNACAccountStoreBasedProvider : CNACAccountProvider

@property (readonly, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore


-(BOOL)isAccountSyncable:(id)arg0 ;
-(BOOL)isAnyAccountSyncableIgnoringAccount:(id)arg0 ;
-(id)accountsWithAccountType:(id)arg0 ;
-(id)allAccountTypes;
-(id)childAccountsForAccount:(id)arg0 ;
-(id)initWithAccountStore:(id)arg0 ;


@end


#endif