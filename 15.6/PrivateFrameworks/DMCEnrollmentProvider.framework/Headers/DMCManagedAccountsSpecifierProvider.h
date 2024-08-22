// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMCMANAGEDACCOUNTSSPECIFIERPROVIDER_H
#define DMCMANAGEDACCOUNTSSPECIFIERPROVIDER_H

@class NSArray;


#import "DMCSpecifierProvider.h"

@interface DMCManagedAccountsSpecifierProvider : DMCSpecifierProvider

@property (retain, nonatomic) NSArray *managedAccounts; // ivar: _managedAccounts


-(id)specifiers;
-(void)_accountCellWasTappedWithSpecifier:(id)arg0 ;
-(void)_reloadManagedAccounts;
-(void)reloadNotificationPosted:(id)arg0 ;


@end


#endif