// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFACCOUNTSTORE_H
#define MFACCOUNTSTORE_H

@class ACAccountStore;

#import <Foundation/Foundation.h>


@interface MFAccountStore : NSObject {
    os_unfair_lock_s _accountStoreLock;
    ACAccountStore *_accountStore;
}


@property (readonly) ACAccountStore *persistentStore;


+(BOOL)_shouldUpdateAccountsInPlace;
+(id)_accountWithAccountClass:(Class)arg0 persistentAccount:(id)arg1 useExisting:(BOOL)arg2 ;
+(id)sharedAccountStore;
-(id)_accountWithPersistentAccount:(id)arg0 useExisting:(BOOL)arg1 ;
-(id)accountsWithTypeIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)existingAccountWithPersistentAccount:(id)arg0 ;
-(id)init;
-(id)newPersistentAccountWithAccountTypeIdentifier:(id)arg0 ;
-(id)supportedDataclassesWithAccountTypeIdentifier:(id)arg0 ;
-(void)_accountsStoreChanged:(id)arg0 ;
-(void)dealloc;
-(void)removePersistentAccountWithAccount:(id)arg0 ;
-(void)savePersistentAccountWithAccount:(id)arg0 ;


@end


#endif