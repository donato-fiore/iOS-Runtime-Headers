// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTMESSAGESCONTENTAMOUNTENTRYVIEW_H
#define PKPEERPAYMENTMESSAGESCONTENTAMOUNTENTRYVIEW_H

@class UIView, UILabel;


#import "PKPeerPaymentMessagesMultiActionView.h"
#import "PKPeerPaymentMessagesAmountStepperView.h"
#import "PKPeerPaymentMessagesNumberPadView.h"

@interface PKPeerPaymentMessagesContentAmountEntryView : UIView {
    UIView *_containerView;
    BOOL _usesAccessibilityLayout;
}


@property (readonly, nonatomic) PKPeerPaymentMessagesMultiActionView *actionView; // ivar: _actionView
@property (readonly, nonatomic) PKPeerPaymentMessagesAmountStepperView *amountStepperView; // ivar: _amountStepperView
@property (readonly, nonatomic) UILabel *balanceLabel; // ivar: _balanceLabel
@property (readonly, nonatomic) PKPeerPaymentMessagesNumberPadView *numberPadView; // ivar: _numberPadView


-(BOOL)_isCompactUI;
-(BOOL)_useLargeLayout;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif