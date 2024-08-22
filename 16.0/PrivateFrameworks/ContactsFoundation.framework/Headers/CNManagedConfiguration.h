// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNMANAGEDCONFIGURATION_H
#define CNMANAGEDCONFIGURATION_H

@class NSString;
@protocol CNManagedProfileConnection;

#import <Foundation/Foundation.h>


@interface CNManagedConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSObject<CNManagedProfileConnection> *profileConnection; // ivar: _profileConnection


+(id)os_log;
-(BOOL)accountIsManaged:(id)arg0 ;
-(BOOL)accountIsManagedForIdentifier:(id)arg0 ;
-(BOOL)canReadFromAccountWithIdentifier:(id)arg0 ;
-(BOOL)canReadFromLocalAccount;
-(BOOL)canWriteToAccountWithIdentifier:(id)arg0 ;
-(BOOL)canWriteToAccountWithIdentifier:(id)arg0 fromSourceAccountIdentifier:(id)arg1 ;
-(BOOL)canWriteToLocalAccount;
-(BOOL)deviceHasManagementRestrictions;
-(id)accountForIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithAuditToken:(struct ? )arg0 managedProfileConnection:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg0 managedProfileConnection:(id)arg1 ;
-(id)readableAccountIdentifiersFromIdentifiers:(id)arg0 ;
-(id)readableAccountsFromAccounts:(id)arg0 ;
-(id)writableAccountIdentifiersFromIdentifiers:(id)arg0 ;
-(id)writableAccountsFromAccounts:(id)arg0 ;
-(id)writableAccountsFromAccounts:(id)arg0 sourceAccountManagement:(int)arg1 ;
-(int)accountManagementForIdentifier:(id)arg0 ;


@end


#endif