// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECACCOUNTSOBSERVER_H
#define ECACCOUNTSOBSERVER_H

@class ACAccountStore, NSString;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface ECAccountsObserver : NSObject <EFLoggable>



@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
+(id)observedAccountTypes;
-(BOOL)_shouldNotifyOnAccountChangeForNotification:(id)arg0 ;
-(id)initWithAccountStore:(id)arg0 ;
-(void)_accountStoreDidChange:(id)arg0 ;
-(void)_credentialsDidChange:(id)arg0 ;
-(void)_mailAccountsChanged:(id)arg0 ;
-(void)handleAccountStoreChangeForAccountIdentifier:(id)arg0 ;
-(void)handleCredentialChangeForAccountIdentifier:(id)arg0 ;
-(void)handleMailAccountsHaveChanged:(id)arg0 accountsNeedInitialization:(BOOL)arg1 ;


@end


#endif