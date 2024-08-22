// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKSHAREDWEBSERVICEPROVIDER_H
#define NPKSHAREDWEBSERVICEPROVIDER_H

@class NSString, PKPeerPaymentAccount, PKPeerPaymentWebService, PKPaymentWebService;
@protocol NPKPaymentWebServiceCompanionTargetDeviceDelegate;

#import <Foundation/Foundation.h>

#import "NPKCompanionAgentConnection.h"
#import "NPKPeerPaymentWebServiceCompanionTargetDevice.h"
#import "NPKPaymentWebServiceCompanionTargetDevice.h"

@interface NPKSharedWebServiceProvider : NSObject <NPKPaymentWebServiceCompanionTargetDeviceDelegate>



@property (retain, nonatomic) NPKCompanionAgentConnection *companionAgentConnection; // ivar: _companionAgentConnection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount; // ivar: _peerPaymentAccount
@property (retain, nonatomic) NPKPeerPaymentWebServiceCompanionTargetDevice *peerPaymentTargetDevice; // ivar: _peerPaymentTargetDevice
@property (retain, nonatomic) PKPeerPaymentWebService *peerPaymentWebService; // ivar: _peerPaymentWebService
@property (readonly) Class superclass;
@property (retain, nonatomic) NPKPaymentWebServiceCompanionTargetDevice *targetDevice; // ivar: _targetDevice
@property (retain, nonatomic) PKPaymentWebService *webService; // ivar: _webService


+(id)sharedWebServiceProvider;
-(id)init;
-(void)_deviceFailedToPair:(id)arg0 ;
-(void)archiveWebServiceBackgroundContext:(id)arg0 ;
-(void)archiveWebServiceContext:(id)arg0 ;
-(void)checkCompanionPeerPaymentRegistrationState;
-(void)dealloc;
-(void)handleAppletState:(id)arg0 forUniqueID:(id)arg1 ;
-(void)handleBalanceReminderUpdate:(id)arg0 balance:(id)arg1 forUniqueID:(id)arg2 ;
-(void)handleBalanceUpdate:(id)arg0 forUniqueID:(id)arg1 ;
-(void)handleCredentialsUpdate:(id)arg0 forUniqueID:(id)arg1 ;
-(void)handleDownloadAllPaymentPasses;
-(void)handlePaymentTransactions:(id)arg0 appletStates:(id)arg1 forUniqueIDs:(id)arg2 ;
-(void)handlePaymentWebServiceContextFromWatch:(id)arg0 ;
-(void)handlePreconditionNotMetWithUniqueIDs:(id)arg0 preconditionDescription:(id)arg1 shouldUnregister:(BOOL)arg2 ;
-(void)handlePreferredAID:(id)arg0 forPassWithUniqueID:(id)arg1 ;
-(void)handlePushToken:(id)arg0 ;
-(void)handleRemoveTransactionsWithIdentifiers:(id)arg0 ;
-(void)handleUpdatePaymentPassWithTypeIdentifier:(id)arg0 ;
-(void)handleUpdatedPeerPaymentWebServiceContext:(id)arg0 account:(id)arg1 ;
-(void)loadWebService;
-(void)noteForegroundVerificationObserverActive:(BOOL)arg0 ;
-(void)sendPaymentOptionsDefaultsToWatch;
-(void)sendWebServiceContextToWatch;
-(void)setNewAuthRandom:(id)arg0 ;
-(void)showPaymentSetupForAppDisplayName:(id)arg0 ;
-(void)startBackgroundVerificationObserverForPass:(id)arg0 verificationMethod:(id)arg1 ;


@end


#endif