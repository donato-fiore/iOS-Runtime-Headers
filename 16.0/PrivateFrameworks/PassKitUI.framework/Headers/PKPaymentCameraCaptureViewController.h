// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTCAMERACAPTUREVIEWCONTROLLER_H
#define PKPAYMENTCAMERACAPTUREVIEWCONTROLLER_H

@class CRCameraReader, NSArray, UIView, PKPaymentProvisioningController, NSString;
@protocol CRCameraReaderDelegate, PKPaymentSetupHideSetupLaterButtonProtocol, PKPaymentCameraCaptureViewControllerDelegate, PKPaymentSetupViewControllerDelegate;


#import "PKPaymentCardManualEntryViewController.h"
#import "PKCameraCaptureInstructionView.h"

@interface PKPaymentCameraCaptureViewController : CRCameraReader <CRCameraReaderDelegate, PKPaymentSetupHideSetupLaterButtonProtocol>

 {
    NSArray *_outputObjects;
    PKPaymentCardManualEntryViewController *_manualEntryController;
    id<PKPaymentCameraCaptureViewControllerDelegate> *_cameraCaptureDelegate;
    NSInteger _context;
    id<PKPaymentSetupViewControllerDelegate> *_setupDelegate;
    UIView *_cameraView;
    UIView *_cameraInstructionContainerView;
    PKCameraCaptureInstructionView *_cameraInstructionView;
    NSUInteger _cameraCaptureStartTime;
    PKPaymentProvisioningController *_provisioningController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideSetupLaterButton; // ivar: _hideSetupLaterButton
@property (readonly) Class superclass;


-(id)init;
-(id)initWithCameraCaptureDelegate:(id)arg0 ;
-(id)initWithProvisioningController:(id)arg0 context:(NSInteger)arg1 setupDelegate:(id)arg2 ;
-(void)_manualEntryButtonPressed:(id)arg0 ;
-(void)_pushManualEntryViewController;
-(void)_setupLater:(id)arg0 ;
-(void)cameraReader:(id)arg0 didFailWithError:(id)arg1 ;
-(void)cameraReader:(id)arg0 didRecognizeObjects:(id)arg1 ;
-(void)cameraReaderDidCancel:(id)arg0 ;
-(void)cameraReaderDidEnd:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)pk_applyAppearance:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif