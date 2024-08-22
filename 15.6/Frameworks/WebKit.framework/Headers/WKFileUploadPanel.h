// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKFILEUPLOADPANEL_H
#define WKFILEUPLOADPANEL_H

@class UIViewController, NSString;
@protocol UIPopoverControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIDocumentPickerDelegate, UIAdaptivePresentationControllerDelegate, UIContextMenuInteractionDelegate, WKFileUploadPanelDelegate;



@interface WKFileUploadPanel : UIViewController <UIPopoverControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIDocumentPickerDelegate, UIAdaptivePresentationControllerDelegate, UIContextMenuInteractionDelegate>

 {
    WeakObjCPtr<WKContentView> _view;
    RefPtr<WebKit::WebOpenPanelResultListenerProxy, WTF::RawPtrTraits<WebKit::WebOpenPanelResultListenerProxy>, WTF::DefaultRefDerefTraits<WebKit::WebOpenPanelResultListenerProxy>> _listener;
    RetainPtr<NSSet<NSString *>> _acceptedUTIs;
    OptionSet<WKFileUploadPanelImagePickerType> _allowedImagePickerTypes;
    CGPoint _interactionPoint;
    BOOL _allowMultipleFiles;
    BOOL _usingCamera;
    RetainPtr<WKFileUploadMediaTranscoder> _mediaTranscoder;
    RetainPtr<UIImagePickerController> _imagePicker;
    RetainPtr<UIViewController> _presentationViewController;
    RetainPtr<UIPopoverController> _presentationPopover;
    BOOL _isPresentingSubMenu;
    BOOL _isRepositioningContextMenu;
    RetainPtr<UIContextMenuInteraction> _documentContextMenuInteraction;
    RetainPtr<UIDocumentPickerViewController> _documentPickerController;
    int _mediaCaptureType;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WKFileUploadPanelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldMediaCaptureOpenMediaDevice;
-(BOOL)_willMultipleSelectionDelegateBeCalled;
-(BOOL)platformSupportsPickerViewController;
-(id)_cameraButtonLabel;
-(id)_chooseFilesButtonLabel;
-(id)_contextMenuInteraction:(id)arg0 styleForMenuWithConfiguration:(id)arg1 ;
-(id)_mediaTypesForPickerSourceType:(NSInteger)arg0 ;
-(id)_photoLibraryButtonLabel;
-(id)acceptedTypeIdentifiers;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)currentAvailableActionTitles;
-(id)ensureContextMenuInteraction;
-(id)initWithView:(id)arg0 ;
-(void)_adjustMediaCaptureType;
-(void)_cancel;
-(void)_chooseFiles:(id)arg0 displayString:(id)arg1 iconImage:(id)arg2 ;
-(void)_chooseMediaItems:(id)arg0 ;
-(void)_dismissDisplayAnimated:(BOOL)arg0 ;
-(void)_dispatchDidDismiss;
-(void)_presentFullscreenViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)_presentMenuOptionForCurrentInterfaceIdiom:(id)arg0 ;
-(void)_presentPopoverWithContentViewController:(id)arg0 animated:(BOOL)arg1 ;
// -(void)_processMediaInfoDictionaries:(id)arg0 atIndex:(NSUInteger)arg1 processedResults:(id)arg2 successBlock:(id)arg3 failureBlock:(unk)arg4  ;
// -(void)_processMediaInfoDictionaries:(id)arg0 successBlock:(id)arg1 failureBlock:(unk)arg2  ;
-(void)_showPhotoPickerWithSourceType:(NSInteger)arg0 ;
// -(void)_uploadItemForImageData:(id)arg0 imageName:(id)arg1 successBlock:(id)arg2 failureBlock:(unk)arg3  ;
// -(void)_uploadItemForJPEGRepresentationOfImage:(id)arg0 successBlock:(id)arg1 failureBlock:(unk)arg2  ;
// -(void)_uploadItemFromMediaInfo:(id)arg0 successBlock:(id)arg1 failureBlock:(unk)arg2  ;
-(void)_uploadMediaItemsTranscodingVideo:(id)arg0 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)dealloc;
-(void)dismiss;
-(void)documentPicker:(id)arg0 didPickDocumentsAtURLs:(id)arg1 ;
-(void)documentPickerWasCancelled:(id)arg0 ;
-(void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1 ;
-(void)imagePickerController:(id)arg0 didFinishPickingMultipleMediaWithInfo:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg0 ;
-(void)popoverControllerDidDismissPopover:(id)arg0 ;
-(void)presentWithParameters:(*void)arg0 resultListener:(*void)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)removeContextMenuInteraction;
-(void)repositionContextMenuIfNeeded;
-(void)showDocumentPickerMenu;
-(void)showFilePickerMenu;


@end


#endif