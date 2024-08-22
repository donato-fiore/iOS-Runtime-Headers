// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIIMAGEPICKERCONTROLLER_H
#define UIIMAGEPICKERCONTROLLER_H

@class NSArray, NSMutableDictionary, NSString, NSExtension;
@protocol _UIRemoteViewControllerContaining, NSCoding, UINavigationControllerDelegate><UIImagePickerControllerDelegate;


#import "UINavigationController.h"
#import "UIViewController.h"
#import "_UIRemoteViewController.h"
#import "UIView.h"

@interface UIImagePickerController : UINavigationController <_UIRemoteViewControllerContaining, NSCoding>

 {
    NSInteger _sourceType;
    id *_image;
    CGRect _cropRect;
    NSArray *_mediaTypes;
    NSMutableDictionary *_properties;
    int _previousStatusBarStyle;
    BOOL _previousStatusBarHidden;
    Class _photoPickerRequestOptionsClass;
    id *_photoPickerDisplayCompletion;
    id *_photoPickerPreviewDisplayCompletion;
    BOOL _photoPickerDidStartDelayingPresentation;
    BOOL _photoPickerDidEndDelayingPresentation;
    BOOL _photoPickerIsPreheating;
    UIViewController *_photoPickerPreheatedViewController;
    ? _imagePickerFlags;
    NSUInteger _savingOptions;
}


@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (nonatomic) BOOL allowsEditing;
@property (nonatomic) BOOL allowsImageEditing;
@property (nonatomic) NSInteger cameraCaptureMode;
@property (nonatomic) NSInteger cameraDevice;
@property (nonatomic) NSInteger cameraFlashMode;
@property (retain, nonatomic) UIView *cameraOverlayView;
@property (nonatomic) CGAffineTransform cameraViewTransform;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UINavigationControllerDelegate><UIImagePickerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger imageExportPreset;
@property (copy, nonatomic) NSArray *mediaTypes;
@property (readonly, nonatomic) Class photoPickerRequestOptionsClass;
@property (retain, nonatomic) NSExtension *photosExtension; // ivar: _photosExtension
@property (nonatomic) BOOL showsCameraControls;
@property (nonatomic) NSInteger sourceType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *videoExportPreset;
@property (nonatomic) CGFloat videoMaximumDuration;
@property (nonatomic) NSInteger videoQuality;


+(BOOL)_isMediaTypeAvailable:(id)arg0 forSource:(NSInteger)arg1 ;
+(BOOL)_reviewCapturedItems;
+(BOOL)isCameraDeviceAvailable:(NSInteger)arg0 ;
+(BOOL)isFlashAvailableForCameraDevice:(NSInteger)arg0 ;
+(BOOL)isSourceTypeAvailable:(NSInteger)arg0 ;
+(id)availableCaptureModesForCameraDevice:(NSInteger)arg0 ;
+(id)availableMediaTypesForSourceType:(NSInteger)arg0 ;
-(BOOL)_allowsIris;
-(BOOL)_allowsMultipleSelection;
-(BOOL)_convertAutoloopsToGIF;
-(BOOL)_didRevertStatusBar;
-(BOOL)_isCameraCaptureModeValid:(NSInteger)arg0 ;
-(BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)_onlyShowAutoloops;
-(BOOL)_requiresPickingConfirmation;
-(BOOL)_shouldDelayPresentation;
-(BOOL)_showsFileSizePicker;
-(BOOL)_showsPrompt;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)startVideoCapture;
-(NSInteger)_preferredModalPresentationStyle;
-(NSUInteger)_imagePickerSavingOptions;
-(NSUInteger)_multipleSelectionLimit;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_cameraViewController;
-(id)_initWithSourceImageData:(id)arg0 cropRect:(struct CGRect )arg1 ;
-(id)_photoPickerDisplayCompletion:(SEL)arg0 ;
-(id)_photoPickerPreviewDisplayCompletion:(SEL)arg0 ;
-(id)_properties;
-(id)_propertiesForPhotoPickerExtension;
-(id)_staticPrompt;
-(id)_targetForPrompt;
-(id)_valueForProperty:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(struct CGSize )_adjustedContentSizeForPopover:(struct CGSize )arg0 ;
-(void)_autoDismiss;
-(void)_createInitialControllerWithCompletion:(id)arg0 ;
-(void)_handleEndingPhotoPickerPresentationDelay;
-(void)_handleInstantiatedRemoteViewController:(id)arg0 request:(id)arg1 error:(id)arg2 completion:(id)arg3 ;
-(void)_handleMatchingExtension:(id)arg0 viewControllerClassName:(id)arg1 completion:(id)arg2 ;
-(void)_handlePushViewController:(id)arg0 ;
-(void)_handleTopViewControllerReadyForDisplay:(id)arg0 ;
-(void)_imagePickerDidCancel;
-(void)_imagePickerDidCompleteWithInfo:(id)arg0 ;
-(void)_imagePickerDidCompleteWithInfoArray:(id)arg0 ;
-(void)_initializeProperties;
-(void)_invalidatePhotoPickerServices;
-(void)_populateArchivedChildViewControllers:(id)arg0 ;
-(void)_removeAllChildren;
-(void)_setAllowsIris:(BOOL)arg0 ;
-(void)_setAllowsMultipleSelection:(BOOL)arg0 ;
-(void)_setConvertAutoloopsToGIF:(BOOL)arg0 ;
-(void)_setImagePickerSavingOptions:(NSUInteger)arg0 ;
-(void)_setMultipleSelectionLimit:(NSUInteger)arg0 ;
-(void)_setOnlyShowAutoloops:(BOOL)arg0 ;
-(void)_setPhotoPickerDisplayCompletion:(id)arg0 ;
-(void)_setPhotoPickerPreviewDisplayCompletion:(id)arg0 ;
-(void)_setProperties:(id)arg0 ;
-(void)_setRequiresPickingConfirmation:(BOOL)arg0 ;
-(void)_setShowsFileSizePicker:(BOOL)arg0 ;
-(void)_setShowsPrompt:(BOOL)arg0 ;
-(void)_setStaticPrompt:(id)arg0 ;
-(void)_setTargetForPrompt:(id)arg0 ;
-(void)_setValue:(id)arg0 forProperty:(id)arg1 ;
-(void)_setupControllersForCurrentMediaTypes;
-(void)_setupControllersForCurrentSourceTypeWithCompletion:(id)arg0 ;
-(void)_testPerformPreviewOfFirstPhoto;
-(void)_updateCameraCaptureMode;
-(void)_viewControllerPresentationDidInitiate;
-(void)cancelPhotoPicker;
-(void)didDisplayPhotoPickerPreview;
-(void)didDisplayPhotoPickerSourceType:(id)arg0 ;
-(void)didSelectMediaWithInfoDictionary:(id)arg0 ;
-(void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg0 ;
-(void)dismissCurrentViewControllerFromPhotoPickerAnimated:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)requestViewControllerFromPhotoPickerWithRequestIdentifier:(id)arg0 ;
-(void)setPhotoPickerViewControllerTitle:(id)arg0 ;
-(void)stopVideoCapture;
-(void)takePicture;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillUnload;


@end


#endif