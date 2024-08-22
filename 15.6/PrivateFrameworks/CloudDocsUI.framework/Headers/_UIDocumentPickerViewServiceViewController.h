// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDOCUMENTPICKERVIEWSERVICEVIEWCONTROLLER_H
#define _UIDOCUMENTPICKERVIEWSERVICEVIEWCONTROLLER_H

@class UIViewServiceViewController, NSArray, UIViewController, NSString, NSURL;
@protocol _UIDocumentPickerRemoteViewControllerContaining, _UIDocumentPickerOverviewDelegate, _UIDocumentListControllerDelegate, _UIDocumentTargetSelectionControllerDelegate, _UIDocumentPickerViewController, _UIDocumentPickerViewControllerHost;



@interface _UIDocumentPickerViewServiceViewController : UIViewServiceViewController <_UIDocumentPickerRemoteViewControllerContaining, _UIDocumentPickerOverviewDelegate, _UIDocumentListControllerDelegate, _UIDocumentTargetSelectionControllerDelegate, _UIDocumentPickerViewController>



@property (retain, nonatomic, setter=_setAuxiliaryOptions:) NSArray *auxiliaryOptions; // ivar: _auxiliaryOptions
@property (retain, nonatomic) UIViewController *currentPicker; // ivar: _currentPicker
@property (retain, nonatomic) NSString *currentPickerIdentifier; // ivar: _currentPickerIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displayedAsMenu; // ivar: _displayedAsMenu
@property (nonatomic) BOOL hasBeenDismissed; // ivar: _hasBeenDismissed
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<_UIDocumentPickerViewControllerHost> *hostingViewController;
@property (copy, nonatomic, setter=_setPickableTypes:) NSArray *pickableTypes; // ivar: _pickableTypes
@property (nonatomic, setter=_setPickerMode:) NSUInteger pickerMode; // ivar: _pickerMode
@property (nonatomic) BOOL showingSpinner; // ivar: _showingSpinner
@property (nonatomic) int sortOrder; // ivar: _sortOrder
@property (readonly) Class superclass;
@property (copy, nonatomic, setter=_setUploadURL:) NSURL *uploadURL; // ivar: _uploadURL


+(id)_exportedInterface;
+(id)_logicalURLForPhysicalURL:(id)arg0 ;
+(id)_remoteViewControllerInterface;
+(id)_urlByResolvingExternalDocumentReferenceForURL:(id)arg0 ;
-(BOOL)_shouldWarnForSharing;
-(id)_mangledFilenameForURL:(id)arg0 ;
-(struct CGSize )_updatedContentSizeForPreferredContentSize:(struct CGSize )arg0 ;
-(void)_cloudEnabledStatusDidChange:(id)arg0 ;
-(void)_createBookmarkAndDismissWithCloudURL:(id)arg0 ;
-(void)_didInstantiateThirdPartyPickerWithDescription:(id)arg0 placeholder:(id)arg1 ;
-(void)_didSelectPicker;
-(void)_didSelectURL:(id)arg0 ;
-(void)_dismissViewController;
-(void)_dismissWithFileProviderURL:(id)arg0 bundleIdentifier:(id)arg1 ;
-(void)_dismissWithImportURL:(id)arg0 ;
-(void)_dismissWithOption:(id)arg0 ;
-(void)_displayLocationsMenuFromRect:(struct CGRect )arg0 ;
-(void)_documentPickerDidDismiss;
-(void)_doneButton:(id)arg0 ;
-(void)_invalidatePicker:(id)arg0 ;
-(void)_prepareForDisplayWithCompletion:(id)arg0 ;
-(void)_presentError:(id)arg0 forThirdPartyPickerWithDescription:(id)arg1 ;
-(void)_setIsContentManaged:(BOOL)arg0 ;
-(void)_setSourceIsManaged:(BOOL)arg0 ;
-(void)_setTintColor:(id)arg0 ;
-(void)_setUploadURLWrapper:(id)arg0 ;
-(void)_showDefaultPicker;
-(void)_showExistsAlertForFile:(id)arg0 withSourceURL:(id)arg1 ;
-(void)_showLocationPopup:(id)arg0 ;
-(void)_showLocationPopupFromBarButtonItem:(id)arg0 rect:(struct CGRect )arg1 ;
-(void)_showPicker:(id)arg0 ;
-(void)_showTopLevelViewController;
-(void)_stitchFileCreationAtURL:(id)arg0 ;
-(void)_tryExportingFile:(id)arg0 toLocation:(id)arg1 ;
-(void)_updateDefaultPicker;
-(void)_waitForDownloadOfURL:(id)arg0 completion:(id)arg1 ;
-(void)_warnSharingForTarget:(id)arg0 completion:(id)arg1 ;
-(void)_warnSharingPreMove;
-(void)_willAppearInRemoteViewController;
-(void)dealloc;
-(void)dismissWithURL:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)documentListController:(id)arg0 didSelectContainerWithViewController:(id)arg1 ;
-(void)documentListController:(id)arg0 didSelectItemAtURL:(id)arg1 ;
-(void)documentListController:(id)arg0 performAction:(NSInteger)arg1 URL:(id)arg2 originatingView:(id)arg3 completion:(id)arg4 ;
-(void)documentTargetSelectionController:(id)arg0 didSelectItemAtURL:(id)arg1 ;
-(void)overviewController:(id)arg0 selectedAuxiliaryOptionWithIdentifier:(id)arg1 ;
-(void)overviewController:(id)arg0 selectedDocumentPickerWithIdentifier:(id)arg1 ;
-(void)pickLocationForUpload:(id)arg0 ;
-(void)setNavigationItemSpinner:(BOOL)arg0 ;
-(void)setupNavigationItemForPicker:(id)arg0 isRoot:(BOOL)arg1 ;


@end


#endif