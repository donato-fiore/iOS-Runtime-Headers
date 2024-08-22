// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAMOUNTKEYPADVIEWCONTROLLER_H
#define PKAMOUNTKEYPADVIEWCONTROLLER_H

@class UIViewController, CNComposeRecipient, UIView, CNAvatarViewController, NSString;
@protocol PKPeerPaymentMessagesContentAmountEntryViewControllerDelegate;


#import "PKPeerPaymentRemoteMessagesComposer.h"
#import "PKPeerPaymentMessagesContentAmountEntryViewController.h"

@interface PKAmountKeypadViewController : UIViewController <PKPeerPaymentMessagesContentAmountEntryViewControllerDelegate>

 {
    CNComposeRecipient *_recipient;
    PKPeerPaymentRemoteMessagesComposer *_remoteMessagesComposer;
    PKPeerPaymentMessagesContentAmountEntryViewController *_amountEntryViewController;
    UIView *_containerView;
    CNAvatarViewController *_avatarViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_peerPaymentController;
-(id)currentBalance;
-(id)initWithRemoteMessagesComposer:(id)arg0 recipient:(id)arg1 ;
-(id)maximumTransferAmount;
-(id)minimumTransferAmount;
-(void)_cancelButtonPressed;
-(void)configureAvatarView;
-(void)handleAction:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)loadView;
-(void)setUpContainerView;
-(void)setUpNavigationBar;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif