// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPSTATEUIPROVIDERPROXY_H
#define CDPSTATEUIPROVIDERPROXY_H

@protocol CDPStateUIProviderInternal, CDPStateUIProvider;

#import <Foundation/Foundation.h>


@interface CDPStateUIProviderProxy : NSObject <CDPStateUIProviderInternal>



@property (retain, nonatomic) NSObject<CDPStateUIProvider> *uiProvider; // ivar: _uiProvider


-(id)initWithUIProvider:(id)arg0 ;
-(void)cdpContext:(id)arg0 beginRemoteApprovalWithValidator:(id)arg1 completion:(id)arg2 ;
-(void)cdpContext:(id)arg0 presentRecoveryKeyWithValidator:(id)arg1 completion:(id)arg2 ;
-(void)cdpContext:(id)arg0 promptForAdoptionOfMultipleICSC:(id)arg1 ;
-(void)cdpContext:(id)arg0 promptForBeneficiaryAccessKeyWithCompletion:(id)arg1 ;
-(void)cdpContext:(id)arg0 promptForICSCWithIsNumeric:(BOOL)arg1 numericLength:(id)arg2 isRandom:(BOOL)arg3 validator:(id)arg4 ;
-(void)cdpContext:(id)arg0 promptForInteractiveAuthenticationWithCompletion:(id)arg1 ;
-(void)cdpContext:(id)arg0 promptForLocalSecretWithCompletion:(id)arg1 ;
-(void)cdpContext:(id)arg0 promptForLocalSecretWithHandler:(id)arg1 ;
-(void)cdpContext:(id)arg0 promptForRecoveryKeyWithSecretValidator:(id)arg1 completion:(id)arg2 ;
-(void)cdpContext:(id)arg0 promptForRecoveryKeyWithValidator:(id)arg1 completion:(id)arg2 ;
-(void)cdpContext:(id)arg0 promptForRemoteSecretWithDevices:(id)arg1 offeringRemoteApproval:(BOOL)arg2 validator:(id)arg3 ;
-(void)cdpContext:(id)arg0 showError:(id)arg1 withCompletion:(id)arg2 ;
-(void)cdpContext:(id)arg0 showError:(id)arg1 withDefaultIndex:(NSInteger)arg2 withCompletion:(id)arg3 ;
-(void)cdpContext:(id)arg0 showResetCompletedAlertWithCompletion:(id)arg1 ;
-(void)cdpRecoveryFlowContext:(id)arg0 promptForRemoteSecretWithDevices:(id)arg1 validator:(id)arg2 ;


@end


#endif