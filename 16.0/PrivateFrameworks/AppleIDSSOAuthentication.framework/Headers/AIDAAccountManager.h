// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AIDAACCOUNTMANAGER_H
#define AIDAACCOUNTMANAGER_H

@class NSMutableDictionary, ACAccountStore, NSDictionary;
@protocol AIDAServiceOwnerProtocol, AIDAAccountManagerDelegate;

#import <Foundation/Foundation.h>


@interface AIDAAccountManager : NSObject {
    id<AIDAServiceOwnerProtocol> *_serviceOwnersManager;
    os_unfair_lock_s _accountManagerLock;
    NSMutableDictionary *_handlerByObserver;
}


@property (readonly, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (copy, nonatomic) NSDictionary *accounts; // ivar: _accounts
@property (weak, nonatomic) NSObject<AIDAAccountManagerDelegate> *delegate; // ivar: _delegate


-(id)aidaAccountForService:(id)arg0 ;
-(id)init;
-(id)initWithAccountStore:(id)arg0 ;
-(void)_accountStoreDidChange:(id)arg0 ;
-(void)addAccountChangeObserver:(id)arg0 handler:(id)arg1 ;
-(void)dealloc;
-(void)removeAccountChangeObserver:(id)arg0 ;


@end


#endif