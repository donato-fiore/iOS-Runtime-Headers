// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPHBSCELLULARFAUXCARDVIEWCONTROLLER_H
#define NPHBSCELLULARFAUXCARDVIEWCONTROLLER_H

@class UIViewController, NSString, NSDate, CAShapeLayer, UILabel, UIButton, UIView, CTXPCServiceSubscriptionContext;
@protocol NPHCellularBridgeBarcodeScannerCaptureDelegate, NPHBSCellularConfirmationCodeViewControllerDelegate, UINavigationControllerDelegate;


#import "NPHCellularBridgeBarcodeScannerView.h"

@interface NPHBSCellularFauxCardViewController : UIViewController <NPHCellularBridgeBarcodeScannerCaptureDelegate, NPHBSCellularConfirmationCodeViewControllerDelegate, UINavigationControllerDelegate>

 {
    NSString *_fauxCardData;
    NSDate *_nextTimeToAcceptScan;
    CAShapeLayer *_fillWithHoleLayer;
    CAShapeLayer *_holeOutlineLayer;
}


@property (weak, nonatomic) UILabel *activationCodeLabel; // ivar: _activationCodeLabel
@property (weak, nonatomic) UIButton *bypassFauxCardButton; // ivar: _bypassFauxCardButton
@property (copy, nonatomic) id *codelessActivationBlock; // ivar: _codelessActivationBlock
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (weak, nonatomic) UIView *cutoutView; // ivar: _cutoutView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) UIButton *enterFauxCardDataManuallyButton; // ivar: _enterFauxCardDataManuallyButton
@property (weak, nonatomic) UILabel *fauxDataLabel; // ivar: _fauxDataLabel
@property (weak, nonatomic) UIView *fauxScanView; // ivar: _fauxScanView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NPHCellularBridgeBarcodeScannerView *scannerView; // ivar: _scannerView
@property (nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // ivar: _subscriptionContext
@property (readonly) Class superclass;
@property (nonatomic) NSInteger userConsentResponse; // ivar: _userConsentResponse


-(NSUInteger)supportedInterfaceOrientations;
-(id)_getFauxCardData;
-(id)init;
-(void)_setFauxCardData:(id)arg0 ;
-(void)addNewRemotePlanWithCardData:(id)arg0 confirmationCode:(id)arg1 ;
-(void)bypassFauxCard:(id)arg0 ;
-(void)cancelAction:(id)arg0 ;
-(void)captureOutput:(id)arg0 didOutputMetadataObjects:(id)arg1 fromConnection:(id)arg2 ;
-(void)captureSession:(id)arg0 isRunning:(BOOL)arg1 ;
-(void)cellularConfirmationCodeViewController:(id)arg0 confirmedWithCode:(id)arg1 ;
-(void)enterFauxCardDataManually:(id)arg0 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentConfirmationCodeRequest;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif