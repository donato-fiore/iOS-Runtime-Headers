// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPEERPAYMENTWEBSERVICECOMPANIONTARGETDEVICE_H
#define NPKPEERPAYMENTWEBSERVICECOMPANIONTARGETDEVICE_H

@class NSString, PKPeerPaymentWebService;
@protocol PKPeerPaymentWebServiceTargetDeviceProtocol;

#import <Foundation/Foundation.h>


@interface NPKPeerPaymentWebServiceCompanionTargetDevice : NSObject <PKPeerPaymentWebServiceTargetDeviceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PKPeerPaymentWebService *peerPaymentWebService; // ivar: _peerPaymentWebService
@property (readonly) Class superclass;


+(void)attemptToDownloadPeerPaymentPassAtURL:(id)arg0 withWebService:(id)arg1 completion:(id)arg2 ;
-(BOOL)userHasDisabledPeerPayment;
-(id)account;
-(id)appleAccountInformation;
-(id)bridgedClientInfo;
-(id)deviceClass;
-(id)deviceRegion;
-(id)init;
-(id)preferences;
-(id)secureElementIdentifiers;
-(void)_handleAccountChanged:(id)arg0 ;
-(void)checkTLKsMissingWithCompletion:(id)arg0 ;
-(void)cloudStoreStatusWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)downloadPassIfNecessaryWithCompletion:(id)arg0 ;
-(void)initalizeCloudStoreIfNecessaryWithCompletion:(id)arg0 ;
-(void)initalizeCloudStoreIfNecessaryWithHandler:(id)arg0 ;
-(void)peerPaymentReRegisterWithURL:(id)arg0 pushToken:(id)arg1 peerPaymentWebService:(id)arg2 completion:(id)arg3 ;
-(void)provisionPeerPaymentPassWithProvisioningController:(id)arg0 credential:(id)arg1 completion:(id)arg2 ;
-(void)resetApplePayManateeViewWithCompletion:(id)arg0 ;
-(void)setPreferences:(id)arg0 completion:(id)arg1 ;
-(void)setUserHasDisabledPeerPayment:(BOOL)arg0 ;
-(void)updateAccountWithCompletion:(id)arg0 ;


@end


#endif