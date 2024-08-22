// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKSOCIALLAYERCHATCONTROLLER_H
#define CKSOCIALLAYERCHATCONTROLLER_H

@class NSString;


#import "CKChatController.h"
#import "CKFullScreenBalloonViewControllerPhone.h"

@interface CKSocialLayerChatController : CKChatController

@property (retain, nonatomic) NSString *attachmentGUID; // ivar: _attachmentGUID
@property (retain, nonatomic) NSString *messageGUID; // ivar: _messageGUID
@property (weak, nonatomic) CKFullScreenBalloonViewControllerPhone *socialLayerFullScreenBalloonController; // ivar: _socialLayerFullScreenBalloonController


+(id)chatIdentifierForMessageWithGUID:(id)arg0 ;
+(id)chatItemForMessageGUID:(id)arg0 attachmentGUID:(id)arg1 chatItems:(id)arg2 ;
-(BOOL)_controllerEligibleForSetConversation;
-(id)_fullScreenBalloonViewControllerWithChatItem:(id)arg0 showActionMenu:(BOOL)arg1 ;
-(id)initWithConversation:(id)arg0 ;
-(id)selectedChatItems;
-(void)_setConversationDeferredSetup;
-(void)dealloc;
-(void)fullScreenBalloonViewController:(id)arg0 didAppearAnimated:(BOOL)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg0 replyButtonPressedForChatItem:(id)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg0 sendMessageAcknowledgment:(NSInteger)arg1 forChatItem:(id)arg2 ;
-(void)fullScreenBalloonViewController:(id)arg0 verticallyScrollTranscriptByAmount:(CGFloat)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)fullScreenBalloonViewController:(id)arg0 willAppearAnimated:(BOOL)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg0 willDisappearWithSendAnimation:(BOOL)arg1 ;
-(void)fullScreenBalloonViewControllerDidDisappear:(id)arg0 ;
-(void)fullScreenBalloonViewControllerHandleDismissTap:(id)arg0 ;
-(void)scrollToAndHighlightMessage;
-(void)showFullScreenAcknowledgmentPickerForChatItem:(id)arg0 showActionMenu:(BOOL)arg1 ;
-(void)showTapBackPicker;


@end


#endif