// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTAKEPHOTOACTIONUIKITUSERINTERFACE_H
#define WFTAKEPHOTOACTIONUIKITUSERINTERFACE_H

@class WFEmbeddableActionUserInterface, NSString, WFContentCollection, NSMutableArray, AVCaptureSession;
@protocol UIImagePickerControllerDelegate, UINavigationControllerDelegate, WFTakePhotoActionUserInterface, AVCapturePhotoCaptureDelegate;



@interface WFTakePhotoActionUIKitUserInterface : WFEmbeddableActionUserInterface <UIImagePickerControllerDelegate, UINavigationControllerDelegate, WFTakePhotoActionUserInterface, AVCapturePhotoCaptureDelegate>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFContentCollection *outputCollection; // ivar: _outputCollection
@property (retain, nonatomic) NSMutableArray *outputImages; // ivar: _outputImages
@property (nonatomic) NSUInteger remainingPhotos; // ivar: _remainingPhotos
@property (retain, nonatomic) AVCaptureSession *session; // ivar: _session
@property (nonatomic) BOOL showCameraPreview; // ivar: _showCameraPreview
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


+(NSInteger)cameraDeviceFromString:(id)arg0 ;
-(BOOL)prefersModalPresentation;
-(id)initWithUserInterfaceType:(id)arg0 attribution:(id)arg1 ;
-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)captureOutput:(id)arg0 didFinishProcessingPhoto:(id)arg1 error:(id)arg2 ;
-(void)finishWithError:(id)arg0 ;
-(void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg0 ;
-(void)showWithCameraPreview:(BOOL)arg0 photoCount:(NSUInteger)arg1 device:(id)arg2 shortcutAttribution:(id)arg3 completionHandler:(id)arg4 ;
-(void)takePhotoOnDevice:(id)arg0 shortcutAttribution:(id)arg1 ;


@end


#endif