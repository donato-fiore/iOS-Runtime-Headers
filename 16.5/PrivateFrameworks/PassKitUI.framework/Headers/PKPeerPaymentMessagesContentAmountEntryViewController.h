// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTMESSAGESCONTENTAMOUNTENTRYVIEWCONTROLLER_H
#define PKPEERPAYMENTMESSAGESCONTENTAMOUNTENTRYVIEWCONTROLLER_H

@class PKCurrencyAmount;
@protocol PKPeerPaymentMessagesContentAmountEntryViewControllerDelegate;


#import "PKPeerPaymentMessagesContentBaseViewController.h"
#import "PKPeerPaymentMessagesContentAmountEntryView.h"

@interface PKPeerPaymentMessagesContentAmountEntryViewController : PKPeerPaymentMessagesContentBaseViewController {
    BOOL _usesAccessibilityLayout;
}


@property (copy, nonatomic) PKCurrencyAmount *amount; // ivar: _amount
@property (weak, nonatomic) NSObject<PKPeerPaymentMessagesContentAmountEntryViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) PKPeerPaymentMessagesContentAmountEntryView *mainView; // ivar: _mainView
@property (nonatomic) NSUInteger sourceType; // ivar: _sourceType


-(BOOL)_canShowKeypad;
-(id)_currentBalance;
-(id)_maximumTransferAmount;
-(id)_minimumTransferAmount;
-(id)init;
-(id)initWithMessagesAppController:(id)arg0 ;
-(void)_noteAmountChanged;
-(void)reloadContent;
-(void)sendAnalyticsForAction:(NSUInteger)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif