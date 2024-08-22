// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTDOCUMENTSUBMISSIONIDCAPTUREVIEWCONTROLLER_H
#define PKPAYMENTDOCUMENTSUBMISSIONIDCAPTUREVIEWCONTROLLER_H

@class CRCameraReader, UIView, NSTimer, UIBarButtonItem, NSString;
@protocol CRCameraReaderDelegate, PKPaymentDocumentSubmissionControllerDelegate, PKPaymentSetupPresentationProtocol;


#import "PKPaymentDocumentSubmissionController.h"
#import "PKCameraCaptureInstructionView.h"

@interface PKPaymentDocumentSubmissionIDCaptureViewController : CRCameraReader <CRCameraReaderDelegate, PKPaymentDocumentSubmissionControllerDelegate, PKPaymentSetupPresentationProtocol>

 {
    PKPaymentDocumentSubmissionController *_captureController;
    UIView *_cameraView;
    UIView *_cameraInstructionContainerView;
    PKCameraCaptureInstructionView *_cameraInstructionView;
    BOOL _reachedTimeout;
    NSTimer *_timerTryAgain;
    UIBarButtonItem *_buttonCancel;
    NSInteger _context;
    NSUInteger _featureIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)onPresentationRemoveViewControllersAfterMarker;
-(id)initWithController:(id)arg0 context:(NSInteger)arg1 featureIdentifier:(NSUInteger)arg2 ;
-(void)cameraReader:(id)arg0 didFailWithError:(id)arg1 ;
-(void)cameraReader:(id)arg0 didRecognizeObjects:(id)arg1 ;
-(void)cameraReaderDidCancel:(id)arg0 ;
-(void)cameraReaderDidEnd:(id)arg0 ;
-(void)cancel;
-(void)captureController:(id)arg0 didChangeStateTo:(NSInteger)arg1 ;
-(void)captureController:(id)arg0 showLoading:(BOOL)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)updateUIWithState:(NSInteger)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif