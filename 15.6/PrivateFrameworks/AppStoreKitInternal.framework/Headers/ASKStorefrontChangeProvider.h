// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASKSTOREFRONTCHANGEPROVIDER_H
#define ASKSTOREFRONTCHANGEPROVIDER_H

@class ACAccountStore, ACAccount;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ASKStorefrontChangeProvider : NSObject

@property (readonly, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (retain, nonatomic) ACAccount *activeAccount; // ivar: _activeAccount
@property (readonly, copy, nonatomic) id *block; // ivar: _block
@property (retain, nonatomic) ACAccount *localAccount; // ivar: _localAccount
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue; // ivar: _notifyQueue


-(BOOL)hasManagedStateChangedFromAccount:(id)arg0 toAccount:(id)arg1 ;
-(BOOL)hasStorefrontChangedFromAccount:(id)arg0 toAccount:(id)arg1 ;
-(id)initWithBlock:(id)arg0 ;
-(void)accountStoreDidChange:(id)arg0 ;
-(void)dealloc;


@end


#endif