// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTREMOTEMESSAGESCOMPOSER_H
#define PKPEERPAYMENTREMOTEMESSAGESCOMPOSER_H

@class PKPeerPaymentRecipient, UIViewController, NSString, MSSession, PKPeerPaymentRequestToken, PKPeerPaymentController;

#import <Foundation/Foundation.h>

#import "PKPeerPaymentMessageComposeController.h"

@interface PKPeerPaymentRemoteMessagesComposer : NSObject {
    PKPeerPaymentRecipient *_recipient;
    NSUInteger _sourceType;
    PKPeerPaymentMessageComposeController *_composeController;
    UIViewController *_presentingViewController;
    NSString *_memo;
    MSSession *_session;
    PKPeerPaymentRequestToken *_requestToken;
}


@property (nonatomic) NSInteger actionType; // ivar: _actionType
@property (readonly, nonatomic) PKPeerPaymentController *peerPaymentController; // ivar: _peerPaymentController


-(BOOL)_recipientFoundInContacts;
-(id)initWithPeerPaymentController:(id)arg0 presentingViewController:(id)arg1 actionType:(NSInteger)arg2 sourceType:(NSUInteger)arg3 ;
-(void)_confirmPaymentMessageInsertionWithQuote:(id)arg0 completion:(id)arg1 ;
-(void)_handleError:(id)arg0 ;
-(void)_insertPaymentMessageWithQuote:(id)arg0 completion:(id)arg1 ;
-(void)_insertRequestMessageWithAmount:(id)arg0 completion:(id)arg1 ;
-(void)_presentPeerPaymentMessage:(id)arg0 completion:(id)arg1 ;
-(void)_showAlertForInvalidRecipientWithName:(id)arg0 statusReason:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_showAlertForInvalidStateIfNeededWithCompletion:(id)arg0 ;
-(void)presentRemoteMessageComposerWithAmount:(id)arg0 requestToken:(id)arg1 memo:(id)arg2 sessionID:(id)arg3 overViewController:(id)arg4 completion:(id)arg5 ;
-(void)validateRecipientWithAddress:(id)arg0 completion:(id)arg1 ;


@end


#endif