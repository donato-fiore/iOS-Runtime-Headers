// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIWEBFILEUPLOADPANEL_H
#define UIWEBFILEUPLOADPANEL_H

@class DOMNode, NSString, NSArray;
@protocol UIDocumentPickerDelegate, UIDocumentMenuDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIPopoverControllerDelegate, UIWebFileUploadPanelDelegate, WebOpenPanelResultListener;


#import "UIViewController.h"
#import "UIDocumentMenuViewController.h"
#import "UIImagePickerController.h"
#import "UIPopoverController.h"
#import "UIWebDocumentView.h"

@interface UIWebFileUploadPanel : UIViewController <UIDocumentPickerDelegate, UIDocumentMenuDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIPopoverControllerDelegate>

 {
    UIDocumentMenuViewController *_documentMenuController;
    UIImagePickerController *_imagePicker;
    UIViewController *_presentationViewController;
    UIPopoverController *_presentationPopover;
    CGPoint _interactionPoint;
    DOMNode *_interactionElement;
}


@property (nonatomic) BOOL allowMultipleFiles; // ivar: _allowMultipleFiles
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<UIWebFileUploadPanelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) UIWebDocumentView *documentView; // ivar: _documentView
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isUsingCamera; // ivar: _isUsingCamera
@property (nonatomic) NSInteger mediaCaptureType; // ivar: _mediaCaptureType
@property (copy, nonatomic) NSArray *mimeTypes; // ivar: _mimeTypes
@property (retain, nonatomic) NSObject<WebOpenPanelResultListener> *resultListener; // ivar: _resultListener
@property (readonly) Class superclass;


-(BOOL)_shouldMediaCaptureOpenMediaDevice;
-(BOOL)_string:(id)arg0 hasPrefixCaseInsensitive:(id)arg1 ;
-(BOOL)_willMultipleSelectionDelegateBeCalled;
-(id)_UTIsForMIMETypes;
-(id)_cameraButtonLabel;
-(id)_displayStringForPhotos:(NSUInteger)arg0 videos:(NSUInteger)arg1 ;
-(id)_documentPickerMenuMediaTypes;
-(id)_mediaTypesForPickerSourceType:(NSInteger)arg0 ;
-(id)_photoPickerWithSourceType:(NSInteger)arg0 ;
-(id)initWithResultListener:(id)arg0 configuration:(id)arg1 documentView:(id)arg2 ;
-(void)_adjustMediaCaptureType;
-(void)_cancel;
-(void)_chooseFilename:(id)arg0 displayString:(id)arg1 iconImage:(id)arg2 ;
-(void)_chooseFilenames:(id)arg0 displayString:(id)arg1 iconImage:(id)arg2 ;
-(void)_dismissDisplayAnimated:(BOOL)arg0 ;
-(void)_dispatchDidDismiss;
-(void)_presentForCurrentInterfaceIdiom:(id)arg0 ;
-(void)_presentFullscreenViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)_presentPopoverWithContentViewController:(id)arg0 animated:(BOOL)arg1 ;
// -(void)_processMediaInfoDictionaries:(id)arg0 atIndex:(NSUInteger)arg1 processedResults:(id)arg2 processedImageCount:(NSUInteger)arg3 processedVideoCount:(NSUInteger)arg4 successBlock:(id)arg5 failureBlock:(unk)arg6  ;
// -(void)_processMediaInfoDictionaries:(id)arg0 successBlock:(id)arg1 failureBlock:(unk)arg2  ;
-(void)_showDocumentPickerMenu;
-(void)_showPhotoPickerWithSourceType:(NSInteger)arg0 ;
// -(void)_uploadItemForImageData:(id)arg0 imageName:(id)arg1 successBlock:(id)arg2 failureBlock:(unk)arg3  ;
// -(void)_uploadItemForJPEGRepresentationOfImage:(id)arg0 successBlock:(id)arg1 failureBlock:(unk)arg2  ;
// -(void)_uploadItemFromMediaInfo:(id)arg0 successBlock:(id)arg1 failureBlock:(unk)arg2  ;
-(void)dealloc;
-(void)dismiss;
-(void)documentMenu:(id)arg0 didPickDocumentPicker:(id)arg1 ;
-(void)documentMenuWasCancelled:(id)arg0 ;
-(void)documentPicker:(id)arg0 didPickDocumentAtURL:(id)arg1 ;
-(void)documentPickerWasCancelled:(id)arg0 ;
-(void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1 ;
-(void)imagePickerController:(id)arg0 didFinishPickingMultipleMediaWithInfo:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg0 ;
-(void)popoverControllerDidDismissPopover:(id)arg0 ;
-(void)present;


@end


#endif