// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICGALLERYATTACHMENTEDITORCONTROLLER_H
#define ICGALLERYATTACHMENTEDITORCONTROLLER_H

@class NSString, ICDocCamDocumentInfoCollection, ICNAEventReporter, ICDocCamExtractedDocumentViewController, UIImage, ICAttachment, ICDocCamImageCache, NSIndexPath, UIView, ICAttachmentPreviewImageCache;
@protocol ICDocCamExtractedDocumentControllerDelegate, ICDocCamViewControllerDelegate, ICRemoteDocCamViewControllerDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate, ICAttachmentUIState, ICGalleryAttachmentEditorControllerDelegate;

#import <Foundation/Foundation.h>

#import "ICDocCamScannedDocumentEditor.h"

@interface ICGalleryAttachmentEditorController : NSObject <ICDocCamExtractedDocumentControllerDelegate, ICDocCamViewControllerDelegate, ICRemoteDocCamViewControllerDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate, ICAttachmentUIState>



@property (nonatomic) BOOL browserMode; // ivar: _browserMode
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ICGalleryAttachmentEditorControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ICDocCamDocumentInfoCollection *documentInfoCollection; // ivar: _documentInfoCollection
@property (retain, nonatomic) ICDocCamScannedDocumentEditor *editor; // ivar: _editor
@property (retain, nonatomic) ICNAEventReporter *eventReporter; // ivar: _eventReporter
@property (retain, nonatomic) ICDocCamExtractedDocumentViewController *extractedDocumentController; // ivar: _extractedDocumentController
@property (retain, nonatomic) UIImage *filteredImageForRecrop; // ivar: _filteredImageForRecrop
@property (retain, nonatomic) ICAttachment *galleryAttachment; // ivar: _galleryAttachment
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ICDocCamImageCache *imageCache; // ivar: _imageCache
@property (retain, nonatomic) NSIndexPath *indexPathForRecrop; // ivar: _indexPathForRecrop
@property (nonatomic) NSInteger orientationForRecrop; // ivar: _orientationForRecrop
@property (retain, nonatomic) UIView *sourceViewForZoomTransition; // ivar: _sourceViewForZoomTransition
@property (readonly) Class superclass;
@property (retain, nonatomic) ICAttachmentPreviewImageCache *thumbnailCache; // ivar: _thumbnailCache
@property (retain, nonatomic) UIImage *unfilteredImageForRecrop; // ivar: _unfilteredImageForRecrop
@property (nonatomic) BOOL useCustomRecropTransition; // ivar: _useCustomRecropTransition


+(id)activityTypeOrder;
-(BOOL)documentCameraController:(id)arg0 canAddImages:(NSUInteger)arg1 ;
-(BOOL)openEditorOnViewController:(id)arg0 pageIndex:(NSUInteger)arg1 sourceView:(id)arg2 ;
-(BOOL)shouldAllowEditing;
-(BOOL)updateDocumentViewControllerFromModel;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)attachmentUIState;
-(id)documentCameraControllerCreateDataCryptorIfNecessary;
-(id)extractedDocumentControllerImageForDocument:(id)arg0 ;
-(id)extractedDocumentControllerMarkupModelDataForDocument:(id)arg0 ;
-(id)extractedDocumentControllerUncroppedImageForDocument:(id)arg0 ;
-(id)initWithGalleryAttachment:(id)arg0 browserMode:(BOOL)arg1 delegate:(id)arg2 ;
-(id)navigationController:(id)arg0 animationControllerForOperation:(NSInteger)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(id)scanDataDelegateWithIdentifier:(id)arg0 ;
-(struct CGSize )extractedDocumentControllerImageSizeForDocument:(id)arg0 ;
-(void)applicationWillTerminate:(id)arg0 ;
-(void)applyAttachmentUIStateIfNecessary:(id)arg0 ;
-(void)attachmentDidLoad:(id)arg0 ;
-(void)attachmentTitleDidChange;
-(void)dealloc;
-(void)documentCameraController:(id)arg0 didFinishWithDocInfoCollection:(id)arg1 imageCache:(id)arg2 warnUser:(BOOL)arg3 ;
-(void)documentCameraController:(id)arg0 didFinishWithDocInfoCollection:(id)arg1 imageCache:(id)arg2 warnUser:(BOOL)arg3 closeViewController:(BOOL)arg4 ;
-(void)documentCameraControllerDidCancel:(id)arg0 ;
-(void)documentCameraControllerDidCancelWithPresentingViewController:(id)arg0 ;
-(void)documentCameraControllerDidRetake:(id)arg0 pageCount:(NSUInteger)arg1 ;
-(void)documentCameraPresentingViewController:(id)arg0 didFinishWithInfoCollection:(id)arg1 imageCache:(id)arg2 warnUser:(BOOL)arg3 closeViewController:(BOOL)arg4 ;
-(void)extractedDocumentController:(id)arg0 didTapRecrop:(id)arg1 index:(NSInteger)arg2 ;
-(void)extractedDocumentController:(id)arg0 shareDocument:(id)arg1 sender:(id)arg2 ;
// -(void)extractedDocumentController:(id)arg0 startMarkupOnDocument:(id)arg1 inkStyle:(NSUInteger)arg2 startPresentBlock:(id)arg3 dismissCompletionBlock:(unk)arg4  ;
-(void)extractedDocumentControllerDidApplyFilter:(short)arg0 forDocument:(id)arg1 ;
-(void)extractedDocumentControllerDidChangeTitle:(id)arg0 ;
-(void)extractedDocumentControllerDidDeleteDocument:(id)arg0 ;
-(void)extractedDocumentControllerDidMovePageFromIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 forDocument:(id)arg2 ;
-(void)extractedDocumentControllerDidRotateDocument:(id)arg0 ;
-(void)extractedDocumentControllerDidSelectCopyFromMenuForDocument:(id)arg0 ;
-(void)extractedDocumentControllerDidSelectShareFromMenuForDocument:(id)arg0 sourceRect:(struct CGRect )arg1 sourceView:(id)arg2 ;
-(void)extractedDocumentControllerDidTapDone:(NSUInteger)arg0 ;
-(void)extractedDocumentControllerDidTapDone:(NSUInteger)arg0 scanDataDelegate:(id)arg1 ;
-(void)extractedDocumentControllerDidTapRetake:(NSUInteger)arg0 ;
-(void)extractedDocumentControllerDiscardMarkupModelDataForDocument:(id)arg0 ;
-(void)extractedDocumentControllerLoadThumbnailForDocument:(id)arg0 size:(struct CGSize )arg1 completionBlock:(id)arg2 ;
-(void)movePageFromIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)previewImageDidUpdate:(id)arg0 ;
-(void)remoteDocumentCameraController:(id)arg0 didFailWithError:(id)arg1 ;
-(void)remoteDocumentCameraController:(id)arg0 didFinishWithInfoCollection:(id)arg1 ;
-(void)remoteDocumentCameraControllerDidCancel:(id)arg0 ;
-(void)updateDocInfoForAttachment:(id)arg0 ;


@end


#endif