// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDOCUMENTPICKERVIEWCONTROLLER_H
#define UIDOCUMENTPICKERVIEWCONTROLLER_H

@class NSMutableArray, DOCConfiguration, NSString, NSURL, NSArray;
@protocol UIDocumentBrowserViewControllerPrivateDelegate, _UIRemoteViewControllerContaining, UIAdaptivePresentationControllerDelegate, UIDocumentPickerDelegate;


#import "UIViewController.h"
#import "_UIRemoteViewController.h"

@interface UIDocumentPickerViewController : UIViewController <UIDocumentBrowserViewControllerPrivateDelegate, _UIRemoteViewControllerContaining, UIAdaptivePresentationControllerDelegate>

 {
    id<UIDocumentPickerDelegate> *_weak_delegate;
}


@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (nonatomic, getter=_ignoreApplicationEntitlementForImport, setter=_setIgnoreApplicationEntitlementForImport:) BOOL _ignoreApplicationEntitlementForImport; // ivar: _ignoreApplicationEntitlementForImport
@property (nonatomic, getter=_ignoreApplicationEntitlementForImport, setter=_setIgnoreApplicationEntitlementForImport:) BOOL _ignoreApplicationEntitlementForImport;
@property (retain, nonatomic) NSMutableArray *_securityScopedURLs; // ivar: _securityScopedURLs
@property (nonatomic) BOOL allowsMultipleSelection; // ivar: _allowsMultipleSelection
@property (nonatomic, getter=_automaticallyDismissesAfterCompletion, setter=_setAutomaticallyDismissesAfterCompletion:) BOOL automaticallyDismissesAfterCompletion; // ivar: _automaticallyDismissesAfterCompletion
@property (nonatomic, getter=_automaticallyDismissesAfterCompletion, setter=_setAutomaticallyDismissesAfterCompletion:) BOOL automaticallyDismissesAfterCompletion;
@property (retain, nonatomic, getter=_childViewController, setter=_setChildViewController:) UIViewController *childViewController; // ivar: _childViewController
@property (retain, nonatomic) DOCConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIDocumentPickerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSURL *directoryURL; // ivar: _directoryURL
@property (nonatomic) NSUInteger documentPickerMode; // ivar: _documentPickerMode
@property (copy, nonatomic) NSArray *documentTypes; // ivar: _documentTypes
@property (nonatomic, getter=_forPickingDownloadsFolder, setter=_setForPickingDownloadsFolder:) BOOL forPickingDownloadsFolder;
@property (nonatomic, getter=_forPickingDownloadsFolder, setter=_setForPickingDownloadsFolder:) BOOL forPickingDownloadsFolder;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=_isContentManaged, setter=_setIsContentManaged:) BOOL isContentManaged; // ivar: _isContentManaged
@property (nonatomic, getter=_isContentManaged, setter=_setIsContentManaged:) BOOL isContentManaged;
@property (nonatomic) NSUInteger pickerUserInterfaceStyle;
@property (nonatomic) NSUInteger pickerUserInterfaceStyle;
@property (nonatomic) BOOL shouldShowFileExtensions;
@property (nonatomic, getter=_sourceIsManaged, setter=_setSourceIsManaged:) BOOL sourceIsManaged;
@property (nonatomic, getter=_sourceIsManaged, setter=_setSourceIsManaged:) BOOL sourceIsManaged;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *uploadURLs; // ivar: _uploadURLs


-(NSInteger)_preferredModalPresentationStyle;
-(id)_initForImportingDocumentsWithConversionRules:(id)arg0 ;
-(id)_initIgnoringApplicationEntitlementForImportOfTypes:(id)arg0 ;
-(id)initForExportingURLs:(id)arg0 ;
-(id)initForExportingURLs:(id)arg0 asCopy:(BOOL)arg1 ;
-(id)initForOpeningContentTypes:(id)arg0 ;
-(id)initForOpeningContentTypes:(id)arg0 asCopy:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDocumentTypes:(id)arg0 inMode:(NSUInteger)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithURL:(id)arg0 inMode:(NSUInteger)arg1 ;
-(id)initWithURLs:(id)arg0 inMode:(NSUInteger)arg1 ;
-(void)_callDelegateWithSelectedURLsAndDismiss:(id)arg0 ;
-(void)_consumeSandboxExtensionForURL:(id)arg0 ;
-(void)_didTapCancel;
-(void)_tellDelegateDocumentPickerWasCancelled;
-(void)dealloc;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)documentBrowser:(id)arg0 didPickDocumentURLs:(id)arg1 ;
-(void)documentManagerWasCancelled:(id)arg0 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif