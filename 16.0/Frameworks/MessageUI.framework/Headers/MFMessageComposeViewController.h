// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMESSAGECOMPOSEVIEWCONTROLLER_H
#define MFMESSAGECOMPOSEVIEWCONTROLLER_H

@class UINavigationController, NSArray, NSString, MSMessage;
@protocol MFMessageComposeViewControllerDelegate;



@interface MFMessageComposeViewController : UINavigationController {
    id *_internal;
    NSArray *_UTITypes;
    NSArray *_photoIDs;
    NSArray *_cloudPhotoIDs;
    NSArray *_contentText;
    NSArray *_contentURLs;
    NSString *_shareSheetSessionID;
}


@property (readonly, copy, nonatomic) NSArray *attachments; // ivar: _attachments
@property (copy, nonatomic) NSString *body; // ivar: _body
@property (copy, nonatomic) NSString *chatGUID; // ivar: _chatGUID
@property (nonatomic) NSUInteger currentAttachedAudioCount; // ivar: _currentAttachedAudioCount
@property (nonatomic) NSUInteger currentAttachedImageCount; // ivar: _currentAttachedImageCount
@property (nonatomic) NSUInteger currentAttachedVideoCount; // ivar: _currentAttachedVideoCount
@property (copy, nonatomic) NSString *groupName; // ivar: _groupName
@property (copy, nonatomic) MSMessage *message; // ivar: _message
@property (weak, nonatomic) NSObject<MFMessageComposeViewControllerDelegate> *messageComposeDelegate; // ivar: _messageComposeDelegate
@property (nonatomic) NSInteger preferredPresentationStyle; // ivar: _preferredPresentationStyle
@property (copy, nonatomic) NSArray *recipients; // ivar: _recipients
@property (nonatomic) BOOL shouldHideClearPluginButton; // ivar: _shouldHideClearPluginButton
@property (copy, nonatomic) NSString *subject; // ivar: _subject


+(BOOL)_canSendText;
+(BOOL)canSendAttachments;
+(BOOL)canSendPhotos:(int)arg0 videos:(int)arg1 audioClips:(int)arg2 ;
+(BOOL)canSendSubject;
+(BOOL)canSendText;
+(BOOL)isMMSEnabled;
+(BOOL)isSupportedAttachmentUTI:(id)arg0 ;
+(BOOL)isiMessageEnabled;
+(CGFloat)maxTrimDurationForAudio;
+(CGFloat)maxTrimDurationForVideo;
+(id)_chatKitBundle;
+(id)log;
+(void)_preloadDependencies;
+(void)_serviceAvailabilityChanged:(id)arg0 ;
+(void)_setupAccountMonitor;
+(void)_startListeningForAvailabilityNotifications;
+(void)_updateServiceAvailability;
+(void)initialize;
-(BOOL)_isAudioMIMEType:(id)arg0 ;
-(BOOL)_isImageMIMEType:(id)arg0 ;
-(BOOL)_isVideoMIMEType:(id)arg0 ;
-(BOOL)addAttachmentData:(id)arg0 typeIdentifier:(id)arg1 filename:(id)arg2 ;
-(BOOL)addAttachmentData:(id)arg0 withAlternateFilename:(id)arg1 ;
-(BOOL)addAttachmentURL:(id)arg0 withAlternateFilename:(id)arg1 ;
-(BOOL)addRichLinkData:(id)arg0 withWebpageURL:(id)arg1 ;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(BOOL)canAddAttachmentURL:(id)arg0 ;
-(BOOL)insertCollaborationItemProvider:(id)arg0 ;
-(BOOL)insertCollaborationItemProvider:(id)arg0 collaborationOptions:(id)arg1 collaborationMetadata:(id)arg2 isCollaboration:(BOOL)arg3 ;
-(BOOL)insertCollaborationItemProvider:(id)arg0 collaborationShareOptions:(id)arg1 collaborationMetadata:(id)arg2 isCollaboration:(BOOL)arg3 ;
-(BOOL)insertGroupActivity:(id)arg0 ;
-(id)UTITypes;
-(id)_MIMETypeForURL:(id)arg0 ;
-(id)_contentTypeForMIMEType:(id)arg0 ;
-(id)attachmentURLs;
-(id)cloudPhotoIDs;
-(id)contentText;
-(id)contentURLs;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)mutableAttachmentURLs;
-(id)photoIDs;
-(id)shareSheetSessionID;
-(void)_insertCKSMSComposeFileDataForItemProvider:(id)arg0 collaborationShareOptions:(id)arg1 collaborationMetadata:(id)arg2 sendAsCopyURL:(id)arg3 isCollaboration:(BOOL)arg4 outReturnResult:(*BOOL)arg5 ;
-(void)_setCanEditRecipients:(BOOL)arg0 ;
-(void)_setNavBarTitle:(id)arg0 ;
-(void)_setShouldDisableEntryField:(BOOL)arg0 ;
-(void)_setShouldIgnoreEmailsWhenSending:(BOOL)arg0 ;
-(void)_updateAttachmentCountForAttachmentURL:(id)arg0 ;
-(void)dealloc;
-(void)disableUserAttachments;
-(void)insertSharedItemAndReturnEntryViewFrame:(id)arg0 withAlternateFilename:(id)arg1 completion:(id)arg2 ;
-(void)setCloudPhotoIDs:(id)arg0 ;
-(void)setContentText:(id)arg0 ;
-(void)setContentURLs:(id)arg0 ;
-(void)setModalPresentationStyle:(NSInteger)arg0 ;
-(void)setPhotoIDs:(id)arg0 ;
-(void)setShareSheetSessionID:(id)arg0 ;
-(void)setUTITypes:(id)arg0 ;
-(void)showSharedItemInEntryView;
-(void)smsComposeControllerCancelled:(id)arg0 ;
-(void)smsComposeControllerEntryViewContentInserted:(id)arg0 ;
-(void)smsComposeControllerSendStarted:(id)arg0 ;
-(void)smsComposeControllerShouldSendMessageWithText:(id)arg0 toRecipients:(id)arg1 completion:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif