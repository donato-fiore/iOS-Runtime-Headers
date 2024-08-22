// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTMESSAGESCONTENTAMOUNTENTRYVIEWCONTROLLER_H
#define PKPEERPAYMENTMESSAGESCONTENTAMOUNTENTRYVIEWCONTROLLER_H

@class PKCurrencyAmount;
@protocol PKPeerPaymentMessagesContentAmountEntryViewControllerDelegate;


#import "PKPeerPaymentMessagesContentBaseViewController.h"
#import "PKPeerPaymentMessagesContentAmountEntryView.h"

@interface PKPeerPaymentMessagesContentAmountEntryViewController : PKPeerPaymentMessagesContentBaseViewController {
    NSInteger _actionType;
    BOOL _usesAccessibilityLayout;
}


@property (copy, nonatomic) PKCurrencyAmount *amount; // ivar: _amount
@property (weak, nonatomic) NSObject<PKPeerPaymentMessagesContentAmountEntryViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) PKPeerPaymentMessagesContentAmountEntryView *mainView; // ivar: _mainView


-(BOOL)_canShowKeypad;
-(id)_currentBalance;
-(id)_maximumTransferAmount;
-(id)_minimumTransferAmount;
-(id)initWithActionType:(NSInteger)arg0 ;
-(id)initWithMessagesAppController:(id)arg0 ;
-(void)_noteAmountChanged;
-(void)reloadContent;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif