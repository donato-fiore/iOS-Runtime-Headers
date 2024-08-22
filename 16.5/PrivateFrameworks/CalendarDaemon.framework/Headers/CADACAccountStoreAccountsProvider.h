// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADACACCOUNTSTOREACCOUNTSPROVIDER_H
#define CADACACCOUNTSTOREACCOUNTSPROVIDER_H

@class ACAccountStore;
@protocol CADACAccountsProvider;

#import <Foundation/Foundation.h>


@interface CADACAccountStoreAccountsProvider : NSObject <CADACAccountsProvider>



@property (readonly, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore


-(id)accountWithIdentifier:(id)arg0 ;
-(id)accounts;
-(id)initWithAccountStore:(id)arg0 ;


@end


#endif