// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTWEBSERVICETARGETDEVICE_H
#define PKPEERPAYMENTWEBSERVICETARGETDEVICE_H

@class NSString;
@protocol PKPeerPaymentWebServiceTargetDeviceProtocol, PKPeerPaymentTargetDeviceDelegate;

#import <Foundation/Foundation.h>

#import "PKPeerPaymentService.h"

@interface PKPeerPaymentWebServiceTargetDevice : NSObject <PKPeerPaymentWebServiceTargetDeviceProtocol>

 {
    PKPeerPaymentService *_peerPaymentService;
    id<PKPeerPaymentTargetDeviceDelegate> *_targetDeviceDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)userHasDisabledPeerPayment;
-(id)account;
-(id)appleAccountInformation;
-(id)bridgedClientInfo;
-(id)deviceClass;
-(id)deviceRegion;
-(id)initWithTargetDeviceDelegate:(id)arg0 ;
-(id)preferences;
-(id)secureElementIdentifiers;
-(void)_handleAccountChangedNotification:(id)arg0 ;
-(void)_handlePreferencesChangedNotification:(id)arg0 ;
-(void)checkTLKsMissingWithCompletion:(id)arg0 ;
-(void)cloudStoreStatusWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)downloadPassIfNecessaryWithCompletion:(id)arg0 ;
-(void)peerPaymentReRegisterWithURL:(id)arg0 pushToken:(id)arg1 peerPaymentWebService:(id)arg2 completion:(id)arg3 ;
-(void)provisionPeerPaymentPassWithProvisioningController:(id)arg0 credential:(id)arg1 completion:(id)arg2 ;
-(void)provisionPeerPaymentPassWithProvisioningController:(id)arg0 peerPaymentWebService:(id)arg1 credential:(id)arg2 completion:(id)arg3 ;
-(void)renewAppleAccountWithCompletionHandler:(id)arg0 ;
-(void)resetApplePayManateeViewWithCompletion:(id)arg0 ;
-(void)setPreferences:(id)arg0 completion:(id)arg1 ;
-(void)setUserHasDisabledPeerPayment:(BOOL)arg0 ;
-(void)updateAccountWithCompletion:(id)arg0 ;


@end


#endif