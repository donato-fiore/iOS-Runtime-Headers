// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAACCOUNTMANAGER_H
#define AAACCOUNTMANAGER_H

@class ACAccountStore, NSMutableArray;

#import <Foundation/Foundation.h>


@interface AAAccountManager : NSObject {
    ACAccountStore *_accountStore;
    NSMutableArray *_accounts;
    NSMutableArray *_originalAccounts;
    id *_accountStoreDidChangeObserver;
}




+(id)sharedManager;
-(id)_accountStore;
-(id)accountWithIdentifier:(id)arg0 ;
-(id)accountWithPersonID:(id)arg0 ;
-(id)accountWithUsername:(id)arg0 ;
-(id)accounts;
-(id)accountsEnabledForDataclass:(id)arg0 ;
-(id)primaryAccount;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(void)_stopObservingAccountStoreDidChangeNotification;
-(void)addAccount:(id)arg0 ;
-(void)dealloc;
-(void)reloadAccounts;
-(void)removeAccount:(id)arg0 ;
-(void)saveAllAccounts;
-(void)updateAccount:(id)arg0 ;


@end


#endif