// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACDKEYCHAINMIGRATOR_H
#define ACDKEYCHAINMIGRATOR_H

@class ACAccountStore;

#import <Foundation/Foundation.h>


@interface ACDKeychainMigrator : NSObject {
    ACAccountStore *_accountStore;
}




+(id)sharedInstance;
-(BOOL)migrateKeychainItem:(id)arg0 toKeybag:(BOOL)arg1 ;
-(id)_keychainItemFromAttributes:(id)arg0 ;
-(id)_keychainItemFromAttributesArray:(id)arg0 ;
-(id)_keychainItemsForAccount:(id)arg0 accountTypeIdentifiers:(id)arg1 ;
-(id)allKeychainItems;
-(id)init;
-(id)keychainItemsForAccounts:(id)arg0 ;
-(void)_migrateUUIDKeychainItems:(id)arg0 ;
-(void)_validateKeychainItemClass:(id)arg0 ;
-(void)migrateAllKeychainItems;


@end


#endif