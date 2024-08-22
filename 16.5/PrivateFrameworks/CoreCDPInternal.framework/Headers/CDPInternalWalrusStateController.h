// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPINTERNALWALRUSSTATECONTROLLER_H
#define CDPINTERNALWALRUSSTATECONTROLLER_H

@class CDPAccount, ACAccountStore;
@protocol CDPWalrusSecurityProxy, CDPProtectedCloudStorageProxy;

#import <Foundation/Foundation.h>

#import "CDPDAccount.h"

@interface CDPInternalWalrusStateController : NSObject {
    id<CDPWalrusSecurityProxy> *_securityProxy;
    id<CDPProtectedCloudStorageProxy> *_pcsProxy;
    CDPAccount *_cdpAccount;
    CDPDAccount *_cdpDaemonAccount;
    ACAccountStore *_accountStore;
}




-(NSUInteger)_escrowedKeysStatusUsingICDP:(id)arg0 ;
-(NSUInteger)_pcsAccountInfoStatusUsingICDP:(id)arg0 ;
-(NSUInteger)_statusForError:(id)arg0 ;
-(NSUInteger)_walrusStatusForPrimaryAccountWithError:(*id)arg0 ;
-(NSUInteger)_walrusStatusWithOptions:(id)arg0 withError:(*id)arg1 ;
-(NSUInteger)walrusStatusWithContext:(id)arg0 error:(*id)arg1 ;
-(id)_eligibleAccountWithContext:(id)arg0 checkWithServer:(BOOL)arg1 requireCKAccount:(BOOL)arg2 error:(*id)arg3 ;
-(id)_eligiblePrimaryAccountForFlow:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)_fetchiCDPAccountInfoDictionaryWithContext:(id)arg0 error:(*id)arg1 ;
-(id)_optionsWithContext:(id)arg0 ;
-(id)initWithAccount:(id)arg0 cdpdAccount:(id)arg1 securityProxy:(id)arg2 pcsProxy:(id)arg3 ;
-(id)initWithAccount:(id)arg0 cdpdAccount:(id)arg1 securityProxy:(id)arg2 pcsProxy:(id)arg3 accountStore:(id)arg4 ;
-(void)_updateWalrusState:(BOOL)arg0 context:(id)arg1 account:(id)arg2 completion:(id)arg3 ;
-(void)_updateWalrusStateAndPerformPostEnablementActions:(BOOL)arg0 context:(id)arg1 account:(id)arg2 completion:(id)arg3 ;
-(void)repairWalrusStatusWithCompletion:(id)arg0 ;
-(void)setWalrusStatusEnabled:(BOOL)arg0 completion:(id)arg1 ;
-(void)setWebAccessStatusEnabled:(BOOL)arg0 completion:(id)arg1 ;
-(void)webAccessStatusWithCompletion:(id)arg0 ;


@end


#endif