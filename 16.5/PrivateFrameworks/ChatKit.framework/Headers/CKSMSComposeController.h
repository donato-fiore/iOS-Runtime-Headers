// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSMSCOMPOSECONTROLLER_H
#define CKSMSCOMPOSECONTROLLER_H

@class UIViewController, _UIAsyncInvocation, UINavigationController, NSString;
@protocol CKSMSCompose, CKSMSComposeRemoteViewControllerDelegate;


#import "CKSMSComposeRemoteViewController.h"
#import "CKSMSComposeQueuingRemoteViewControllerProxy.h"

@interface CKSMSComposeController : UIViewController <CKSMSCompose, CKSMSComposeRemoteViewControllerDelegate>



@property (retain, nonatomic) _UIAsyncInvocation *cancellationInvocation; // ivar: _cancellationInvocation
@property (retain, nonatomic) UINavigationController *clientNavigationController; // ivar: _clientNavigationController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didChangeStatusBarStyle; // ivar: _didChangeStatusBarStyle
@property (nonatomic) BOOL firstItemWasInserted; // ivar: _firstItemWasInserted
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CKSMSComposeRemoteViewController *remoteViewController; // ivar: _remoteViewController
@property (retain, nonatomic) CKSMSComposeQueuingRemoteViewControllerProxy *remoteViewControllerProxy; // ivar: _remoteViewControllerProxy
@property (nonatomic) BOOL safeToAdd; // ivar: _safeToAdd
@property (nonatomic) NSInteger savedStatusBarStyle; // ivar: _savedStatusBarStyle
@property (readonly) Class superclass;


+(BOOL)acceptsMIMEType:(id)arg0 ;
+(BOOL)canSendPhotos:(int)arg0 videos:(int)arg1 audioClips:(int)arg2 ;
+(CGFloat)maxTrimDurationForAudio;
+(CGFloat)maxTrimDurationForVideo;
-(BOOL)_canShowWhileLocked;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(BOOL)canInsertMessage;
-(BOOL)insertAttachmentWithURL:(id)arg0 andDescription:(id)arg1 ;
-(BOOL)insertCKShareForCollaboration:(id)arg0 containerSetupInfo:(id)arg1 collaborationShareOptions:(id)arg2 isCollaboration:(BOOL)arg3 ;
-(BOOL)insertCKShareForCollaboration:(id)arg0 containerSetupInfo:(id)arg1 collaborationShareOptions:(id)arg2 isCollaboration:(BOOL)arg3 completionHandler:(id)arg4 ;
-(BOOL)insertData:(id)arg0 MIMEType:(id)arg1 exportedFilename:(id)arg2 ;
-(BOOL)insertFileURLForCollaboration:(id)arg0 collaborationShareOptions:(id)arg1 metadata:(id)arg2 isCollaboration:(BOOL)arg3 ;
-(BOOL)insertFileURLForCollaboration:(id)arg0 collaborationShareOptions:(id)arg1 metadata:(id)arg2 sendAsCopyURL:(id)arg3 isCollaboration:(BOOL)arg4 ;
-(BOOL)insertFileURLForCollaboration:(id)arg0 collaborationShareOptions:(id)arg1 metadata:(id)arg2 sendAsCopyURL:(id)arg3 isCollaboration:(BOOL)arg4 completionHandler:(id)arg5 ;
-(BOOL)insertFilename:(id)arg0 MIMEType:(id)arg1 exportedFilename:(id)arg2 options:(id)arg3 ;
-(BOOL)insertGroupActivity:(id)arg0 ;
-(BOOL)insertMessage:(id)arg0 ;
-(BOOL)insertRichLinkWithURL:(id)arg0 andData:(id)arg1 ;
-(BOOL)insertSWYPendingCollaboration:(id)arg0 collaborationShareOptions:(id)arg1 collaborationMetadata:(id)arg2 ;
-(BOOL)insertSWYPendingCollaboration:(id)arg0 collaborationShareOptions:(id)arg1 collaborationMetadata:(id)arg2 completionHandler:(id)arg3 ;
-(BOOL)insertSWYPendingCollaboration:(id)arg0 collaborationShareOptions:(id)arg1 collaborationMetadata:(id)arg2 sendAsCopyURL:(id)arg3 isCollaboration:(BOOL)arg4 completionHandler:(id)arg5 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(id)init;
-(id)initWithNavigationController:(id)arg0 ;
-(void)_addRemoteVCIfNeeded;
-(void)dealloc;
-(void)disableCameraAttachments;
-(void)forceCancelComposition;
-(void)forceMMS;
-(void)insertItemForSendingAndCalculateEntryViewFrame:(id)arg0 withAlternateFilename:(id)arg1 completion:(id)arg2 ;
-(void)setCanEditRecipients:(BOOL)arg0 ;
-(void)setCloudPhotoIDs:(id)arg0 ;
-(void)setContentText:(id)arg0 ;
-(void)setContentURLs:(id)arg0 ;
-(void)setGameCenterModeWithPickerBlock:(id)arg0 ;
-(void)setGameCenterPickedHandles:(id)arg0 playerNames:(id)arg1 ;
-(void)setNavBarTitle:(id)arg0 ;
-(void)setPendingAddresses:(id)arg0 ;
-(void)setPhotoIDs:(id)arg0 ;
-(void)setShareSheetSessionID:(id)arg0 ;
-(void)setShouldDisableEntryField:(BOOL)arg0 ;
-(void)setShouldIgnoreEmailsWhenSending:(BOOL)arg0 ;
-(void)setText:(id)arg0 subject:(id)arg1 addresses:(id)arg2 ;
-(void)setText:(id)arg0 subject:(id)arg1 addresses:(id)arg2 chatGUID:(id)arg3 groupName:(id)arg4 ;
-(void)setText:(id)arg0 subject:(id)arg1 addresses:(id)arg2 shouldHideClearPluginButton:(BOOL)arg3 ;
-(void)setText:(id)arg0 subject:(id)arg1 addresses:(id)arg2 shouldHideClearPluginButton:(BOOL)arg3 chatGUID:(id)arg4 ;
-(void)setTextEntryContentsVisible:(BOOL)arg0 ;
-(void)setUICustomizationData:(id)arg0 ;
-(void)setUTIs:(id)arg0 ;
-(void)showInsertedItemInEntryView;
-(void)smsComposeControllerAppeared;
-(void)smsComposeControllerCancelled;
-(void)smsComposeControllerDataInserted;
-(void)smsComposeControllerEntryViewContentInserted;
-(void)smsComposeControllerSendStartedWithText:(id)arg0 ;
-(void)smsComposeControllerShouldSendMessageWithText:(id)arg0 toRecipients:(id)arg1 completion:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif