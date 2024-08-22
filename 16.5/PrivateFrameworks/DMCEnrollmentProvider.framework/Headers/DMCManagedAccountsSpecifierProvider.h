// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCMANAGEDACCOUNTSSPECIFIERPROVIDER_H
#define DMCMANAGEDACCOUNTSSPECIFIERPROVIDER_H

@class NSArray;


#import "DMCSpecifierProvider.h"

@interface DMCManagedAccountsSpecifierProvider : DMCSpecifierProvider

@property (nonatomic) BOOL isReloadingManagedAccounts; // ivar: _isReloadingManagedAccounts
@property (retain, nonatomic) NSArray *managedAccounts; // ivar: _managedAccounts


-(id)initWithAccountManager:(id)arg0 ;
-(id)specifiers;
-(void)_accountCellWasTappedWithSpecifier:(id)arg0 ;
-(void)_reloadManagedAccounts;
-(void)reloadNotificationPosted:(id)arg0 ;


@end


#endif