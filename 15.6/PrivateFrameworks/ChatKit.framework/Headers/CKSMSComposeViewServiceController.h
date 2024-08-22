// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSMSCOMPOSEVIEWSERVICECONTROLLER_H
#define CKSMSCOMPOSEVIEWSERVICECONTROLLER_H

@class UINavigationController, NSArray, NSString;
@protocol CKComposeChatControllerDelegate, CKSMSComposeViewServiceProtocol, CKSMSComposeViewServiceControllerDelegate;


#import "CKModalTranscriptController.h"

@interface CKSMSComposeViewServiceController : UINavigationController <CKComposeChatControllerDelegate, CKSMSComposeViewServiceProtocol>

 {
    BOOL _canEditRecipients;
    BOOL _shouldDisableEntryField;
    BOOL _supportsAttachments;
    BOOL _supportsMessageInspection;
    BOOL _forceMMS;
    BOOL _disableCameraAttachments;
    NSArray *_utiTypes;
    NSArray *_contentURLs;
    NSArray *_photoIDs;
    NSArray *_cloudPhotoIDs;
    NSArray *_contentText;
    NSString *_shareSheetSessionID;
}


@property (nonatomic) BOOL canEditRecipients;
@property (weak, nonatomic) NSObject<CKSMSComposeViewServiceControllerDelegate> *composeDelegate; // ivar: _composeDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *entryViewCompletion; // ivar: _entryViewCompletion
@property (copy, nonatomic) id *gameCenterPickerBlock; // ivar: _gameCenterPickerBlock
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CKModalTranscriptController *modalTranscriptController; // ivar: _modalTranscriptController
@property (nonatomic) BOOL shouldDisableEntryField;
@property (nonatomic) BOOL shouldHideClearPluginButton; // ivar: _shouldHideClearPluginButton
@property (readonly) Class superclass;


+(BOOL)_isSecureForRemoteViewService;
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(BOOL)_canShowWhileLocked;
-(BOOL)_hostSandboxAllowsFileReadAtFileURL:(id)arg0 ;
-(BOOL)composeChatControllerCanEditRecipients;
-(BOOL)composeChatControllerShouldShowBackButtonViewDuringSendAnimation:(id)arg0 ;
-(BOOL)supportsAttachments;
-(BOOL)supportsMessageInspection;
-(id)init;
-(id)recipientsFromChatGUID:(id)arg0 groupName:(id)arg1 handles:(id)arg2 ;
-(void)_forceMMSIfNecessary;
-(void)_insertAttachmentWithURL:(id)arg0 andDescription:(id)arg1 preview:(id)arg2 isFullyRealized:(BOOL)arg3 appendedVideoURL:(id)arg4 appendedBundleURL:(id)arg5 completion:(id)arg6 ;
-(void)_insertFileURL:(id)arg0 filename:(id)arg1 transcoderUserInfo:(id)arg2 preview:(id)arg3 isFullyRealized:(BOOL)arg4 appendedVideoURL:(id)arg5 completion:(id)arg6 ;
-(void)_willAppearInRemoteViewController;
-(void)chatController:(id)arg0 didReportSpamForConversation:(id)arg1 ;
-(void)chatController:(id)arg0 didSendCompositionInConversation:(id)arg1 ;
-(void)chatController:(id)arg0 forwardComposition:(id)arg1 ;
-(void)chatController:(id)arg0 willSendComposition:(id)arg1 inConversation:(id)arg2 ;
-(void)composeChatController:(id)arg0 didLoadEntryViewContentWithCompletion:(id)arg1 ;
-(void)composeChatController:(id)arg0 didSelectNewConversation:(id)arg1 ;
-(void)composeChatController:(id)arg0 shouldSendComposition:(id)arg1 inConversation:(id)arg2 completion:(id)arg3 ;
-(void)composeChatControllerDidCancelComposition:(id)arg0 ;
-(void)dealloc;
-(void)disableCameraAttachments;
-(void)donateInteractionWithConversation:(id)arg0 ;
-(void)forceCancelComposition;
-(void)forceMMS;
-(void)hideEntryViewContent:(BOOL)arg0 ;
-(void)insertAttachmentWithURL:(id)arg0 andDescription:(id)arg1 ;
-(void)insertData:(id)arg0 MIMEType:(id)arg1 exportedFilename:(id)arg2 ;
-(void)insertFileURL:(id)arg0 filename:(id)arg1 transcoderUserInfo:(id)arg2 ;
-(void)insertFilename:(id)arg0 MIMEType:(id)arg1 exportedFilename:(id)arg2 options:(id)arg3 ;
-(void)insertRemoteItemForSending:(id)arg0 ;
-(void)insertRemoteItemForSendingAndCalculateEntryViewFrame:(id)arg0 completion:(id)arg1 ;
-(void)prewarmCameraIfNecessaryForChatController:(id)arg0 ;
-(void)setCloudPhotoIDs:(id)arg0 ;
-(void)setContentText:(id)arg0 ;
-(void)setContentURLs:(id)arg0 ;
-(void)setGameCenterModeWithPickerBlock:(id)arg0 ;
-(void)setGameCenterPickedHandles:(id)arg0 playerNames:(id)arg1 ;
-(void)setNavBarTitle:(id)arg0 ;
-(void)setPendingAddresses:(id)arg0 ;
-(void)setPhotoIDs:(id)arg0 ;
-(void)setShareSheetSessionID:(id)arg0 ;
-(void)setShouldIgnoreEmailsWhenSending:(BOOL)arg0 ;
-(void)setText:(id)arg0 subject:(id)arg1 addresses:(id)arg2 ;
-(void)setText:(id)arg0 subject:(id)arg1 addresses:(id)arg2 chatGUID:(id)arg3 groupName:(id)arg4 ;
-(void)setText:(id)arg0 subject:(id)arg1 addresses:(id)arg2 shouldHideClearPluginButton:(BOOL)arg3 ;
-(void)setText:(id)arg0 subject:(id)arg1 addresses:(id)arg2 shouldHideClearPluginButton:(BOOL)arg3 chatGUID:(id)arg4 ;
-(void)setTextEntryContentsVisible:(BOOL)arg0 ;
-(void)setUICustomizationData:(id)arg0 ;
-(void)setUTIs:(id)arg0 ;
-(void)showInsertedItemInEntryView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif