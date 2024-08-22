// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDOCUMENTBROWSERVIEWCONTROLLER_H
#define UIDOCUMENTBROWSERVIEWCONTROLLER_H

@class UIViewController, UIView, NSURL, _UIRemoteViewController, UIPresentationController, NSArray, UIColor, DOCConfiguration, NSString, _UIResilientRemoteViewContainerViewController, NSOperationQueue;
@protocol DOCHostDocumentBrowserViewControllerInterface, DOCViewServiceErrorViewControllerDelegate, UIPresentationControllerDelegatePrivate, _UIRemoteViewControllerContaining, DOCRemoteViewControllerDelegate, DOCAppearanceCustomization, NSCoding, UIDocumentBrowserViewControllerDelegate, DOCServiceDocumentBrowserViewControllerInterface;


#import "DOCAppearance.h"
#import "DOCDocBrowserVC_UIActivityViewController.h"

@interface UIDocumentBrowserViewController : UIViewController <DOCHostDocumentBrowserViewControllerInterface, DOCViewServiceErrorViewControllerDelegate, UIPresentationControllerDelegatePrivate, _UIRemoteViewControllerContaining, DOCRemoteViewControllerDelegate, DOCAppearanceCustomization, NSCoding>

 {
    BOOL _isDisplayingRemoteViewController;
    UIView *_trackingViewsContainer;
    DOCAppearance *_appearance;
    NSURL *_urlCurrentlyBeingImported;
}


@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (weak, nonatomic) DOCDocBrowserVC_UIActivityViewController *activityViewController; // ivar: _activityViewController
@property (weak, nonatomic) UIPresentationController *adaptivePresentationController; // ivar: _adaptivePresentationController
@property (retain, nonatomic) NSArray *additionalLeadingNavigationBarButtonItems; // ivar: _additionalLeadingNavigationBarButtonItems
@property (retain, nonatomic) NSArray *additionalToolbarButtonItems;
@property (retain, nonatomic) NSArray *additionalTrailingNavigationBarButtonItems; // ivar: _additionalTrailingNavigationBarButtonItems
@property (readonly, copy, nonatomic) NSArray *allowedContentTypes;
@property (nonatomic) BOOL allowsDocumentCreation; // ivar: _allowsDocumentCreation
@property (nonatomic) BOOL allowsPickingMultipleItems; // ivar: _allowsPickingMultipleItems
@property (copy, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) UIColor *backgroundTintColor;
@property (copy, nonatomic) UIColor *badgeTintColor; // ivar: _badgeTintColor
@property (nonatomic) NSUInteger browserUserInterfaceStyle;
@property (retain, nonatomic) DOCConfiguration *configuration; // ivar: _configuration
@property (readonly, copy, nonatomic) NSArray *contentTypesForRecentDocuments;
@property (nonatomic) CGFloat createButtonAspectRatio;
@property (copy, nonatomic) UIColor *createButtonColor; // ivar: _createButtonColor
@property (copy, nonatomic) NSString *createButtonTitle;
@property (copy, nonatomic) NSArray *customActions; // ivar: _customActions
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat defaultDocumentAspectRatio;
@property (weak, nonatomic) NSObject<UIDocumentBrowserViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) DOCAppearance *effectiveAppearance;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) UIColor *inBrowserTintColor; // ivar: _inBrowserTintColor
@property (copy, nonatomic) UIColor *itemSubtitleColor; // ivar: _itemSubtitleColor
@property (copy, nonatomic) UIColor *itemTitleColor; // ivar: _itemTitleColor
@property (retain, nonatomic) NSArray *leadingBarButtonTrackingViews; // ivar: _leadingBarButtonTrackingViews
@property (copy, nonatomic) NSString *localizedCreateDocumentActionTitle;
@property (readonly, copy, nonatomic) NSArray *recentDocumentsContentTypes;
@property (retain, nonatomic) NSArray *remoteAdditionalLeadingNavigationBarButtonItems; // ivar: _remoteAdditionalLeadingNavigationBarButtonItems
@property (retain, nonatomic) NSArray *remoteAdditionalTrailingNavigationBarButtonItems; // ivar: _remoteAdditionalTrailingNavigationBarButtonItems
@property (retain, nonatomic) _UIResilientRemoteViewContainerViewController *remoteViewController; // ivar: _remoteViewController
@property (retain, nonatomic) NSObject<DOCServiceDocumentBrowserViewControllerInterface> *serviceProxy; // ivar: _serviceProxy
@property (retain, nonatomic) NSOperationQueue *serviceQueue; // ivar: _serviceQueue
@property (nonatomic) BOOL shouldDelayRemoteViewController; // ivar: _shouldDelayRemoteViewController
@property (nonatomic) BOOL shouldShowFileExtensions; // ivar: _shouldShowFileExtensions
@property (copy, nonatomic) UIColor *sortingBackgroundColor; // ivar: _sortingBackgroundColor
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *trailingBarButtonTrackingViews; // ivar: _trailingBarButtonTrackingViews


+(id)placeholderURLForDownloadsFolder;
-(BOOL)_delegateRespondsToSelector:(SEL)arg0 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)supportsRemovableFileProvidersForConfiguration:(id)arg0 ;
-(NSInteger)preferredStatusBarStyle;
-(id)_sandboxingURLWrapperForURL:(id)arg0 readonly:(BOOL)arg1 error:(*id)arg2 ;
-(id)_symbolicDownloadsURLWrapper;
-(id)configurationForOpeningDocumentsWithContentTypes:(id)arg0 ;
-(id)init;
-(id)initForOpeningContentTypes:(id)arg0 ;
-(id)initForOpeningFilesWithContentTypes:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)keyCommands;
-(id)remoteBarButtonForUUID:(id)arg0 ;
-(id)trackingViewForUUID:(id)arg0 ;
-(id)transitionControllerForDocumentAtURL:(id)arg0 ;
-(id)transitionControllerForDocumentURL:(id)arg0 ;
-(void)__commonInit;
-(void)_clearShownViewControllers;
-(void)_commitDocumentURLPreview:(id)arg0 ;
-(void)_didImportDocumentAtURL:(id)arg0 toDestinationItem:(id)arg1 ;
-(void)_didPickItems:(id)arg0 ;
-(void)_didRequestDocumentCreationWithHandler:(id)arg0 ;
-(void)_didTriggerBarButtonWithUUID:(id)arg0 ;
-(void)_didTriggerCustomActionWithIdentifier:(id)arg0 onItems:(id)arg1 ;
-(void)_displayActivityControllerWithItems:(id)arg0 popoverTracker:(id)arg1 isContentManaged:(BOOL)arg2 additionalActivities:(id)arg3 activityProxy:(id)arg4 ;
-(void)_displayRemoteControllerIfNeeded;
-(void)_embedDocumentBrowserViewController;
-(void)_embedViewController:(id)arg0 ;
-(void)_establishFirstResponderOnServiceSideForKeyCommand:(id)arg0 ;
-(void)_failedToImportDocumentAtURL:(id)arg0 error:(id)arg1 ;
-(void)_importDocumentAtURL:(id)arg0 neighbourURL:(id)arg1 mode:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)_presentActivityViewControllerForItems:(id)arg0 withPopoverTracker:(id)arg1 isContentManaged:(BOOL)arg2 additionalActivities:(id)arg3 activityProxy:(id)arg4 ;
-(void)_presentationController:(id)arg0 prepareAdaptivePresentationController:(id)arg1 ;
-(void)_renameDocumentAtURL:(id)arg0 newName:(id)arg1 completionBlock:(id)arg2 ;
-(void)_showDocumentBrowserViewController:(BOOL)arg0 ;
-(void)_showErrorViewController;
-(void)_updateRemoteBarButtonFrames:(id)arg0 forUUID:(id)arg1 ;
-(void)addOperationToServiceQueue:(id)arg0 ;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)clearCurrentOpenInteraction;
-(void)dealloc;
-(void)didTapTryAgainInErrorViewController:(id)arg0 ;
-(void)dismissAllPresentedViewControllers:(BOOL)arg0 completion:(id)arg1 ;
-(void)effectiveAppearanceDidChange:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)forwardHostSceneIdentifier:(id)arg0 ;
-(void)getTrackingViews:(*id)arg0 remoteButtons:(*id)arg1 fromBarButtons:(id)arg2 ;
-(void)importDocumentAtURL:(id)arg0 byMoving:(BOOL)arg1 toCurrentBrowserLocationWithCompletion:(id)arg2 ;
-(void)importDocumentAtURL:(id)arg0 mode:(NSUInteger)arg1 toCurrentBrowserLocationWithCompletion:(id)arg2 ;
-(void)importDocumentAtURL:(id)arg0 nextToDocumentAtURL:(id)arg1 mode:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)performKeyCommandNoOpOnHostSide:(id)arg0 ;
-(void)prepareItems:(id)arg0 forMode:(NSUInteger)arg1 usingBookmark:(BOOL)arg2 completionBlock:(id)arg3 ;
-(void)prepareItems:(id)arg0 usingBookmark:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)remoteViewController:(id)arg0 didTerminateViewServiceWithError:(id)arg1 ;
-(void)revealDocumentAtURL:(id)arg0 importIfNeeded:(BOOL)arg1 completion:(id)arg2 ;
-(void)revealDocumentAtURL:(id)arg0 shouldImport:(BOOL)arg1 completion:(id)arg2 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setshouldShowFileExtensions:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateBackgroundColor;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif