// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC25HEALTHMEDICATIONSVISIONUI35MEDICATIONDATASCANNERVIEWCONTROLLER_H
#define _TTC25HEALTHMEDICATIONSVISIONUI35MEDICATIONDATASCANNERVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC25HealthMedicationsVisionUI35MedicationDataScannerViewController : UIViewController {
    ? scannerDelegate;
    ? coordinator;
    ? assetReady;
    ? healthStore;
    ? ontologyStore;
    ? resolutionEngine;
    ? dataLock;
    ? analyticsContext;
    ? tokenizer;
    ? allTokens;
    ? accumulatedText;
    ? accumulatedBarcodes;
    ? controlTimer;
    ? coordinatorCanceller;
    ? assetStateCanceller;
    ? introductionView;
    ? hasShownIntroduction;
    ? loadingView;
    ? analyticsCurrentAlgorithmType;
    ? analyticsCurrentStep;
    ? $__lazy_storage_$_dataScannerViewController;
    ? $__lazy_storage_$_tapToRadarButton;
    ? $__lazy_storage_$_regionOfInterestOverlay;
    ? $__lazy_storage_$_closeButton;
    ? $__lazy_storage_$_feedbackGenerator;
}


@property (nonatomic, readonly) NSInteger preferredStatusBarStyle;
@property (nonatomic, readonly) NSUInteger supportedInterfaceOrientations;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)onClose;
-(void)tapToRadarButtonTappedWithSender:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif