// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDACCOUNTREPOSITORY_H
#define EDACCOUNTREPOSITORY_H

@class NSMutableSet, NSString;
@protocol EFLoggable, EDAccountChangeHookResponder, EDAccountsProvider;

#import <Foundation/Foundation.h>

#import "EDPersistenceHookRegistry.h"
#import "EDAccountECAccountTransformer.h"

@interface EDAccountRepository : NSObject <EFLoggable, EDAccountChangeHookResponder>

 {
    NSMutableSet *_observers;
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSObject<EDAccountsProvider> *accountsProvider; // ivar: _accountsProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) EDPersistenceHookRegistry *hookRegistry; // ivar: _hookRegistry
@property (readonly) Class superclass;
@property (retain, nonatomic) EDAccountECAccountTransformer *transformer; // ivar: _transformer


+(id)log;
-(id)allAccounts;
-(id)initWithAccountsProvider:(id)arg0 hookRegistry:(id)arg1 ;
-(id)transformAccounts:(id)arg0 ;
-(void)accountsAdded:(id)arg0 ;
-(void)accountsChanged:(id)arg0 ;
-(void)accountsRemoved:(id)arg0 ;
-(void)allAccountsWithCompletionHandler:(id)arg0 ;
-(void)registerObserver:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif