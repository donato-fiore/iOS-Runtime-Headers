// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAMOUNTKEYPADVIEWCONTROLLER_H
#define PKAMOUNTKEYPADVIEWCONTROLLER_H

@class UIViewController, CNComposeRecipient, PKPeerPaymentController, UIView, CNAvatarViewController, NSString;
@protocol PKPeerPaymentMessagesContentAmountEntryViewControllerDelegate;


#import "PKPeerPaymentMessagesContentAmountEntryViewController.h"
#import "PKPeerPaymentMessageComposeController.h"

@interface PKAmountKeypadViewController : UIViewController <PKPeerPaymentMessagesContentAmountEntryViewControllerDelegate>

 {
    CNComposeRecipient *_recipient;
    NSInteger _actionType;
    PKPeerPaymentController *_peerPaymentController;
    PKPeerPaymentMessagesContentAmountEntryViewController *_amountEntryViewController;
    PKPeerPaymentMessageComposeController *_composeController;
    UIView *_containerView;
    CNAvatarViewController *_avatarViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)currentBalance;
-(id)initWithPeerPaymentController:(id)arg0 recipient:(id)arg1 actionType:(NSInteger)arg2 ;
-(id)maximumTransferAmount;
-(id)minimumTransferAmount;
-(void)_cancelButtonPressed;
-(void)_confirmPaymentMessageInsertionWithQuote:(id)arg0 completion:(id)arg1 ;
-(void)_handleError:(id)arg0 ;
-(void)_insertPaymentMessageWithQuote:(id)arg0 completion:(id)arg1 ;
-(void)_insertRequestMessageWithAmount:(id)arg0 requestToken:(id)arg1 completion:(id)arg2 ;
-(void)_presentPeerPaymentMessage:(id)arg0 completion:(id)arg1 ;
-(void)_stagePaymentWithAmount:(id)arg0 completion:(id)arg1 ;
-(void)_stageRequestWithAmount:(id)arg0 completion:(id)arg1 ;
-(void)configureAvatarView;
-(void)handleActionWithCompletion:(id)arg0 ;
-(void)loadView;
-(void)setUpContainerView;
-(void)setUpNavigationBar;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif