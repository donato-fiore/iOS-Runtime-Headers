// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPEERPAYMENTCONVERSATIONMANAGER_H
#define NPKPEERPAYMENTCONVERSATIONMANAGER_H

@class MSConversation, NPKPeerPaymentConversationContext, PKPeerPaymentController, NSString, PKPeerPaymentService, PKPeerPaymentRecipient;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NPKPeerPaymentConversationManager : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
}


@property (retain) MSConversation *activeConversation; // ivar: _activeConversation
@property (retain, nonatomic) NPKPeerPaymentConversationContext *conversationContext; // ivar: _conversationContext
@property (weak, nonatomic) PKPeerPaymentController *currentPeerPaymentController; // ivar: _currentPeerPaymentController
@property (retain, nonatomic) NSString *currentRecipientAddressLookup; // ivar: _currentRecipientAddressLookup
@property (retain, nonatomic) PKPeerPaymentService *peerPaymentService; // ivar: _peerPaymentService
@property (readonly) PKPeerPaymentRecipient *recipient; // ivar: _recipient
@property (readonly, copy, nonatomic) NSString *recipientDisplayName;
@property (readonly, nonatomic) BOOL recipientFoundInContacts;
@property (readonly, nonatomic) NSString *recipientPhoneOrEmail;
@property (readonly, nonatomic) NSString *senderPhoneOrEmail;


+(id)sharedInstance;
-(id)_ambiguousSenderAddressErrorWithUnderlyingError:(id)arg0 ;
-(id)_displayableErrorWithError:(id)arg0 ;
-(id)_lockedOrRestrictedAccountErrorWithUnderlyingError:(id)arg0 ;
-(id)_negativeBalanceErrorWithUnderlyingError:(id)arg0 ;
-(id)_newPeerPaymentController;
-(id)_newPeerPaymentControllerWithQueue:(id)arg0 ;
-(id)_sharedPeerPaymentWebService;
-(id)_skeletonPeerPaymentQuoteWithPeerPaymentController:(id)arg0 selectedAmount:(id)arg1 recipient:(id)arg2 ;
-(id)_unknownPaymentErrorWithUnderlyingError:(id)arg0 ;
-(id)init;
-(void)_accountDidChange;
-(void)_internalQueue_forceLookupRecipientInformation;
-(void)_internalQueue_lookupRecipientInformationWithAddress:(id)arg0 senderAddress:(id)arg1 ;
-(void)_internalQueue_performPaymentWithAmount:(id)arg0 requestToken:(id)arg1 completion:(id)arg2 ;
-(void)_internalQueue_performRequestWithAmount:(id)arg0 completion:(id)arg1 ;
-(void)_postNotificationWithRecipient:(id)arg0 error:(id)arg1 ;
-(void)lookupRecipientInformationIfNecessary;
-(void)lookupRecipientInformationWithAddress:(id)arg0 senderAddress:(id)arg1 ;
-(void)performPaymentWithAmount:(id)arg0 requestToken:(id)arg1 completion:(id)arg2 ;
-(void)performRequestWithAmount:(id)arg0 completion:(id)arg1 ;


@end


#endif