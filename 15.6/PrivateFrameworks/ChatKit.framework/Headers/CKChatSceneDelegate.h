// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCHATSCENEDELEGATE_H
#define CKCHATSCENEDELEGATE_H

@class NSString;
@protocol CKChatControllerDelegate;


#import "CKSceneDelegate.h"
#import "CKCoreChatController.h"
#import "CKDetailsNavigationController.h"
#import "CKNavigationController.h"

@interface CKChatSceneDelegate : CKSceneDelegate <CKChatControllerDelegate>



@property (retain, nonatomic) CKCoreChatController *chatController; // ivar: _chatController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) CKDetailsNavigationController *detailsNavigationController; // ivar: _detailsNavigationController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CKNavigationController *navigationController; // ivar: _navigationController
@property (readonly) Class superclass;


-(BOOL)hasDetailsNavigationController;
-(BOOL)isDetailsNavigationControllerDetached;
-(NSInteger)type;
-(id)canActivatePredicate;
-(id)conversation;
-(id)init;
-(id)prefersToActivatePredicate;
-(id)stateRestorationActivityForScene:(id)arg0 ;
-(void)__updateAppSnapshot;
-(void)_chatItemsDidChange:(id)arg0 ;
-(void)_handleChatDisplayNameChangedNotification:(id)arg0 ;
-(void)_handleRegistryWillUnregisterChatNotification:(id)arg0 ;
-(void)_updateAppSnapshot;
-(void)chatController:(id)arg0 didDetachDetailsNavigationController:(id)arg1 ;
-(void)chatController:(id)arg0 didReportSpamForConversation:(id)arg1 ;
-(void)chatController:(id)arg0 didSendCompositionInConversation:(id)arg1 ;
-(void)chatController:(id)arg0 forwardComposition:(id)arg1 ;
-(void)chatController:(id)arg0 willSendComposition:(id)arg1 inConversation:(id)arg2 ;
-(void)dismissAndReopenDetailsNavigationController;
-(void)dismissDetailsNavigationController;
-(void)doneButtonPressedForChatController:(id)arg0 ;
-(void)loadAndShowConversationWithMessageGUID:(id)arg0 withInlineReplyOverlay:(BOOL)arg1 ;
-(void)presentDetailsNavigationController:(id)arg0 ;
-(void)prewarmCameraIfNecessaryForChatController:(id)arg0 ;
-(void)scene:(id)arg0 continueUserActivity:(id)arg1 ;
-(void)scene:(id)arg0 openURLContexts:(id)arg1 ;
-(void)scene:(id)arg0 willConnectToSession:(id)arg1 options:(id)arg2 ;
-(void)sceneDidDisconnect:(id)arg0 ;
-(void)sceneDidEnterBackground:(id)arg0 ;
-(void)sceneWillEnterForeground:(id)arg0 ;
-(void)showConversation:(id)arg0 ;
-(void)showConversation:(id)arg0 scrollToMessage:(id)arg1 withInlineReplyOverlay:(BOOL)arg2 ;
-(void)showConversationAndMessageForChatGUID:(id)arg0 messageGUID:(id)arg1 withInlineReplyOverlay:(BOOL)arg2 animate:(BOOL)arg3 ;
-(void)windowSceneDidBecomeVisible:(id)arg0 ;


@end


#endif