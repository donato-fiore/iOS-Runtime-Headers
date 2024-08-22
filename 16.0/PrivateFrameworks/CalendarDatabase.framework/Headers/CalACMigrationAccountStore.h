// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALACMIGRATIONACCOUNTSTORE_H
#define CALACMIGRATIONACCOUNTSTORE_H

@class NSString;
@protocol CalMigrationAccountStore;

#import <Foundation/Foundation.h>


@interface CalACMigrationAccountStore : NSObject <CalMigrationAccountStore>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)removeAccount:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveAccount:(id)arg0 withError:(*id)arg1 ;
-(id)accountWithIdentifier:(id)arg0 ;
-(id)childAccountsForAccount:(id)arg0 withTypeIdentifier:(id)arg1 ;
-(id)createAccountWithAccountTypeIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)createChildAccountOfParent:(id)arg0 withAccountTypeIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)topLevelAccountsWithAccountTypeIdentifier:(id)arg0 error:(*id)arg1 ;


@end


#endif