// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKNOTIFICATIONCHATCONTROLLER_H
#define CKNOTIFICATIONCHATCONTROLLER_H

@class NSString, STLockoutViewController, NSTimer, NSDate, NSExtensionContext;
@protocol UITextInputPayloadDelegate, CKMessageEntryViewDelegate, CKMessageEntryViewInputDelegate, CKNotificationChatControllerDelegate;


#import "CKCoreChatController.h"
#import "CKMessageEntryView.h"
#import "CKMessageEntryViewController.h"
#import "CKFullScreenBalloonViewControllerNotification.h"
#import "CKRaiseGesture.h"
#import "CKScheduledUpdater.h"

@interface CKNotificationChatController : CKCoreChatController <UITextInputPayloadDelegate, CKMessageEntryViewDelegate, CKMessageEntryViewInputDelegate>



@property (nonatomic) BOOL allowedByScreenTime; // ivar: _allowedByScreenTime
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKNotificationChatControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CKMessageEntryView *entryView;
@property (retain, nonatomic) CKMessageEntryViewController *entryViewController; // ivar: _entryViewController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) STLockoutViewController *lockoutViewController; // ivar: _lockoutViewController
@property (weak, nonatomic) CKFullScreenBalloonViewControllerNotification *notificationFullScreenBalloonController; // ivar: _notificationFullScreenBalloonController
@property (retain, nonatomic) NSTimer *notificationViewDismissalTimer; // ivar: _notificationViewDismissalTimer
@property (retain, nonatomic) NSDate *notificationViewWillAppearDate; // ivar: _notificationViewWillAppearDate
@property (retain, nonatomic) CKRaiseGesture *raiseGesture; // ivar: _raiseGesture
@property (nonatomic) BOOL shouldAllowReplyFromLockScreen; // ivar: _shouldAllowReplyFromLockScreen
@property (readonly) Class superclass;
@property (retain, nonatomic) CKScheduledUpdater *typingUpdater; // ivar: _typingUpdater
@property (weak, nonatomic) NSExtensionContext *urlOpenContext; // ivar: _urlOpenContext


-(BOOL)_canShowWhileLocked;
-(BOOL)_deviceIsPasscodeLocked;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)constrainToPresentingVCBounds;
-(BOOL)forceWindowedPresentation;
-(BOOL)inputAccessoryViewControllerEnabled;
-(BOOL)isSafeToMarkAsRead;
-(BOOL)messageEntryShouldHideCaret:(id)arg0 ;
-(BOOL)messageEntryView:(id)arg0 shouldInsertMediaObjects:(id)arg1 ;
-(BOOL)messageEntryViewShouldBeginEditing:(id)arg0 ;
-(BOOL)messageEntryViewWidth:(*CGFloat)arg0 andOffset:(*CGFloat)arg1 ;
-(BOOL)pluginButtonsEnabled;
-(BOOL)preserveModalPresentationStyle;
-(BOOL)shouldShowEntryView;
-(BOOL)wantsReplyButton;
-(BOOL)wantsWindowedPresentation;
-(CGFloat)_maxEntryViewHeight;
-(CGFloat)balloonMaxWidth;
-(CGFloat)messageEntryViewMaxHeight:(id)arg0 ;
-(NSInteger)messageEntryViewHighLightInputButton:(id)arg0 ;
-(id)_fullScreenBalloonViewControllerWithChatItem:(id)arg0 ;
-(id)_menuTitleForChatItem:(id)arg0 ;
-(id)initWithConversation:(id)arg0 ;
-(id)inputAccessoryView;
-(id)inputAccessoryViewController;
-(id)launchURLForInputMode:(id)arg0 ;
-(id)progressBar;
-(struct CGSize )messageEntryViewMaxShelfPluginViewSize:(id)arg0 ;
-(void)__raiseGestureRecognized:(id)arg0 ;
-(void)_allowedByScreenTimeChanged:(id)arg0 ;
-(void)_dismissFullScreenBubbleViewControllerAnimated:(BOOL)arg0 withSendAnimation:(BOOL)arg1 completion:(id)arg2 ;
-(void)_messageReceivedInCurrentTranscript:(id)arg0 ;
-(void)_openMessagesForChat:(id)arg0 ;
-(void)_raiseToListenSettingChanged:(id)arg0 ;
-(void)_setConversationDeferredSetup;
-(void)_setupShouldShowReplyFromLockScreen;
-(void)_updateEntryViewFrameIfNeeded:(BOOL)arg0 ;
-(void)_updateTitleAnimated:(BOOL)arg0 ;
-(void)backgroundViewTapGestureRecognized:(id)arg0 ;
-(void)dealloc;
-(void)fullScreenBalloonViewController:(id)arg0 didAppearAnimated:(BOOL)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg0 sendMessageAcknowledgment:(NSInteger)arg1 forChatItem:(id)arg2 ;
-(void)fullScreenBalloonViewController:(id)arg0 verticallyScrollTranscriptByAmount:(CGFloat)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)fullScreenBalloonViewController:(id)arg0 willAppearAnimated:(BOOL)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg0 willDisappearWithSendAnimation:(BOOL)arg1 ;
-(void)fullScreenBalloonViewControllerDidDisappear:(id)arg0 ;
-(void)fullScreenBalloonViewControllerHandleDismissTap:(id)arg0 ;
-(void)handlePayload:(id)arg0 withPayloadId:(id)arg1 ;
-(void)messageEntryView:(id)arg0 didInsertPluginPayload:(id)arg1 ;
-(void)messageEntryView:(id)arg0 didTapMediaObject:(id)arg1 ;
-(void)messageEntryViewBrowserButtonHit:(id)arg0 ;
-(void)messageEntryViewDidBeginEditingNotAlreadyActive:(id)arg0 ;
-(void)messageEntryViewDidChange:(id)arg0 ;
-(void)messageEntryViewDidEndEditing:(id)arg0 ;
-(void)messageEntryViewDidTakeFocus:(id)arg0 ;
-(void)messageEntryViewHandwritingButtonHit:(id)arg0 ;
-(void)messageEntryViewPhotoButtonHit:(id)arg0 ;
-(void)messageEntryViewRaiseGestureAutoSend:(id)arg0 ;
-(void)messageEntryViewRecordingDidChange:(id)arg0 ;
-(void)messageEntryViewSendButtonHit:(id)arg0 ;
-(void)messageEntryViewSendButtonHitWhileDisabled:(id)arg0 ;
-(void)raiseGestureRecognized:(id)arg0 ;
-(void)registerForTextInputPayloadHandling;
-(void)sendComposition:(id)arg0 ;
-(void)sendCurrentLocationMessage:(id)arg0 ;
-(void)setConversation:(id)arg0 ;
-(void)setLocalUserIsComposing:(BOOL)arg0 withPluginBundleID:(id)arg1 typingIndicatorData:(id)arg2 ;
-(void)setSendingMessage:(BOOL)arg0 ;
-(void)showFullScreenAcknowledgmentPickerForChatItem:(id)arg0 ;
-(void)transcriptCollectionViewController:(id)arg0 balloonView:(id)arg1 longPressedForItemWithIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg0 balloonView:(id)arg1 tappedForChatItem:(id)arg2 ;
-(void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg0 ;
-(void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg0 ;
-(void)unregisterForTextInputPayloadHandling;
-(void)updateRaiseGesture;
-(void)updateTyping;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewLayoutMarginsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif