// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALCHANGEFILTERINGMIGRATIONACCOUNTSTORE_H
#define CALCHANGEFILTERINGMIGRATIONACCOUNTSTORE_H

@class NSMutableDictionary, NSString, NSMutableSet;
@protocol CalMigrationAccountStore, CalChangeFilteringMigrationAccountStoreDelegate;

#import <Foundation/Foundation.h>


@interface CalChangeFilteringMigrationAccountStore : NSObject <CalMigrationAccountStore>



@property (readonly, nonatomic) NSMutableDictionary *addedWrappedAccounts; // ivar: _addedWrappedAccounts
@property (readonly, nonatomic) NSMutableDictionary *addedWrappedChildAccounts; // ivar: _addedWrappedChildAccounts
@property (readonly, nonatomic) NSObject<CalMigrationAccountStore> *backingAccountStore; // ivar: _backingAccountStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<CalChangeFilteringMigrationAccountStoreDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *loadedAccounts; // ivar: _loadedAccounts
@property (readonly, nonatomic) NSMutableSet *removedWrappedAccountIdentifiers; // ivar: _removedWrappedAccountIdentifiers
@property (readonly) Class superclass;


+(id)storeFilteringAllChangesInBackingAccountStore:(id)arg0 ;
-(BOOL)removeAccount:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveAccount:(id)arg0 withError:(*id)arg1 ;
-(id)_accountWithIdentifier:(id)arg0 preloadedBackingAccount:(id)arg1 ;
-(id)_backingAccountForAccount:(id)arg0 ;
-(id)accountWithIdentifier:(id)arg0 ;
-(id)childAccountsForAccount:(id)arg0 withTypeIdentifier:(id)arg1 ;
-(id)createAccountWithAccountTypeIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)createChildAccountOfParent:(id)arg0 withAccountTypeIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)initWithBackingAccountStore:(id)arg0 delegate:(id)arg1 ;
-(id)topLevelAccountsWithAccountTypeIdentifier:(id)arg0 error:(*id)arg1 ;


@end


#endif