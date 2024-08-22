// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENTADDASSOCIATEDACCOUNTVIEWCONTROLLER_H
#define PKPEERPAYMENTADDASSOCIATEDACCOUNTVIEWCONTROLLER_H

@class PKFamilyMember, PKFamilyMemberCollection, PKPeerPaymentWebService, PKPeerPaymentAccount, NSString;
@protocol PKPeerPaymentSetupFlowControllerDataSource;


#import "PKExplanationViewController.h"
#import "PKPeerPaymentSetupFlowController.h"
#import "PKPeerPaymentSetupFlowControllerAssociatedAccountConfiguration.h"
#import "PKWatchDeviceImageOverlayView.h"

@interface PKPeerPaymentAddAssociatedAccountViewController : PKExplanationViewController <PKPeerPaymentSetupFlowControllerDataSource>

 {
    NSUInteger _operations;
    NSInteger _setupType;
    PKFamilyMember *_familyMember;
    PKFamilyMemberCollection *_familyCollection;
    PKPeerPaymentWebService *_webService;
    PKPeerPaymentSetupFlowController *_peerPaymentSetupFlowController;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKPeerPaymentSetupFlowControllerAssociatedAccountConfiguration *_configuration;
    PKWatchDeviceImageOverlayView *_watchDeviceImageView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldPushTerms;
-(id)_imageForWatchView;
-(id)initWithFamilyMember:(id)arg0 familyCollection:(id)arg1 webService:(id)arg2 passLibraryDataProvider:(id)arg3 delegate:(id)arg4 context:(NSInteger)arg5 setupType:(NSInteger)arg6 ;
-(void)_presentDisplayableError:(id)arg0 ;
-(void)_showSpinner:(BOOL)arg0 ;
-(void)_terminateAddAssociatedAccountFlow;
-(void)explanationViewDidSelectBodyButton:(id)arg0 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif