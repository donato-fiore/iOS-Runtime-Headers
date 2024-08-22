// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFMAILCOMPOSEINTERNALVIEWCONTROLLER_H
#define MFMAILCOMPOSEINTERNALVIEWCONTROLLER_H

@class UIViewController, NSXPCListener, _UIAsyncInvocation, NSMutableArray, NSString, NSError, NSArray;
@protocol MSDOpenComposeProtocolDelegate, NSXPCListenerDelegate, MFMailComposeRemoteViewControllerDelegate, MFMailCompositionAdditionalDonating, MFMailCompositionShareSheetRecipients, MFMailComposeViewControllerDelegate;


#import "MFMailComposeViewController.h"
#import "MFMailComposePlaceholderViewController.h"
#import "MFMailComposeRemoteViewController.h"
#import "MFMailCompositionValues.h"

@interface MFMailComposeInternalViewController : UIViewController <MSDOpenComposeProtocolDelegate, NSXPCListenerDelegate, MFMailComposeRemoteViewControllerDelegate, MFMailCompositionAdditionalDonating, MFMailCompositionShareSheetRecipients>

 {
    NSXPCListener *_listener;
    MFMailComposeViewController *_composeViewController;
    MFMailComposePlaceholderViewController *_placeholderViewController;
    MFMailComposeRemoteViewController *_serviceViewController;
    _UIAsyncInvocation *_cancellationInvocation;
    NSUInteger _defaultContentVariationIndex;
    NSMutableArray *_contentVariations;
    MFMailCompositionValues *_compositionValues;
    NSMutableArray *_attachments;
    NSString *_placeholderSubject;
    NSInteger _composeResult;
    NSError *_composeResultError;
    CGFloat _presentationDelayBeganTimestamp;
    BOOL _hasDelayedPresentation;
    BOOL _didEndDelayedPresentation;
    BOOL _compositionValuesAreFinalized;
    BOOL _remoteViewControllerIsConfigured;
    BOOL _isAppearing;
    BOOL _didAppear;
    BOOL _didFinish;
    BOOL _delegateRespondsToBodyFinishedLoadingWithResult;
    id *_sceneDismissal;
}


@property (copy, nonatomic) NSArray *UTITypes;
@property (copy, nonatomic) NSArray *cloudPhotoIDs;
@property (copy, nonatomic) NSArray *contentText;
@property (copy, nonatomic) NSArray *contentURLs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<MFMailComposeViewControllerDelegate> *mailComposeDelegate; // ivar: _mailComposeDelegate
@property (copy, nonatomic) NSArray *photoIDs;
@property (copy, nonatomic) NSString *shareSheetSessionID;
@property (readonly) Class superclass;


+(BOOL)_canSendMailInNewScene;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(id)addAttachmentData:(id)arg0 mimeType:(id)arg1 fileName:(id)arg2 ;
-(id)addAttachmentFileURL:(id)arg0 mimeType:(id)arg1 ;
-(id)addAttachmentItemProvider:(id)arg0 mimeType:(id)arg1 fileName:(id)arg2 ;
-(id)addContentVariationWithName:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)placeholderForFileName:(id)arg0 fileSize:(NSInteger)arg1 mimeType:(id)arg2 contentID:(id)arg3 proxy:(id)arg4 ;
-(id)remoteViewController;
-(id)securityScopeForURL:(id)arg0 proxy:(id)arg1 ;
-(void)_beginDelayingCompositionPresenation;
-(void)_cancelComposition:(id)arg0 ;
-(void)_cancelRemoteServiceViewControllerRequest;
-(void)_configureRemoteViewContoller;
-(void)_didEndDelayingCompositionPresentation;
-(void)_endDelayingCompositionPresentation;
-(void)_finishServiceViewControllerRequestWithSuccess:(BOOL)arg0 ;
-(void)_loadContentViewControllerForcingPlaceholder:(BOOL)arg0 ;
-(void)_notifyBodyDidFinishLoadingWithResult:(BOOL)arg0 ;
-(void)_notifyCompositionDidFinish;
-(void)_presentComposeInNewWindowFromComposeViewController:(id)arg0 completion:(id)arg1 ;
// -(void)_presentComposeInNewWindowFromComposeViewController:(id)arg0 completion:(id)arg1 dissmisal:(unk)arg2  ;
-(void)_processAttachmentsViaProxy:(id)arg0 withHandler:(id)arg1 ;
-(void)_serviceViewControllerReady:(id)arg0 error:(id)arg1 ;
-(void)_setCKShare:(id)arg0 setupContainerInfo:(id)arg1 permissionType:(NSInteger)arg2 allowOthersToInvite:(BOOL)arg3 ;
-(void)_setPlaceHolderSubject:(id)arg0 ;
-(void)autosaveWithHandler:(id)arg0 ;
-(void)composeFinishedWithResult:(NSInteger)arg0 ;
-(void)composeShouldSendMail:(id)arg0 toRecipients:(id)arg1 completion:(id)arg2 ;
-(void)compositionFinishedWithResult:(NSInteger)arg0 error:(id)arg1 ;
-(void)compositionRequestsSendWithBody:(id)arg0 recipients:(id)arg1 completion:(id)arg2 ;
-(void)compositionViewServiceTerminatedWithError:(id)arg0 ;
-(void)dealloc;
-(void)finalizeCompositionValues;
-(void)loadView;
-(void)requestFramesForAttachmentsWithIdentifiers:(id)arg0 resultHandler:(id)arg1 ;
-(void)setAutosaveIdentifier:(id)arg0 ;
-(void)setBccRecipients:(id)arg0 ;
-(void)setCaretPosition:(NSUInteger)arg0 ;
-(void)setCcRecipients:(id)arg0 ;
-(void)setContentVisible:(BOOL)arg0 ;
-(void)setDefaultContentVariation:(id)arg0 ;
-(void)setHideMyEmailFrom:(id)arg0 ;
-(void)setMessageBody:(id)arg0 isHTML:(BOOL)arg1 ;
-(void)setPreferredSendingEmailAddress:(id)arg0 ;
-(void)setShowKeyboardImmediately:(BOOL)arg0 ;
-(void)setSourceAccountManagement:(int)arg0 ;
-(void)setSubject:(id)arg0 ;
-(void)setToRecipients:(id)arg0 ;
-(void)setURL:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif