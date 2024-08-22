// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBACCOUNTSTOREMANAGER_H
#define SBACCOUNTSTOREMANAGER_H

@class ACAccountStore, ACAccount;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBAccountStoreManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (retain, nonatomic) ACAccount *primaryAppleAccount; // ivar: _primaryAppleAccount


-(id)init;
-(void)_accountStoreDidChange:(id)arg0 ;
-(void)_queue_updatePrimaryAppleAccount;
-(void)_updatePrimaryAppleAccount;


@end


#endif