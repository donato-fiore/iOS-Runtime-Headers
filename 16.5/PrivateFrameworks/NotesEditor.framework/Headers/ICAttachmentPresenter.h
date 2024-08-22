// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICATTACHMENTPRESENTER_H
#define ICATTACHMENTPRESENTER_H

@class NSArray, NSString, ICAttachment, ICNAEventReporter, ICViewControllerManager, NSDictionary, UIViewController, UIBarButtonItem;
@protocol QLPreviewControllerDataSource, QLPreviewControllerDelegate, ICGalleryAttachmentEditorControllerDelegate, MFMailComposeViewControllerDelegate, ICAttachmentPresenterDelegate;

#import <Foundation/Foundation.h>

#import "ICGalleryAttachmentEditorController.h"
#import "ICQLPreviewController.h"

@interface ICAttachmentPresenter : NSObject <QLPreviewControllerDataSource, QLPreviewControllerDelegate, ICGalleryAttachmentEditorControllerDelegate, MFMailComposeViewControllerDelegate>



@property (getter=isAttachmentEditable) BOOL attachmentEditable; // ivar: _attachmentEditable
@property (retain, nonatomic) NSArray *attachments; // ivar: _attachments
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ICAttachmentPresenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property BOOL displayShowInNote; // ivar: _displayShowInNote
@property (readonly, nonatomic) ICAttachment *displayedAttachment;
@property (retain, nonatomic) ICNAEventReporter *eventReporter; // ivar: _eventReporter
@property (retain, nonatomic) ICGalleryAttachmentEditorController *galleryAttachmentEditorController;
@property (retain, nonatomic) ICGalleryAttachmentEditorController *galleryAttachmentEditorController; // ivar: _galleryAttachmentEditorController
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) ICViewControllerManager *ic_viewControllerManager; // ivar: _ic_viewControllerManager
@property (readonly, nonatomic) BOOL isAttachmentBrowser;
@property (nonatomic) BOOL isDismissing; // ivar: _isDismissing
@property (readonly, nonatomic) NSDictionary *presentedAttachmentUIState;
@property (retain) UIViewController *presentedViewController; // ivar: _presentedViewController
@property (weak) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (retain) ICQLPreviewController *qlPreviewController; // ivar: _qlPreviewController
@property (retain, nonatomic) NSArray *quickLookFilteredAttachments; // ivar: _quickLookFilteredAttachments
@property (nonatomic) NSUInteger quickLookFilteredStartingIndex; // ivar: _quickLookFilteredStartingIndex
@property (readonly, nonatomic) ICAttachment *selectedSubAttachment;
@property (retain, nonatomic) UIBarButtonItem *showInNoteButton; // ivar: _showInNoteButton
@property (nonatomic) NSUInteger startingIndex; // ivar: _startingIndex
@property (readonly) Class superclass;


+(BOOL)shouldCommitPreviewViewController:(id)arg0 ;
+(id)previewViewControllerWithViewControllerManager:(id)arg0 attachments:(id)arg1 startingAtIndex:(NSUInteger)arg2 delegate:(id)arg3 editable:(BOOL)arg4 isFromAttachmentBrowser:(BOOL)arg5 ;
-(BOOL)prefersStatusBarHidden;
-(BOOL)previewController:(id)arg0 canShareItem:(id)arg1 ;
-(NSInteger)numberOfPreviewItemsInPreviewController:(id)arg0 ;
-(NSInteger)previewController:(id)arg0 editingModeForPreviewItem:(id)arg1 ;
-(id)attachment;
-(id)excludedActivityTypesForPreviewController:(id)arg0 ;
-(id)initWithViewControllerManager:(id)arg0 attachments:(id)arg1 startingAtIndex:(NSUInteger)arg2 delegate:(id)arg3 displayShowInNote:(BOOL)arg4 editable:(BOOL)arg5 presentingViewController:(id)arg6 ;
-(id)previewController:(id)arg0 previewItemAtIndex:(NSInteger)arg1 ;
-(id)previewController:(id)arg0 transitionViewForPreviewItem:(id)arg1 ;
-(id)transitionViewForAttachment:(id)arg0 ;
-(id)transitionViewForAttachment:(id)arg0 atIndexPath:(id)arg1 ;
-(void)applyPresentedAttachmentUIStateIfNecessary:(id)arg0 ;
-(void)attachmentWillBeDeletedNotification:(id)arg0 ;
-(void)dealloc;
-(void)dismiss:(id)arg0 ;
-(void)dismissAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)hardLinksDidDelete:(id)arg0 ;
-(void)mailComposeController:(id)arg0 didFinishWithResult:(NSInteger)arg1 error:(id)arg2 ;
-(void)notifyDelegateDidDismiss;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)presentAttachmentViewController:(id)arg0 ;
-(void)presentAttachmentWithSelectedSubAttachment:(id)arg0 ;
-(void)presentGalleryAttachmentWithSelectedSubAttachment:(id)arg0 ;
-(void)presentMovie;
-(void)presentQuickLook;
-(void)presentReadOnlyAlertIfNecessaryForAttachment:(id)arg0 ;
-(void)presentSynapseLink;
-(void)presentURL;
-(void)previewController:(id)arg0 didSaveEditedCopyOfPreviewItem:(id)arg1 atURL:(id)arg2 ;
-(void)previewControllerDidChangeCurrentItem;
-(void)previewControllerDidDismiss:(id)arg0 ;
-(void)scrollCollectionViewToIndexPath:(id)arg0 ;
-(void)showInNote:(id)arg0 ;
-(void)updateQuickLookFilteredAttachments;


@end


#endif