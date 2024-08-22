// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVIDEOMESSAGERECORDINGVIEWCONTROLLER_H
#define CKVIDEOMESSAGERECORDINGVIEWCONTROLLER_H

@class UIViewController, UIView, UIWindow, UIImagePickerController, NSError, NSString, UIButton;
@protocol UINavigationControllerDelegate, UIImagePickerControllerDelegate, CKActionMenuControllerDelegate, CKVideoRecorderDelegate, CKVideoMessageRecordingViewControllerDelegate;


#import "CKMediaObject.h"
#import "CKActionMenuItem.h"
#import "CKRecordingElapsedTimeView.h"
#import "CKActionMenuController.h"

@interface CKVideoMessageRecordingViewController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, CKActionMenuControllerDelegate, CKVideoRecorderDelegate>

 {
    UIView *_presentationView;
    UIWindow *_overlayWindow;
    BOOL _presented;
    BOOL _previewWarmedUp;
    BOOL _showingVideo;
}


@property (retain, nonatomic) UIImagePickerController *cameraViewController; // ivar: _cameraViewController
@property (nonatomic) BOOL canceled; // ivar: _canceled
@property (retain, nonatomic) NSError *captureError; // ivar: _captureError
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger enableCancel; // ivar: _enableCancel
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *mediaExportCompletionBlock; // ivar: _mediaExportCompletionBlock
@property (retain, nonatomic) CKMediaObject *mediaObjectForSending; // ivar: _mediaObjectForSending
@property (retain, nonatomic) CKActionMenuItem *photoMenuItem; // ivar: _photoMenuItem
@property (nonatomic) BOOL recording; // ivar: _recording
@property (nonatomic) BOOL sending; // ivar: _sending
@property (readonly) Class superclass;
@property (retain, nonatomic) UIButton *swapCameraButton; // ivar: _swapCameraButton
@property (retain, nonatomic) CKRecordingElapsedTimeView *timerView; // ivar: _timerView
@property (retain, nonatomic) UIView *topBackgroundView; // ivar: _topBackgroundView
@property (nonatomic) BOOL triedToRecord; // ivar: _triedToRecord
@property (retain, nonatomic) CKActionMenuController *videoActionMenuController; // ivar: _videoActionMenuController
@property (weak, nonatomic) NSObject<CKVideoMessageRecordingViewControllerDelegate> *videoMessageDelegate; // ivar: _videoMessageDelegate


-(BOOL)shouldAutorotate;
-(id)childViewControllerForStatusBarHidden;
-(id)initWithPresentationView:(id)arg0 ;
-(void)_animateVideoIn;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_cameraOrientationChanged:(id)arg0 ;
-(void)_cleanupCamera;
-(void)_previewWarmedUp:(id)arg0 ;
-(void)actionMenuControllerWillDismissActionMenu:(id)arg0 animated:(BOOL)arg1 ;
-(void)cancel;
-(void)cancelMenuItemAction:(id)arg0 ;
-(void)ckVideoRecorder:(id)arg0 imageDataCaptured:(id)arg1 error:(id)arg2 ;
-(void)ckVideoRecorder:(id)arg0 videoCaptured:(id)arg1 error:(id)arg2 ;
-(void)ckVideoRecorderRecordingCanceled:(id)arg0 ;
-(void)dealloc;
-(void)dismissWithCompletion:(id)arg0 ;
-(void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg0 ;
-(void)photoMenuItemAction:(id)arg0 ;
-(void)presentVideoActionMenuController;
-(void)presentWithCompletion:(id)arg0 ;
-(void)record;
-(void)send;
-(void)stopRecordingWithCompletionBlock:(id)arg0 ;
-(void)swapCamera:(id)arg0 ;
-(void)takePictureWithCompletionBlock:(id)arg0 ;
-(void)videoMenuItemAction:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif