// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSTEWIEDEMOCHATCONTROLLER_H
#define CKSTEWIEDEMOCHATCONTROLLER_H

@class NSString, IMSimulatedAccount;
@protocol IMSimulatedChatDelegate, CKStewieDemoChatControllerDelegate;


#import "CKChatController.h"
#import "CKConversation.h"

@interface CKStewieDemoChatController : CKChatController <IMSimulatedChatDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CKConversation *demoConversation; // ivar: _demoConversation
@property (weak, nonatomic) NSObject<CKStewieDemoChatControllerDelegate> *demoDelegate; // ivar: _demoDelegate
@property (retain, nonatomic) IMSimulatedAccount *demoParticipantAccount; // ivar: _demoParticipantAccount
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) IMSimulatedAccount *userPlaceholderAccount; // ivar: _userPlaceholderAccount


-(BOOL)shouldDismissAfterSend;
-(BOOL)shouldUseThrowAnimationForComposition:(id)arg0 ;
-(NSUInteger)_defaultCapacity;
-(id)_messageInfoForMessage:(id)arg0 ;
-(id)conversation;
-(id)delegate;
-(id)demoChat;
-(id)init;
-(id)simulatedChat:(id)arg0 updatedTextForDemoUserComposedText:(id)arg1 ;
-(void)ackSimulatedMessageGUID:(id)arg0 ;
-(void)messageEntryViewSendButtonHit:(id)arg0 ;
-(void)receiveMessageWithText:(id)arg0 ;
-(void)selectAccountAndSendComposition:(id)arg0 completion:(id)arg1 ;
-(void)sendMessageWithText:(id)arg0 ;
-(void)simulatedChat:(id)arg0 didHandleItem:(id)arg1 ;
-(void)simulatedChat:(id)arg0 didSendMessage:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif