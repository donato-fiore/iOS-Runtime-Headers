// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCELLULARPLANSCANVIEWCONTROLLER_H
#define TSCELLULARPLANSCANVIEWCONTROLLER_H

@class NSDate, CAShapeLayer, UIButton, UIView, NSString, UILabel;
@protocol AVCaptureMetadataOutputObjectsDelegate, NSSecureCoding, UINavigationControllerDelegate, TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "SSUIViewController.h"
#import "TSCellularPlanQRCodeScannerView.h"

@interface TSCellularPlanScanViewController : SSUIViewController <AVCaptureMetadataOutputObjectsDelegate, NSSecureCoding, UINavigationControllerDelegate, TSSetupFlowItem>

 {
    BOOL _withBackButton;
    NSDate *_nextTimeToAcceptScan;
    CAShapeLayer *_holeOutlineLayer;
    TSCellularPlanQRCodeScannerView *_scannerView;
}


@property (weak, nonatomic) UIButton *btLearnMore; // ivar: _btLearnMore
@property (readonly) BOOL confirmationCodeRequired; // ivar: _confirmationCodeRequired
@property (weak, nonatomic) UIView *cutoutView; // ivar: _cutoutView
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) UIButton *enterDetailsManuallyButton; // ivar: _enterDetailsManuallyButton
@property NSUInteger entryPoint; // ivar: _entryPoint
@property (readonly) NSString *fauxCardData; // ivar: _fauxCardData
@property (readonly) NSUInteger hash;
@property (readonly) BOOL manualCardInfoEntry; // ivar: _manualCardInfoEntry
@property (weak, nonatomic) UILabel *positionQRCodeLabel; // ivar: _positionQRCodeLabel
@property (weak, nonatomic) UILabel *scanQRCodeLabel; // ivar: _scanQRCodeLabel
@property (weak, nonatomic) UIView *scanView; // ivar: _scanView
@property (readonly) Class superclass;
@property (readonly) BOOL transferViaQRCode; // ivar: _transferViaQRCode


-(BOOL)canBeShownFromSuspendedState;
-(id)initWithBackButton:(BOOL)arg0 ;
-(struct CGPoint )makeCGPoint:(id)arg0 ;
-(void)_addNewPlanWithCardData:(id)arg0 confirmationCode:(id)arg1 ;
-(void)captureOutput:(id)arg0 didOutputMetadataObjects:(id)arg1 fromConnection:(id)arg2 ;
-(void)didChangeValueForKey:(id)arg0 ;
-(void)drawQRBox:(id)arg0 ;
-(void)enterFauxCardDataManually:(id)arg0 ;
-(void)learnMoreTapped:(id)arg0 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif