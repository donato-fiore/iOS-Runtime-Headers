// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDOCUMENTINTERACTIONCONTROLLER_H
#define UIDOCUMENTINTERACTIONCONTROLLER_H

@class NSArray, QLPreviewController, UIViewController, UIView, UIBarButtonItem, NSURL, NSString, UIPopoverController;
@protocol QLPreviewControllerDelegate, _UIDICActivityViewControllerDelegate, LSOpenResourceOperationDelegate, UIActionSheetDelegate, UIDocumentInteractionControllerDelegate;

#import <Foundation/Foundation.h>

#import "_UIDICActivityViewController.h"
#import "_UIDICPreviewItem.h"

@interface UIDocumentInteractionController : NSObject <QLPreviewControllerDelegate, _UIDICActivityViewControllerDelegate, LSOpenResourceOperationDelegate, UIActionSheetDelegate>

 {
    NSArray *_gestureRecognizers;
    NSArray *_icons;
    QLPreviewController *_previewController;
    UIViewController *_presentingViewController;
    CGRect _presentRect;
    UIView *_presentView;
    UIBarButtonItem *_presentItem;
    NSURL *_tmpURLToDeleteOnDealloc;
    NSURL *_decompressedArchiveDocumentURL;
    BOOL _shouldDecompressArchiveIfNecessary;
    ? _documentInteractionControllerFlags;
}


@property (retain) NSURL *URL;
@property (copy, nonatomic) NSString *UTI;
@property (copy, nonatomic, getter=_completionWithItemsHandler, setter=_setCompletionWithItemsHandler:) id *_completionWithItemsHandler; // ivar: _completionWithItemsHandler
@property (copy, nonatomic, getter=_customExtactionRootURL, setter=_setCustomExtactionRootURL:) NSURL *_customExtactionRootURL; // ivar: __customExtactionRootURL
@property (retain, nonatomic) _UIDICActivityViewController *activityViewController; // ivar: _activityViewController
@property (retain, nonatomic) id *annotation; // ivar: _annotation
@property (readonly, nonatomic, getter=isArchive) BOOL archive;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIDocumentInteractionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL excludeDotFilesFromArchiveListings; // ivar: _excludeDotFilesFromArchiveListings
@property (readonly, nonatomic) NSArray *gestureRecognizers;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *icons;
@property (nonatomic) BOOL isContentManaged; // ivar: _isContentManaged
@property (copy) NSString *name;
@property (retain, nonatomic) UIPopoverController *popoverController; // ivar: _popoverController
@property (readonly, nonatomic) QLPreviewController *previewController;
@property (readonly, nonatomic) _UIDICPreviewItem *previewControllerItem; // ivar: _previewControllerItem
@property (nonatomic) BOOL previewsPresentWithMarkup; // ivar: _previewsPresentWithMarkup
@property (nonatomic) BOOL shouldUnzipDocument;
@property (nonatomic) BOOL sourceIsManaged;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(id)_UTIForFileURL:(id)arg0 ;
+(id)_archiveDecompressQueue;
+(id)interactionControllerWithURL:(id)arg0 ;
-(BOOL)__presentPreviewAnimated:(BOOL)arg0 ;
-(BOOL)_canPreviewDecompressedArchive;
-(BOOL)_canSaveToCameraRollForType;
-(BOOL)_delegateCanPerformAction:(SEL)arg0 ;
-(BOOL)_delegateExistsAndImplementsRequiredMethods:(*id)arg0 ;
-(BOOL)_delegatePerformAction:(SEL)arg0 ;
-(BOOL)_documentNeedsHelpDecompressingArchiveForPreview;
-(BOOL)_isFilenameValidForDecompressing:(id)arg0 allowsPreviewingArchive:(BOOL)arg1 ;
-(BOOL)_isImage;
-(BOOL)_isPackageArchive:(id)arg0 ;
-(BOOL)_isValidURL:(id)arg0 ;
-(BOOL)_presentOpenInMenuAnimated:(BOOL)arg0 willPresentBlock:(id)arg1 ;
-(BOOL)_presentOptionsMenuAnimated:(BOOL)arg0 willPresentBlock:(id)arg1 ;
-(BOOL)_setupForOpenInMenu;
-(BOOL)_setupForOptionsMenu;
-(BOOL)_setupPreviewController;
-(BOOL)_shouldAutoDecompressIfArchive;
-(BOOL)_shouldAutoDecompressIfArchiveForPreview;
-(BOOL)_shouldIncludeActivityForLegacyDelegatingWithAction:(SEL)arg0 ;
-(BOOL)_shouldIncludePreviewActivity;
-(BOOL)_shouldReturnDefaultApplication;
-(BOOL)presentOpenInMenuFromBarButtonItem:(id)arg0 animated:(BOOL)arg1 ;
-(BOOL)presentOpenInMenuFromRect:(struct CGRect )arg0 inView:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)presentOptionsMenuFromBarButtonItem:(id)arg0 animated:(BOOL)arg1 ;
-(BOOL)presentOptionsMenuFromRect:(struct CGRect )arg0 inView:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)presentPreviewAnimated:(BOOL)arg0 ;
-(BOOL)previewController:(id)arg0 canEditItem:(id)arg1 ;
-(BOOL)previewController:(id)arg0 shouldSaveEditedItem:(id)arg1 ;
-(NSInteger)numberOfPreviewItemsInPreviewController:(id)arg0 ;
-(NSUInteger)_archiveExtractionOptions;
-(id)__decompressArchiveAndSetupPayload:(id)arg0 completion:(id)arg1 ;
-(id)_appOpeningDocumentProxy;
-(id)_defaultApplication;
-(id)_documentProxy;
-(id)_documentProxyWithIsContentManaged:(BOOL)arg0 usingURL:(id)arg1 ;
-(id)_newActivityIfNecessaryForLegacyActionDelegatingWithAction:(SEL)arg0 ;
-(id)_newPreviewActivity;
-(id)_pathsInArchive:(id)arg0 ;
-(id)_preferredApplicationForDocumentOpening;
-(id)_preparedActivityViewControllerWithItems:(id)arg0 activities:(id)arg1 options:(NSUInteger)arg2 ;
-(id)activityViewController:(id)arg0 mailSubjectForActivityType:(id)arg1 ;
-(id)additionalActivitiesTypesForPreviewController:(id)arg0 ;
-(id)dismissActionsForPreviewController:(id)arg0 ;
-(id)excludedActivityTypesForPreviewController:(id)arg0 ;
-(id)extractSubitemFromArchive:(id)arg0 completion:(id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)presentingNavigationController;
-(id)previewController:(id)arg0 previewItemAtIndex:(NSInteger)arg1 ;
-(id)previewController:(id)arg0 transitionImageForPreviewItem:(id)arg1 contentRect:(struct CGRect *)arg2 ;
-(id)subitemsInArchive:(id)arg0 ;
-(struct CGRect )previewController:(id)arg0 frameForPreviewItem:(id)arg1 inSourceView:(*id)arg2 ;
-(void)__openUsingDefaultCopyMechanismToTransferDocumentToApplication:(id)arg0 ;
-(void)__openUsingInPlaceMechanismToTransferDocumentToApplication:(id)arg0 ;
-(void)__performLaunchServiceDocumentOpenWithApplication:(id)arg0 launchServiceOptions:(id)arg1 ;
-(void)_clearPreviousPresentationContext;
-(void)_decompressArchiveAndSetupPayload:(id)arg0 ;
-(void)_dismissEverythingWithExtremePrejudiceAnimated:(BOOL)arg0 ;
-(void)_fixupFileExtensionIfNeeded;
-(void)_invalidate;
-(void)_invokeDelegateDidFinishOpenWithApplicationIdentifier:(id)arg0 ;
-(void)_invokeDelegateWillBeginOpenWithApplicationIdentifier:(id)arg0 ;
-(void)_openDocumentWithApplication:(id)arg0 ;
-(void)_presentOptionsMenu:(id)arg0 ;
-(void)_presentPreview:(id)arg0 ;
-(void)_setDecompressedArchiveDocumentURL:(id)arg0 ;
-(void)activityViewController:(id)arg0 didFinishPerformingActivityType:(id)arg1 completed:(BOOL)arg2 items:(id)arg3 error:(id)arg4 ;
-(void)activityViewController:(id)arg0 didFinishPresentingActivityType:(id)arg1 ;
-(void)activityViewController:(id)arg0 openActivityDidEndSendingToApplication:(id)arg1 ;
-(void)activityViewController:(id)arg0 openActivityWillBeginSendingToApplication:(id)arg1 ;
-(void)dealloc;
-(void)dismissMenuAnimated:(BOOL)arg0 ;
-(void)dismissPreviewAnimated:(BOOL)arg0 ;
-(void)markupAction:(id)arg0 ;
-(void)openDocumentWithDefaultApplication;
-(void)openResourceOperation:(id)arg0 didFinishCopyingResource:(id)arg1 ;
-(void)popoverController:(id)arg0 animationCompleted:(NSInteger)arg1 ;
-(void)previewController:(id)arg0 updatedContentsURL:(id)arg1 forEditedItem:(id)arg2 ;
-(void)previewControllerDidDismiss:(id)arg0 ;
-(void)setPreviewURLOverride:(id)arg0 ;


@end


#endif