// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AIAUDIOGRAMENROLLMENTVIEWCONTROLLER_H
#define AIAUDIOGRAMENROLLMENTVIEWCONTROLLER_H

@class OBNavigationController, NSArray, NSString, OBTextWelcomeController;
@protocol UINavigationControllerDelegate, UIAdaptivePresentationControllerDelegate, VNDocumentCameraViewControllerDelegate, PHPickerViewControllerDelegate, UIDocumentPickerDelegate, AIAudiogramIngestionEngineDelegate, AIAudiogramConfirmResultsViewControllerDelegate;


#import "AIAudiogramIngestionEngine.h"
#import "AIAudiogramLoadingViewController.h"

@interface AIAudiogramEnrollmentViewController : OBNavigationController <UINavigationControllerDelegate, UIAdaptivePresentationControllerDelegate, VNDocumentCameraViewControllerDelegate, PHPickerViewControllerDelegate, UIDocumentPickerDelegate, AIAudiogramIngestionEngineDelegate>



@property (nonatomic) NSUInteger analyticsClient; // ivar: _analyticsClient
@property (nonatomic) NSUInteger analyticsImportSource; // ivar: _analyticsImportSource
@property (nonatomic) BOOL analyticsIngestionAttempted; // ivar: _analyticsIngestionAttempted
@property (weak, nonatomic) NSObject<AIAudiogramConfirmResultsViewControllerDelegate> *audiogramConfirmationDelegate; // ivar: _audiogramConfirmationDelegate
@property (retain, nonatomic) AIAudiogramIngestionEngine *audiogramEngine; // ivar: _audiogramEngine
@property (retain, nonatomic) NSArray *audiogramImages; // ivar: _audiogramImages
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isCameraAvailable; // ivar: _isCameraAvailable
@property (retain, nonatomic) AIAudiogramLoadingViewController *loadingController; // ivar: _loadingController
@property (readonly) Class superclass;
@property (retain, nonatomic) OBTextWelcomeController *validationFailedController; // ivar: _validationFailedController


-(BOOL)presentationControllerShouldDismiss:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_imagesFromPDF:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)_cancelTapped:(id)arg0 ;
-(void)_hideAnalyzingAudiogram;
-(void)_importAudiogramImage;
-(void)_importTapped:(id)arg0 ;
-(void)_manuallyImportAudiogram;
-(void)_openCameraTapped:(id)arg0 ;
-(void)_openDocumentsTapped:(id)arg0 ;
-(void)_openPhotosTapped:(id)arg0 ;
-(void)_prepareToImportAudiogramImages:(id)arg0 ;
-(void)_showAnalyzingAudiogram;
-(void)_showDownloadingAudiogram;
-(void)_showResultsForAudiogram:(id)arg0 ;
-(void)_showValidationFailed;
-(void)_showWelcome;
-(void)audiogramIngestionEngineModelDownloadComplete;
-(void)audiogramIngestionEngineModelDownloadFailed:(id)arg0 ;
-(void)audiogramIngestionEngineModelDownloadProgressed:(float)arg0 ;
-(void)documentCameraViewController:(id)arg0 didFailWithError:(id)arg1 ;
-(void)documentCameraViewController:(id)arg0 didFinishWithScan:(id)arg1 ;
-(void)documentCameraViewControllerDidCancel:(id)arg0 ;
-(void)documentPicker:(id)arg0 didPickDocumentsAtURLs:(id)arg1 ;
-(void)picker:(id)arg0 didFinishPicking:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif