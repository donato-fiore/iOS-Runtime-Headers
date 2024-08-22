// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNMANAGEDACCOUNTSCACHE_H
#define CNMANAGEDACCOUNTSCACHE_H

@class ACAccountStore;

#import <Foundation/Foundation.h>

#import "CNCache.h"

@interface CNManagedAccountsCache : NSObject

@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (retain, nonatomic) CNCache *accountsCache; // ivar: _accountsCache


+(id)sharedCache;
-(id)accountForIdentifier:(id)arg0 ;
-(id)accountsForIdentifiers:(id)arg0 ;
-(id)init;
-(void)clearCache;


@end


#endif