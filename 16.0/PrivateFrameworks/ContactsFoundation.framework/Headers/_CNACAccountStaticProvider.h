// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNACACCOUNTSTATICPROVIDER_H
#define _CNACACCOUNTSTATICPROVIDER_H

@class NSArray;


#import "CNACAccountProvider.h"

@interface _CNACAccountStaticProvider : CNACAccountProvider

@property (readonly, nonatomic) NSArray *accountChildAccountsPairs; // ivar: _accountChildAccountsPairs


-(BOOL)isAccountSyncable:(id)arg0 ;
-(id)accountsWithAccountType:(id)arg0 ;
-(id)allAccountTypes;
-(id)childAccountsForAccount:(id)arg0 ;
-(id)initWithAccounts:(id)arg0 ;


@end


#endif