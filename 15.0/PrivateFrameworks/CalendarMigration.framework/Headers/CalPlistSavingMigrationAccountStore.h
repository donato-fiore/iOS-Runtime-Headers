// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALPLISTSAVINGMIGRATIONACCOUNTSTORE_H
#define CALPLISTSAVINGMIGRATIONACCOUNTSTORE_H

@class NSMutableDictionary, NSString, NSMutableSet, NSURL;
@protocol CalMigrationAccountStore;

#import <Foundation/Foundation.h>


@interface CalPlistSavingMigrationAccountStore : NSObject <CalMigrationAccountStore>



@property (readonly, nonatomic) NSMutableDictionary *addedAccounts; // ivar: _addedAccounts
@property (readonly, nonatomic) NSMutableDictionary *addedChildAccounts; // ivar: _addedChildAccounts
@property (readonly, nonatomic) NSObject<CalMigrationAccountStore> *backingAccountStore; // ivar: _backingAccountStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSMutableSet *deletedAccountIdentifiers; // ivar: _deletedAccountIdentifiers
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *loadedAccounts; // ivar: _loadedAccounts
@property (readonly, nonatomic) NSMutableDictionary *modifiedAccounts; // ivar: _modifiedAccounts
@property (readonly, nonatomic) NSURL *plistURL; // ivar: _plistURL
@property (readonly) Class superclass;


-(BOOL)_trySaveWithError:(*id)arg0 ;
-(BOOL)removeAccount:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveAccount:(id)arg0 withError:(*id)arg1 ;
-(id)_accountWithIdentifier:(id)arg0 preloadedBackingAccount:(id)arg1 ;
-(id)accountWithIdentifier:(id)arg0 ;
-(id)childAccountsForAccount:(id)arg0 withTypeIdentifier:(id)arg1 ;
-(id)createAccountWithAccountTypeIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)createChildAccountOfParent:(id)arg0 withAccountTypeIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)initWithPlistURL:(id)arg0 backingAccountStore:(id)arg1 ;
-(id)topLevelAccountsWithAccountTypeIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)_registerAddedChildAccountWithIdentifier:(id)arg0 parentAccountIdentifier:(id)arg1 ;


@end


#endif