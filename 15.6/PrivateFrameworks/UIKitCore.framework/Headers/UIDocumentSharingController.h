// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIDOCUMENTSHARINGCONTROLLER_H
#define UIDOCUMENTSHARINGCONTROLLER_H

@class NSString;
@protocol UIActionSheetPresentationControllerDelegate, _UIRemoteViewControllerContaining, _UISharingPublicController, _UIDocumentSharingControllerDelegate_Private;


#import "UIViewController.h"
#import "_UIRemoteViewController.h"
#import "_UIResilientRemoteViewContainerViewController.h"
#import "_UIShareInvitationRemoteViewController.h"
#import "UIImage.h"

@interface UIDocumentSharingController : UIViewController <UIActionSheetPresentationControllerDelegate, _UIRemoteViewControllerContaining, _UISharingPublicController>



@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (weak, nonatomic, getter=_privateDelegate, setter=_setPrivateDelegate:) NSObject<_UIDocumentSharingControllerDelegate_Private> *_privateDelegate; // ivar: __privateDelegate
@property (copy, nonatomic, getter=_appName, setter=_setAppName:) NSString *appName; // ivar: _appName
@property (copy, nonatomic, getter=_auxiliaryActionTitle, setter=_setAuxiliaryActionTitle:) NSString *auxiliaryActionTitle; // ivar: _auxiliaryActionTitle
@property (retain, nonatomic, getter=_childViewController, setter=_setChildViewController:) _UIResilientRemoteViewContainerViewController *childViewController; // ivar: _childViewController
@property (nonatomic, getter=_collaborationUIEnabled, setter=_setCollaborationUIEnabled:) BOOL collaborationUIEnabled; // ivar: _collaborationUIEnabled
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic, getter=_headerActionTitle, setter=_setHeaderActionTitle:) NSString *headerActionTitle; // ivar: _headerActionTitle
@property (copy, nonatomic, getter=_headerSubtitle, setter=_setHeaderSubtitle:) NSString *headerSubtitle; // ivar: _headerSubtitle
@property (copy, nonatomic, getter=_initialHeaderSubtitle, setter=_setInitialHeaderSubtitle:) NSString *initialHeaderSubtitle; // ivar: _initialHeaderSubtitle
@property (nonatomic, getter=_legacyAppearance, setter=_setLegacyAppearance:) BOOL legacyAppearance; // ivar: _legacyAppearance
@property (copy, nonatomic, getter=_mailSubject, setter=_setMailSubject:) NSString *mailSubject; // ivar: _mailSubject
@property (copy, nonatomic, getter=_mailTemplate, setter=_setMailTemplate:) NSString *mailTemplate; // ivar: _mailTemplate
@property (copy, nonatomic, getter=_messageTemplate, setter=_setMessageTemplate:) NSString *messageTemplate; // ivar: _messageTemplate
@property (weak, nonatomic, getter=_originalPresentingViewController, setter=_setOriginalPresentingViewController:) UIViewController *originalPresentingViewController; // ivar: _originalPresentingViewController
@property (readonly, nonatomic, getter=_remoteViewController) _UIShareInvitationRemoteViewController *remoteViewController;
@property (nonatomic, getter=_showOnlyAddPeople, setter=_setShowOnlyAddPeople:) BOOL showOnlyAddPeople; // ivar: _showOnlyAddPeople
@property (nonatomic, getter=_showRootFolder, setter=_setShowRootFolder:) BOOL showRootFolder; // ivar: _showRootFolder
@property (retain, nonatomic, getter=_strongReferenceToOurself, setter=_setStrongReferenceToOurself:) UIViewController *strongReferenceToOurself; // ivar: _strongReferenceToOurself
@property (readonly) Class superclass;
@property (copy, nonatomic, getter=_thumbnail, setter=_setThumbnail:) UIImage *thumbnail; // ivar: _thumbnail


-(BOOL)_requiresCustomPresentationController;
-(id)_customPresentationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)_sharingViewPresentationController;
-(id)initWithFileURL:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 error:(*id)arg1 ;
-(void)_cloudSharingControllerDidActivateShowSharedFolder;
-(void)_cloudSharingControllerDidChooseTransport:(id)arg0 ;
-(void)_cloudSharingControllerDidModifyPrimarySwitch:(BOOL)arg0 ;
-(void)_cloudSharingControllerDidModifySecondarySwitch:(BOOL)arg0 ;
-(void)_didDismiss;
-(void)_dismissForActivityRepresentation:(id)arg0 ;
-(void)_dismissViewControllerWithError:(id)arg0 ;
-(void)_performAuxiliaryActionWithCompletion:(id)arg0 ;
-(void)_performHeaderActionWithCompletion:(id)arg0 ;
-(void)_presentationControllerDidDismiss:(id)arg0 ;
-(void)_representFullscreenAfterActivityDismissal:(id)arg0 ;
-(void)_requestSavedShareWithCompletion:(id)arg0 ;
-(void)_shareDidChange:(id)arg0 ;
-(void)_shareWasMadePrivate;
-(void)_updatePresentationStyleForLegacyAppearance;
-(void)dealloc;


@end


#endif