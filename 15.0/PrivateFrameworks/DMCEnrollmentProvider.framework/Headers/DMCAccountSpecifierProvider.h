// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMCACCOUNTSPECIFIERPROVIDER_H
#define DMCACCOUNTSPECIFIERPROVIDER_H

@class ACAccountStore;
@protocol OS_dispatch_queue, DMCAccountSpecifierProviderDelegate;

#import <Foundation/Foundation.h>


@interface DMCAccountSpecifierProvider : NSObject {
    ACAccountStore *_accountStore;
    NSObject<OS_dispatch_queue> *_updateQueue;
}


@property (weak, nonatomic) NSObject<DMCAccountSpecifierProviderDelegate> *delegate; // ivar: _delegate


+(id)groupSpecifierID;
+(id)itemSpecifierIDForAccountUsername:(id)arg0 ;
+(id)itemSpecifierIDForReauthAccountUsername:(id)arg0 ;
+(id)itemSpecifierIDPrefix;
-(id)_reauthSpecifierForAccount:(id)arg0 ;
-(id)_specifierForManagedAccount:(id)arg0 ;
-(id)_specifierForManagedAccountGroupWithTitle:(BOOL)arg0 plural:(BOOL)arg1 ;
-(id)initWithAccountStore:(id)arg0 ;
-(id)specifiersWithTitle:(BOOL)arg0 ;
-(void)_accountCellWasTappedWithSpecifier:(id)arg0 ;
-(void)appleAccountsDidChange:(id)arg0 ;
-(void)dealloc;
-(void)specifiersWithCompletion:(id)arg0 ;


@end


#endif