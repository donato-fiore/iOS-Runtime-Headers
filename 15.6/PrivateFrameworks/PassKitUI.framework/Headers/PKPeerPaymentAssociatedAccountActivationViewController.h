// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTASSOCIATEDACCOUNTACTIVATIONVIEWCONTROLLER_H
#define PKPEERPAYMENTASSOCIATEDACCOUNTACTIVATIONVIEWCONTROLLER_H

@class PKFamilyMember, PKPeerPaymentAccount, PKDeviceSharingCapabilities, NSString;
@protocol PKDeviceSharingCapabilitiesManagerObserver, PKPeerPaymentAssociatedAccountSetupDelegate, OS_dispatch_source;


#import "PKExplanationViewController.h"
#import "PKPeerPaymentSetupFlowController.h"
#import "PKPeerPaymentIconEducationView.h"

@interface PKPeerPaymentAssociatedAccountActivationViewController : PKExplanationViewController <PKDeviceSharingCapabilitiesManagerObserver>

 {
    PKPeerPaymentSetupFlowController *_controller;
    PKFamilyMember *_familyMember;
    id<PKPeerPaymentAssociatedAccountSetupDelegate> *_delegate;
    NSUInteger _state;
    NSInteger _setupType;
    PKPeerPaymentIconEducationView *_iconEducationView;
    PKPeerPaymentAccount *_account;
    NSObject<OS_dispatch_source> *_timer;
    BOOL _timerHasFired;
    PKDeviceSharingCapabilities *_childAppleCashCapabilities;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isAssociatedAccountPending;
-(NSUInteger)_nextStateAfterCheckingFamilyMemberAppleCashCapabilities:(*BOOL)arg0 ;
-(id)initWithPeerPaymentSetupFlowController:(id)arg0 ;
-(void)_cancelTimer;
-(void)_checkFamilyMemberAppleCashCapabilities;
-(void)_handlePeerPaymentAccountDidChangeNotification;
-(void)_presentDisplayableError:(id)arg0 ;
-(void)_sendMoneyInMessages;
-(void)_setState:(NSUInteger)arg0 ;
-(void)_showSpinner:(BOOL)arg0 ;
-(void)_startTimerIfNeccessary;
-(void)_terminateAddAssociatedAccountFlowWithSucces:(BOOL)arg0 updatedAccount:(id)arg1 ;
-(void)dealloc;
-(void)deviceSharingCapabilitiesUpdated:(id)arg0 maximumPossibleDevices:(NSInteger)arg1 forAppleID:(id)arg2 ;
-(void)deviceSharingCapabilitiesUpdated:(id)arg0 newSharingCapabilties:(id)arg1 forAppleID:(id)arg2 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif