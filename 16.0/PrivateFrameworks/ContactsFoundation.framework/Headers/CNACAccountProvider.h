// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNACACCOUNTPROVIDER_H
#define CNACACCOUNTPROVIDER_H

@class NSString;
@protocol CNACAccountProvider;

#import <Foundation/Foundation.h>


@interface CNACAccountProvider : NSObject <CNACAccountProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)providerWithAccounts:(id)arg0 ;
+(id)providerWithStore:(id)arg0 ;
-(BOOL)isAccountSyncable:(id)arg0 ;
-(BOOL)isAnyAccountSyncableIgnoringAccount:(id)arg0 ;
-(id)accountsWithAccountType:(id)arg0 ;
-(id)allAccountTypes;
-(id)childAccountsForAccount:(id)arg0 ;


@end


#endif