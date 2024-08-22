// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMAILCOMPOSEVIEWCONTROLLER_H
#define MFMAILCOMPOSEVIEWCONTROLLER_H

@class UINavigationController, _UIRemoteViewController, NSString;
@protocol _UIRemoteViewControllerContaining, MFMailComposeViewControllerDelegate;



@interface MFMailComposeViewController : UINavigationController <_UIRemoteViewControllerContaining>

 {
    id *_internal;
    id *_setupAnimationBlock;
    BOOL _didChangeStatusBarStyle;
    NSInteger _savedStatusBarStyle;
}


@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<MFMailComposeViewControllerDelegate> *mailComposeDelegate;
@property (readonly) Class superclass;


+(BOOL)_canSendMailInNewScene;
+(BOOL)canSendMail;
+(BOOL)canSendMailSourceAccountManagement:(int)arg0 ;
+(BOOL)hasAutosavedMessageWithIdentifier:(id)arg0 ;
+(BOOL)isMailDropConfigured;
+(NSUInteger)maximumAttachmentSize;
+(id)log;
+(void)removeAutosavedMessageWithIdentifier:(id)arg0 ;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(NSInteger)preferredStatusBarStyle;
-(id)UTITypes;
-(id)_addAttachmentItemProvider:(id)arg0 mimeType:(id)arg1 fileName:(id)arg2 ;
-(id)_addAttachmentWithFileURL:(id)arg0 mimeType:(id)arg1 ;
-(id)_addContentVariationWithName:(id)arg0 ;
-(id)_impl;
-(id)_internalViewController;
-(id)_validEmailAddressesFromArray:(id)arg0 ;
-(id)cloudPhotoIDs;
-(id)contentText;
-(id)contentURLs;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 sourceAccountManagement:(int)arg1 ;
-(id)photoIDs;
-(id)shareSheetSessionID;
-(void)__viewControllerWillBePresented:(BOOL)arg0 ;
-(void)_addAttachmentDataItemProvider:(id)arg0 mimeType:(id)arg1 fileName:(id)arg2 forContentVariation:(id)arg3 ;
-(void)_presentComposeInNewWindowWithCompletion:(id)arg0 ;
-(void)_setDefaultContentVariation:(id)arg0 ;
-(void)_setMessageBody:(id)arg0 isHTML:(BOOL)arg1 forContentVariation:(id)arg2 ;
-(void)addAttachmentData:(id)arg0 mimeType:(id)arg1 fileName:(id)arg2 ;
-(void)addSetupAnimationBlock:(id)arg0 ;
-(void)autosaveWithHandler:(id)arg0 ;
-(void)currentAttachmentLimitWithHandler:(id)arg0 ;
-(void)finalizeCompositionValues;
-(void)recoverAutosavedMessageWithIdentifier:(id)arg0 ;
-(void)requestFramesForAttachmentsWithIdentifiers:(id)arg0 resultHandler:(id)arg1 ;
-(void)setAutorotationDelegate:(id)arg0 ;
-(void)setBccRecipients:(id)arg0 ;
-(void)setCaretPosition:(NSUInteger)arg0 ;
-(void)setCcRecipients:(id)arg0 ;
-(void)setCloudPhotoIDs:(id)arg0 ;
-(void)setContentText:(id)arg0 ;
-(void)setContentURLs:(id)arg0 ;
-(void)setContentVisible:(BOOL)arg0 ;
-(void)setKeyboardVisible:(BOOL)arg0 ;
-(void)setMessageBody:(id)arg0 isHTML:(BOOL)arg1 ;
-(void)setPhotoIDs:(id)arg0 ;
-(void)setPreferredSendingEmailAddress:(id)arg0 ;
-(void)setShareSheetSessionID:(id)arg0 ;
-(void)setSourceAccountManagement:(int)arg0 ;
-(void)setSubject:(id)arg0 ;
-(void)setToRecipients:(id)arg0 ;
-(void)setUTITypes:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif